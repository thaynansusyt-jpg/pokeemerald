"""Read the actual final intro dialogs and retain the original Hoenn journal."""
exec(open('tools/qa_071/helpers.py').read())
assert cmd('load .qa071/rowan_intro.state')=='ok'
for _ in range(150):
 if hastask('Task_NewGameBirchSpeech_ChooseGender'):break
 press(1);cmd('f 60 0')
press(128);press(1)
for _ in range(100):
 if hastask('Task_NamingScreen'):break
 press(1);cmd('f 60 0')
press(8);cmd('f 80 0');press(1);cmd('f 100 0')
chars={}
for line in Path('charmap.txt').read_text().splitlines():
 m=re.match(r"'(.+)'\s*=\s*([0-9A-Fa-f ]+)$",line)
 if m and len(m[1])==1:chars[m[1]]=bytes.fromhex(m[2])
def encoded(text):return b''.join(chars[x]for x in text)
seen=set()
for _ in range(250):
 data=bytes(read(sym['gStringVar4']+i,1)for i in range(180)).split(b'\xff')[0]
 if hastask('Task_NewGameBirchSpeech_WaitForSpriteFadeInAndTextPrinter') and encoded('Twinleaf')in data:
  seen.add('final_rowan');shot('091_rowan_final_dialog')
 if hastask('Task_NewGameBirchSpeech_ShrinkPlayer') and encoded('Sinnoh')in data:
  seen.add('ready');shot('091_sinnoh_ready')
 if hastask('Task_HandleMultichoiceInput'):break
 press(1);cmd('f 20 0')
assert seen=={'final_rowan','ready'},seen
print('PASS native final intro talks about Sinnoh and Twinleaf, not Hoenn',flush=True)
assert cmd('load .qa071/migrated.state')=='ok'
assert getvar(vars['VAR_HE_SEASON'])==0
press(8);cmd('f 100 0')
for _ in range(12):
 if read(sym['sStartMenuCursorPos'],1)==0:break
 press(64)
press(1);cmd('f 100 0');shot('091_hoenn_journal_preserved')
assert read(sym['gMain']+4)!=sym['SiMissionMain']|1
assert hastask('Task_DrawFieldMessage')
print('PASS Hoenn mission still uses the original field journal',flush=True)
p.stdin.close();p.wait()
