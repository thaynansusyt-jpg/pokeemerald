"""Compile credited BW character art into the engine's GBA sprite layouts.
Run once; all resulting indexed assets are checked into the release checkpoint.
The compiler repacks frames and palettes; it does not paint replacements.
"""
from pathlib import Path
from PIL import Image
import re,json
A=Path('../unova-assets')
D=A/'decades/Graphics'
def transparent(im):
    im=im.convert('RGBA')
    # RMXP sheets sometimes use the opaque corner color as their transparent key.
    if im.getpixel((0,0))[3]:
        bg=im.getpixel((0,0))[:3]
        im.putdata([(0,0,0,0) if p[:3]==bg else p for p in im.getdata()])
    return im
def index(im,path):
    im=transparent(im)
    rgb=im.convert('RGB').quantize(colors=15,method=Image.Quantize.MEDIANCUT,dither=Image.Dither.NONE)
    colors=rgb.getpalette()[:45];pal=[0,0,0]+colors+[0]*720
    out=Image.new('P',im.size);out.putpalette(pal[:768]);out.putdata([0 if a[3]<128 else c+1 for a,c in zip(im.getdata(),rgb.getdata())])
    path.parent.mkdir(parents=True,exist_ok=True);out.save(path)
    path.with_suffix('.pal').write_text('JASC-PAL\n0100\n16\n'+'\n'.join(' '.join(map(str,pal[i*3:i*3+3]))for i in range(16))+'\n')
def repack(path):
    im=transparent(Image.open(path));w,h=im.size[0]//4,im.size[1]//4
    order=[(0,0),(3,0),(1,0),(0,1),(0,3),(3,1),(3,3),(1,1),(1,3)]
    out=Image.new('RGBA',(9*32,32))
    for i,(r,c)in enumerate(order):
        frame=im.crop((c*w,r*h,(c+1)*w,(r+1)*h))
        # Blue rails on the bottom row are RMXP alignment markers, not sprite pixels.
        if r==3:
            pix=frame.load()
            for y in range(max(0,h-6),h):
                for x in range(w):
                    p=pix[x,y]
                    if p[0]<25 and p[1]>90 and p[2]>220:pix[x,y]=(0,0,0,0)
        frame=frame.resize((32,32),Image.Resampling.NEAREST);out.paste(frame,(i*32,0))
    return out
pic=Path('src/data/object_events/object_event_graphics.h')
tab=Path('src/data/object_events/object_event_pic_tables.h')
info=Path('src/data/object_events/object_event_graphics_info.h')
ptr=Path('src/data/object_events/object_event_graphics_info_pointers.h')
enum=Path('include/constants/event_objects.h')
mov=Path('src/event_object_movement.c')
npcTemplate=re.search(r'const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_SiYoungster = \{.*?\n\};',info.read_text(),re.S).group()
playerTemplate=re.search(r'const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_LucasNormal = \{.*?\n\};',info.read_text(),re.S).group()
chars={'Hilbert':D/'Characters/trainer_PLAYER_TRAINER_BW1_Hilbert.png','Hilda':D/'Characters/trainer_PLAYER_TRAINER_BW1_Hilda.png'}
for name,file in [('Bianca','NPC_B1W1_Bianca'),('Cheren','NPC_B1W1_Cheren'),('Juniper','NPC_B2W2_Aurea_Juniper'),('N','NPC_B2W2_N'),('Cilan','NPC_B2W2_Cilan'),('Chili','NPC_B2W2_Chili'),('Cress','NPC_B2W2_Cress'),('Burgh','NPC_B2W2_Burgh'),('Fennel','NPC_B2W2_Fennel')]:chars[name]=D/'Characters'/f'{file}.png'
for name,n in [('ChildM',3),('ChildF',10),('Worker',15),('Scientist',12),('Artist',8),('Sailor',13),('Gentleman',11),('Lady',19),('Clerk',20),('Musician',23),('Backpacker',18),('Nurse',21)]:chars[name]=A/'burning/Graphics/Characters'/f'NPC {n:02}.png'
for i,(name,path)in enumerate(chars.items()):
    stem='Un'+name;tag=0x1300+i;g='OBJ_EVENT_GFX_UN_'+re.sub(r'(?<!^)(?=[A-Z])','_',name).upper()
    out=Path('graphics/object_events/pics/people/unova')/(name.lower()+'.png');sheet=repack(path)
    if name in ('Hilbert','Hilda'):
        run=repack(D/'Characters'/f'BW1_{"boy"if name=="Hilbert"else"girl"}_run.png')
        im=Image.new('RGBA',(32*18,32));im.paste(sheet,(0,0));im.paste(run,(32*9,0));sheet=im
    index(sheet,out)
    pic.write_text(pic.read_text()+f'\nconst u16 gObjectEventPic_{stem}[] = INCGFX_U16("{out}", ".4bpp", "-mwidth 4 -mheight 4");\nconst u16 gObjectEventPal_{stem}[] = INCGFX_U16("{out.with_suffix(".pal")}", ".gbapal");\n')
    count=18 if name in ('Hilbert','Hilda') else 9
    tab.write_text(tab.read_text()+f'\nstatic const struct SpriteFrameImage sPicTable_{stem}[] = {{'+','.join(f'overworld_frame(gObjectEventPic_{stem},4,4,{f})'for f in range(count))+'};\n')
    template=(playerTemplate if count==18 else npcTemplate).replace('LucasNormal'if count==18 else'SiYoungster',stem).replace('0x1235'if count==18 else'0x12a0',hex(tag))
    info.write_text(info.read_text()+'\n'+template+'\n')
    s=ptr.read_text();s=f'extern const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_{stem};\n'+s;s=s.replace('[OBJ_EVENT_GFX_SI_YOUNGSTER]',f'[{g}] = &gObjectEventGraphicsInfo_{stem},\n[OBJ_EVENT_GFX_SI_YOUNGSTER]',1);ptr.write_text(s)
    enum.write_text(enum.read_text().replace('    NUM_OBJ_EVENT_GFX,',f'    {g},\n    NUM_OBJ_EVENT_GFX,'))
    mov.write_text(mov.read_text().replace('{gObjectEventPal_SiYoungster, 0x12a0},',f'{{gObjectEventPal_{stem}, {hex(tag)}}},\n{{gObjectEventPal_SiYoungster, 0x12a0}},'))
# Already supplied as nine-frame GBA sheets by Galaxeeh/Pokemon LIFE.
for name,path in [('PlasmaM',A/'Overworld Trainer Sprites/Galaxeeh/PlasmaGruntMale.png'),('PlasmaF',A/'Overworld Trainer Sprites/Galaxeeh/PlasmaGruntFemale.png'),('Ghetsis',A/'Overworld Trainer Sprites/Galaxeeh/ghetsis.png'),('Lenora',A/'Other/Pokemon LIFE/overworlds/Main/lenora.png')]:
    i+=1;stem='Un'+name;tag=0x1300+i;g='OBJ_EVENT_GFX_UN_'+name.upper();out=Path('graphics/object_events/pics/people/unova')/(name.lower()+'.png');index(Image.open(path),out)
    pic.write_text(pic.read_text()+f'\nconst u16 gObjectEventPic_{stem}[] = INCGFX_U16("{out}", ".4bpp", "-mwidth 4 -mheight 4");\nconst u16 gObjectEventPal_{stem}[] = INCGFX_U16("{out.with_suffix(".pal")}", ".gbapal");\n')
    tab.write_text(tab.read_text()+f'\nstatic const struct SpriteFrameImage sPicTable_{stem}[] = {{'+','.join(f'overworld_frame(gObjectEventPic_{stem},4,4,{f})'for f in range(9))+'};\n')
    info.write_text(info.read_text()+'\n'+npcTemplate.replace('SiYoungster',stem).replace('0x12a0',hex(tag))+'\n')
    s=ptr.read_text();s=f'extern const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_{stem};\n'+s;s=s.replace('[OBJ_EVENT_GFX_SI_YOUNGSTER]',f'[{g}] = &gObjectEventGraphicsInfo_{stem},\n[OBJ_EVENT_GFX_SI_YOUNGSTER]',1);ptr.write_text(s)
    enum.write_text(enum.read_text().replace('    NUM_OBJ_EVENT_GFX,',f'    {g},\n    NUM_OBJ_EVENT_GFX,'))
    mov.write_text(mov.read_text().replace('{gObjectEventPal_SiYoungster, 0x12a0},',f'{{gObjectEventPal_{stem}, {hex(tag)}}},\n{{gObjectEventPal_SiYoungster, 0x12a0}},'))
s=mov.read_text().replace('    if (SiNamingSeason())','    if (SiNamingSeason()==1)')
pos=s.index('    if (SiNamingSeason()==1)');s=s[:pos]+'''    if (SiNamingSeason()==2)
    {
        if(graphicsId==OBJ_EVENT_GFX_BRENDAN_NORMAL||graphicsId==OBJ_EVENT_GFX_BRENDAN_FIELD_MOVE||graphicsId==OBJ_EVENT_GFX_BRENDAN_FISHING)return &gObjectEventGraphicsInfo_UnHilbert;
        if(graphicsId==OBJ_EVENT_GFX_MAY_NORMAL||graphicsId==OBJ_EVENT_GFX_MAY_FIELD_MOVE||graphicsId==OBJ_EVENT_GFX_MAY_FISHING)return &gObjectEventGraphicsInfo_UnHilda;
    }
'''+s[pos:];mov.write_text(s)
# Trainer front and throwing animations preserve each BW protagonist's identity.
fronts={'Hilbert':D/'Trainers/PLAYER_TRAINER_BW1_Hilbert.png','Hilda':D/'Trainers/PLAYER_TRAINER_BW1_Hilda.png','Bianca':D/'Trainers/UNOVAIAN_B1W1_BIANCA.png','Cheren':D/'Trainers/UNOVAIAN_B1W1_CHEREN.png','N':D/'Trainers/UNOVAIAN_B2W2_N.png','Cilan':D/'Trainers/UNOVAIAN_B2W2_CILAN.png','Chili':D/'Trainers/UNOVAIAN_B2W2_CHILI.png','Cress':D/'Trainers/UNOVAIAN_B2W2_CRESS.png','Burgh':D/'Trainers/UNOVAIAN_B2W2_BURGH.png','Lenora':A/'burning/Graphics/Trainers/LEADER_Lenora.png','PlasmaM':A/'Trainer Front Sprites/Galaxeeh/plasma_m.png','PlasmaF':A/'Trainer Front Sprites/Galaxeeh/plasma_f.png'}
graphics=Path('src/data/graphics/trainers.h');en=Path('include/constants/trainers.h')
for name,path in fronts.items():
    stem='Un'+name;g='TRAINER_PIC_UN_'+name.upper();out=Path('graphics/trainers/front_pics/unova')/(name.lower()+'.png');im=transparent(Image.open(path));im=im.crop(im.getbbox());im.thumbnail((62,62),Image.Resampling.NEAREST);canvas=Image.new('RGBA',(64,64));canvas.paste(im,((64-im.width)//2,64-im.height));index(canvas,out)
    declaration=f'\nconst u32 gTrainerFrontPic_{stem}[] = INCGFX_U32("{out}", ".4bpp.smol");\nconst u16 gTrainerPalette_{stem}[] = INCGFX_U16("{out.with_suffix(".pal")}", ".gbapal");\n';back=''
    if name in ('Hilbert','Hilda'):
        im=transparent(Image.open(D/'Trainers'/f'PLAYER_TRAINER_BW1_{name}_back.png'));w=im.width//5;canvas=Image.new('RGBA',(4*64,64))
        for i in range(4):canvas.paste(im.crop((i*w,0,(i+1)*w,im.height)).resize((64,64),Image.Resampling.NEAREST),(i*64,0))
        bp=Path('graphics/trainers/back_pics/unova')/(name.lower()+'.png');index(canvas,bp)
        declaration+=f'const u8 gTrainerBackPic_{stem}[] = INCGFX_U8("{bp}", ".4bpp", "-mwidth 8 -mheight 8");\nconst u16 gTrainerBackPal_{stem}[] = INCGFX_U16("{bp.with_suffix(".pal")}", ".gbapal");\n'
        back=f', .backPic = TRAINER_BACK_PIC(4, gTrainerBackPic_{stem}, gTrainerBackPal_{stem}, sBackAnims_Hoenn)'
    s=graphics.read_text().replace('const struct TrainerPicInfo gTrainerPicInfo',declaration+'\nconst struct TrainerPicInfo gTrainerPicInfo',1)
    s=s.replace('[TRAINER_PIC_SI_LUCAS_DP]',f'[{g}] = {{.frontPic = TRAINER_FRONT_PIC(gTrainerFrontPic_{stem}, gTrainerPalette_{stem}){back}}},\n    [TRAINER_PIC_SI_LUCAS_DP]',1);graphics.write_text(s)
    en.write_text(en.read_text().replace('    TRAINER_PIC_COUNT,',f'    {g},\n    TRAINER_PIC_COUNT,'))
p=Path('src/trainer.c');s=p.read_text().replace('#include "sinnoh_chapter.h"','#include "sinnoh_chapter.h"\n#include "unova_chapter.h"').replace('    if (version == VERSION_EMERALD && SiIsSeason())','    if(version==VERSION_EMERALD&&UnIsSeason())return gender==MALE?TRAINER_PIC_UN_HILBERT:TRAINER_PIC_UN_HILDA;\n    if (version == VERSION_EMERALD && SiIsSeason())');p.write_text(s)
# Professor Juniper's BW portrait is split into hardware-size sprites, like Rowan.
im=transparent(Image.open(A/'burning/Graphics/Pictures/introJuniper.png'));im=im.crop(im.getbbox());im.thumbnail((64,112),Image.Resampling.NEAREST);canvas=Image.new('RGBA',(64,128));canvas.paste(im,((64-im.width)//2,128-im.height));tmp=Path('graphics/birch_speech/juniper.png');index(canvas,tmp);pal=Image.open(tmp);pal.crop((0,0,64,64)).save('graphics/birch_speech/juniper_top.png');pal.crop((0,64,64,128)).save('graphics/birch_speech/juniper_bottom.png')
p=Path('src/field_effect.c');s=p.read_text();template=s[s.index('static const u32 sNewGameRowanTop_Gfx'):s.index('const struct SpritePalette gSpritePalette_PokeballGlow')];template=template.replace('Rowan','Juniper').replace('rowan','juniper');s=s.replace('const struct SpritePalette gSpritePalette_PokeballGlow',template+'\nconst struct SpritePalette gSpritePalette_PokeballGlow',1)
s=s.replace('    if (SiNewGameSeason())\n    {','    if (SiNewGameSeason()==2)\n    {\n        u8 topId,bottomId;\n        LoadSpritePalette(&sSpritePalette_NewGameJuniper);\n        topId=CreateSprite(&sSpriteTemplate_NewGameJuniperTop,x,y-36,subpriority);\n        bottomId=CreateSprite(&sSpriteTemplate_NewGameJuniperBottom,x,y+28,subpriority);\n        gSprites[bottomId].data[0]=topId;gSprites[bottomId].callback=SiRowanBottom;return topId;\n    }\n    if (SiNewGameSeason()==1)\n    {');p.write_text(s)
print('Compiled',len(chars)+4,'overworld identities and',len(fronts),'trainer portraits')
