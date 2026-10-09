"""Actual Poké Ball throws: Easy Catch guarantee and the Lake Prism message/charge."""
exec(open('tools/qa_071/helpers.py').read())
action_funcs={int(line.split()[0],16)|1 for line in Path('.qa071/new.symbols').read_text().splitlines() if line.split()[-1]=='HandleInputChooseAction'}
base='.qa071/sinnoh_new_game.state'
def wild(species,level):
 addr=0x0203F000;ctx=sym['sGlobalScriptContext']
 data=bytes([0x69,0xB6])+struct.pack('<HBHHBH',species,level,0,0,0,0)+bytes([0xB7,0x6B,0x02])
 for i,b in enumerate(data):write(addr+i,b,1)
 write(ctx,0,1);write(ctx+1,1,1);write(ctx+4,0);write(ctx+8,addr);write(sym['sGlobalScriptContextStatus'],0,1)
 for _ in range(100):
  if read(sym['gMain']+4)==sym['BattleMainCB2']|1 and read(sym['gBattlerControllerFuncs']) in action_funcs:return
  press(1);cmd('f 60 0')
 raise AssertionError('wild did not reach action menu')
def finish():
 for _ in range(400):
  if read(sym['gMain']+4)==sym['CB2_Overworld']|1 and read(sym['gBattleOutcome'],1)==7:return
  press(2);cmd('f 70 0')
 shot('092_capture_failed');raise AssertionError('capture did not return to field')
assert cmd('load '+base)=='ok';function('AddBagItem',1,10);flag('FLAG_HE_EASY_CATCH');setvar(vars['VAR_SI_STAGE'],2);function('SiPrismRepair')
wild(483,70)
assert read(sym['gBattleMons']+140+42,2)==read(sym['gBattleMons']+140+46,2),'Easy Catch must work at full HP'
before=getvar(vars['VAR_SI_PRISM_ENERGY']);write(sym['gBallToDisplay'],1,2);press(256);cmd('f 300 0');finish()
assert getvar(vars['VAR_SI_PRISM_ENERGY'])==before
shot('092_easy_catch');print('PASS actual Easy Catch: one ordinary Poke Ball catches full-HP Lv70 Dialga; no Prism charge spent',flush=True)
assert cmd('load '+base)=='ok';function('AddBagItem',1,10);setvar(vars['VAR_SI_STAGE'],2);function('SiPrismRepair');flag('FLAG_HE_EASY_CATCH',False)
wild(396,5);write(sym['gBattleMons']+140+80,1)
write(sym['gBallToDisplay'],1,2);press(256)
announced=False
for _ in range(100):
 if read(sym['gSiPrismBoost'],1)==2:
  cmd('f 35 0');shot('092_prism_throw');announced=True;break
 cmd('f 2 0')
assert announced,'Prism boost was not announced'
finish()
assert getvar(vars['VAR_SI_PRISM_ENERGY'])==2
shot('092_prism_caught')
print('PASS actual Prism: battle announces bonus, capture completes, exactly one charge spent',flush=True)
p.stdin.close();p.wait()
