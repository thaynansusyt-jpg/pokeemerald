exec(open('tools/qa_071/helpers.py').read())
cmd('load .qa071/migrated.state')
warp('TwinleafTown',9,22)
rev={v:k for k,v in sym.items()}
for name in ['gMain','gMapHeader','gSaveBlock1Ptr','sWarpDestination','gFieldCallback','gFieldCallback2']:
 a=sym[name];print(name,hex(a),[hex(read(a+i*4)) for i in range(8)])
print('cb2',rev.get(read(sym['gMain']+4)&~1));print('cb1',rev.get(read(sym['gMain'])&~1))
for name in ['gMapHeader','gMain']:
 print(name,'bytes',[read(sym[name]+i,1)for i in range(32)])
shot('sinnoh_debug');cmd('save .qa071/sinnoh_debug.state')
p.stdin.close();p.wait()
