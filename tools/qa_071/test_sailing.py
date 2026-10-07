exec(open('tools/qa_071/helpers.py').read())
cmd('load .qa071/devon.state');warp('Route104_MrBrineysHouse',6,5);runscript('Route104_MrBrineysHouse_EventScript_Briney')
for i in range(150):
 if hastask('Task_HandleYesNoInput'):cmd('f 25 0');break
 press(1);cmd('f 20 0')
assert hastask('Task_HandleYesNoInput');press(1)
dewford=next((gi,groups[g].index('DewfordTown'))for gi,g in enumerate(groups['group_order'])if 'DewfordTown'in groups[g])
for i in range(200):
 cmd('f 60 0');save=read(sym['gSaveBlock1Ptr']);group=read(save+4,1);num=read(save+5,1)
 if (group,num)==dewford:cmd('f 500 0');break
 press(1)
shot('sailing_diagnostic');print('sailing flags',hasflag('FLAG_MR_BRINEY_SAILING_INTRO'),'board',getvar(vars['VAR_BOARD_BRINEY_BOAT_STATE']),'script',hex(read(sym['sGlobalScriptContext']+8)),flush=True);assert (group,num)==dewford,(group,num)
shot('arrived_dewford');cmd('save .qa071/dewford.state');print('PASS actual Briney boat journey arrives at Dewford',flush=True)
p.stdin.close();p.wait()
