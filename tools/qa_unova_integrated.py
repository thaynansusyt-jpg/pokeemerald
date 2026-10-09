#!/usr/bin/env python3
"""Targeted regression checks for Unova integrated DEV. Not a ROM gameplay test."""
from pathlib import Path
import json, re, subprocess, sys
root = Path(__file__).resolve().parents[1]
checks=0
errors=[]
def test(cond,message):
 global checks
 checks+=1
 if not cond:errors.append(message)
def read(p):return (root/p).read_text()
script=read('data/scripts/unova_chapter.inc')
macros=read('asm/macros/event.inc')
assert_pos=read('src/battle_setup.c')
test('trainerbattle_scripted' in macros,'scripted battle macro missing')
seg=script[script.index('UN_First0:'):script.index('UN_FirstWon::')]
test(len(re.findall(r'\btrainerbattle_scripted\b',seg))==6,'six prologue battles must use scripted macro')
test('trainerbattle_single ' not in seg,'prologue still uses NPC-only trainer battle')
macro=macros[macros.index('.macro trainerbattle_scripted'):macros.index('.endm',macros.index('.macro trainerbattle_scripted'))]
test(bool(re.search(r'TRUE, FALSE, FALSE, FALSE',macro)), 'scripted macro flags not configured as expected')
test('sBackAnims_Unova' in read('src/data/graphics/trainers.h'),'Unova animation missing')
for hero in ['HILDA','HILBERT']:
 line=next((x for x in read('src/data/graphics/trainers.h').splitlines() if f'[TRAINER_PIC_UN_{hero}]' in x),'')
 test('sBackAnims_Unova' in line,hero+' still uses Hoenn animation')
test('SiNamingSeason()==2 ? sUnMessagePal' in read('src/text_window.c'), 'Unova palette not applied with its tiles')
test('region != "REGION_UNOVA"' in read('tools/mapjson/mapjson.cpp'),'generator still excludes Unova')
test('gMapGroup_Unova::' in read('data/maps/groups.inc'),'generated group table missing Unova')
test('"MAP_TYPE_CAVE"' not in read('data/maps/UnWellspringCave/map.json'), 'invalid cave map type')
for kw in ['walk_normal_', 'givepokemon ', 'playcry ', 'waitcry', 'ITEM_TM_WORK_UP', 'ITEM_TM_RETALIATE', 'ITEM_TM_STRUGGLE_BUG']:
 test(kw not in script,'obsolete script symbol: '+kw)
songnames=['mus_un_nuvema','mus_un_route','mus_un_city','mus_un_bridge','mus_un_rival']
for i,song in enumerate(songnames,648):
 test(f'#define {song.upper()} {i}' in read('include/constants/songs.h'),'song ID missing: '+song)
 test(f'song {song}, MUSIC_PLAYER_BGM, 0' in read('sound/song_table.inc'),'song table missing: '+song)
 test(f'{song}.mid:' in read('sound/songs/midi/midi.cfg'),'midi config missing: '+song)
 p=root/'sound/songs/midi'/f'{song}.mid'
 test(p.is_file() and p.read_bytes()[:4]==b'MThd','broken midi: '+song)
allmaps=list((root/'data/maps').glob('Un*/map.json'))
for p in allmaps:
 d=json.loads(p.read_text())
 test(d['music'].startswith('MUS_UN_'),'Unova map still has provisional track: '+p.parent.name)
test('MUS_UN_RIVAL' in read('src/pokemon.c'),'Unova battle music missing')
if errors:
 print('FAILED:',len(errors),'/',checks)
 for e in errors:print('FAIL:',e)
 sys.exit(1)
print(f'PASS: {checks} integrated regression checks (NOT a full ROM/emulator test)')
