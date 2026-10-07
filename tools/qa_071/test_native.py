exec(open('tools/qa_071/helpers.py').read())
cmd('load .qa071/migrated.state')
# Validate idempotence, completed-save guards and all quest species in this build.
for state in [1,2,3,4,5,6,7,8]:
 setvar(vars['VAR_RUSTBORO_CITY_STATE'],state);callnative('HeRepairProgression');assert getvar(vars['VAR_RUSTBORO_CITY_STATE'])==state
for guard in ['FLAG_DEVON_GOODS_STOLEN','FLAG_RECOVERED_DEVON_GOODS','FLAG_RECEIVED_POKENAV','FLAG_HE_HARBOR_SAFE']:
 cmd('load .qa071/migrated.state');setvar(vars['VAR_RUSTBORO_CITY_STATE'],0);flag(guard);callnative('HeRepairProgression');assert getvar(vars['VAR_RUSTBORO_CITY_STATE'])==0,guard
print('PASS save migration is idempotent and leaves later states untouched',flush=True)
cmd('load .qa071/migrated.state');setvar(vars['VAR_RUSTBORO_CITY_STATE'],0);flag('FLAG_BADGE01_GET',False);callnative('HeRepairProgression');assert getvar(vars['VAR_RUSTBORO_CITY_STATE'])==0
print('PASS pre-Roxanne save is not advanced',flush=True)
# Harbor uses its own three-member team and Rocket portrait for every difficulty.
for d,expected in [(0,[16,16,17]),(1,[18,18,19]),(2,[20,20,21])]:
 cmd('load .qa071/migrated.state');setvar(0x40DB,d);function('CreateNPCTrainerParty',sym['gParties']+600,852)
 levels=[function('GetMonData3',sym['gParties']+600+100*i,64,0)for i in range(3)];assert levels==expected,(d,levels)
 print('PASS Vesper harbor profile',d,levels,flush=True)
cmd('load .qa071/migrated.state');cmd('rtc 1791410400') # 2026-10-07 22:00 UTC
quests=json.load(open('docs/legend_quests.json'))
for q in quests:
 warp(q['habitat'],0,0);flag(q['flag'],False);setvar(0x40FB,q['id']);setvar(0x40FC,2)
 callnative('HeQuestPrepareEncounter');assert read(sym['gSpecialVar_Result'],2)==3,(q['species'],read(sym['gSpecialVar_Result'],2))
 assert function('GetMonData3',sym['gParties']+600,64,0)==60+q['generation']*2
 assert function('GetMonData3',sym['gParties']+600,18,0)>0
print('PASS all 81 native quest encounters prepare at the required levels',flush=True)
# Wrong time and incomplete research must reject without creating a new encounter.
q=next(q for q in quests if q['night']);warp(q['habitat'],0,0);flag(q['flag'],False);setvar(0x40FB,q['id']);setvar(0x40FC,1);callnative('HeQuestPrepareEncounter');assert read(sym['gSpecialVar_Result'],2)==1
setvar(0x40FC,2);cmd('rtc 1791374400');callnative('HeQuestPrepareEncounter');assert read(sym['gSpecialVar_Result'],2)==2
write(sym['gBattleOutcome'],1,1);callnative('HeQuestComplete');assert getvar(0x40FB)==q['id'];write(sym['gBattleOutcome'],7,1);callnative('HeQuestComplete');assert getvar(0x40FB)==0
callnative('HePrepareShinyRayquaza');mon=sym['gParties']+600;assert function('GetMonData3',mon,18,0)==384 and function('GetMonData3',mon,11,0)==1 and function('GetMonData3',mon,64,0)==80
print('PASS quest research/night/retry/capture conditions and shiny Rayquaza 80',flush=True)
p.stdin.close();p.wait()
