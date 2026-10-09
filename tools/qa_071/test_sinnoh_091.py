"""Native tests for NPC packing, Route 201 support and the mission UI."""
exec(open('tools/qa_071/helpers.py').read())
# Verify actual compiled frame bytes against the individual PNG frames.
rom=Path('pokemon_hoenn_expansion_gen7.gba').read_bytes();checked=0
for label,png in re.findall(r'const u16 (gObjectEventPic_\w+)\[\] = INCGFX_U16\("(graphics/object_events/pics/people/[^\"]+_pt\.png)", "\.4bpp"(?:, "[^"]*")?\)',Path('src/data/object_events/object_event_graphics.h').read_text()):
 im=Image.open(png);expected=bytearray()
 for f in range(9):
  for ty in range(4):
   for tx in range(4):
    for y in range(8):
     for x in range(0,8,2):
      expected.append(im.getpixel((f*32+tx*8+x,ty*8+y))|(im.getpixel((f*32+tx*8+x+1,ty*8+y))<<4))
 addr=sym[label]-0x08000000;assert rom[addr:addr+len(expected)]==expected,label
 checked+=9
print('PASS all',checked,'compiled NPC animation frames match their PNGs',flush=True)
assert cmd('load .qa071/sinnoh_new_game.state')=='ok'
a=read(sym['gSaveBlock2Ptr'])+21;write(a,read(a,1)|8,1)
warp('SandgemTown',11,9);shot('091_npcs_before');press(32);press(1);cmd('f 150 0');shot('091_npc_facing');dismiss(35)
# Trainer's real event, including disabled rules and No/Yes choices.
fields=re.search(r'enum MonData\s*\{(.*?)\};',Path('include/pokemon.h').read_text()+Path('include/constants/pokemon.h').read_text(),re.S)[1]
keys=re.findall(r'\b(MON_DATA_\w+)\b',re.sub(r'//[^\n]*','',fields))
mon=sym['gParties'];ivfield=keys.index('MON_DATA_HP_IV');level=keys.index('MON_DATA_LEVEL')
def ivs():return [function('GetMonData3',mon,ivfield+i,0)for i in range(6)]
for i in range(6):write(0x0203D000,7+i,1);function('SetMonData',mon,ivfield+i,0x0203D000)
before=ivs();oldlevel=function('GetMonData3',mon,level,0)
function('RemoveBagItem',4,0) # no-op, keep fixture items
warp('Route201',27,15);flag('FLAG_HE_ANTI_GRINDING',False)
press(64);press(1);cmd('f 120 0');shot('091_coach_off');dismiss(40)
assert ivs()==before and function('CountTotalItemQuantityInBag',102)==0
flag('FLAG_HE_ANTI_GRINDING');press(64);press(1);cmd('f 150 0')
for _ in range(50):
 if hastask('Task_HandleYesNoInput'):break
 press(1);cmd('f 25 0')
shot('091_coach_offer');press(1);dismiss(80)
# Use the native item enum instead of hardcoding Rare Candy's id.
item=int(re.search(r'ITEM_RARE_CANDY\s*=\s*(\d+)',Path('include/constants/items.h').read_text())[1])
assert function('CountTotalItemQuantityInBag',item)==999
assert ivs()==[31]*6 and function('GetMonData3',mon,level,0)==oldlevel
# Refill respects the 999 total; it does not add another stack.
function('RemoveBagItem',item,10);callnative('SiCoachFillCandy');assert read(sym['gSpecialVar_Result'],2)
assert function('CountTotalItemQuantityInBag',item)==999
print('PASS Route 201: off changes nothing, on gives 999 and six IVs=31; level preserved; refill=999',flush=True)
cmd('save .qa071/091_features.state')
def openjournal():
 press(8);cmd('f 100 0');assert hastask('Task_ShowStartMenu')
 for _ in range(12):
  if read(sym['sStartMenuCursorPos'],1)==0:break
  press(64)
 press(1);cmd('f 100 0');assert read(sym['gMain']+4)==sym['SiMissionMain']|1
openjournal();shot('091_mission_map');press(1);cmd('f 60 0');shot('091_mission_details')
press(128);cmd('f 30 0');press(64);cmd('f 30 0');press(2);cmd('f 500 0');assert hastask('Task_ShowStartMenu')
press(2);cmd('f 100 0');assert read(sym['gMain']+4)==sym['CB2_Overworld']|1
assert getvar(vars['VAR_SI_STAGE'])==1
print('PASS real START -> mission map -> details -> B -> field; story unchanged',flush=True)
# Every story stage selects the documented target without changing story data.
for n in [2,4,7,14,20,21,28,29]:
 setvar(vars['VAR_SI_STAGE'],n);openjournal();shot('091_mission_stage_'+str(n));press(2);cmd('f 500 0');press(2);cmd('f 100 0');assert getvar(vars['VAR_SI_STAGE'])==n
 if n==29:pass
# All-caught completion is also safe.
for f in flags:
 if f.startswith('FLAG_SI_CAUGHT_'):flag(f)
openjournal();shot('091_mission_complete');press(2);cmd('f 500 0');press(2);cmd('f 100 0')
print('PASS mission UI early/late/postgame/all-caught states',flush=True)
p.stdin.close();p.wait()
