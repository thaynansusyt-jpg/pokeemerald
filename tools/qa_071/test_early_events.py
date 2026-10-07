exec(open('tools/qa_071/helpers.py').read())
cmd('load .qa071/peeko.state');warp('RusturfTunnel',12,5)
press(16);press(1)
for i in range(250):
 press(1);cmd('f 45 0')
 if hasflag('FLAG_RECOVERED_DEVON_GOODS'):break
assert hasflag('FLAG_RECOVERED_DEVON_GOODS'),'Peeko rescue did not finish'
shot('rescue_finished');cmd('save .qa071/rescued.state');print('PASS actual thief battle and Peeko rescue complete',flush=True)
# Complete the real employee handover and the president's sequence.
warp('RustboroCity',30,11);press(64);press(1)
for i in range(350):
 press(1);cmd('f 35 0')
 if hasflag('FLAG_RECEIVED_POKENAV') and getvar(vars['VAR_DEVON_CORP_3F_STATE'])==1:break
assert hasflag('FLAG_RECEIVED_POKENAV'),'Stone scene did not finish'
# Finish any remaining dialogue and match-call tutorial separately.
shot('stone_pokenav');cmd('save .qa071/devon.state');print('PASS Devon handover gives PokeNav and unhides Briney/Peeko',flush=True)
assert not hasflag('FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY')and not hasflag('FLAG_HIDE_BRINEYS_HOUSE_PEEKO')
# Check Briney's real house intro reaches its Yes/No prompt instead of the closed gate.
warp('Route104_MrBrineysHouse',6,5);runscript('Route104_MrBrineysHouse_EventScript_Briney')
for i in range(150):
 if hastask('Task_HandleYesNoInput'):break
 press(1);cmd('f 20 0')
assert hastask('Task_HandleYesNoInput'),'Briney sailing prompt not available';shot('briney_ready');press(2);cmd('f 100 0')
print('PASS Briney sailing intro unlocked after migration + rescue + Devon',flush=True)
# The museum's actual fight now has Vesper's team and finishes harbor flags.
warp('SlateportCity_OceanicMuseum_2F',13,7);flag('FLAG_HE_HARBOR_SAFE',False);flag('FLAG_DELIVERED_DEVON_GOODS',False)
# On the map, use Captain Stern's script; the event spawns the official Rocket NPC.
runscript('SlateportCity_OceanicMuseum_2F_EventScript_CaptStern')
for i in range(1200):
 press(1);cmd('f 120 0')
 if hasflag('FLAG_HE_HARBOR_SAFE'):break
shot('harbor_diagnostic');print('harbor battle flags',read(sym['gBattleTypeFlags']), 'outcome',read(sym['gBattleOutcome'],1),flush=True);assert hasflag('FLAG_HE_HARBOR_SAFE')and hasflag('FLAG_DELIVERED_DEVON_GOODS'),'Harbor event did not finish'
shot('harbor_finished');print('PASS actual Vesper harbor battle -> delivery -> route clearance',flush=True)
p.stdin.close();p.wait()
