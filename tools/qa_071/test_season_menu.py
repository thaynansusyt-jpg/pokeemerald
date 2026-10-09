"""Exercise the real New Game season selector, including unavailable Unova."""
exec(open('tools/qa_071/helpers.py').read())
cmd('f 2200 0');press(8);cmd('f 300 0');press(1);cmd('f 400 0');shot('newgame_menu')
press(1);cmd('f 150 0');shot('season_selector');cmd('save .qa071/season_selector.state')
print('cb2',hex(read(sym['gMain']+4)),hex(sym['SeasonsMain']|1),flush=True)
assert read(sym['gMain']+4)==sym['SeasonsMain']|1
press(128);press(128);press(1);cmd('f 80 0');shot('season_unova_unavailable')
assert read(sym['gMain']+4)==sym['SeasonsMain']|1,'Unova must not start a fake season'
press(64);press(1);cmd('f 80 0');shot('season_rules')
assert read(sym['gMain']+4)==sym['RulesMain']|1
press(2);cmd('f 50 0');assert read(sym['gMain']+4)==sym['SeasonsMain']|1
press(1);press(64);press(1);cmd('f 180 0');shot('sinnoh_rowan_intro');cmd('save .qa071/rowan_intro.state')
print('PASS real season menu: Hoenn/Sinnoh, unavailable Unova, B returns, Sinnoh intro',flush=True)
p.stdin.close();p.wait()
