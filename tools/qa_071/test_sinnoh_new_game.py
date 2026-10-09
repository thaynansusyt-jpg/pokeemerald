"""Real New Game -> gender/name -> Sinnoh starter and independent saved season."""
exec(open('tools/qa_071/helpers.py').read())
cmd('load .qa071/rowan_intro.state')
for i in range(150):
 if hastask('Task_NewGameBirchSpeech_ChooseGender'):break
 press(1);cmd('f 60 0')
else:raise AssertionError('gender menu not reached')
shot('sinnoh_gender_lucas');press(128);cmd('f 80 0');shot('sinnoh_gender_dawn');press(1)
for i in range(100):
 if hastask('Task_NamingScreen'):break
 press(1);cmd('f 60 0')
else:raise AssertionError('naming screen not reached')
shot('sinnoh_naming');press(8);cmd('f 80 0');press(1);cmd('f 150 0')
for i in range(200):
 if hastask('Task_HandleMultichoiceInput'):break
 press(1);cmd('f 60 0')
else:
 shot('sinnoh_start_failure');raise AssertionError('starter menu not reached')
shot('sinnoh_starter_menu');press(128);press(128);press(1);dismiss(100)
assert getvar(vars['VAR_HE_SEASON'])==1
assert getvar(vars['VAR_SI_STAGE'])==1
assert read(sym['gPartiesCount'],1)==1
assert read(sym['gParties']+84,1)==5,'starter must be level 5'
assert not hasflag('FLAG_IS_CHAMPION') and not hasflag('FLAG_BADGE01_GET')
assert read(sym['gMapHeader'])==sym['SiTwinleafTown_Layout']
assert hasflag('FLAG_SYS_POKEMON_GET') and hasflag('FLAG_SYS_POKEDEX_GET')
shot('sinnoh_new_game_twinleaf');cmd('save .qa071/sinnoh_new_game.state')
print('PASS full fresh Sinnoh New Game: Dawn, Twinleaf, Piplup Lv5, no Hoenn badges, own season',flush=True)
p.stdin.close();p.wait()
