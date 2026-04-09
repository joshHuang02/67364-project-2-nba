#!/usr/bin/env python3
"""Benchmark sklearn classifier-only C transpilation on processed.csv."""

from __future__ import annotations

import argparse
import json
import re
import subprocess
import traceback
from dataclasses import dataclass
from datetime import datetime
from pathlib import Path
from typing import Any

import numpy as np
import pandas as pd
from sklearn.base import clone
from sklearn.compose import ColumnTransformer
from sklearn.ensemble import ExtraTreesClassifier, RandomForestClassifier
from sklearn.impute import SimpleImputer
from sklearn.linear_model import LogisticRegression
from sklearn.metrics import accuracy_score, f1_score
from sklearn.model_selection import cross_val_score, train_test_split
from sklearn.pipeline import Pipeline
from sklearn.preprocessing import OneHotEncoder, StandardScaler
from sklearn.svm import LinearSVC
from sklearn.tree import DecisionTreeClassifier


@dataclass(frozen=True)
class model_spec_t:
    """Hold one benchmark model configuration."""

    model_id: str
    estimator: Any


def parse_args() -> argparse.Namespace:
    """Parse command line arguments for benchmark execution."""
    repo_root = Path(__file__).resolve().parents[1]
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument(
        "--data-path",
        type=Path,
        default=repo_root / "processed.csv",
        help="Path to processed.csv",
    )
    parser.add_argument(
        "--output-root",
        type=Path,
        default=repo_root / "transpile_results",
        help="Directory where timestamped run artifacts are written",
    )
    parser.add_argument("--test-size", type=float, default=0.2, help="Train/test split ratio")
    parser.add_argument("--random-state", type=int, default=0, help="Reproducibility seed")
    parser.add_argument("--cv-folds", type=int, default=5, help="Cross-validation fold count")
    parser.add_argument("--cv-n-jobs", type=int, default=1, help="Parallel jobs for CV")
    parser.add_argument(
        "--f1-tolerance",
        type=float,
        default=0.01,
        help="Near-tie tolerance for balanced ranking on test F1",
    )
    parser.add_argument(
        "--skip-compile",
        action="store_true",
        help="Skip gcc/g++ compile size measurements",
    )
    return parser.parse_args()


def notebook_feature_columns_t() -> tuple[list[str], list[str]]:
    """Return feature lists that mirror the notebook pipeline."""
    numeric_features = ["WEEK"]
    categorical_features = ["GAME_ID", "HOME_TEAM_ID", "VISITOR_TEAM_ID"]
    return numeric_features, categorical_features


def build_preprocessor_t() -> ColumnTransformer:
    """Create the same preprocessing stack used in the notebook."""
    numeric_features, categorical_features = notebook_feature_columns_t()
    numeric_transformer = Pipeline(
        steps=[
            ("imputer", SimpleImputer(strategy="mean")),
            ("scaler", StandardScaler()),
        ]
    )
    categorical_transformer = OneHotEncoder(handle_unknown="ignore")
    return ColumnTransformer(
        transformers=[
            ("num_transform", numeric_transformer, numeric_features),
            ("cat_transform", categorical_transformer, categorical_features),
        ]
    )


def load_dataset_t(data_path: Path) -> tuple[pd.DataFrame, pd.Series]:
    """Load features and labels from processed.csv following notebook logic."""
    dataframe = pd.read_csv(data_path)
    features = dataframe.columns.to_list()
    for drop_col in ("Unnamed: 0", "HOME_TEAM_WINS"):
        if drop_col in features:
            features.remove(drop_col)
    x_frame = dataframe[features]
    y_series = dataframe["HOME_TEAM_WINS"]
    return x_frame, y_series


def candidate_models_t(seed: int) -> list[model_spec_t]:
    """Build a compact but representative classifier matrix."""
    models: list[model_spec_t] = []

    for solver_name in ("liblinear", "lbfgs"):
        for c_value in (0.1, 1.0, 10.0):
            model_id = f"logreg_{solver_name}_c{c_value:g}"
            estimator = LogisticRegression(
                solver=solver_name,
                C=c_value,
                max_iter=2000,
                random_state=seed,
            )
            models.append(model_spec_t(model_id=model_id, estimator=estimator))

    for c_value in (0.1, 1.0, 10.0):
        model_id = f"linearsvc_c{c_value:g}"
        estimator = LinearSVC(C=c_value, random_state=seed, max_iter=8000)
        models.append(model_spec_t(model_id=model_id, estimator=estimator))

    for max_depth in (3, 5, 8):
        for min_leaf in (1, 5):
            model_id = f"dtree_d{max_depth}_leaf{min_leaf}"
            estimator = DecisionTreeClassifier(
                max_depth=max_depth,
                min_samples_leaf=min_leaf,
                random_state=seed,
            )
            models.append(model_spec_t(model_id=model_id, estimator=estimator))

    for n_estimators in (10, 30, 100):
        for max_depth in (5, 10):
            model_id = f"rf_n{n_estimators}_d{max_depth}"
            estimator = RandomForestClassifier(
                n_estimators=n_estimators,
                max_depth=max_depth,
                min_samples_leaf=1,
                random_state=seed,
                n_jobs=1,
            )
            models.append(model_spec_t(model_id=model_id, estimator=estimator))

    for n_estimators in (30,):
        for max_depth in (10,):
            model_id = f"extratrees_n{n_estimators}_d{max_depth}"
            estimator = ExtraTreesClassifier(
                n_estimators=n_estimators,
                max_depth=max_depth,
                min_samples_leaf=1,
                random_state=seed,
                n_jobs=1,
            )
            models.append(model_spec_t(model_id=model_id, estimator=estimator))

    return models


def model_complexity_proxy_t(estimator: Any) -> int:
    """Estimate model complexity with a single comparable scalar."""
    if hasattr(estimator, "tree_"):
        return int(estimator.tree_.node_count)
    if hasattr(estimator, "estimators_"):
        return int(sum(getattr(tree, "tree_").node_count for tree in estimator.estimators_))
    if hasattr(estimator, "coef_"):
        return int(np.size(estimator.coef_))
    return 0


def safe_filename_t(text_value: str) -> str:
    """Convert text into filesystem-friendly token."""
    return "".join(char if char.isalnum() or char in ("-", "_") else "_" for char in text_value)


def export_m2cgen_t(estimator: Any) -> tuple[str, str]:
    """Export estimator using m2cgen."""
    import m2cgen as m2c

    return m2c.export_to_c(estimator, function_name="model_predict"), ".c"


def export_micromlgen_t(estimator: Any, model_id: str) -> tuple[str, str]:
    """Export estimator using micromlgen."""
    from micromlgen import port

    class_name = f"model_{safe_filename_t(model_id)}"
    return port(estimator, classname=class_name), ".h"


def export_sklearn_porter_t(estimator: Any) -> tuple[str, str]:
    """Export estimator using sklearn-porter if available."""
    from sklearn_porter import Porter

    porter = Porter(estimator, language="c")
    try:
        return porter.export(embed_data=True), ".c"
    except TypeError:
        return porter.export(), ".c"


def compile_measure_t(
    source_path: Path,
    compile_dir: Path,
    skip_compile: bool,
) -> dict[str, Any]:
    """Compile generated source when possible and measure artifact sizes."""
    result: dict[str, Any] = {
        "compile_status": "skipped",
        "object_path": None,
        "binary_path": None,
        "object_size_bytes": np.nan,
        "binary_size_bytes": np.nan,
        "compile_stderr": "",
        "link_stderr": "",
    }
    if skip_compile:
        result["compile_status"] = "skipped_by_flag"
        return result

    suffix = source_path.suffix.lower()
    if suffix not in {".c", ".cc", ".cpp", ".cxx"}:
        result["compile_status"] = "skipped_non_compilable_suffix"
        return result

    compile_dir.mkdir(parents=True, exist_ok=True)
    object_path = compile_dir / f"{source_path.stem}.o"
    binary_path = compile_dir / f"{source_path.stem}.bin"
    compiler = "g++" if suffix in {".cc", ".cpp", ".cxx"} else "gcc"
    std_flag = "-std=c++11" if compiler == "g++" else "-std=c11"

    compile_cmd = [compiler, std_flag, "-Os", "-c", str(source_path), "-o", str(object_path)]
    compile_run = subprocess.run(compile_cmd, capture_output=True, text=True, check=False)
    if compile_run.returncode != 0:
        result["compile_status"] = "compile_failed"
        result["compile_stderr"] = compile_run.stderr.strip()
        return result

    result["object_path"] = str(object_path)
    result["object_size_bytes"] = object_path.stat().st_size

    link_cmd = [compiler, std_flag, "-Os", str(source_path), "-o", str(binary_path)]
    link_run = subprocess.run(link_cmd, capture_output=True, text=True, check=False)
    if link_run.returncode == 0 and binary_path.exists():
        result["binary_path"] = str(binary_path)
        result["binary_size_bytes"] = binary_path.stat().st_size
        result["compile_status"] = "compile_and_link_success"
    else:
        result["compile_status"] = "compile_only_success"
        result["link_stderr"] = link_run.stderr.strip()
    return result


def estimate_ram_usage_t(
    tool_name: str,
    source_code: str,
    n_features: int,
    class_count: int,
) -> dict[str, Any]:
    """Estimate inference-time RAM usage from generated source and feature count."""
    input_elem_size_bytes = 8
    output_elem_size_bytes = 8
    local_bytes = 0
    notes: list[str] = []

    if "micromlgen" == tool_name:
        input_elem_size_bytes = 4
        output_elem_size_bytes = 0
        notes.append("micromlgen assumes float feature buffer")
    elif "m2cgen" == tool_name:
        input_elem_size_bytes = 8
        output_elem_size_bytes = 8
        notes.append("m2cgen assumes double feature/output buffers")
    else:
        notes.append("tool unknown; defaulting to double buffer estimate")

    input_bytes = int(n_features * input_elem_size_bytes)
    output_bytes = int(class_count * output_elem_size_bytes)

    if "m2cgen" == tool_name:
        # Estimate temporary arrays such as `double var0[2]`.
        var_matches = re.findall(r"double\s+var\d+\[(\d+)\]\s*;", source_code)
        local_bytes += sum(int(array_len) * 8 for array_len in var_matches)
        if var_matches:
            notes.append(f"counted {len(var_matches)} m2cgen var arrays")
    elif "micromlgen" == tool_name:
        # Estimate local vote counters (for classifiers) emitted by micromlgen.
        votes_match = re.search(
            r"(u?int(?:8|16|32|64)_t)\s+votes\[(\d+)\]\s*=\s*\{",
            source_code,
        )
        if votes_match is not None:
            vote_type = votes_match.group(1)
            vote_len = int(votes_match.group(2))
            vote_type_size_map = {
                "uint8_t": 1,
                "int8_t": 1,
                "uint16_t": 2,
                "int16_t": 2,
                "uint32_t": 4,
                "int32_t": 4,
                "uint64_t": 8,
                "int64_t": 8,
            }
            vote_type_size = vote_type_size_map.get(vote_type, 1)
            local_bytes += vote_len * vote_type_size
            notes.append(f"counted micromlgen votes[{vote_len}] as local RAM")

    total_bytes = int(input_bytes + output_bytes + local_bytes)
    return {
        "ram_input_bytes_est": input_bytes,
        "ram_output_bytes_est": output_bytes,
        "ram_local_bytes_est": local_bytes,
        "ram_total_bytes_est": total_bytes,
        "ram_input_dtype_bytes_est": input_elem_size_bytes,
        "ram_output_dtype_bytes_est": output_elem_size_bytes,
        "ram_estimation_note": "; ".join(notes),
    }


def rank_best_balanced_t(metrics_df: pd.DataFrame, tolerance: float) -> pd.Series | None:
    """Select best balanced export from near-top performers."""
    export_ok = metrics_df[metrics_df["export_status"] == "success"].copy()
    if export_ok.empty:
        return None
    max_f1 = export_ok["test_f1"].max()

    # Keep models that are near the best quality, then minimize generated size.
    near_tie = export_ok[export_ok["test_f1"] >= (max_f1 - tolerance)].copy()
    near_tie["compile_flag"] = near_tie["compile_status"].isin(
        ["compile_only_success", "compile_and_link_success"]
    )
    near_tie["source_size_bytes"] = near_tie["source_size_bytes"].fillna(np.inf)
    near_tie["object_size_bytes"] = near_tie["object_size_bytes"].fillna(np.inf)
    near_tie = near_tie.sort_values(
        by=["source_size_bytes", "compile_flag", "object_size_bytes"],
        ascending=[True, False, True],
    )
    return near_tie.iloc[0]


def write_summary_t(
    run_dir: Path,
    metrics_df: pd.DataFrame,
    compile_df: pd.DataFrame,
    f1_tolerance: float,
) -> None:
    """Write markdown summary with recommendations and key deltas."""
    summary_path = run_dir / "summary.md"
    lines: list[str] = []

    lines.append("# Transpile Benchmark Summary")
    lines.append("")
    lines.append(f"- Run directory: `{run_dir}`")
    lines.append(f"- Models trained: `{metrics_df['model_id'].nunique()}`")
    lines.append(
        f"- Successful exports: `{int((metrics_df['export_status'] == 'success').sum())}`"
    )
    lines.append("- RAM estimate is model-only inference RAM (input + output + emitted local temporaries).")
    lines.append("")

    model_view = metrics_df.drop_duplicates(subset=["model_id"]).copy()
    if model_view.empty:
        lines.append("No model metrics available.")
        summary_path.write_text("\n".join(lines), encoding="utf-8")
        return

    best_perf = model_view.sort_values(
        by=["test_f1", "test_accuracy", "cv_mean"],
        ascending=[False, False, False],
    ).iloc[0]
    lines.append("## Best raw performance")
    lines.append(
        f"- `{best_perf['model_id']}` ({best_perf['estimator_name']}) "
        f"with accuracy={best_perf['test_accuracy']:.4f}, f1={best_perf['test_f1']:.4f}, "
        f"cv_mean={best_perf['cv_mean']:.4f}"
    )
    lines.append("")

    export_ok = metrics_df[metrics_df["export_status"] == "success"].copy()
    if export_ok.empty:
        lines.append("## Best compact model")
        lines.append("- No successful exports were generated.")
        lines.append("")
        lines.append("## Best balanced model")
        lines.append("- No successful exports were generated.")
    else:
        best_compact = export_ok.sort_values(
            by=["source_size_bytes", "test_f1", "test_accuracy"],
            ascending=[True, False, False],
        ).iloc[0]
        lines.append("## Best compact model")
        lines.append(
            f"- `{best_compact['model_id']}__{best_compact['tool']}` "
            f"size={int(best_compact['source_size_bytes'])} bytes, "
            f"ram_est={int(best_compact['ram_total_bytes_est'])} bytes, "
            f"accuracy={best_compact['test_accuracy']:.4f}, f1={best_compact['test_f1']:.4f}"
        )
        lines.append("")

        best_balanced = rank_best_balanced_t(metrics_df, tolerance=f1_tolerance)
        lines.append("## Best balanced model")
        if best_balanced is None:
            lines.append("- No balanced candidate found.")
        else:
            lines.append(
                f"- `{best_balanced['model_id']}__{best_balanced['tool']}` chosen with "
                f"f1={best_balanced['test_f1']:.4f}, "
                f"source={int(best_balanced['source_size_bytes'])} bytes, "
                f"ram_est={int(best_balanced['ram_total_bytes_est'])} bytes, "
                f"compile_status={best_balanced['compile_status']}"
            )

            baseline = export_ok.sort_values(
                by=["test_f1", "test_accuracy", "source_size_bytes"],
                ascending=[False, False, True],
            ).iloc[0]
            delta_f1 = float(best_balanced["test_f1"] - baseline["test_f1"])
            delta_size = int(best_balanced["source_size_bytes"] - baseline["source_size_bytes"])
            lines.append(
                "- Trade-off note: compared with highest-F1 exported model "
                f"`{baseline['model_id']}__{baseline['tool']}`, "
                f"the balanced pick changes f1 by {delta_f1:+.4f} and source size by {delta_size:+d} bytes."
            )
        lines.append("")
        best_ram = export_ok.sort_values(
            by=["ram_total_bytes_est", "test_f1", "test_accuracy"],
            ascending=[True, False, False],
        ).iloc[0]
        lines.append("## Lowest estimated RAM model")
        lines.append(
            f"- `{best_ram['model_id']}__{best_ram['tool']}` "
            f"ram_est={int(best_ram['ram_total_bytes_est'])} bytes "
            f"(input={int(best_ram['ram_input_bytes_est'])}, "
            f"output={int(best_ram['ram_output_bytes_est'])}, "
            f"local={int(best_ram['ram_local_bytes_est'])}), "
            f"f1={best_ram['test_f1']:.4f}, acc={best_ram['test_accuracy']:.4f}"
        )
    lines.append("")

    lines.append("## Artifact files")
    lines.append(f"- `metrics.csv`: `{run_dir / 'metrics.csv'}`")
    lines.append(f"- `compile_sizes.csv`: `{run_dir / 'compile_sizes.csv'}`")
    lines.append(f"- `c_sources/`: `{run_dir / 'c_sources'}`")
    lines.append("")
    lines.append("## Top balanced candidates")

    top_balanced = metrics_df[metrics_df["export_status"] == "success"].copy()
    if top_balanced.empty:
        lines.append("- None")
    else:
        top_balanced = top_balanced.sort_values(
            by=["test_f1", "source_size_bytes", "compile_status"],
            ascending=[False, True, True],
        ).head(8)
        for _, row in top_balanced.iterrows():
            lines.append(
                "- "
                f"`{row['model_id']}__{row['tool']}` "
                f"(f1={row['test_f1']:.4f}, acc={row['test_accuracy']:.4f}, "
                f"source={int(row['source_size_bytes'])} bytes, "
                f"ram_est={int(row['ram_total_bytes_est'])} bytes, "
                f"compile={row['compile_status']})"
            )

    lines.append("")
    lines.append("## Top RAM-efficient candidates")
    top_ram = metrics_df[metrics_df["export_status"] == "success"].copy()
    if top_ram.empty:
        lines.append("- None")
    else:
        top_ram = top_ram.sort_values(
            by=["ram_total_bytes_est", "test_f1", "source_size_bytes"],
            ascending=[True, False, True],
        ).head(8)
        for _, row in top_ram.iterrows():
            lines.append(
                "- "
                f"`{row['model_id']}__{row['tool']}` "
                f"(ram_est={int(row['ram_total_bytes_est'])} bytes, "
                f"f1={row['test_f1']:.4f}, source={int(row['source_size_bytes'])} bytes)"
            )

    if not compile_df.empty:
        compile_success = compile_df[
            compile_df["compile_status"].isin(["compile_only_success", "compile_and_link_success"])
        ]
        lines.append("")
        lines.append("## Compile report")
        lines.append(f"- Successful compile measurements: `{len(compile_success)}`")

    summary_path.write_text("\n".join(lines), encoding="utf-8")


def main() -> int:
    """Run the complete benchmark from training to report generation."""
    args = parse_args()
    timestamp = datetime.now().strftime("%Y%m%d_%H%M%S")
    run_dir = args.output_root / f"run_{timestamp}"
    sources_dir = run_dir / "c_sources"
    compile_dir = run_dir / "compiled"
    run_dir.mkdir(parents=True, exist_ok=True)
    sources_dir.mkdir(parents=True, exist_ok=True)

    x_frame, y_series = load_dataset_t(args.data_path)
    x_train, x_test, y_train, y_test = train_test_split(
        x_frame,
        y_series,
        test_size=args.test_size,
        random_state=args.random_state,
    )

    model_specs = candidate_models_t(seed=args.random_state)
    exporters: dict[str, Any] = {
        "m2cgen": lambda estimator, model_id: export_m2cgen_t(estimator),
        "micromlgen": export_micromlgen_t,
        "sklearn_porter": lambda estimator, model_id: export_sklearn_porter_t(estimator),
    }

    metric_rows: list[dict[str, Any]] = []
    compile_rows: list[dict[str, Any]] = []

    for model_spec in model_specs:
        pipeline = Pipeline(
            steps=[
                ("preprocesser", build_preprocessor_t()),
                ("classifier", clone(model_spec.estimator)),
            ]
        )

        fit_error = ""
        try:
            pipeline.fit(x_train, y_train)
            y_pred = pipeline.predict(x_test)
            test_accuracy = float(accuracy_score(y_test, y_pred))
            test_f1 = float(f1_score(y_test, y_pred))
            cv_scores = cross_val_score(
                pipeline,
                x_frame,
                y_series,
                cv=args.cv_folds,
                scoring="f1",
                n_jobs=args.cv_n_jobs,
            )
            cv_mean = float(np.mean(cv_scores))
        except Exception as exc:
            fit_error = f"{type(exc).__name__}: {exc}"
            test_accuracy = np.nan
            test_f1 = np.nan
            cv_mean = np.nan

        if fit_error:
            for tool_name in exporters:
                metric_rows.append(
                    {
                        "model_id": model_spec.model_id,
                        "estimator_name": type(model_spec.estimator).__name__,
                        "estimator_params": json.dumps(model_spec.estimator.get_params(), sort_keys=True),
                        "test_accuracy": test_accuracy,
                        "test_f1": test_f1,
                        "cv_mean": cv_mean,
                        "n_features_after_preprocess": np.nan,
                        "model_complexity_proxy": np.nan,
                        "tool": tool_name,
                        "export_status": "fit_failed",
                        "export_error": fit_error,
                        "source_path": "",
                        "source_size_bytes": np.nan,
                        "source_size_kb": np.nan,
                        "ram_input_bytes_est": np.nan,
                        "ram_output_bytes_est": np.nan,
                        "ram_local_bytes_est": np.nan,
                        "ram_total_bytes_est": np.nan,
                        "ram_input_dtype_bytes_est": np.nan,
                        "ram_output_dtype_bytes_est": np.nan,
                        "ram_estimation_note": "fit_failed",
                        "compile_status": "skipped_fit_failed",
                        "object_size_bytes": np.nan,
                        "binary_size_bytes": np.nan,
                    }
                )
            continue

        trained_classifier = pipeline.named_steps["classifier"]
        transformed_features = pipeline.named_steps["preprocesser"].transform(x_train)
        n_features = int(transformed_features.shape[1])
        complexity_proxy = model_complexity_proxy_t(trained_classifier)
        class_count = int(len(getattr(trained_classifier, "classes_", [0, 1])))

        for tool_name, exporter in exporters.items():
            source_path = None
            source_size_bytes = np.nan
            export_status = "success"
            export_error = ""
            ram_usage = {
                "ram_input_bytes_est": np.nan,
                "ram_output_bytes_est": np.nan,
                "ram_local_bytes_est": np.nan,
                "ram_total_bytes_est": np.nan,
                "ram_input_dtype_bytes_est": np.nan,
                "ram_output_dtype_bytes_est": np.nan,
                "ram_estimation_note": "no_source",
            }
            compile_result = {
                "compile_status": "not_attempted",
                "object_size_bytes": np.nan,
                "binary_size_bytes": np.nan,
                "object_path": "",
                "binary_path": "",
                "compile_stderr": "",
                "link_stderr": "",
            }

            try:
                source_code, suffix = exporter(trained_classifier, model_spec.model_id)
                filename = f"{safe_filename_t(model_spec.model_id)}__{tool_name}{suffix}"
                source_path = sources_dir / filename
                source_path.write_text(source_code, encoding="utf-8")
                source_size_bytes = float(source_path.stat().st_size)
                ram_usage = estimate_ram_usage_t(
                    tool_name=tool_name,
                    source_code=source_code,
                    n_features=n_features,
                    class_count=class_count,
                )
                compile_result = compile_measure_t(
                    source_path=source_path,
                    compile_dir=compile_dir,
                    skip_compile=args.skip_compile,
                )
            except Exception as exc:
                export_status = "unsupported_or_failed"
                export_error = f"{type(exc).__name__}: {exc}"
                compile_result["compile_status"] = "not_compiled_export_failed"

            metric_rows.append(
                {
                    "model_id": model_spec.model_id,
                    "estimator_name": type(model_spec.estimator).__name__,
                    "estimator_params": json.dumps(model_spec.estimator.get_params(), sort_keys=True),
                    "test_accuracy": test_accuracy,
                    "test_f1": test_f1,
                    "cv_mean": cv_mean,
                    "n_features_after_preprocess": n_features,
                    "model_complexity_proxy": complexity_proxy,
                    "tool": tool_name,
                    "export_status": export_status,
                    "export_error": export_error,
                    "source_path": str(source_path) if source_path else "",
                    "source_size_bytes": source_size_bytes,
                    "source_size_kb": source_size_bytes / 1024.0 if np.isfinite(source_size_bytes) else np.nan,
                    "ram_input_bytes_est": ram_usage["ram_input_bytes_est"],
                    "ram_output_bytes_est": ram_usage["ram_output_bytes_est"],
                    "ram_local_bytes_est": ram_usage["ram_local_bytes_est"],
                    "ram_total_bytes_est": ram_usage["ram_total_bytes_est"],
                    "ram_input_dtype_bytes_est": ram_usage["ram_input_dtype_bytes_est"],
                    "ram_output_dtype_bytes_est": ram_usage["ram_output_dtype_bytes_est"],
                    "ram_estimation_note": ram_usage["ram_estimation_note"],
                    "compile_status": compile_result["compile_status"],
                    "object_size_bytes": compile_result["object_size_bytes"],
                    "binary_size_bytes": compile_result["binary_size_bytes"],
                }
            )

            compile_rows.append(
                {
                    "model_id": model_spec.model_id,
                    "tool": tool_name,
                    "source_path": str(source_path) if source_path else "",
                    "compile_status": compile_result["compile_status"],
                    "object_path": compile_result.get("object_path"),
                    "binary_path": compile_result.get("binary_path"),
                    "object_size_bytes": compile_result.get("object_size_bytes"),
                    "binary_size_bytes": compile_result.get("binary_size_bytes"),
                    "compile_stderr": compile_result.get("compile_stderr", ""),
                    "link_stderr": compile_result.get("link_stderr", ""),
                }
            )

    metrics_df = pd.DataFrame(metric_rows)
    compile_df = pd.DataFrame(compile_rows)
    metrics_path = run_dir / "metrics.csv"
    compile_path = run_dir / "compile_sizes.csv"
    metrics_df.to_csv(metrics_path, index=False)
    compile_df.to_csv(compile_path, index=False)
    write_summary_t(
        run_dir=run_dir,
        metrics_df=metrics_df,
        compile_df=compile_df,
        f1_tolerance=args.f1_tolerance,
    )

    print(f"Run directory: {run_dir}")
    print(f"Metrics CSV: {metrics_path}")
    print(f"Compile CSV: {compile_path}")
    print(f"Summary: {run_dir / 'summary.md'}")
    success_count = int((metrics_df["export_status"] == "success").sum())
    fail_count = int((metrics_df["export_status"] != "success").sum())
    print(f"Exports success={success_count}, non-success={fail_count}")
    return 0


if __name__ == "__main__":
    try:
        raise SystemExit(main())
    except Exception:
        print("Fatal benchmark failure:")
        print(traceback.format_exc())
        raise
