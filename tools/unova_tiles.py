"""Compile selected credited BW/RMXP terrain into new, isolated GBA tilesets."""
from pathlib import Path
from PIL import Image
import struct,json,math
A=Path('../unova-assets/burning/Graphics/Tilesets')
for file,marker in [('src/data/tilesets/graphics.h','const u32 gTilesetTiles_UnOutdoor'),('src/data/tilesets/metatiles.h','const u16 gMetatiles_UnOutdoor'),('src/data/tilesets/headers.h','const struct Tileset gTileset_UnOutdoor')]:
    p=Path(file);text=p.read_text();p.write_text(text.split(marker)[0].rstrip()+'\n')
outside=Image.open(A/'Outside.png').convert('RGBA')
inside=Image.open(A/'Interior general.PNG').convert('RGBA')
def crop(box,source=outside):
    im=source.crop(box)
    im=im.resize((im.width//2,im.height//2),Image.Resampling.NEAREST)
    padded=Image.new("RGBA",(((im.width+15)//16)*16,((im.height+15)//16)*16));padded.paste(im,(0,0));return padded
def pal(images):
    pixels=[]
    for im in images:pixels.extend(p[:3]for p in im.getdata()if p[3]>128)
    m=Image.new('RGB',(max(1,len(pixels)),1));m.putdata(pixels or [(0,0,0)])
    q=m.quantize(colors=15,method=Image.Quantize.MEDIANCUT,dither=Image.Dither.NONE)
    p=q.getpalette()[:45];p=(p+[0]*45)[:45];return [(0,0,0)]+[tuple(p[i:i+3])for i in range(0,45,3)]
class Atlas:
    def __init__(self,name,secondary=False):
        self.name=name;self.secondary=secondary;self.images={};self.pools={};self.blocks={};self.metatiles=[];self.attrs=[];self.tiles=[bytes(64)];self.tile_ids={bytes(64):0};self.base=512 if secondary else 0;self.palettes=[[(0,0,0)]*16 for _ in range(13)]
    def add(self,name,im,pool=0,behavior=0):self.images[name]=(im,pool,behavior);return self
    def compile(self,ground=None):
        for im,p,b in self.images.values():self.pools.setdefault(p,[]).append(im)
        for p,images in self.pools.items():self.palettes[p]=pal(images)
        for name,(im,p,behavior)in self.images.items():
            palette=self.palettes[p];colors={}
            def color(rgb):
                if rgb not in colors:colors[rgb]=min(range(1,16),key=lambda i:sum((palette[i][c]-rgb[c])**2 for c in range(3)))
                return colors[rgb]
            indices=[0 if a<128 else color((r,g,b)) for r,g,b,a in im.getdata()]
            def tile(tx,ty):
                pix=bytes(indices[(ty+y)*im.width+tx+x]for y in range(8)for x in range(8))
                if pix not in self.tile_ids:self.tile_ids[pix]=len(self.tiles);self.tiles.append(pix)
                return (self.tile_ids[pix]+self.base)|(p<<12)
            blocks=[]
            for y in range(0,im.height,16):
                row=[]
                for x in range(0,im.width,16):
                    bottom=[tile(x,y),tile(x+8,y),tile(x,y+8),tile(x+8,y+8)]
                    # Tilesets use the covered layer for predictable actor priority.
                    row.append(len(self.metatiles)+self.base);self.metatiles.append((ground or (self.metatiles[0][4:] if self.metatiles else [0]*4))+bottom);self.attrs.append(0x1000|behavior)
                blocks.append(row)
            self.blocks[name]=blocks
        assert len(self.tiles)<=512,(self.name,len(self.tiles))
        assert len(self.metatiles)<=512
        root=Path('data/tilesets')/('secondary'if self.secondary else'primary')/('un_'+self.name.lower());root.mkdir(parents=True,exist_ok=True);(root/'palettes').mkdir(exist_ok=True)
        for i,palette in enumerate(self.palettes):(root/'palettes'/f'{i:02}.pal').write_text('JASC-PAL\n0100\n16\n'+'\n'.join(' '.join(map(str,c))for c in palette)+'\n')
        out=Image.new('P',(128,256));out.putpalette([i*16 for i in range(16)for _ in range(3)]+[0]*720)
        pix=out.load()
        for n,t in enumerate(self.tiles):
            for i,c in enumerate(t):pix[(n%16)*8+i%8,(n//16)*8+i//8]=c
        out.save(root/'tiles.png')
        data=self.metatiles+[[0]*8]*(512-len(self.metatiles));(root/'metatiles.bin').write_bytes(struct.pack('<4096H',*(c for t in data for c in t)))
        (root/'metatile_attributes.bin').write_bytes(struct.pack('<512H',*(self.attrs+[0]*(512-len(self.attrs)))))
        gfx=Path('src/data/tilesets/graphics.h');s=f'\nconst u32 gTilesetTiles_Un{self.name}[] = INCGFX_U32("{root}/tiles.png", ".4bpp.fastSmol");\nconst u16 gTilesetPalettes_Un{self.name}[][16] = {{\n'+''.join(f'    INCGFX_U16("{root}/palettes/{i:02}.pal", ".gbapal"),\n'for i in range(13))+'};\n';gfx.write_text(gfx.read_text()+s)
        meta=Path('src/data/tilesets/metatiles.h');meta.write_text(meta.read_text()+f'\nconst u16 gMetatiles_Un{self.name}[] = INCBIN_U16("{root}/metatiles.bin");\nconst u16 gMetatileAttributes_Un{self.name}[] = INCBIN_U16("{root}/metatile_attributes.bin");\n')
        head=Path('src/data/tilesets/headers.h');head.write_text(head.read_text()+f'\nconst struct Tileset gTileset_Un{self.name} = {{.isCompressed=TRUE,.isSecondary={"TRUE"if self.secondary else"FALSE"},.tiles=gTilesetTiles_Un{self.name},.palettes=gTilesetPalettes_Un{self.name},.metatiles=gMetatiles_Un{self.name},.metatileAttributes=gMetatileAttributes_Un{self.name},.callback=NULL}};\n')
        print(self.name,len(self.tiles),'tiles',len(self.metatiles),'metatiles')
        return self.blocks
general=Atlas('Outdoor')
general.add('ground',crop((32,0,64,32)),0).add('path',crop((32,64,64,96)),1).add('paving',crop((96,1600,128,1632)),2)
general.add('grass',crop((224,0,256,32)),0,2).add('tree',crop((0,1664,64,1760)),0)
general.add('flowers',crop((224,96,256,128)),0).add('water',Image.new('RGBA',(16,16),(69,128,182,255)),3,21)
general.add('bridge',crop((0,4544,32,4576)),2).add('fence',crop((128,5216,160,5248)),4)
general.add('rock',crop((0,3392,64,3456)),5).add('sign',crop((32,3616,64,3648)),4)
out=general.compile()
interior=Atlas('Indoor').add('floor',crop((0,896,32,928),inside),0).add('wall',crop((0,0,32,32),inside),1).add('wood',crop((0,864,32,896),inside),2).add('rug',crop((96,288,128,320),inside),3)
ind=interior.compile()
# Architecture is shared by the appropriate Unova maps, never by Hoenn/Sinnoh.
sets={
 'Village':[('house',(0,5408,128,5504),6),('lab',(96,5856,256,5952),7),('center',(0,10416,160,10592),8)],
 'Striaton':[('house',(0,6784,128,6880),6),('gym',(0,11520,256,11712),7),('center',(0,10416,160,10592),8)],
 'Nacrene':[('warehouse',(0,8800,192,9024),6),('museum',(0,9664,256,9856),7),('center',(0,10416,160,10592),8)],
 'Castelia':[('tower',(0,7168+288,160,7168+736),6),('shop',(96,8128,256,8288),7),('center',(0,10416,160,10592),8)],
 'Rooms':[('table',(0,1088,64,1152),6),('bookcase',(128,704,192,768),7),('machine',(160,2400,224,2496),8)]}
compiled={}
for name,objects in sets.items():
    a=Atlas(name,True)
    for key,box,pool in objects:a.add(key,crop(box,inside if name=='Rooms'else outside),pool)
    compiled[name]=a.compile(interior.metatiles[0][4:] if name=="Rooms" else general.metatiles[0][4:])
Path('tools/unova_tile_catalog.json').write_text(json.dumps({'Outdoor':out,'Indoor':ind,**compiled},indent=2))
