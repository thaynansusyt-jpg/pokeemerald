"""Map loading and event access in mGBA; prepared post-Hoenn fixture."""
exec(open('tools/qa_071/helpers.py').read())
cmd('load .qa071/migrated.state')
setvar(vars['VAR_SI_STAGE'],1)
setvar(vars['VAR_HE_SEASON'],1)
meta=json.load(open('docs/sinnoh_import.json'))
for n in meta['maps']:
 m=json.load(open('data/maps/'+n+'/map.json'));l=next(v for v in layouts if v['id']==m['layout'])
 data=Path(l['blockdata_filepath']).read_bytes();b=struct.unpack('<'+'H'*(len(data)//2),data)
 cells=[(i%l['width'],i//l['width'])for i,v in enumerate(b)if((v>>10)&3)==0 and(v>>12)in[0,3]]
 assert cells,n
 x,y=cells[len(cells)//2]
 warp(n,x,y)
 assert read(sym['gMapHeader']) == sym[l['name']], (n, hex(read(sym['gMapHeader'])), l['name'])
 assert read(sym['gMain']+4)==sym['CB2_Overworld']|1, n
 save=read(sym['gSaveBlock1Ptr']); group,num=next((gi,groups[g].index(n))for gi,g in enumerate(groups['group_order'])if n in groups[g]); assert read(save+4,1)==group and read(save+5,1)==num,n
 if n in ['TwinleafTown','SandgemTown','JubilifeCity','OreburghCity','LakeVerity','OreburghCity_Gym','OreburghMine_B2F']:
  npc=next((o for o in m['object_events']if o['script']in['SI_Return','SI_Lake','SI_Roark','SI_Mine']),None)
  if npc:warp(n,npc['x'],npc['y']+1)
  shot('sinnoh_'+n)
 print('PASS map loads',n,flush=True)
p.stdin.close();p.wait()
