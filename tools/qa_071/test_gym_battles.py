"""Exercise eight real Gym battle/reward scripts with prepared prerequisites."""
exec(open('tools/qa_071/helpers.py').read())
exec(open('tools/qa_071/battle_driver.py').read())
gyms=[('RustboroCity_Gym','Roxanne','FLAG_HE_ECLIPSE_PROOF'),('DewfordTown_Gym','Brawly','FLAG_HE_SIGNAL_DEWFORD'),('MauvilleCity_Gym','Wattson','FLAG_HE_SIGNAL_MAUVILLE'),('LavaridgeTown_Gym_1F','Flannery','FLAG_HE_THERMAL_SAFE'),('PetalburgCity_Gym','NormanBattle','FLAG_HE_SUPPLY_SAFE'),('FortreeCity_Gym','Winona','FLAG_HE_FOREST_SAFE'),('MossdeepCity_Gym','TateAndLiza','FLAG_HE_ORBIT_SAFE'),('SootopolisCity_Gym_1F','Juan','FLAG_HE_OCEAN_SAFE')]
trainers={m[1]:int(m[2],0)for m in re.finditer(r'#define\s+(TRAINER_\w+)\s+(0x[0-9A-Fa-f]+|\d+)',Path('include/constants/opponents.h').read_text())}
for n,(mapname,name,prereq) in enumerate(gyms,1):
 cmd('load .qa071/migrated.state');prepare_team();flag(prereq);flag(f'FLAG_BADGE0{n}_GET',False)
 script=mapname+'_EventScript_'+name
 source=Path('data/maps/'+mapname+'/scripts.inc').read_text().split(script+'::',1)[1]
 trainer=re.search(r'trainerbattle_\w+\s+(TRAINER_\w+)',source)[1]
 flag(0x500+trainers[trainer],False)
 defeated={'RustboroCity_Gym':'RUSTBORO','DewfordTown_Gym':'DEWFORD','MauvilleCity_Gym':'MAUVILLE','LavaridgeTown_Gym_1F':'LAVARIDGE','PetalburgCity_Gym':'PETALBURG','FortreeCity_Gym':'FORTREE','MossdeepCity_Gym':'MOSSDEEP','SootopolisCity_Gym_1F':'SOOTOPOLIS'}
 flag('FLAG_DEFEATED_'+defeated[mapname]+'_GYM',False)
 npc=next(o for o in json.load(open('data/maps/'+mapname+'/map.json'))['object_events']if o.get('script')==script or(name=='NormanBattle' and o.get('graphics_id')=='OBJ_EVENT_GFX_NORMAN'))
 if name=='NormanBattle':setvar(vars['VAR_PETALBURG_GYM_STATE'],6)
 warp(mapname,npc['x'],npc['y']+1)
 local=json.load(open('data/maps/'+mapname+'/map.json'))['object_events'].index(npc)+1
 save=read(sym['gSaveBlock1Ptr']);oid=function('GetObjectEventIdByLocalIdAndMap',local,read(save+5,1),read(save+4,1))
 assert oid<16,(name,local,oid)
 write(sym['gSelectedObjectEvent'],oid,1);write(sym['gSpecialVar_LastTalked'],local,2)
 press(64);press(1);cmd("f 100 0")
 drive_until(lambda:hasflag(f'FLAG_BADGE0{n}_GET'),name=name)
 shot('gym_'+str(n));print('PASS real battle -> badge',n,name,flush=True)
p.stdin.close();p.wait()
