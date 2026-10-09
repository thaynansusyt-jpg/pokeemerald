from pathlib import Path
import json,struct
layouts={x['id']:x for x in json.load(open('data/layouts/layouts.json'))['layouts']}
def write(name,floor):
 p=Path('data/maps')/name/'map.json';m=json.loads(p.read_text());l=layouts[m['layout']]
 values=[0x3201 if floor(x,y) else 0x611 for y in range(l['height']) for x in range(l['width'])]
 Path(l['blockdata_filepath']).write_bytes(struct.pack('<'+'H'*len(values),*values))
 return p,m
rooms=[(2,2,10,9),(13,2,22,9),(2,13,10,22),(13,13,22,22),(9,5,14,7),(5,8,7,14),(16,8,18,14),(9,17,14,19)]
p,m=write('VictoryRoad',lambda x,y:any(a<=x<=c and b<=y<=d for a,b,c,d in rooms))
ts=[o for o in m['object_events'] if o['script'].startswith('SI_W_Trainer')]
for o,xy in zip(ts,[(14,5),(7,16),(17,17),(20,5)]):o['x'],o['y']=xy
for o in m['object_events']:
 if 'LeagueAaron' in o['script']:o['x'],o['y']=21,19
 elif o['script'].endswith('_Back'):o['x'],o['y']=5,8
p.write_text(json.dumps(m,indent=2)+'\n')
p,m=write('MtCoronetSummit',lambda x,y:2<=x<=22 and 2<=y<=22 and not(y==11 and not 18<=x<=20) and not(y==17 and not 5<=x<=7))
for o in m['object_events']:
 if 'SpearPillar' in o['script'] and not o['script'].endswith('_Back'):o['x'],o['y']=21,21
p.write_text(json.dumps(m,indent=2)+'\n')
p=Path('src/data/wild_encounters.json');j=json.loads(p.read_text());g=next(g for g in j['wild_encounter_groups'] if g.get('for_maps'))
for name,lv,species in [
 ('VictoryRoad',49,['GOLBAT','MACHOKE','GABITE','ONIX','LUXIO','GRAVELER']),
 ('MtCoronetSummit',44,['GOLBAT','BRONZONG','MACHOKE','SNOVER','CHIMECHO','GRAVELER']),
 ('TurnbackCave',50,['DUSKULL','DUSCLOPS','GOLBAT','BRONZOR','HAUNTER','CHINGLING']),
 ('SnowpointTemple',46,['SNEASEL','SNORUNT','GOLBAT','BRONZOR','GRAVELER','PILOSWINE'])]:
 m=json.load(open('data/maps/'+name+'/map.json'))
 assert not any(e['map']==m['id'] for e in g['encounters'])
 g['encounters'].append({'map':m['id'],'base_label':'gSiWorld'+name,'land_mons':{'encounter_rate':12,'mons':[{'min_level':lv-2,'max_level':lv+2,'species':'SPECIES_'+species[i%6]} for i in range(12)]}})
p.write_text(json.dumps(j,indent=2)+'\n')
world=Path('docs/sinnoh_world.json');j=json.loads(world.read_text())
for t in j['trainers']:
 objs=json.load(open('data/maps/'+t['map']+'/map.json'))['object_events'];o=next(o for o in objs if o['script']==t['script']);t['x']=o['x'];t['y']=o['y']
world.write_text(json.dumps(j,indent=2)+'\n')
