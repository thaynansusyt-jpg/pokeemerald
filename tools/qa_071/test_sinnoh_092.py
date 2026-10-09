"""Native checks for running, journey settings, unseen DexNav, Prism and trainer sight."""
exec(open('tools/qa_071/helpers.py').read())
exec(open('tools/qa_071/battle_driver.py').read().replace("'CreateScriptedWildMon',150,100,0","'CreateScriptedWildMon',150,18,0"))
base='.qa071/sinnoh_new_game.state'
assert cmd('load '+base)=='ok'
def direct(name,a=0,b=0,c=0):
 data=Path('tools/qa_071/function_fixture.bin').read_bytes();data=data[:-20]+struct.pack('<5I',a,b,c,sym[name]|1,sym['gSpecialVar_Result'])
 for i,x in enumerate(data):write(0x0203E000+i,x,1)
 previous=read(sym['gMain']);write(sym['gMain'],0x0203E001);cmd('f 1 0');write(sym['gMain'],previous)
 return read(sym['gSpecialVar_Result'],2)
def pos():
 obj=sym['gObjectEvents']+read(sym['gPlayerAvatar']+5,1)*36
 return read(obj+16,2)-7,read(obj+18,2)-7
assert read(sym['gMain']+4)==sym['CB2_Overworld']|1
assert hasflag('FLAG_SYS_B_DASH'),'Running shoes must enable the movement flag'
# Locate a long, open lane in Twinleaf; use actual held keys, not movement writes.
m=json.load(open('data/maps/TwinleafTown/map.json'));l=next(l for l in layouts if l['id']==m['layout'])
raw=struct.unpack('<'+'H'*(l['width']*l['height']),Path(l['blockdata_filepath']).read_bytes())
occupied={(o['x'],o['y']) for o in m['object_events']}
lanes=[]
for y in range(12,l['height']-2):
 for x in range(2,l['width']-15):
  if all(raw[y*l['width']+xx]&0xC00==0 and raw[y*l['width']+xx]>>12 in (0,3) and (xx,y) not in occupied for xx in range(x,x+15)):lanes.append((x,y))
assert lanes
x,y=lanes[-1]
def distance(keys,auto=False):
 flag('FLAG_HE_AUTO_RUN',auto);warp('TwinleafTown',x,y);assert read(sym['gMain']+4)==sym['CB2_Overworld']|1
 before=pos();cmd('f 80 '+str(keys));cmd('f 16 0');return pos()[0]-before[0]
walk=distance(16);run=distance(18);autorun=distance(16,True);autowalk=distance(18,True)
assert 0<walk<run and autorun==run and autowalk==walk,(walk,run,autorun,autowalk)
shot('092_running');print('PASS actual movement: walk',walk,'run',run,'auto-run',autorun,'B walks',autowalk,flush=True)
# The exact reported roof edge must block actual avatar coordinates.
flag('FLAG_HE_AUTO_RUN',False);warp('TwinleafTown',4,4);before=pos();cmd('f 40 128');cmd('f 16 0')
assert pos()==before,(before,pos());shot('092_roof_blocked')
print('PASS roof collision measured from active avatar coordinates',flush=True)
# Native Prism formula, charge use, conditions, unlocks and Hoenn isolation.
assert cmd('load '+base)=='ok';setvar(vars['VAR_SI_STAGE'],2);callnative('SiPrismRepair')
assert getvar(vars['VAR_SI_PRISM_ENERGY'])==3 and getvar(vars['VAR_SI_PRISM_MODE'])==1
enemy=sym['gBattleMons']+140;write(sym['gBattleTypeFlags'],0);write(sym['gLastUsedItem'],1,2)
write(enemy+80,1);write(enemy+42,80,2);write(enemy+46,100,2)
assert function('SiPrismApplyCapture',10,1)==20 and getvar(vars['VAR_SI_PRISM_ENERGY'])==2
write(enemy+80,0)
assert function('SiPrismApplyCapture',10,1)==10 and getvar(vars['VAR_SI_PRISM_ENERGY'])==2
setvar(vars['VAR_SI_STAGE'],13);setvar(vars['VAR_SI_PRISM_MODE'],2)
write(enemy+42,25,2);assert function('SiPrismApplyCapture',10,1)==20
write(enemy+42,26,2);assert function('SiPrismApplyCapture',10,1)==10
setvar(vars['VAR_SI_STAGE'],18);setvar(vars['VAR_SI_PRISM_MODE'],3)
write(sym['gBattleTurnCounter'],2,1);assert function('SiPrismApplyCapture',10,1)==10
write(sym['gBattleTurnCounter'],3,1);assert function('SiPrismApplyCapture',10,1)==20
assert getvar(vars['VAR_SI_PRISM_ENERGY'])==0
function('SiPrismRecharge');flag('FLAG_HE_EASY_CATCH')
assert function('SiPrismApplyCapture',10,1)==10 and getvar(vars['VAR_SI_PRISM_ENERGY'])==3
flag('FLAG_HE_EASY_CATCH',False);setvar(vars['VAR_HE_SEASON'],0)
assert function('SiPrismApplyCapture',10,1)==10 and getvar(vars['VAR_SI_PRISM_ENERGY'])==3
print('PASS Prism: Mesprit/Azelf/Uxie conditions, charge use, Easy Catch and Hoenn isolation',flush=True)
# Real journal -> Prism -> editable settings; B cancels, save preserves story.
assert cmd('load '+base)=='ok';setvar(vars['VAR_SI_STAGE'],18);function('SiPrismRepair')
def openaction(action):
 press(8);cmd('f 100 0');assert hastask('Task_ShowStartMenu')
 for _ in range(15):
  cursor=read(sym['sStartMenuCursorPos'],1)
  if read(sym['sCurrentStartMenuActions']+cursor,1)==action:break
  press(128)
 else:raise AssertionError('missing start action '+str(action))
 press(1);cmd('f 150 0')
openaction(15);press(256);cmd('f 80 0');shot('092_prism_menu')
assert read(sym['gMain']+4)==sym['SiMissionMain']|1
mode=getvar(vars['VAR_SI_PRISM_MODE']);press(16);assert getvar(vars['VAR_SI_PRISM_MODE'])!=mode
press(4);cmd('f 80 0');assert read(sym['gMain']+4)==sym['RulesMain']|1
for _ in range(6):press(128)
press(1);press(128);press(1);press(128);press(1);shot('092_journey_options')
press(2);cmd('f 500 0');press(2);cmd('f 100 0')
assert not hasflag('FLAG_HE_EASY_CATCH') and not hasflag('FLAG_HE_DEXNAV_ALL'),'Cancel must discard edits'
openaction(15);press(4);cmd('f 80 0')
for _ in range(6):press(128)
press(1);press(128);press(1);press(128);press(1);press(128);press(128);press(1);cmd('f 500 0');press(2);cmd('f 100 0')
assert hasflag('FLAG_HE_EASY_CATCH') and hasflag('FLAG_HE_DEXNAV_ALL') and hasflag('FLAG_HE_AUTO_RUN')
assert getvar(vars['VAR_SI_STAGE'])==18
print('PASS real settings: cancel discards, save commits, story retained',flush=True)
# Open real DexNav on Route201. Register an unseen local species without marking it seen.
warp('Route201',48,15);openaction(14)
assert hastask('Task_DexNavMain')
species=direct('DexNavGetSpecies');assert species!=0,species
dex=direct('SpeciesToNationalPokedexNum',species)
assert direct('GetSetPokedexFlag',dex,0)==0,'Fixture species should be unseen'
shot('092_dexnav_all');press(256);cmd('f 80 0')
assert getvar(vars['VAR_HE_DN_SPECIES'])&0x3FFF==species
assert direct('GetSetPokedexFlag',dex,0)==0,'DexNav All must not fake Dex records'
press(2);cmd('f 500 0');press(2);cmd('f 100 0')
print('PASS real DexNav All: unseen local species shown and registered; seen record unchanged',flush=True)
# A real sight-triggered ordinary trainer approaches and starts a battle.
assert cmd('load '+base)=='ok';setvar(vars['VAR_SI_STAGE'],2);function('SiPrismRepair');prepare_team()
world=json.load(open('docs/sinnoh_world.json'));t=next(t for t in world['trainers'] if t['map']=='Route201')
m=json.load(open('data/maps/'+t['map']+'/map.json'));o=next(o for o in m['object_events'] if o['script']==t['script'])
dx,dy={'DOWN':(0,1),'UP':(0,-1),'RIGHT':(1,0),'LEFT':(-1,0)}[o['movement_type'].split('_')[-1]]
warp(t['map'],o['x']+2*dx,o['y']+2*dy)
for _ in range(150):
 if read(sym['gMain']+4)==sym['BattleMainCB2']|1:break
 press(1);cmd('f 40 0')
else:raise AssertionError('ordinary trainer did not approach and start battle')
shot('092_trainer_battle');assert read(sym['gBattleTypeFlags'])&8 # BATTLE_TYPE_TRAINER
tid=int(re.search(r'#define\s+'+t['id']+r'\s+(\d+)',Path('include/constants/opponents.h').read_text())[1])
setvar(vars['VAR_SI_PRISM_ENERGY'],1)
fl=flags.get('FLAG_SI_TRAINER_'+t['id'].removeprefix('TRAINER_SI_'))
if fl is None:
 table=Path('src/battle_setup.c').read_text();values=[int(x.strip(),16) for x in re.search(r'sSinnohTrainerFlags\[\] = \{(.*?)\}',table)[1].split(',')];fl=values[tid-864]
drive_until(lambda:read(sym['gMain']+4)==sym['CB2_Overworld']|1 and hasflag(fl),name='092_ordinary_trainer')
dismiss(30);assert getvar(vars['VAR_SI_PRISM_ENERGY'])==2
print('PASS ordinary trainer sees player, battles, records win and restores one Prism charge',flush=True)
# Produce a battery fixture for isolated Admin and Continue tests.
assert cmd('load '+base)=='ok';function('TrySavingData',0);cmd('f 1400 0')
assert cmd('battery .qa071/sinnoh_start.sav')=='131072'
p.stdin.close();p.wait()
