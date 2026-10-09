"""Native story battles with a controlled team and warps; not a balance playthrough."""
helper=open('tools/qa_071/helpers.py').read()
exec(helper)
exec(open('tools/qa_071/battle_driver.py').read())
import sys
resume_mode='--resume-stage20' in sys.argv
champion_mode='--resume-champion' in sys.argv
if champion_mode:
 assert cmd('batteryload .qa071/qa_champion_ready.sav')=='1'
 cmd('f 2200 0');press(8);cmd('f 300 0');press(1);cmd('f 300 0');press(1);cmd('f 700 0')
elif resume_mode:
 assert cmd('batteryload .qa071/qa_stage20.sav')=='1'
 cmd('f 2200 0');press(8);cmd('f 300 0');press(1);cmd('f 300 0');press(1);cmd('f 700 0')
 assert getvar(vars['VAR_SI_STAGE'])==20
else:assert cmd('load .qa071/sinnoh_complete.state')=='ok'
campaign=json.load(open('docs/sinnoh_campaign.json'))
def talk(name,script):
 m=json.load(open('data/maps/'+name+'/map.json'));npc=next(o for o in m['object_events']if o['script']==script)
 warp(name,npc['x'],npc['y']+1);press(64);press(1);cmd('f 100 0')
def stage(n):return getvar(vars['VAR_SI_STAGE'])==n
prepare_team()
fields=re.search(r'enum MonData\s*\{(.*?)\};',Path('include/pokemon.h').read_text(),re.S)
if not fields:fields=re.search(r'enum MonData\s*\{(.*?)\};',Path('include/constants/pokemon.h').read_text(),re.S)
keys=re.findall(r'\b(MON_DATA_\w+)\b',re.sub(r'//[^\n]*','',fields[1]));met=keys.index('MON_DATA_MET_LEVEL')
for i in range(6):
 write(0x0203D000,5,1);function('SetMonData',sym['gParties']+i*100,met,0x0203D000)
 assert function('GetMonData3',sym['gParties']+i*100,keys.index('MON_DATA_SPECIES'),0)==150
if not resume_mode and not champion_mode:
 for f in campaign['trainer_flags'][14:]:flag(f,False)
for b in campaign['beats']:
 key,name,person,required,target,*_=b
 if champion_mode or (resume_mode and required<20):continue
 if required==15 and stage(14):talk('CelesticTown','SI_C_CELESTIC');dismiss(60);assert stage(15)
 if required==17 and stage(16):talk('CanalaveLibrary','SI_C_LIBRARY');dismiss(80);assert stage(17)
 if required==21 and stage(20):
  arrival=json.load(open('docs/sinnoh_arrivals.json'))['SpearPillar'];warp('SpearPillar',*arrival)
  for _ in range(200):
   if stage(21):break
   press(1);cmd('f 45 0')
  shot('sinnoh_rift_check');cmd('save .qa071/sinnoh_rift_check.state');assert stage(21),('rift cutscene',getvar(vars['VAR_SI_STAGE']),hex(read(sym['sGlobalScriptContext']+8)));dismiss(20);shot('sinnoh_rift')
 assert stage(required),(key,getvar(vars['VAR_SI_STAGE']))
 function('HealPlayerParty');talk(name,'SI_C_'+key)
 drive_until(lambda:stage(target),name='Sinnoh_'+key);dismiss(80)
 if key=='CYRUS_FINAL':
  dismiss(160);assert stage(23);shot('sinnoh_restoration')
 else:assert stage(target),(key,getvar(vars['VAR_SI_STAGE']))
 cmd('save .qa071/campaign_step_'+str(getvar(vars['VAR_SI_STAGE']))+'.state')
 print('PASS battle and story',key,'stage',getvar(vars['VAR_SI_STAGE']),flush=True)
assert getvar(vars['VAR_SI_BADGES'])==8
assert all(hasflag('FLAG_BADGE0'+str(i)+'_GET')for i in range(1,9))
assert stage(29)
shot('sinnoh_champion');cmd('save .qa071/sinnoh_champion.state')
function('AddBagItem',4,50)
for species,level,name in campaign['legends']:
 flagname='FLAG_SI_CAUGHT_'+species.upper();assert not hasflag(flagname)
 talk(name,'SI_C_Encounter_'+species.upper())
 for _ in range(120):
  if read(sym['gBattlerControllerFuncs']) in action_funcs:break
  press(1);cmd('f 60 0')
 else:raise AssertionError('wild battle did not start '+species)
 assert read(sym['gBattleMons']+140+44,1)==level,(species,'level')
 write(sym['gBallToDisplay'],4,2);press(256);cmd('f 400 0')
 for _ in range(1500):
  if hasflag(flagname):break
  if read(sym['gMain']+4)==(sym['BattleMainCB2']|1)and read(sym['gBattlerControllerFuncs'])in action_funcs:write(sym['gBallToDisplay'],4,2);press(256)
  else:press(2)
  cmd('f 80 0')
 if not hasflag(flagname):
  shot('sinnoh_capture_failure');cmd('save .qa071/sinnoh_capture_failure.state')
  rev={v|1:k for k,v in sym.items()};print('CAPTURE DEBUG',species,rev.get(read(sym['gMain']+4)),read(sym['gBattleOutcome'],1),hex(read(sym['sGlobalScriptContext']+8)),[rev.get(read(sym['gTasks']+i*40),hex(read(sym['gTasks']+i*40)))for i in range(16)if read(sym['gTasks']+i*40+4,1)],flush=True)
 assert hasflag(flagname),species
 dismiss(60);shot('sinnoh_capture_'+species.lower());print('PASS actual capture',species,level,flush=True)
function('TrySavingData',0,0,0);cmd('f 1400 0');cmd('battery .qa071/sinnoh_campaign.sav');cmd('save .qa071/sinnoh_campaign.state')
print('PASS eight badges, complete story, ten native captures',flush=True)
p.stdin.close();p.wait()
