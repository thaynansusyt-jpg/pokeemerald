"""Real interactions with Barry, residents, item pickups and world activities."""
exec(open('tools/qa_071/helpers.py').read())
exec(open('tools/qa_071/battle_driver.py').read())
base='.qa071/sinnoh_new_game.state'
fields=re.search(r'enum MonData\s*\{(.*?)\};',Path('include/pokemon.h').read_text()+Path('include/constants/pokemon.h').read_text(),re.S)[1]
keys=re.findall(r'\b(MON_DATA_\w+)\b',re.sub(r'//[^\n]*','',fields))
def direct(name,a=0,b=0,c=0):
 data=Path('tools/qa_071/function_fixture.bin').read_bytes();data=data[:-20]+struct.pack('<5I',a,b,c,sym[name]|1,sym['gSpecialVar_Result'])
 for i,x in enumerate(data):write(0x0203E000+i,x,1)
 prev=read(sym['gMain']);write(sym['gMain'],0x0203E001);cmd('f 1 0');write(sym['gMain'],prev)
 return read(sym['gSpecialVar_Result'],2)
def talk(name,script):
 m=json.load(open('data/maps/'+name+'/map.json'));o=next(o for o in m['object_events'] if o['script']==script)
 l=next(l for l in layouts if l['id']==m['layout']);raw=struct.unpack('<'+'H'*(l['width']*l['height']),Path(l['blockdata_filepath']).read_bytes())
 occupied={(other['x'],other['y']) for other in m['object_events'] if other is not o}
 for dx,dy,key in [(0,1,64),(-1,0,16),(1,0,32),(0,-1,128)]:
  x,y=o['x']+dx,o['y']+dy
  if 0<=x<l['width'] and 0<=y<l['height'] and not raw[y*l['width']+x]&0xC00 and (x,y) not in occupied and (raw[y*l['width']+x]>>12 in (0,o['elevation']) or not o['elevation']):break
 else:raise AssertionError('NPC has no approachable side '+script)
 warp(name,x,y);press(key);press(1);cmd('f 100 0')
def skip_trainers():
 values=[int(x.strip(),16) for x in re.search(r'sSinnohTrainerFlags\[\] = \{(.*?)\}',Path('src/battle_setup.c').read_text())[1].split(',')]
 for f in values:flag(f)
assert cmd('load '+base)=='ok';prepare_team();skip_trainers()
for i in range(6):
 write(0x0203D000,5,1);function('SetMonData',sym['gParties']+i*100,keys.index('MON_DATA_MET_LEVEL'),0x0203D000)
barry=[
 ('Route203','SI_Barry',3,0x3B,387),
 ('EternaCity','SI_W_Barry1',10,0x4E7,388),
 ('CanalaveCity','SI_W_Barry2',15,0x4E8,389),
 ('SnowpointCity','SI_W_Barry3',18,0x4E9,389),
 ('PokmonLeague','SI_W_Barry4',24,0x4EA,389),
 ('FightArea','SI_W_Barry5',29,0x4EB,389)]
assert getvar(vars['VAR_SI_STARTER'])==3
for name,script,stage,fl,rival in barry:
 flag(fl,False);setvar(vars['VAR_SI_STAGE'],stage);talk(name,script)
 for _ in range(160):
  if hastask('Task_HandleYesNoInput'):break
  press(1);cmd('f 25 0')
 else:raise AssertionError('Barry choice missing '+name)
 shot('092_barry_'+name);press(1)
 for _ in range(180):
  if read(sym['gMain']+4)==sym['BattleMainCB2']|1 and read(sym['gBattlerControllerFuncs']) in action_funcs:break
  press(1);cmd('f 45 0')
 else:raise AssertionError('Barry battle missing '+name)
 count=read(sym['gPartiesCount']+1,1)
 assert direct('GetMonData3',sym['gParties']+600+(count-1)*100,keys.index('MON_DATA_SPECIES'),0)==rival,(name,count)
 drive_until(lambda:read(sym['gMain']+4)==sym['CB2_Overworld']|1 and hasflag(fl),name='092_Barry_'+name)
 dismiss(45);assert getvar(vars['VAR_SI_STAGE'])==stage
 print('PASS real Barry battle',name,'counter-starter and unchanged story stage',flush=True)
# Riley must retain the egg while the team is full.
assert cmd('load '+base)=='ok';prepare_team();skip_trainers();setvar(vars['VAR_SI_STAGE'],17)
talk('CanalaveCity','SI_W_RileyEgg');dismiss(60)
assert not hasflag('FLAG_SI_RILEY_EGG'),'Full party must not consume gift'
for i in range(100,600):write(sym['gParties']+i,0,1)
write(sym['gPartiesCount'],1,1)
talk('CanalaveCity','SI_W_RileyEgg');dismiss(70)
assert hasflag('FLAG_SI_RILEY_EGG') and read(sym['gPartiesCount'],1)==2
assert function('GetMonData3',sym['gParties']+100,keys.index('MON_DATA_IS_EGG'),0)==1
assert function('GetMonData3',sym['gParties']+100,keys.index('MON_DATA_SPECIES'),0)==447
print('PASS Riley: full party retains gift; free slot receives Riolu egg',flush=True)
# Cheryl, Starly research, fishing and music give their actual rewards once.
def partner(species):
 function('CreateScriptedWildMon',species,5,0)
 data=[read(sym['gParties']+600+i,1) for i in range(100)]
 for i,b in enumerate(data):write(sym['gParties']+i,b,1)
 write(sym['gPartiesCount'],1,1);function('HealPlayerParty')
def item_id(name):return int(re.search(r'\bITEM_'+name+r'\s*=\s*(\d+)',Path('include/constants/items.h').read_text())[1])
quests=[('EternaForest','SI_W_Quest0',406,0,0,'SOOTHE_BELL',1),('JubilifeCity','SI_W_Quest1',396,1,0,'QUICK_BALL',5),('Route219','SI_W_Quest2',None,2,1,'OLD_ROD',1),('HearthomeCity','SI_W_Quest3',None,3,11,'DUSK_BALL',5)]
for name,script,mon,q,stage,item,count in quests:
 assert cmd('load '+base)=='ok';skip_trainers();setvar(vars['VAR_SI_STAGE'],max(stage,2))
 if mon:partner(mon)
 ident=item_id(item);before=function('CountTotalItemQuantityInBag',ident)
 talk(name,script);dismiss(90)
 assert hasflag('FLAG_SI_WORLD_QUEST'+str(q)),(name,'quest flag')
 assert function('CountTotalItemQuantityInBag',ident)==before+count,(name,'reward')
 talk(name,script);dismiss(45)
 assert function('CountTotalItemQuantityInBag',ident)==before+count,(name,'repeat reward')
 shot('092_activity_'+name)
 print('PASS real activity',name,item,'one-time reward',flush=True)
# A ground item uses normal finditem language/removal rather than NPC dialogue.
assert cmd('load '+base)=='ok';skip_trainers()
for pp in Path('data/maps').glob('*/map.json'):
 mm=json.loads(pp.read_text());oo=next((o for o in mm.get('object_events',[]) if o.get('script')=='SI_W_Pickup0'),None)
 if oo:break
before=function('CountTotalItemQuantityInBag',item_id('POTION'));talk(pp.parent.name,'SI_W_Pickup0');dismiss(75)
assert hasflag('FLAG_SI_WORLD_PICKUP0') and function('CountTotalItemQuantityInBag',item_id('POTION'))==before+1
print('PASS actual item pickup: Potion obtained, flag stored, object removed',flush=True)
p.stdin.close();p.wait()
