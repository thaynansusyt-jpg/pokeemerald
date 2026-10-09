"""Real Sinnoh event interactions and battles; warped fixture, not a balance playthrough."""
exec(open('tools/qa_071/helpers.py').read())
exec(open('tools/qa_071/battle_driver.py').read().replace("'CreateScriptedWildMon',150,100,0", "'CreateScriptedWildMon',150,18,0"))
cmd('load .qa071/sinnoh_new_game.state')
def talk(mapname,script):
 m=json.load(open('data/maps/'+mapname+'/map.json'));npc=next(o for o in m['object_events']if o['script']==script)
 warp(mapname,npc['x'],npc['y']+1)
 press(64);press(1);cmd('f 100 0')
def stage(n):return getvar(vars['VAR_SI_STAGE'])==n
assert stage(1)
talk('SandgemLab','SI_Rowan');dismiss(100);assert stage(2)
prepare_team()
for k in range(14):flag(0x36+k,False)
talk('LakeVerity','SI_Lake');drive_until(lambda:stage(3),name='Sinnoh_Lake');dismiss(100)
assert function('HasTrainerBeenFought',864)==1
shot('sinnoh_lake_victory');print('PASS Rowan -> real Galactic lake battle -> stage 3',flush=True)
talk('JubilifeCity_PokemonSchool','SI_Looker');dismiss(100);assert stage(4)
talk('OreburghMuseum','SI_Museum');dismiss(100);assert getvar(vars['VAR_SI_CLUES'])==1
function('HealPlayerParty');talk('OreburghMine_B2F','SI_Mine')
drive_until(lambda:hastask('Task_HandleMultichoiceInput'),name='Sinnoh_Caligo')
assert stage(5);assert function('HasTrainerBeenFought',865)==1
# Wrong answer cannot clear collector. Then cancel and resume.
press(1);dismiss(12);assert stage(5)
talk('OreburghMine_B2F','SI_Mine')
for i in range(40):
 if hastask('Task_HandleMultichoiceInput'):break
 press(1);cmd('f 50 0')
press(2);dismiss(10);assert stage(5)
talk('OreburghMine_B2F','SI_Mine')
def choose(index):
 for i in range(40):
  if hastask('Task_HandleMultichoiceInput'):break
  press(1);cmd('f 50 0')
 else:raise AssertionError('missing puzzle choice')
 for i in range(index):press(128)
 press(1);cmd('f 50 0')
choose(2);choose(0);choose(1);dismiss(35);assert stage(6)
shot('sinnoh_mine_resolved');print('PASS Caligo battle; wrong/cancel preserve puzzle; C A B resolves collector',flush=True)
function('HealPlayerParty');talk('OreburghCity_Gym','SI_Roark')
drive_until(lambda:stage(7),name='Sinnoh_Roark');dismiss(50)
assert getvar(vars['VAR_SI_BADGES'])==1 and hasflag('FLAG_BADGE01_GET')
assert function('HasTrainerBeenFought',866)==1
assert not hasflag('FLAG_BADGE02_GET') and not hasflag('FLAG_IS_CHAMPION')
assert getvar(vars['VAR_SI_CHOICE'])==1
shot('sinnoh_roark_badge');cmd('save .qa071/sinnoh_complete.state')
print('PASS real Roark battle -> Coal Badge, TM and chapter epilogue; Hoenn champion remains unset',flush=True)
p.stdin.close();p.wait()
