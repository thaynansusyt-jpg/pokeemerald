#!/usr/bin/env bash
# Fail-closed preflight. Does NOT claim gameplay has been tested.
set -euo pipefail
cd "$(dirname "$0")"
printf '%s\n' '[1/5] Checking source root...'
test -f Makefile -a -f Makefile.termux
printf '%s\n' '[2/5] 0.10.1 map and story checks...'
python3 tools/qa_unova_0101.py
printf '%s\n' '[3/5] 0.10.5 integrated regression checks...'
python3 tools/qa_unova_integrated.py
printf '%s\n' '[4/5] Checking native ARM toolchain...'
for tool in make arm-none-eabi-gcc arm-none-eabi-as arm-none-eabi-ld arm-none-eabi-objcopy python3; do
 if ! command -v "$tool" >/dev/null 2>&1; then echo "Missing $tool. ROM build not attempted." >&2;exit 2;fi
done
printf '%s\n' '[5/5] Incremental ROM build (may take a while)...'
set -o pipefail
make -f Makefile.termux rom JOBS=1 2>&1 | tee UNOVA_0105_BUILD_LOG.txt
test -s pokemon_hoenn_expansion_gen7.gba
python3 - <<'PY'
from pathlib import Path
p=Path('pokemon_hoenn_expansion_gen7.gba')
if p.stat().st_size != 33554432:
 raise SystemExit(f'ERROR: ROM size {p.stat().st_size}, expected 33554432')
print(f'BUILD COMPLETED: {p.name} ({p.stat().st_size} bytes). Gameplay NOT tested.')
PY
sha256sum pokemon_hoenn_expansion_gen7.gba
