#!/usr/bin/env python3
"""Corrige os identificadores locais numéricos em mapas de Unova.
Execute na raiz do código-fonte do Pokémon Hoenn Expansion.
Seguro para executar mais de uma vez.
"""
from pathlib import Path
import json
import re
import sys

root = Path.cwd()
if not (root / 'Makefile').is_file() or not (root / 'data/maps/map_groups.json').is_file():
    sys.exit('ERRO: entre primeiro na pasta do projeto (onde fica o Makefile).')

groups = json.loads((root / 'data/maps/map_groups.json').read_text(encoding='utf-8'))['gMapGroup_Unova']
files = 0
count = 0
for folder in groups:
    path = root / 'data/maps' / folder / 'map.json'
    raw = path.read_text(encoding='utf-8')
    data = json.loads(raw)
    map_name = data['id'].removeprefix('MAP_')
    fixed, n = re.subn(
        r'("local_id"\s*:\s*")(\d+)(")',
        lambda m: f'{m[1]}LOCALID_{map_name}_{m[2]}{m[3]}',
        raw
    )
    if n:
        path.write_text(fixed, encoding='utf-8')
        files += 1
        count += n
        print('OK', folder, '-', n, 'IDs')

if count:
    # Force regeneration even on file systems with coarse timestamps.
    generated = root / 'include/constants/map_event_ids.h'
    if generated.is_file():
        generated.unlink()
print(f'PRONTO: {count} identificadores corrigidos em {files} mapas.')
print('Proximo comando: make -f Makefile.termux rom JOBS=1')
