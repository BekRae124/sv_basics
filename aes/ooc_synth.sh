#!/usr/bin/env bash
set -euo pipefail

vivado() {
    cmd.exe /c 'C:\AMDDesignTools\2025.2\Vivado\bin\vivado.bat' "$@"
}

python3 wrap_module.py $1

START_DIR="$PWD" 
mkdir ooc_synth_results

cd /mnt/c/FPGA/job_prep/OOC_scripts
vivado -mode batch -source ooc.tcl

cp *rpt "${START_DIR}/ooc_synth_results/"