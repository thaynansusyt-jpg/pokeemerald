exec(open('tools/qa_071/helpers.py').read())
cmd('load .qa071/migrated.state');cmd('f 300 0')
addr=read(sym['gSaveBlock2Ptr'])+21;write(addr,read(addr,1)&~8,1)
function('TrySavingData',0);cmd('f 2000 0');assert read(sym['gSaveAttemptStatus'],1)==1
assert cmd('battery .qa071/english072.sav')=='131072'
assert cmd('batteryload .qa071/english072.sav')=='1'
cmd('f 2200 0');press(8);cmd('f 300 0');press(1);cmd('f 300 0');press(1);cmd('f 700 0')
assert not(read(read(sym['gSaveBlock2Ptr'])+21,1)&8),'EN not saved'
print('PASS EN survives real 128KiB battery save -> reset -> Continue',flush=True)
addr=read(sym['gSaveBlock2Ptr'])+21;write(addr,read(addr,1)|8,1)
function('TrySavingData',0);cmd('f 2000 0');assert read(sym['gSaveAttemptStatus'],1)==1
assert cmd('battery .qa071/portuguese072.sav')=='131072'
assert cmd('batteryload .qa071/portuguese072.sav')=='1'
cmd('f 2200 0');press(8);cmd('f 300 0');press(1);cmd('f 300 0');press(1);cmd('f 700 0')
assert read(read(sym['gSaveBlock2Ptr'])+21,1)&8,'PT not saved'
print('PASS PT-BR survives real 128KiB battery save -> reset -> Continue',flush=True)
p.stdin.close();p.wait()
