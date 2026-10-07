# Imported after helpers.py. Controlled battle fixture; does not test game balance.
action_funcs={int(line.split()[0],16)|1 for line in Path('.qa071/new.symbols').read_text().splitlines() if line.split()[-1]=='HandleInputChooseAction'}
def prepare_team():
 cmd("f 300 0")
 for slot in range(6):
  function('CreateScriptedWildMon',150,100,0)
  data=[read(sym['gParties']+600+i,1) for i in range(100)]
  for i,b in enumerate(data):write(sym['gParties']+slot*100+i,b,1)
  for j,move in enumerate([585,396,53,85]):function('SetMonMoveSlot',sym['gParties']+slot*100,move,j)
 write(sym['gPartiesCount'],6,1)
 function('HealPlayerParty')
 setvar(vars['VAR_HE_LEVEL_CAP'],0)
 setvar(vars['VAR_HE_BAG_RULES'],0)

def drive_tick():
 if hastask('Task_HandleSelectionMenuInput'):
  press(1);cmd('f 35 0');return
 if hastask('Task_HandleChooseMonInput'):
  active=[read(sym['gBattlerPartyIndexes']+i*2,2)for i in [0,2]]
  if any(i<6 and read(sym['gParties']+i*100+86,2)==0 for i in active):
   candidates=[i for i in range(1,6)if i not in active and read(sym['gParties']+i*100+86,2)>0]
   target=candidates[-1]if candidates else 0
   slot=read(sym['gPartyMenu']+9,1)
   if slot==target:press(1)
   elif slot==0:press(16)
   elif slot<target:press(128)
   else:press(64)
  else:press(2)
  cmd('f 35 0');return
 # Navigate the real action and move menus; don't edit the battle outcome.
 for battler in [0,2]:
  controller=read(sym['gBattlerControllerFuncs']+battler*4)
  if controller in action_funcs:
   pos=read(sym['gActionSelectionCursor']+battler,1)
   if pos&1:press(32)
   elif pos&2:press(64)
   else:press(1)
   cmd('f 20 0');return
  if controller==(sym['HandleInputChooseMove']|1):
   mon=sym['gBattleMons']+battler*140
   disabled=(read(mon+104)>>11)&1023
   opponent=sym['gBattleMons']+140
   types=[read(opponent+34+i,1)for i in range(3)]
   allowed=[]
   for i in range(4):
    move=read(mon+12+i*2,2)
    if not read(mon+37+i,1) or move==disabled:continue
    if(move==396 and 7 in types)or(move==85 and 4 in types):continue
    allowed.append(i)
   target=allowed[0]if allowed else 0
   pos=read(sym['gMoveSelectionCursor']+battler,1)
   if (pos^target)&1:press(16 if target&1 else 32)
   elif (pos^target)&2:press(128 if target&2 else 64)
   else:press(1)
   cmd('f 25 0');return

 press(1);cmd('f 65 0')

def drive_until(predicate,limit=2500,name='battle'):
 for i in range(limit):
  if predicate():return
  drive_tick()
 shot(name+'_failure');cmd('save .qa071/'+name+'_failure.state')
 print('DRIVER DEBUG',read(sym['gPartyMenu']+9,1),read(sym['gBattlerPartyIndexes'],2),[read(sym['gParties']+i*100+86,2)for i in range(6)],flush=True)
 reverse={v|1:k for k,v in sym.items()}
 print('TASKS',[reverse.get(read(sym['gTasks']+i*40),hex(read(sym['gTasks']+i*40))) for i in range(16)if read(sym['gTasks']+i*40+4,1)],flush=True)
 raise AssertionError(name+' did not reach its expected result')
