exec(open('tools/qa_071/helpers.py').read())
cmd('load .qa071/migrated.state')
chapters=json.load(open('docs/HOENN_CAMPAIGN.json'))
def wait_menu():
 for _ in range(160):
  if hastask('Task_HandleMultichoiceInput'):cmd('f 25 0');return
  press(1);cmd('f 15 0')
 raise AssertionError('menu not reached')
def choose(index):
 for _ in range(index):press(128)
 press(1);cmd('f 20 0')
# Each phase enters the real field script with its prerequisite badge and defeated
# guard, then uses actual button input for the priority and decoder menus.
for c in chapters['chapters']:
 cmd('load .qa071/migrated.state');flag(c['badge']);setvar(vars['VAR_HE_SCENE'],99)
 trainer={'Thermal':855,'Supply':856,'Forest':857,'Orbit':858,'Ocean':859}[c['key']]
 flag(0x500+trainer)
 pos=chapters['placements']['HE_'+c['key']];warp(pos['map'],pos['x'],pos['y']+1)
 runscript('HE_'+c['key']);wait_menu();choose(0)
 for index in c['pattern']:wait_menu();choose(index)
 dismiss(80);assert hasflag(c['flag']),c['key']
 assert getvar(vars['VAR_HE_RESCUES'])==1,(c['key'],'rescue priority overwritten')
 shot('puzzle_'+c['key']);print('PASS',c['key'],'priority + real decoder + completion',flush=True)
# Cancel and wrong input must not commit completion or rewards; retry works.
cmd('load .qa071/migrated.state');flag('FLAG_BADGE03_GET');flag(0x500+855);setvar(vars['VAR_HE_SCENE'],99);warp('LavaridgeTown',7,8)
runscript('HE_Thermal');wait_menu();choose(0);wait_menu();choose(0);dismiss(60)
assert not hasflag('FLAG_HE_THERMAL_SAFE') and getvar(vars['VAR_HE_RESCUES'])==0
runscript('HE_Thermal');wait_menu();press(2);cmd('f 100 0');assert not hasflag('FLAG_HE_THERMAL_SAFE')
print('PASS wrong and cancel do not complete mission or award rescue',flush=True)
p.stdin.close();p.wait()
