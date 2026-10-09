"""Native roof movement and season-specific presentation/save checks."""
exec(open('tools/qa_071/helpers.py').read())
assert cmd('load .qa071/rowan_intro.state')=='ok'
cmd('f 800 0');shot('sinnoh_rowan_welcome')
for _ in range(30):
 press(1);cmd('f 50 0')
 if hastask('Task_NewGameBirchSpeech_ChooseGender'):break
shot('sinnoh_rowan_gender')
assert cmd('load .qa071/sinnoh_new_game.state')=='ok'
# These exact roof cells were reported walkable; test actual player movement.
warp('TwinleafTown',4,4);assert read(sym['gMain']+4)==sym['CB2_Overworld']|1
obj=sym['gObjectEvents']+read(sym['gPlayerAvatar']+5,1)*36;before=(read(obj+16,2),read(obj+18,2))
cmd('f 40 128');cmd('f 10 0');after=(read(obj+16,2),read(obj+18,2));assert before==after,(before,after)
shot('sinnoh_roof_blocked');print('PASS real movement cannot enter Twinleaf roof',flush=True)
function('TrySavingData',0);cmd('f 1400 0');assert cmd('battery .qa071/sinnoh_start.sav')=='131072'
assert cmd('batteryload .qa071/sinnoh_start.sav')=='1'
cmd('f 2200 0');press(8);cmd('f 300 0');press(1);cmd('f 300 0');press(1);cmd('f 500 0')
shot('sinnoh_continue_probe');print('SAVE PROBE',getvar(vars['VAR_HE_SEASON']),getvar(vars['VAR_SI_STAGE']),hex(read(sym['gMain']+4)),flush=True)
assert getvar(vars['VAR_HE_SEASON'])==1 and getvar(vars['VAR_SI_STAGE'])==1
assert read(sym['gMapHeader'])==sym['SiTwinleafTown_Layout']
print('PASS Sinnoh save -> reset -> Continue',flush=True)
# With a saved Sinnoh season, choose a fresh Hoenn season and verify naming icon.
assert cmd('batteryload .qa071/sinnoh_start.sav')=='1'
cmd('f 2200 0');press(8);cmd('f 300 0');press(1);cmd('f 300 0');press(128);press(1);cmd('f 150 0')
assert read(sym['gMain']+4)==sym['SeasonsMain']|1
press(1);press(64);press(1);cmd('f 150 0')
# Skip Hoenn opening using its supported START control.
press(8);cmd('f 150 0')
for _ in range(180):
 if hastask('Task_NewGameBirchSpeech_ChooseGender'):break
 press(1);cmd('f 60 0')
else:raise AssertionError('Hoenn gender screen missing')
shot('hoenn_gender_preserved');assert function('SiNamingSeason')==0
press(128);press(1)
for _ in range(100):
 if hastask('Task_NamingScreen'):break
 press(1);cmd('f 60 0')
else:raise AssertionError('Hoenn naming missing')
shot('hoenn_may_naming_preserved');assert function('SiNamingSeason')==0
print('PASS Hoenn New Game after Sinnoh save preserves Brendan/May season',flush=True)
p.stdin.close();p.wait()
