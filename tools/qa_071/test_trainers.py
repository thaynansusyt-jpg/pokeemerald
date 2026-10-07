exec(open('tools/qa_071/helpers.py').read())
cmd('load .qa071/migrated.state')
ids={}
for line in Path('include/constants/opponents.h').read_text().splitlines():
 m=re.match(r'#define\s+(TRAINER_\w+)\s+(\d+)',line)
 if m:ids[m[1]]=int(m[2])
used=set()
for f in Path('data/maps').glob('*/scripts.inc'):
 m=json.load(open(f.parent/'map.json'))
 if m.get('region','REGION_HOENN')!='REGION_HOENN':continue
 used.update(re.findall(r'\bTRAINER_\w+',f.read_text()))
for f in Path('data/scripts').glob('hoenn_*.inc'):used.update(re.findall(r'\bTRAINER_\w+',f.read_text()))
unique=sorted({ids[x]for x in used if x in ids and ids[x]>0});tested=0
for d in [0,1,2]:
 setvar(0x40DB,d)
 for i in unique:
  function('CreateNPCTrainerParty',sym['gParties']+600,i)
  count=0
  for slot in range(6):
   mon=sym['gParties']+600+slot*100;species=function('GetMonData3',mon,18,0)
   if not species:break
   assert function('GetSpeciesBaseHP',species)>0,(d,i,slot,species,'disabled family')
   assert 1<=function('GetMonData3',mon,64,0)<=100,(d,i,slot)
   count+=1
  assert count>0,(d,i,'empty trainer')
  tested+=1
 print('PASS trainer profile',d,'for',len(unique),'Hoenn map/script trainers',flush=True)
print('PASS',tested,'native trainer parties; all members have enabled species and valid levels',flush=True)
p.stdin.close();p.wait()
