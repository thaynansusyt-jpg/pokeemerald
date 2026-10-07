"""Actual 81 capture outcomes, with prepared locations/items and Master Balls."""
exec(open('tools/qa_071/helpers.py').read())
exec(open('tools/qa_071/battle_driver.py').read())
cmd('load .qa071/migrated.state');prepare_team();flag('FLAG_IS_CHAMPION');cmd('rtc 1791410400')
# Research requirements still run through the real quest functions and field script.
items={m[1]:int(m[2],0)for m in re.finditer(r'(ITEM_\w+)\s*=\s*(0x[0-9A-Fa-f]+|\d+)',Path('include/constants/items.h').read_text())}
assert function('AddBagItem',4,200)
for q in json.load(open('docs/legend_quests.json')):
 flag(q['flag'],False)
 write(sym['gSpecialVar_0x8005'],q['generation']-1,2)
 callnative('HeQuestNext');callnative('HeQuestAccept')
 assert getvar(vars['VAR_HE_ACTIVE_QUEST'])==q['id'],(q['species'],'accept order')
 item=items['ITEM_'+q['evidence']];function('AddBagItem',item,1)
 npc=next(o for o in json.load(open('data/maps/'+q['research']+'/map.json'))['object_events']if o.get('script')=='HE_QuestResearch')
 warp(q['research'],npc['x'],npc['y']+1);runscript('HE_QuestResearch');dismiss(45)
 assert getvar(vars['VAR_HE_QUEST_STAGE'])==2,(q['species'],'research')
 function('HealPlayerParty')
 npc=next(o for o in json.load(open('data/maps/'+q['habitat']+'/map.json'))['object_events']if o.get('script')=='HE_QuestHabitat')
 warp(q['habitat'],npc['x'],npc['y']+1);runscript('HE_QuestHabitat')
 for _ in range(1200):
  if read(sym['gMain']+4)==(sym['BattleMainCB2']|1)and read(sym['gBattlerControllerFuncs']) in action_funcs:break
  press(1);cmd('f 30 0')
 else:
  shot('capture_start_failure');cmd('save .qa071/capture_failure.state');print('capture debug',getvar(vars['VAR_HE_ACTIVE_QUEST']),getvar(vars['VAR_HE_QUEST_STAGE']),read(sym['gSpecialVar_Result'],2),read(sym['gBattleTypeFlags']),hex(read(sym['sGlobalScriptContext']+8)),flush=True);raise AssertionError(q['species']+' encounter did not start')
 write(sym['gBallToDisplay'],4,2);press(256);cmd('f 400 0')
 for _ in range(1500):
  if hasflag(q['flag']):break
  if read(sym['gMain']+4)==(sym['BattleMainCB2']|1)and read(sym['gBattlerControllerFuncs']) in action_funcs:
   write(sym['gBallToDisplay'],4,2);press(256)
  else:press(2)
  cmd('f 60 0')
 else:
  shot('capture_'+q['species']+'_failure');raise AssertionError(q['species']+' capture did not complete')
 assert getvar(vars['VAR_HE_ACTIVE_QUEST'])==0
 if q['id'] in [1,10,20,40,60,81]:shot('capture_'+q['species'].lower())
 cmd('save .qa071/quests_progress.state');Path('.qa071/quests_progress.json').write_text(json.dumps({'last':q['id']}))
 print('PASS actual research and capture',q['id'],q['species'],flush=True)
 dismiss(30)
print('PASS all 81 actual captures and completion flags',flush=True)
p.stdin.close();p.wait()
