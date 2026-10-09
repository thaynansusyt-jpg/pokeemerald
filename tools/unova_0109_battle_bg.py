#!/usr/bin/env python3
"""Draw original 4bpp GBA Unova arena backgrounds; no external game assets.
Each arena uses all 240x160 pixels, including the area previously black.
Save static .4bpp, .gbapal and 32x32 tilemap assets for the ARM build.
"""
from pathlib import Path
import struct
ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT/"graphics/unova"
OUT.mkdir(parents=True,exist_ok=True)
COLORS = [
 (0,0,0),(229,240,249),(201,224,243),(245,250,255),
 (29,74,126),(109,155,198),(237,215,176),(151,112,88),
 (220,183,141),(105,124,148),(255,255,255),(60,101,142),
 (119,159,186),(159,205,231),(84,123,169),(251,229,191)
]
def pixel(kind,x,y):
 if kind=="indoor":
  if y<83:
   if (40<=x<=94 or 162<=x<=216) and 18<=y<=71:
    if x in (40,41,93,94,162,163,215,216) or y in (18,19,70,71):return 4
    if y in (43,44) or x in (67,68,189,190):return 5
    return 13 if (y+x//5)%8 else 10
   if y in (0,1,2,78,79,80,81,82):return 4
   return 1 if y%16<11 else 2
  if y<102: return 14 if y<88 else 5
  if y<120:return 6 if (x//16+y//5)%2 else 8
  if y%24 in (0,1) or x%28 in (0,1): return 7
  return 8 if (x*3+y)%29<20 else 15
 # Outdoor Unova town/plains, soft sky, town skyline, battlefield
 if y<78:
  if (24<x<75 and 17<y<32) or (164<x<227 and 39<y<52):
   return 10 if (x+y*2)%13<11 else 3
  return 13 if y<38 else (2 if y<62 else 5)
 if y<105:
  building=((x//33)*7+9)%17
  if y<87+building:
   if x%33 in (0,1,31,32):return 4
   if x%14 in (5,6,7,8) and y%13 in (0,1,2,3):return 13
   return 11 if x%33<11 else 12
  return 5
 if y<125: return 6 if (y//3+x//16)%5 else 15
 if y%27 in (0,1) or x%49 in (0,1):return 7
 return 8 if (x*7+y)%27<22 else 15

def make(name):
 tiles=bytearray()
 # Tile 0...511, corresponding to a 32x16 top-half charblock.
 for row in range(16):
  for col in range(32):
   for yy in range(8):
    for xx in range(0,8,2):
     x=col*8+xx
     y=row*8+yy
     a=pixel(name,x,y);b=pixel(name,x+1,y)
     assert 1<=a<=15 and 1<=b<=15
     tiles.append(a|(b<<4))
 assert len(tiles)==16384
 tilemap=bytearray()
 for row in range(32):
  for col in range(32):
   # Past 128px repeat the last floor row, never reference tile >=512.
   tile=((row if row<16 else 15)*32+col)
   tilemap+=struct.pack("<H",0x2000|tile)
 assert len(tilemap)==2048
 palette=b"".join(struct.pack("<H",
    (r//8)|((g//8)<<5)|((b//8)<<10)) for r,g,b in COLORS)
 assert len(palette)==32
 (OUT/f"battle_{name}.4bpp").write_bytes(tiles)
 (OUT/f"battle_{name}.gbapal").write_bytes(palette)
 (OUT/f"battle_{name}_map.bin").write_bytes(tilemap)
 print(f"PASS: Unova {name} backdrop 16KiB tile data, 2048-byte tilemap, 32-byte palette, non-black across the screen")

if __name__=="__main__":
 for bg in ("indoor","outdoor"):make(bg)
