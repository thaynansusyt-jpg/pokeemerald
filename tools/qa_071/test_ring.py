exec(open('tools/qa_071/helpers.py').read())
cmd('load .qa071/migrated.state');setvar(0x40FD,3);warp('AbandonedShip_Rooms_1F',5,6)
# Fill the key-item pocket using valid key items through the engine, excluding Mega Ring.
added=[]
for i in range(1,874):
 if i!=703 and function('GetItemPocket',i)==4:
  if function('AddBagItem',i,1):added.append(i)
  if len(added)>=30:break
assert function('CheckBagHasItem',703,1)==0
assert function('AddBagItem',703,1)==0,'key pocket not full'
runscript('HE_RainbowShip');dismiss(90);assert getvar(0x40FD)==3,'lost ring but story advanced';assert function('CheckBagHasItem',703,1)==0
print('PASS full key pocket does not advance Rainbow stage',flush=True)
function('RemoveBagItem',added[-1],1);runscript('HE_RainbowShip');dismiss(90);assert getvar(0x40FD)==4 and function('CheckBagHasItem',703,1)==1
print('PASS freeing a slot lets engineer deliver Mega Ring and advance',flush=True)
# Existing broken saves already at stage 4/5/6 can recover the missing Ring.
for stage in [4,5,6]:
 function('RemoveBagItem',703,1);setvar(0x40FD,stage);runscript('HE_RainbowShip');dismiss(60)
 assert getvar(0x40FD)==stage and function('CheckBagHasItem',703,1)==1,stage
print('PASS engineer recovers missing Ring for stages 4/5/6 without replaying story',flush=True)
p.stdin.close();p.wait()
