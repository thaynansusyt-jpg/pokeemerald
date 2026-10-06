"""Deterministic, hand-authored GBA pixel art; emits native tiles and palettes.
No images are sampled: every shape below is drawn on an indexed pixel canvas.
"""
from pathlib import Path
import struct, math
ROOT=Path(__file__).resolve().parents[2]
OUT=ROOT/'graphics/hoenn_expansion'
OUT.mkdir(exist_ok=True)
class Canvas:
 def __init__(self,w,h,bg=0):self.w=w;self.h=h;self.p=[[bg]*w for _ in range(h)]
 def box(self,x,y,w,h,c):
  for yy in range(max(0,y),min(self.h,y+h)):
   for xx in range(max(0,x),min(self.w,x+w)):self.p[yy][xx]=c
 def ellipse(self,x,y,w,h,c):
  for yy in range(max(0,y),min(self.h,y+h)):
   for xx in range(max(0,x),min(self.w,x+w)):
    if ((xx-x-w/2+.5)/(w/2))**2+((yy-y-h/2+.5)/(h/2))**2<=1:self.p[yy][xx]=c
 def tiles(self):
  b=bytearray()
  for ty in range(0,self.h,8):
   for tx in range(0,self.w,8):
    for y in range(8):
     for x in range(0,8,2):b.append(self.p[ty+y][tx+x]|self.p[ty+y][tx+x+1]<<4)
  return b
 def save(self,name): (OUT/name).write_bytes(self.tiles())
def pal(colors):return b''.join(struct.pack('<H',(r//8)|((g//8)<<5)|((b//8)<<10)) for r,g,b in colors)
def lz(raw): # legal GBA LZ77 stream, literal groups (small assets)
 out=bytearray([0x10,len(raw)&255,(len(raw)>>8)&255,(len(raw)>>16)&255])
 for i in range(0,len(raw),8):out.append(0);out.extend(raw[i:i+8])
 while len(out)%4:out.append(0)
 return out
# Original NPC-2 indexed palette: skin=1..3, red=8/9, white=14, black=15.
def operative(direction,step=0,commander=False):
 c=Canvas(16,32);shift=step%2
 c.ellipse(3,2,10,11,15);c.box(4,3,8,3,15);c.box(3,6,10,2,9)
 c.box(4,8,8,5,1);c.box(4,11,8,2,3)
 if direction==1:c.box(4,8,8,5,15);c.box(6,10,4,1,4)
 elif direction==2:
  c.box(3,8,7,5,15);c.box(9,9,3,3,1);c.box(11,10,2,2,1);c.box(10,9,1,1,15)
 else:c.box(5,9,1,2,15);c.box(10,9,1,2,15);c.box(7,12,2,1,4)
 c.box(4,14,8,11,15);c.box(5,15,6,1,14 if commander else 4)
 c.box(2,16+shift,2,7,15);c.box(12,16-shift,2,7,15);c.box(2,22+shift,2,2,1);c.box(12,22-shift,2,2,1)
 c.box(4,24,8,2,4);c.box(5,24,1,2,5);c.box(10,23,2,3,14)
 if direction==0:
  for y,row in enumerate(['RRR','R.R','RR.','R.R','R.R']):
   for x,ch in enumerate(row):
    if ch=='R':c.box(6+x,17+y,1,1,8)
 elif direction==1:c.box(6,17,4,1,9)
 else:c.box(9,17,2,4,8)
 c.box(4,26,3,4-shift,15);c.box(9,26,3,3+shift,15)
 c.box(3,29-shift,5,2,15);c.box(8,29+shift,5,2,15);c.box(3,29-shift,4,1,14);c.box(9,29+shift,3,1,14)
 if commander:c.box(3,3,10,2,14);c.box(4,9,8,2,5);c.box(7,9,2,2,15)
 return c
# Engine standard frame order: down/up/left idle, then down/down/up/up/left/left.
for name,cmd in [('rocket',False),('commander',True)]:
 frames=[operative(d,s,cmd) for d,s in [(0,0),(1,0),(2,0),(0,1),(0,2),(1,1),(1,2),(2,1),(2,2)]]
 (OUT/(name+'.4bpp')).write_bytes(b''.join(c.tiles() for c in frames))
# Decoder terminal: antenna, pulsing display, warning stripes, wide stabilizing feet.
t=Canvas(16,32);t.box(7,0,2,5,15);t.box(4,1,8,1,14);t.box(5,4,6,3,15);t.box(2,7,12,22,15);t.box(3,8,10,19,4);t.box(4,9,8,7,15);t.box(5,10,6,4,5);t.box(6,11,4,1,14);t.box(4,18,8,1,14)
for x in range(4,12,3):t.box(x,20,2,2,8);t.box(x,24,2,1,5)
t.box(1,29,14,2,15);t.box(3,30,10,1,14);t.save('transmitter.4bpp')
# Battle portraits: original uniform, pose with radio, no borrowed base sprite.
colors=[(0,0,0),(24,24,40),(48,56,72),(88,104,120),(224,48,72),(152,24,48),(248,208,168),(216,152,112),(96,56,64),(232,240,248),(144,168,184),(40,184,200),(248,184,56),(104,72,128),(192,136,200),(255,0,255)]
for name,cmd in [('rocket_portrait',False),('commander_portrait',True)]:
 c=Canvas(64,64);c.ellipse(24,1,24,22,1);c.ellipse(27,4,19,17,6);c.box(25,2,22,6,1);c.box(23,7,28,3,4);c.box(25,10,23,2,1)
 c.box(31,12,2,2,1);c.box(42,12,2,2,1);c.box(35,17,7,1,8);c.box(31,21,10,6,6)
 c.ellipse(18,24,34,23,1);c.box(23,26,25,22,2);c.box(25,27,3,16,3);c.box(43,27,3,17,1)
 c.box(16,28,8,18,1);c.box(12,39,11,5,6);c.box(44,26,7,12,1);c.box(48,20,7,15,6);c.box(48,14,8,12,1);c.box(50,15,4,5,11);c.box(51,10,2,5,1)
 for y,row in enumerate(['RRRR','R..R','RRRR','R.R.','R..R']):
  for x,ch in enumerate(row):
   if ch=='R':c.box(32+x*2,30+y*2,2,2,4)
 c.box(22,45,25,4,1);c.box(31,46,5,2,12);c.box(23,49,10,11,1);c.box(38,49,10,11,1);c.box(21,59,13,4,2);c.box(37,59,14,4,2);c.box(21,59,12,1,10);c.box(39,59,11,1,10)
 if cmd:c.box(26,3,20,3,9);c.box(27,12,19,4,12);c.box(35,12,3,4,1);c.box(20,24,4,19,13);c.box(45,25,4,19,13)
 (OUT/(name+'.4bpp.lz')).write_bytes(lz(c.tiles()));(OUT/(name+'.gbapal.lz')).write_bytes(lz(pal(colors)))
# Native battle backdrop: Eclipse skyline, relay towers, stone fighting platforms.
c=Canvas(256,128,1)
for y in range(0,56):c.box(0,y,256,1,1 if y<16 else 2 if y<32 else 3)
c.ellipse(205,8,24,24,11);c.ellipse(211,5,24,24,2)
for x,h in [(0,15),(15,26),(40,18),(59,32),(87,22),(108,15),(127,26),(151,19),(174,28),(204,15),(234,24)]:
 c.box(x,58-h,19,h,4)
 for yy in range(60-h,54,6):
  for xx in range(x+3,x+17,6):c.box(xx,yy,2,2,12)
for x in [30,194]:
 c.box(x,16,2,50,5);c.box(x-10,22,22,2,5);c.box(x-8,26,18,1,10)
c.box(0,58,256,70,6)
for y in range(62,128,9):c.box(0,y,256,1,7)
for y in range(66,128,18):
 for x in range((y%36)*2,256,36):c.box(x,y,1,9,7)
for x,y,w,h in [(130,62,96,22),(0,94,106,26)]:c.ellipse(x,y,w,h,5);c.ellipse(x+2,y,w-4,h-4,8);c.ellipse(x+9,y+3,w-18,h-10,9)
c.save('battle_city.4bpp');colors2=[(0,0,0),(16,24,48),(32,48,72),(56,88,112),(24,32,48),(8,16,32),(40,64,72),(48,80,88),(88,120,128),(112,152,160),(72,168,192),(168,216,232),(240,168,56),(224,56,88),(232,240,248),(255,255,255)]
(OUT/'battle_city.gbapal').write_bytes(pal(colors2)*3)
(OUT/'battle_city_map.bin').write_bytes(b''.join(struct.pack('<H',((y*32+x) if y<16 else 0)|0x2000) for y in range(32) for x in range(32)))
# Nine-tile mission UI frame. Palette entries 1..3 reserved for engine text.
f=Canvas(24,24,0)
for ty in range(3):
 for tx in range(3):
  if tx in [0,2]:f.box(tx*8+(2 if tx==0 else 5),ty*8,1,8,6);f.box(tx*8+(3 if tx==0 else 4),ty*8,1,8,5)
  if ty in [0,2]:f.box(tx*8,ty*8+(2 if ty==0 else 5),8,1,6);f.box(tx*8,ty*8+(3 if ty==0 else 4),8,1,5)
for x,y in [(2,2),(20,2),(2,20),(20,20)]:f.box(x,y,2,2,7)
f.save('window.4bpp')
wp=[(0,0,0),(72,72,72),(255,255,255),(176,184,192),(24,40,56),(32,88,112),(72,192,216),(248,168,48)]+[(255,255,255)]*8
(OUT/'window.gbapal').write_bytes(pal(wp))
print('Native assets generated')
# Forest battlefield: layered canopy, open sky and two grass platforms.
c=Canvas(256,128,1)
for y in range(0,58):c.box(0,y,256,1,1 if y<18 else 2 if y<36 else 3)
for x,h in [(0,44),(20,52),(42,35),(67,46),(93,39),(121,51),(151,33),(179,47),(204,39),(231,55)]:
 c.box(x+9,58-h//2,4,h//2,5);c.ellipse(x,58-h,24,h,4);c.ellipse(x+4,60-h,16,h-10,10)
c.box(0,57,256,71,6)
for y in range(63,128,8):
 for x in range((y%24),256,21):c.box(x,y,2,2,7);c.box(x+2,y-1,1,2,7)
for x,y,w,h in [(130,62,96,22),(0,94,106,26)]:c.ellipse(x,y,w,h,5);c.ellipse(x+2,y,w-4,h-4,8);c.ellipse(x+8,y+2,w-16,h-8,9)
c.save('battle_forest.4bpp')
forest=[(0,0,0),(48,120,160),(80,152,184),(120,192,192),(24,72,56),(16,48,40),(48,112,64),(72,144,80),(80,128,64),(120,168,80),(40,104,64),(208,232,208),(240,168,56),(224,56,88),(232,240,248),(255,255,255)]
(OUT/'battle_forest.gbapal').write_bytes(pal(forest)*3)
