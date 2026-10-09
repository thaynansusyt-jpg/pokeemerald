#!/usr/bin/env python3
"""Check key fixes from 1000738319.mp4 (black battle background + unusable exit).
Static checks only. Real gameplay still requires user/mGBA confirmation.
"""
from pathlib import Path
import json,struct
R=Path(__file__).resolve().parents[1]
count=0
for name in ("indoor","outdoor"):
 stem=R/"graphics/unova"/("battle_"+name)
 pixels=stem.with_suffix(".4bpp").read_bytes()
 palette=stem.with_suffix(".gbapal").read_bytes()
 tm=(R/"graphics/unova"/f"battle_{name}_map.bin").read_bytes()
 assert len(pixels)==16384 and len(palette)==32 and len(tm)==2048
 assert all((b&0xf)>0 and ((b>>4)&0xf)>0 for b in pixels),name+" black pixels remain"
 words=struct.unpack("<1024H",tm)
 assert all((w&0x3ff)<512 and (w>>12)==2 for w in words)
 count+=5
for name,label,pts in (
 ("UnNuvemaBedroom","UN_BedroomExit",[(9,12),(10,12),(11,12)]),
 ("UnNuvemaHouse","UN_HouseExit",[(8,11),(9,11),(10,11)]),
 ("UnNuvemaHouse","UN_ToBedroom",[(14,7),(14,8)]),
 ("UnNuvemaTown","UN_EnterHouse",[(9,11)])):
 j=json.loads((R/"data/maps"/name/"map.json").read_text())
 hits=[v for v in j["coord_events"] if v["script"]==label]
 assert {(x["x"],x["y"]) for x in hits}==set(pts),(name,label,hits)
 count+=1
s=(R/"data/scripts/unova_chapter.inc").read_text()
for label in ("UN_BedroomExit::","UN_HouseExit::","UN_ToBedroom::","UN_EnterHouse::"):
 assert label in s,count
 count+=1
c=(R/"src/battle_bg.c").read_text()
for tag in ("sUnArenaIndoorTiles","sUnArenaOutdoorTiles","UnIsSeason()"):
 assert tag in c,tag
 count+=1
print("PASS:",count,"Unova 0.10.9 black background and reachable door checks")
