#!/usr/bin/env python3
"""Check map accessibility, campaign progression and encounter table integrity."""
import json,re,struct
from pathlib import Path
root=Path(__file__).resolve().parents[1]
def read(p):return (root/p).read_text()
chapters=json.loads(read('docs/HOENN_CAMPAIGN.json'))['chapters']
script=read('data/scripts/hoenn_campaign.inc');party=read('src/data/trainers.party')
layouts={x['id']:x for x in json.loads(read('data/layouts/layouts.json'))['layouts']}
placed=0
for c in chapters:
 gate=read('data/maps/'+c['gate']+'/scripts.inc')
 assert 'goto_if_unset '+c['flag'] in gate, c['gate']
 assert 'goto_if_unset '+c['badge'] in script,c['key']
 assert c['trainer'] in party and c['trainer'] in script,c['trainer']
 m=json.loads(read('data/maps/'+c['city']+'/map.json'));lay=layouts[m['layout']]
 data=(root/lay['blockdata_filepath']).read_bytes();grid=struct.unpack('<'+'H'*(len(data)//2),data)
 for obj in m['object_events']:
  if obj.get('script') not in ['HE_'+c['key'],'HE_CampaignLiaison']:continue
  x,y=obj['x'],obj['y'];assert 0<=x<lay['width'] and 0<=y<lay['height']
  assert (grid[y*lay['width']+x]>>10)&3==0,(c['city'],x,y,'blocked')
  assert not any(w['x']==x and w['y']==y for w in m['warp_events']),(c['city'],'on warp')
  placed+=1
assert 'FLAG_HE_CAMPAIGN_COMPLETE, HE_LeagueEpilogue' in read('data/maps/EverGrandeCity_ChampionsRoom/scripts.inc')
assert 'FLAG_HE_FINAL_ROCKET' in read('data/maps/EverGrandeCity_PokemonLeague_1F/scripts.inc')
for path in (root/'data/maps').glob('*/scripts.inc'):
 assert not re.search(r'map_script_2\s+VAR_HE_DEMO_BOUNDARY',path.read_text()),path
wild=json.loads(read('src/data/wild_encounters.json'))['wild_encounter_groups'][0]
labels=set();night=0;rates={f['type']:len(f['encounter_rates']) for f in wild['fields']}
for enc in wild['encounters']:
 label=enc['base_label'];assert label not in labels,label;labels.add(label)
 if label.endswith('_Night'):night+=1
 for field,n in rates.items():
  if field not in enc:continue
  mons=enc[field]['mons'];assert len(mons)==n,(label,field)
  for mon in mons:assert 1<=mon['min_level']<=mon['max_level']<=100,(label,mon)
assert night==64,night
s=read('src/starter_choose.c');assert all(x in s for x in ['SPECIES_ROWLET','SPECIES_CYNDAQUIL','SPECIES_OSHAWOTT'])
config=read('include/config/overworld.h');assert re.search(r'#define OW_ENABLE_DNS\s+TRUE',config)
assert re.search(r'#define OW_USE_FAKE_RTC\s+FALSE',config)
print(f'OK: {len(chapters)} later chapters, {placed} accessible objects, {night} night tables, final/epilogue gates and no demo barrier.')
