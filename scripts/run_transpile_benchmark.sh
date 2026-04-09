#!/usr/bin/env bash
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
REPO_ROOT="$(cd "${SCRIPT_DIR}/.." && pwd)"
VENV_PYTHON="${REPO_ROOT}/.venv/bin/python"
BENCHMARK_SCRIPT="${SCRIPT_DIR}/benchmark_transpile_to_c.py"

if [[ ! -x "${VENV_PYTHON}" ]]; then
    echo "Missing venv python at ${VENV_PYTHON}" >&2
    echo "Create the virtual environment first, then rerun." >&2
    exit 1
fi

"${VENV_PYTHON}" "${BENCHMARK_SCRIPT}" "$@"
