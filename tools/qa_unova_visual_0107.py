#!/usr/bin/env python3
"""QA of 0.10.7 visible fixes, executed after visual generation."""
import json
from pathlib import Path
from PIL import Image
root=Path(__file__).resolve().parents[1]
checks=0
def must(ok,msg):
    global checks
    if not ok:raise AssertionError(msg)
    checks+=1

for name in ("primary/un_indoor","secondary/un_rooms"):
    path=root/"data/tilesets"/name/"tiles.png"
    img=Image.open(path)
    must(img.mode=="P",name+" must stay indexed")
    must(img.size==(128,256),name+" sheet dimensions changed")
    must(len(img.getcolors(1<<16))<=16,name+" 4bpp palette overflow")
    must(img.getpixel((8,1))!=0,name+" floor tile is blank")
    must(img.getpixel((16,3))!=0,name+" floor tile is blank")

for side in ("primary/un_indoor/palettes/00.pal","secondary/un_rooms/palettes/06.pal"):
    data=(root/"data/tilesets"/side).read_text().splitlines()
    must(data[:3]==["JASC-PAL","0100","16"],side+" palette header corrupt")
    must(len(data)>=19,side+" palette incomplete")

hilda=Image.open(root/"graphics/object_events/pics/people/unova/hilda.png")
must(hilda.mode=="P" and hilda.size==(576,32),"Hilda 18-frame bank invalid")
for frame in (1,5,6,10,14,15):
    must(hilda.getpixel((frame*32+15,6))==2,"Hilda back-facing cap missing frame %d"%frame)

layouts=json.loads((root/"data/layouts/layouts.json").read_text())["layouts"]
layout_ids={v["id"]:v for v in layouts}
maps={}
for f in (root/"data/maps").glob("*/map.json"):
    obj=json.loads(f.read_text())
    maps[obj["id"]]=obj
for id in ("MAP_UN_NUVEMA_BEDROOM","MAP_UN_NUVEMA_HOUSE"):
    m=maps[id]
    layout=layout_ids[m["layout"]]
    for warp in m["warp_events"]:
        must(0<=warp["x"]<layout["width"] and 0<=warp["y"]<layout["height"],id+" warp outside layout")
        must(warp["dest_map"] in maps,id+" warp destination absent")
        target=maps[warp["dest_map"]]
        must(int(warp["dest_warp_id"])<len(target["warp_events"]),id+" warp dest index invalid")
for key in ("UN_Prologue::","UN_FirstWon::","UN_FriendCheren::"):
    must(key in (root/"data/scripts/unova_chapter.inc").read_text(),key+" missing")

print("PASS: %d Unova 0.10.7 visual/warp checks" % checks)
