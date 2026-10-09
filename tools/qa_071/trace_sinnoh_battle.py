exec(open('tools/qa_071/helpers.py').read());exec(open('tools/qa_071/battle_driver.py').read())
cmd('load .qa071/team_fixture_sinnoh.state');setvar(vars['VAR_SI_STAGE'],2)
warp('LakeVerity',38,37);press(64);press(1);cmd('f 100 0')
rev={v|1:k for k,v in sym.items()}
for i in range(500):
 drive_tick()
 if i%10==0:
  print(i,'cb',rev.get(read(sym['gMain']+4)), 'partycount',read(sym['gPartiesCount'],1),'hps',[read(sym['gParties']+j*100+86,2)for j in range(6)],'stage',getvar(vars['VAR_SI_STAGE']),'inbattle',read(sym['gMain']+1079,1),flush=True)
 if i in [5,15,35,55,85,125,200,400]:shot('sinnoh_battle_trace_'+str(i))
 if getvar(vars['VAR_SI_STAGE'])==3:break
p.stdin.close();p.wait()
