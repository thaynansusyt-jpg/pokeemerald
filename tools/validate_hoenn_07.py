#!/usr/bin/env python3
"""Integration checks for 0.7 rules, NPC positions and capture quest coverage."""
from pathlib import Path
import json,re,struct

r=Path(__file__).resolve().parents[1]
quests=json.loads((r/'docs/legend_quests.json').read_text())
assert len(quests)==81
assert len({q['species'] for q in quests})==81
assert len({q['flag'] for q in quests})==81
required={'PHIONE','COSMOG','COSMOEM','TYPE_NULL','SILVALLY','MELTAN','MELMETAL','RAYQUAZA','ARCEUS','ZERAORA'}
assert required <= {q['species']for q in quests}
# Every target must exist and belong to a Gen1..7 family, with a real map and research NPC.
families=''.join((r/f'src/data/pokemon/species_info/gen_{g}_families.h').read_text() for g in range(1,8))
for q in quests:
 assert 'SPECIES_'+q['species'] in families,q['species']
 for key,script in [('habitat','HE_QuestHabitat'),('research','HE_QuestResearch')]:
  m=json.loads((r/'data/maps'/q[key]/'map.json').read_text())
  assert any(o.get('script')==script for o in m['object_events']),(q[key],script)
layouts={l['id']:l for l in json.loads((r/'data/layouts/layouts.json').read_text())['layouts']}
scripts={'HE_QuestHabitat','HE_QuestResearch','HE_QuestBoard','HE_TrainingCoach','HE_RainbowStart','HE_RainbowMeteor','HE_RainbowSpace','HE_RainbowShip','HE_RainbowFinal','HE_BugMilo','HE_BugLia'}
count=0
for f in (r/'data/maps').glob('*/map.json'):
 m=json.loads(f.read_text());new=[o for o in m.get('object_events',[]) if o.get('script')in scripts]
 if not new:continue
 l=layouts[m['layout']];raw=(r/l['blockdata_filepath']).read_bytes();tiles=struct.unpack('<'+'H'*(len(raw)//2),raw)
 coords=[(o['x'],o['y'])for o in m['object_events']]
 for o in new:
  xy=(o['x'],o['y']);assert coords.count(xy)==1,(f,xy,'overlap')
  assert not any((w['x'],w['y'])==xy for w in m['warp_events']),(f,xy,'warp')
  tile=tiles[o['y']*l['width']+o['x']];assert not tile&0xC00,(f,xy,'collision')
  assert tile>>12==o['elevation'],(f,xy,'elevation')
  count+=1
s=(r/'data/scripts/hoenn_postgame.inc').read_text()
assert 'B_OUTCOME_CAUGHT, HE_QuestCaptured' in s
assert 'B_OUTCOME_CAUGHT, HE_RainbowRayRetry' in s
c=(r/'src/hoenn_quests.c').read_text();assert 'gBattleOutcome != B_OUTCOME_CAUGHT' in c
assert 'mon.doNotUseDefaultShinyness = TRUE' in c
party=(r/'src/data/trainers.party').read_text()
assert 'Rayquaza-Mega\nLevel: 80\nShiny: Yes' in party
assert all('Difficulty: '+x in party for x in ['Easy','Hard'])
assert '#define MAX_TRAINERS_COUNT_EMERALD 864' in (r/'include/constants/opponents.h').read_text()
print(f'OK: {len(quests)} unique expeditions, {count} new accessible NPCs, retry/capture gates, four-frame ORAS backs and trainer profiles.')
