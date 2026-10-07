"""Import an actual 0.7.1 battery containing 70 emulator captures."""
exec(open('tools/qa_071/helpers.py').read())
assert cmd('batteryload tools/qa_071/fixtures/old071_quests70.sav')=='1'
cmd('f 2200 0');press(8);cmd('f 300 0');press(1);cmd('f 300 0');press(1);cmd('f 700 0')
quests=json.load(open('docs/legend_quests.json'))
assert getvar(vars['VAR_HE_SAVE_REVISION'])==2
assert all(hasflag(q['flag']) for q in quests[:70])
assert not any(hasflag(q['flag']) for q in quests[70:])
assert getvar(vars['VAR_HE_ACTIVE_QUEST'])==0
print('PASS 70 actual old-ROM captures recovered from battery; 11 incomplete remain incomplete',flush=True)
cmd('save .qa071/quests70_migrated072.state')
# Synthetic phantom old flags on an otherwise empty capture record.
for q in quests:flag(q['flag'],False)
for q in quests:flag(q['legacy_flag'],False)
# Clear both Pokédex arrays and SaveBlock1 seen mirrors via native ResetPokedex.
function('ResetPokedex')
for number in [0x7A,0x7B,0x74]:flag(number)
flag(0x36);setvar(vars['VAR_HE_SAVE_REVISION'],0)
original=bytes(read(read(sym['gSaveBlock1Ptr'])+4720+i,1)for i in range(0x200//8))
function('HeMigrateQuestProgress')
assert original==bytes(read(read(sym['gSaveBlock1Ptr'])+4720+i,1)for i in range(0x200//8))
assert hasflag(quests[0]['flag'])
assert not any(hasflag(q['flag']) for q in quests[26:]),'Campaign flags became captures'
function('HeMigrateQuestProgress')
assert hasflag(quests[0]['flag']) and getvar(vars['VAR_HE_SAVE_REVISION'])==2
print('PASS campaign bits preserved, unused legacy marker recovered, phantom captures rejected, migration idempotent',flush=True)
p.stdin.close();p.wait()
