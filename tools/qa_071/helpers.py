import subprocess,os,json,struct,re
from pathlib import Path
from PIL import Image
sym={}
for line in Path('.qa071/new.symbols').read_text().splitlines():
 a=line.split()
 if len(a)==3:sym[a[2]]=int(a[0],16)
env=os.environ.copy();# Use the system libmgba, or LD_LIBRARY_PATH supplied by the caller.
p=subprocess.Popen(['.qa071/emulator','pokemon_hoenn_expansion_gen7.gba'],stdin=subprocess.PIPE,stdout=subprocess.PIPE,text=True,env=env)
def cmd(s):p.stdin.write(s+'\n');p.stdin.flush();return p.stdout.readline().strip()
def write(a,v,n=4):cmd(f'w {a:x} {v:x} {n}')
def read(a,n=4):return int(cmd(f'r {a:x} {n}'))
def press(k):cmd(f'f 1 {k}');cmd('f 8 0')
def shot(name):
 cmd('shot .qa071/'+name+'.ppm');Image.open('.qa071/'+name+'.ppm').resize((720,480),Image.Resampling.NEAREST).save('.qa071/'+name+'.png')
def callnative(name):
 ctx=sym['sGlobalScriptContext'];addr=0x0203F000;data=b'\x23'+((sym[name]if isinstance(name,str)else name)|1).to_bytes(4,'little')+b'\x02'
 for i,b in enumerate(data):write(addr+i,b,1)
 write(ctx,0,1);write(ctx+1,1,1);write(ctx+4,0);write(ctx+8,addr);write(sym['sGlobalScriptContextStatus'],0,1);cmd('f 8 0')
def function(name,a=0,b=0,c=0):
 data=Path('tools/qa_071/function_fixture.bin').read_bytes();data=data[:-20]+struct.pack('<5I',a,b,c,sym[name]|1,sym['gSpecialVar_Result'])
 for i,byte in enumerate(data):write(0x0203E000+i,byte,1)
 callnative(0x0203E000);cmd('f 100 0');return read(sym['gSpecialVar_Result'],2)
def setvar(v,value):write(read(sym['gSaveBlock1Ptr'])+5020+(v-0x4000)*2,value,2)
def getvar(v):return read(read(sym['gSaveBlock1Ptr'])+5020+(v-0x4000)*2,2)
flags={'MAX_TRAINERS_COUNT':864};vars={}
for line in Path('include/constants/flags.h').read_text().splitlines():
 m=re.match(r'#define\s+(\w+)\s+(.+?)(?:\s*//.*)?$',line)
 if m:
  try:flags[m[1]]=eval(m[2],{},flags)
  except:pass
for line in Path('include/constants/vars.h').read_text().splitlines():
 m=re.match(r'#define\s+(\w+)\s+(0x[0-9A-Fa-f]+)',line)
 if m:vars[m[1]]=int(m[2],16)
def flag(name,val=True):
 f=flags[name]if isinstance(name,str)else name;a=read(sym['gSaveBlock1Ptr'])+4720+f//8;v=read(a,1);write(a,v|(1<<(f%8))if val else v&~(1<<(f%8)),1)
def hasflag(name):
 f=flags[name]if isinstance(name,str)else name;return bool(read(read(sym['gSaveBlock1Ptr'])+4720+f//8,1)&(1<<(f%8)))
layouts=json.load(open('data/layouts/layouts.json'))['layouts'];groups=json.load(open('data/maps/map_groups.json'))
def warp(name,x,y):
 m=json.load(open(f'data/maps/{name}/map.json'))
 group,num=next((gi,groups[g].index(name))for gi,g in enumerate(groups['group_order'])if name in groups[g]);lid=next(i+1 for i,l in enumerate(layouts)if l['id']==m['layout']);save=read(sym['gSaveBlock1Ptr'])
 for base in [sym['sWarpDestination'],save+4]:
  write(base,group,1);write(base+1,num,1);write(base+2,255,1);write(base+4,x,2);write(base+6,y,2)
 write(save,x,2);write(save+2,y,2);write(save+50,lid,2);write(sym['gFieldCallback'],sym['FieldCB_WarpExitFadeFromBlack']|1);write(sym['gFieldCallback2'],0);write(sym['sGlobalScriptContextStatus'],2,1);write(sym['gMain']+4,sym['CB2_LoadMap']|1);write(sym['gMain']+1080,0,1);cmd('f 400 0')
def runscript(name):
 ctx=sym['sGlobalScriptContext'];write(ctx,0,1);write(ctx+1,1,1);write(ctx+4,0);write(ctx+8,sym[name]);write(sym['sGlobalScriptContextStatus'],0,1);cmd('f 100 0')
def hastask(name):
 target=sym[name]|1
 return any(read(sym['gTasks']+i*40)==target and read(sym['gTasks']+i*40+4,1)for i in range(16))
def dismiss(n=100):
 for i in range(n):press(1);cmd('f 30 0')
