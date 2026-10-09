"""Load all Sinnoh maps in mGBA with completed story and trainer flags."""
exec(open('tools/qa_071/helpers.py').read())
assert cmd('load .qa071/sinnoh_new_game.state')=='ok'
setvar(vars['VAR_SI_STAGE'],29)
values=[int(x.strip(),16) for x in re.search(r'sSinnohTrainerFlags\[\] = \{(.*?)\}',Path('src/battle_setup.c').read_text())[1].split(',')]
for f in values:flag(f)
arrival=json.load(open('docs/sinnoh_arrivals.json'))
count=0
for pp in sorted(Path('data/maps').glob('*/map.json')):
 m=json.loads(pp.read_text())
 if not m['layout'].startswith('LAYOUT_SI_'):continue
 name=pp.parent.name;l=next(l for l in layouts if l['id']==m['layout'])
 raw=struct.unpack('<'+'H'*(l['width']*l['height']),Path(l['blockdata_filepath']).read_bytes())
 x,y=arrival.get(name,(l['width']//2,l['height']//2))
 if raw[y*l['width']+x]&0xC00:
  x,y=next((xx,yy) for yy in range(1,l['height']-1) for xx in range(1,l['width']-1) if raw[yy*l['width']+xx]&0xC00==0)
 warp(name,x,y)
 assert read(sym['gMain']+4)==sym['CB2_Overworld']|1,(name,hex(read(sym['gMain']+4)))
 assert read(sym['gMapHeader'])==sym[l['name']],name
 count+=1
 if name in ['EternaCity','HearthomeCity','CanalaveCity','SnowpointCity','VictoryRoad','MtCoronetSummit']:shot('092_map_'+name)
 if count%40==0:print('PASS loaded',count,'Sinnoh maps',flush=True)
assert count==214
print('PASS all 214 Sinnoh maps load without restart; layouts match current headers',flush=True)
p.stdin.close();p.wait()
