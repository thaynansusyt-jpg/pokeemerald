"""Verify public isolation and owner unlock using a native saved game."""
import sys
owner='--owner' in sys.argv
source=open('tools/qa_071/helpers.py').read()

exec(source)
assert cmd('batteryload .qa071/sinnoh_start.sav')=='1'
cmd('f 2200 0');press(8);cmd('f 300 0');press(1);cmd('f 300 0');press(1);cmd('f 700 0')
assert function('SiAdminUnlocked')==0
if owner:
 write(sym['gSiAdminKey'],0x1234,2);assert function('SiAdminUnlocked')==0
 write(sym['gSiAdminKey'],0x71A9,2);assert function('SiAdminUnlocked')==1
 cmd('f 1 256');cmd('f 1 264');cmd('f 80 0')
 assert hastask('DebugTask_HandleMenuInput_General')
 shot('sinnoh_owner_admin')
 print('PASS owner: wrong key rejected, private key unlocks native R+START menu',flush=True)
 print('CODEBREAKER',format(0x80000000|sym['gSiAdminKey'],'08X'),'71A9',flush=True)
else:
 assert 'gSiAdminKey' not in sym
 cmd('f 1 256');cmd('f 1 264');cmd('f 80 0')
 assert not hastask('DebugTask_HandleMenuInput_General')
 print('PASS public: no admin key symbol; R+START does not open debug',flush=True)
p.stdin.close();p.wait()
