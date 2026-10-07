exec(open('tools/qa_071/helpers.py').read())
assert cmd('batteryload .qa071/old07_trapped.sav')=='1'
cmd('f 2200 0');press(8);cmd('f 300 0');press(1);cmd('f 300 0');shot('continue_menu');press(1);cmd('f 700 0');shot('migrated_tunnel')
m=json.load(open('.qa071/save_before.json'));assert getvar(m['rustboro_var'])==1,getvar(m['rustboro_var'])
mon=bytes(read(sym['gParties']+i,1)for i in range(100));assert mon.hex()==m['party'],'party changed'
assert getvar(0x40DB)==2 and getvar(0x40DC)==1
assert getvar(0x40FB)==52 and getvar(0x40FC)==2
assert bytes(read(read(sym['gSaveBlock2Ptr'])+i,1)for i in range(8)).hex()==m['name']
assert hasflag('FLAG_BADGE01_GET')and hasflag('FLAG_HE_SIGNAL_RUSTBORO')
cmd('save .qa071/migrated.state');print('PASS real 0.7 .sav -> Continue 0.7.1; party, name, rules, quest and badges preserved; theft repaired',flush=True)
# Enter the actual stolen-goods trigger after loading the player's blocked location.
warp('RustboroCity',23,22);runscript('RustboroCity_EventScript_StolenGoodsTrigger2');dismiss(100)
assert hasflag('FLAG_DEVON_GOODS_STOLEN');assert getvar(vars['VAR_RUSTURF_TUNNEL_STATE'])==2
assert not hasflag('FLAG_HIDE_RUSTURF_TUNNEL_PEEKO');assert not hasflag('FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT')
warp('RusturfTunnel',12,7);shot('peeko_restored');cmd('save .qa071/peeko.state')
print('PASS theft scene enables Peeko and thief in Rusturf Tunnel',flush=True)
p.stdin.close();p.wait()
