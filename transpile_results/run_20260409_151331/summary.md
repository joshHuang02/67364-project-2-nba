# Transpile Benchmark Summary

- Run directory: `/Users/joshhuang/Documents/GitHub/67364-project-2-nba/transpile_results/run_20260409_151331`
- Models trained: `22`
- Successful exports: `31`
- RAM estimate is model-only inference RAM (input + output + emitted local temporaries).

## Best raw performance
- `rf_n100_d10` (RandomForestClassifier) with accuracy=0.6098, f1=0.7488, cv_mean=0.6998

## Best compact model
- `dtree_d3_leaf1__m2cgen` size=1186 bytes, ram_est=12872 bytes, accuracy=0.5891, f1=0.7415

## Best balanced model
- `dtree_d3_leaf1__m2cgen` chosen with f1=0.7415, source=1186 bytes, ram_est=12872 bytes, compile_status=compile_only_success
- Trade-off note: compared with highest-F1 exported model `rf_n100_d10__m2cgen`, the balanced pick changes f1 by -0.0073 and source size by -705199 bytes.

## Lowest estimated RAM model
- `dtree_d3_leaf1__micromlgen` ram_est=6420 bytes (input=6420, output=0, local=0), f1=0.7415, acc=0.5891

## Artifact files
- `metrics.csv`: `/Users/joshhuang/Documents/GitHub/67364-project-2-nba/transpile_results/run_20260409_151331/metrics.csv`
- `compile_sizes.csv`: `/Users/joshhuang/Documents/GitHub/67364-project-2-nba/transpile_results/run_20260409_151331/compile_sizes.csv`
- `c_sources/`: `/Users/joshhuang/Documents/GitHub/67364-project-2-nba/transpile_results/run_20260409_151331/c_sources`

## Top balanced candidates
- `rf_n100_d10__m2cgen` (f1=0.7488, acc=0.6098, source=706385 bytes, ram_est=16056 bytes, compile=compile_only_success)
- `rf_n100_d10__micromlgen` (f1=0.7488, acc=0.6098, source=943187 bytes, ram_est=6422 bytes, compile=skipped_non_compilable_suffix)
- `extratrees_n30_d10__m2cgen` (f1=0.7483, acc=0.6227, source=282314 bytes, ram_est=13816 bytes, compile=compile_only_success)
- `rf_n30_d10__m2cgen` (f1=0.7454, acc=0.6047, source=198788 bytes, ram_est=13816 bytes, compile=compile_only_success)
- `rf_n30_d10__micromlgen` (f1=0.7454, acc=0.6047, source=266404 bytes, ram_est=6422 bytes, compile=skipped_non_compilable_suffix)
- `dtree_d3_leaf1__m2cgen` (f1=0.7415, acc=0.5891, source=1186 bytes, ram_est=12872 bytes, compile=compile_only_success)
- `dtree_d3_leaf1__micromlgen` (f1=0.7415, acc=0.5891, source=1633 bytes, ram_est=6420 bytes, compile=skipped_non_compilable_suffix)
- `rf_n30_d5__m2cgen` (f1=0.7415, acc=0.5891, source=48283 bytes, ram_est=13816 bytes, compile=compile_only_success)

## Top RAM-efficient candidates
- `dtree_d3_leaf1__micromlgen` (ram_est=6420 bytes, f1=0.7415, source=1633 bytes)
- `dtree_d3_leaf5__micromlgen` (ram_est=6420 bytes, f1=0.7406, source=1658 bytes)
- `dtree_d5_leaf5__micromlgen` (ram_est=6420 bytes, f1=0.7359, source=4671 bytes)
- `dtree_d5_leaf1__micromlgen` (ram_est=6420 bytes, f1=0.7347, source=4581 bytes)
- `dtree_d8_leaf1__micromlgen` (ram_est=6420 bytes, f1=0.7314, source=11343 bytes)
- `dtree_d8_leaf5__micromlgen` (ram_est=6420 bytes, f1=0.7270, source=11360 bytes)
- `logreg_lbfgs_c0.1__micromlgen` (ram_est=6420 bytes, f1=0.7222, source=30904 bytes)
- `logreg_liblinear_c0.1__micromlgen` (ram_est=6420 bytes, f1=0.7211, source=30914 bytes)

## Compile report
- Successful compile measurements: `13`