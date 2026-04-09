# Transpile Benchmark Results

This folder stores timestamped outputs from `scripts/benchmark_transpile_to_c.py`.

Each run is written to a folder like:

- `run_YYYYMMDD_HHMMSS/`

## Run Folder Layout

Inside each run folder:

- `summary.md`  
  Human-readable report with best-performing, best-compact, best-balanced, and RAM-efficient candidates.
- `metrics.csv`  
  One row per `(model_id, tool)` export attempt with model quality, export status, source size, and RAM estimates.
- `compile_sizes.csv`  
  Compile/link status and artifact sizes for each export attempt.
- `c_sources/`  
  Generated source artifacts (`.c` / `.h` / `.cpp`) from transpilers.
- `compiled/`  
  Object files (`.o`) for successful source compile attempts (size proxy, not deployment artifacts).

## Key Metrics In `metrics.csv`

- `test_accuracy`, `test_f1`, `cv_mean`: quality metrics for the trained model.
- `export_status`, `export_error`: whether export succeeded and why failures occurred.
- `source_size_bytes`, `source_size_kb`: generated source footprint.
- `ram_input_bytes_est`, `ram_output_bytes_est`, `ram_local_bytes_est`, `ram_total_bytes_est`: estimated model-only inference RAM.
- `ram_estimation_note`: assumptions used for RAM estimation.

## RAM Estimation Notes

RAM estimates are model-only and do not include full firmware/runtime overhead.

- `m2cgen` estimate:
  - input buffer assumed `double` (`8 bytes` each),
  - output buffer assumed class probability vector,
  - local temporary arrays parsed from generated source.
- `micromlgen` estimate:
  - input buffer assumed `float` (`4 bytes` each),
  - output buffer assumed scalar class return,
  - local vote array (if present) parsed from source.

Use target toolchain map files and final linked firmware for definitive RAM/flash numbers.

## Re-running The Benchmark

From repository root:

```bash
./scripts/run_transpile_benchmark.sh
```

Optional examples:

```bash
./scripts/run_transpile_benchmark.sh --skip-compile
./scripts/run_transpile_benchmark.sh --f1-tolerance 0.005
```
