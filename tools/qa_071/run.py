#!/usr/bin/env python3
"""Run ROM-level regression tests with libmgba-dev and Pillow installed."""
from pathlib import Path
import os, shutil, subprocess
os.chdir(Path(__file__).resolve().parents[2])
cache=Path('.qa071');cache.mkdir(exist_ok=True)
for f in Path('tools/qa_071/fixtures').iterdir():shutil.copy(f,cache/f.name)
subprocess.run(['gcc','tools/qa_071/emulator.c','-o',str(cache/'emulator'),'-lmgba'],check=True)
with (cache/'new.symbols').open('w') as out:
 subprocess.run(['arm-none-eabi-nm','-n','pokemon_hoenn_expansion_gen7.elf'],stdout=out,check=True)
for name in ['migration','quest_migration','early_events','sailing','native','puzzles','ring','text','trainers','language','options','language_save','chapter_battles','gym_battles','league_postgame','quest_captures']:
 print('RUN',name,flush=True)
 subprocess.run(['python3',f'tools/qa_071/test_{name}.py'],check=True)
