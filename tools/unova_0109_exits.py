#!/usr/bin/env python3
"""Replace unreachable Nuvema door transitions by walk-on event scripts.
Coordinates intentionally inside the walkable floor, not on the outer border.
The source warp IDs are kept for compatibility with existing map destinations.
"""
from pathlib import Path
import json,struct
R=Path(__file__).resolve().parents[1]
layouts={v["id"]:v for v in json.loads((R/"data/layouts/layouts.json").read_text())["layouts"]}
def add_trigger(name,label,positions):
 p=R/"data/maps"/name/"map.json"
 obj=json.loads(p.read_text())
 layout=layouts[obj["layout"]]
 b=(R/layout["blockdata_filepath"]).read_bytes()
 w=layout["width"];h=layout["height"]
 assert len(b)==w*h*2
 existing={(v["x"],v["y"],v["script"]) for v in obj["coord_events"]}
 for x,y in positions:
  assert 2<=x<w-2 and 2<=y<h-2,(name,x,y)
  word=struct.unpack_from("<H",b,2*(y*w+x))[0]
  assert (word&1023)==0 and ((word>>10)&3)==0,(name,x,y,hex(word))
  if (x,y,label) not in existing:
   obj["coord_events"].append({
    "type":"trigger","x":x,"y":y,"elevation":0,
    "var":"VAR_TEMP_0","var_value":"0","script":label
   })
 p.write_text(json.dumps(obj,indent=2,ensure_ascii=False)+"\n")
 print("PASS: accessible walk-on exit",name,label,positions)
# Map edge x9,y13 or x10,y14 is the *border* and cannot be entered.
# Give the player a reachable escape one/two tiles earlier.
add_trigger("UnNuvemaBedroom","UN_BedroomExit",[(x,12) for x in (9,10,11)])
add_trigger("UnNuvemaHouse","UN_HouseExit",[(x,11) for x in (8,9,10)])
# Facilitate navigation in both directions.
add_trigger("UnNuvemaHouse","UN_ToBedroom",[(14,7),(14,8)])
add_trigger("UnNuvemaTown","UN_EnterHouse",[(9,11)])
