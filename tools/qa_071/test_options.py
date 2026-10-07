exec(open('tools/qa_071/helpers.py').read())
cmd('batteryload .qa071/old07_trapped.sav');cmd('f 2200 0');press(8);cmd('f 300 0');press(1);cmd('f 300 0')
# Main menu: Continue, New Game, Options.
press(128);press(128);press(1);cmd('f 250 0');shot('options_before')
for i in range(6):press(128)
press(16);shot('options_english');press(2);cmd('f 400 0');shot('main_english')
assert not(read(read(sym['gSaveBlock2Ptr'])+21,1)&8),'option not committed'
press(64);press(1);cmd('f 220 0');shot('rules_english_real')
for i in range(6):press(128)
press(1);cmd('f 100 0');shot('opening_english_real');press(8);cmd('f 300 0');shot('birch_english_real')
assert not(read(read(sym['gSaveBlock2Ptr'])+21,1)&8),'Birch reset selected language'
print('PASS real title -> Options EN -> New Game -> rules -> opening -> Birch',flush=True)
p.stdin.close();p.wait()
