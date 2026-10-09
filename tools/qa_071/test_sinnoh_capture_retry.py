"""Native escape -> retry, and reload all ten capture flags."""
source=open('tools/qa_071/helpers.py').read().replace("'.qa071/new.symbols'","'../releases0900/public.symbols'").replace("'pokemon_hoenn_expansion_gen7.gba'","'../releases0900/Pokemon_Hoenn_Expansion_0.9.0_Sinnoh_Teste.gba'")
exec(source)
action_funcs={int(line.split()[0],16)|1 for line in Path('../releases0900/public.symbols').read_text().splitlines()if line.split()[-1]=='HandleInputChooseAction'}
assert cmd('batteryload .qa071/qa_champion_ready.sav')=='1'
cmd('f 2200 0');press(8);cmd('f 300 0');press(1);cmd('f 300 0');press(1);cmd('f 700 0')
npc=next(o for o in json.load(open('data/maps/SpearPillar/map.json'))['object_events']if o['script']=='SI_C_Encounter_DIALGA')
def begin():
 warp('SpearPillar',npc['x'],npc['y']+1);press(64);press(1)
 for _ in range(120):
  if read(sym['gMain']+4)==sym['BattleMainCB2']|1 and read(sym['gBattlerControllerFuncs'])in action_funcs:return
  press(1);cmd('f 60 0')
 raise AssertionError('Encounter did not start')
begin()
for _ in range(100):
 if read(sym['gMain']+4)!=sym['BattleMainCB2']|1:break
 if read(sym['gBattlerControllerFuncs'])in action_funcs:
  pos=read(sym['gActionSelectionCursor'],1)
  if not(pos&1):press(16)
  elif not(pos&2):press(128)
  else:press(1)
 else:press(2)
 cmd('f 80 0')
assert read(sym['gBattleOutcome'],1)==4
for _ in range(50):press(1);cmd('f 30 0')
assert not hasflag('FLAG_SI_CAUGHT_DIALGA')
begin();assert read(sym['gBattleMons']+140+44,1)==70
print('PASS escaped Dialga remains uncaptured and actual second encounter starts',flush=True)
# Independent, fully saved campaign from the capture test.
assert cmd('batteryload .qa071/sinnoh_campaign.sav')=='1'
cmd('f 2200 0');press(8);cmd('f 300 0');press(1);cmd('f 300 0');press(1);cmd('f 700 0')
assert getvar(vars['VAR_SI_STAGE'])==29 and getvar(vars['VAR_SI_BADGES'])==8
for species,level,name in json.load(open('docs/sinnoh_campaign.json'))['legends']:assert hasflag('FLAG_SI_CAUGHT_'+species.upper())
print('PASS reset -> Continue preserves eight badges, ending and ten captures',flush=True)
p.stdin.close();p.wait()
