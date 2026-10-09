exec(open('tools/qa_071/helpers.py').read())
cmd('load .qa071/migrated.state')
chars={}
for line in Path('charmap.txt').read_text().splitlines():
 m=re.match(r"'(.+)'\s*=\s*([0-9A-Fa-f ]+)$",line)
 if m and len(m[1])==1:chars[m[1]]=bytes.fromhex(m[2])
files=[Path('data/scripts/sinnoh_chapter1.inc'),Path('data/scripts/sinnoh_campaign.inc')]
checked=0;bad=[]
for file in files:
 label='';parts=[]
 def inspect(label,parts):
  global checked
  if not label.startswith(('SI_',)) or not parts:return
  for line in re.split(r'\\[npl]', ''.join(parts)):
   line=line.rstrip('$');line=re.sub(r'\{PLAYER\}','MMMMMMM',line);line=re.sub(r'\{STR_VAR_1\}','MMMMMMMMMMM',line);line=re.sub(r'\{STR_VAR_2\}','MMMMMMMMMMMMMMMM',line);line=re.sub(r'\{STR_VAR_3\}','MMMMMMMMMMMMM',line);line=re.sub(r'\{[^}]*\}','',line)
   if not line:continue
   data=b''.join(chars.get(x,b'\xac')for x in line)+b'\xff'
   for i,b in enumerate(data):write(0x0203D000+i,b,1)
   w=function('GetStringWidth',1,0x0203D000,0);checked+=1
   if w>208:bad.append({'file':str(file),'label':label,'text':line,'width':w})
 for line in file.read_text().splitlines():
  m=re.match(r'(\w+)::?\s*$',line)
  if m:inspect(label,parts);label=m[1];parts=[]
  m=re.search(r'\.string "(.*)"',line)
  if m:parts.append(m[1])
 inspect(label,parts)
Path('.qa071/sinnoh_text_widths.json').write_text(json.dumps(bad,ensure_ascii=False,indent=2));print('Text lines checked',checked,'over 208 pixels',len(bad),flush=True)
for b in bad:print(b['label'],b['width'],b['text'],flush=True)
p.stdin.close();p.wait()
assert not bad, bad
