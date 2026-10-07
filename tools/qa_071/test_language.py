"""Test both languages in the running ROM, including names and New Game reset."""
exec(open('tools/qa_071/helpers.py').read())
cmd('load .qa071/migrated.state')

def function32(name,a=0,b=0,c=0):
 data=Path('tools/qa_071/function_fixture.bin').read_bytes()
 assert b'\x08\x80' in data
 data=data.replace(b'\x08\x80',b'\x08\x60',1)
 data=data[:-20]+struct.pack('<5I',a,b,c,sym[name]|1,0x0203D300)
 for i,byte in enumerate(data):write(0x0203E000+i,byte,1)
 callnative(0x0203E000);cmd('f 100 0');return read(0x0203D300)

def language(en):
 a=read(sym['gSaveBlock2Ptr'])+21;old=read(a,1);write(a,old&~8 if en else old|8,1)

catalog=json.load(open('docs/localization/story_catalog.json'))
for english in [True,False]:
 language(english)
 for e in catalog:
  for label in e['labels']:
   ptr=sym[label['label']]
   expected=sym['HE_English_'+str(e['id'])]if english else ptr
   result=function32('HeLocalize',ptr)
   assert result==expected,(english,label['label'],hex(result),hex(expected))
 print('PASS',len([l for e in catalog for l in e['labels']]),'live dialogue pointer mappings', 'EN'if english else 'PT-BR',flush=True)
language(True)
for label in ['HE_QuestTarget','HE_EpilogueText','gText_BirchSoItsPlayer']:
 if label not in sym:continue
 function32('StringExpandPlaceholders',sym['gStringVar4'],sym[label])
 text=[]
 for i in range(1000):
  b=read(sym['gStringVar4']+i,1)
  if b==255:break
  text.append(b)
 assert 253 not in text,(label,'unexpanded placeholder')
 print('PASS English placeholder expansion',label,flush=True)
# Field journal uses the real dialogue printer.
runscript('HE_Journal');cmd('f 200 0');shot('journal_english');dismiss(80)
language(True)
# Use the real rules -> opening -> New Game path; no save reset should switch EN to PT.
function32('HeStartNewGameConfig',sym['CB2_NewGame']|1,0)
cmd('f 80 0');shot('rules_english')
for i in range(6):press(128)
press(1);cmd('f 90 0');shot('opening_english')
press(8);cmd('f 500 0');shot('birch_english')
assert not(read(read(sym['gSaveBlock2Ptr'])+21,1)&8),'NewGameInitData reset EN to PT'
print('PASS New Game preserves EN through rules, opening and Birch',flush=True)
p.stdin.close();p.wait()
