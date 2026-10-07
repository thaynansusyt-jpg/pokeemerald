"""Real League and Rainbow battles with prepared flags, warps and level-100 team."""
exec(open('tools/qa_071/helpers.py').read())
exec(open('tools/qa_071/battle_driver.py').read())
cmd('load .qa071/migrated.state');prepare_team()
for n in range(1,9):flag(f'FLAG_BADGE0{n}_GET')
flag('FLAG_HE_FINAL_ROCKET',False);
warp('EverGrandeCity',11,24);runscript('HE_FinalCentral')
drive_until(lambda:hasflag('FLAG_HE_FINAL_ROCKET'),name='Campaign_Giovanni');dismiss(50)
print('PASS real campaign Giovanni battle -> final network shut down',flush=True)
flag('FLAG_HE_CAMPAIGN_COMPLETE',False)
for name in ['SIDNEY','PHOEBE','GLACIA','DRAKE']:flag('FLAG_DEFEATED_ELITE_4_'+name,False)
for name in ['Sidney','Phoebe','Glacia','Drake']:
 function('HealPlayerParty')
 warp('EverGrandeCity_'+name+'sRoom',6,12)
 runscript('EverGrandeCity_'+name+'sRoom_EventScript_'+name)
 drive_until(lambda:hasflag('FLAG_DEFEATED_ELITE_4_'+name.upper()),name=name)
 dismiss(50);shot('league_'+name.lower());print('PASS real battle and victory flag',name,flush=True)
cmd('save .qa071/league_drake.state');function('HealPlayerParty');warp('EverGrandeCity_ChampionsRoom',6,12)
drive_until(lambda:hasflag('FLAG_HE_CAMPAIGN_COMPLETE'),name='Wallace')
print('PASS real Wallace victory -> Eclipse epilogue',flush=True)
drive_until(lambda:hasflag('FLAG_IS_CHAMPION'),limit=3000,name='Hall_of_Fame')
shot('hall_of_fame');cmd('save .qa071/champion072.state')
print('PASS Champion flag through real Hall of Fame sequence',flush=True)
# Test the entire authored Rainbow arc using real scripts and real battle results.
def arc(mapname,script,stage,x=5,y=6):
 warp(mapname,x,y);function('HealPlayerParty');runscript(script)
 drive_until(lambda:getvar(vars['VAR_HE_RAINBOW_STAGE'])==stage,name=script)
 dismiss(40);cmd('save .qa071/rr_stage_'+str(stage)+'.state');shot(script.lower());print('PASS',script,'-> stage',stage,flush=True)
setvar(vars['VAR_HE_RAINBOW_STAGE'],0)
arc('LittlerootTown_ProfessorBirchsLab','HE_RainbowStart',1)
arc('MeteorFalls_1F_1R','HE_RainbowMeteor',2)
setvar(vars['VAR_MOSSDEEP_CITY_STATE'],3);setvar(vars['VAR_MOSSDEEP_SPACE_CENTER_STATE'],3)
arc('MossdeepCity_SpaceCenter_2F','HE_RainbowSpace',3)
arc('AbandonedShip_Rooms_1F','HE_RainbowShip',4)
function('HealPlayerParty');warp('SkyPillar_Top',9,9);runscript('HE_RainbowFinal')
drive_until(lambda:getvar(vars['VAR_HE_RAINBOW_STAGE'])==5,name='Rainbow_Giovanni')
print('PASS real Rainbow Giovanni battle -> free Rayquaza',flush=True)
# Decline without losing access, then retry and catch through the actual ball shortcut.
for i in range(160):
 if hastask('Task_HandleYesNoInput'):break
 press(1);cmd('f 20 0')
assert hastask('Task_HandleYesNoInput');press(2);cmd('f 100 0')
assert getvar(vars['VAR_HE_RAINBOW_STAGE'])==5
function('AddBagItem',4,10)
write(sym['gLastUsedBall'],4,2)
runscript('HE_RainbowFinal')
for i in range(1200):
 if read(sym['gBattlerControllerFuncs']) in action_funcs:break
 press(1);cmd('f 30 0')
else:raise AssertionError('Rayquaza encounter did not start')
write(sym['gBallToDisplay'],4,2);shot('rayquaza_shiny_encounter');press(256);cmd('f 500 0')
for i in range(1800):
 if getvar(vars['VAR_HE_RAINBOW_STAGE'])==6:break
 press(2);cmd('f 60 0')
assert getvar(vars['VAR_HE_RAINBOW_STAGE'])==6,'Shiny Rayquaza capture did not conclude'
shot('rainbow_ending');cmd('save .qa071/postgame072.state')
print('PASS decline -> retry -> actual Shiny Rayquaza capture -> Rainbow ending',flush=True)
p.stdin.close();p.wait()
