"""Create Unova chapter 1 without replacing any existing map/layout/trainer ID."""
from pathlib import Path
import json,struct,re,textwrap
R=Path('.')
C=json.load(open('tools/unova_tile_catalog.json'))
maps={};layouts=[];code=[];texts=[];translations=[];trainers=[];trainer_flags=[]
def mid(name):return 'MAP_UN_'+re.sub(r'(?<!^)(?=[A-Z])','_',name).upper()
def lid(name):return 'LAYOUT_UN_'+name.upper()
def text(key,pt,en):
    label='UN_T_'+key
    def encode(s):
        lines=textwrap.wrap(s,26,break_long_words=False,break_on_hyphens=False)
        return ''.join(line+(''if i==len(lines)-1 else'\\n'if i%2==0 else'\\p')for i,line in enumerate(lines)).replace('"','\\"')+'$'
    texts.extend([label+'::',' .string "'+encode(pt)+'"',label+'_En::',' .string "'+encode(en)+'"']);translations.append(label);return label
def script(label,body):code.extend([label+'::',body])
def message(label):return f' msgbox {label}, MSGBOX_DEFAULT\n'
def simple(label,pt,en,after=None):
    t=text(label,pt,en);body=' lock\n faceplayer\n'
    if after:
        t2=text(label+'_After',*after);body+=f' goto_if_ge VAR_UN_STAGE, 17, {label}_After\n'
    body+=message(t)+' release\n end\n'
    if after:body+=label+'_After:\n'+message(t2)+' release\n end'
    script(label,body);return label
def create(name,w,h,theme='Village',indoor=False,title=None,cave=False):
    outdoor=C['Outdoor'];floor=C['Indoor']['floor'][0][0] if indoor else outdoor['paving'if theme=='Castelia'else'ground'][0][0]
    grid=[[0x3000|floor for x in range(w)]for y in range(h)]
    m={'id':mid(name),'name':'Un'+name,'layout':lid(name),'music':'MUS_ROUTE101' if name.startswith('Route')else'MUS_SLATEPORT'if theme=='Castelia'else'MUS_LITTLEROOT','region_map_section':'MAPSEC_UN_NUVEMA'if name.startswith('Nuvema')else'MAPSEC_UN_CASTELIA'if theme=='Castelia'else'MAPSEC_UN_ROUTES','requires_flash':False,'weather':'WEATHER_NONE'if indoor else'WEATHER_SUNNY','map_type':'MAP_TYPE_CAVE'if cave else'MAP_TYPE_INDOOR'if indoor else'MAP_TYPE_ROUTE'if name.startswith(('Route','Pinwheel','Skyarrow'))else'MAP_TYPE_TOWN','allow_cycling':not indoor,'allow_escaping':cave,'allow_running':True,'show_map_name':True,'battle_scene':'MAP_BATTLE_SCENE_NORMAL','connections':[],'object_events':[],'warp_events':[],'coord_events':[],'bg_events':[],'region':'REGION_UNOVA'}
    if cave:m['music']='MUS_RG_MT_MOON'
    maps[name]={'map':m,'grid':grid,'w':w,'h':h,'theme':'Rooms'if indoor else theme,'indoor':indoor,'title':title or re.sub(r'(?<!^)(?=[A-Z])',' ',name)}
    if indoor:
        wall=C['Indoor']['wall'][0][0]
        for x in range(w):grid[0][x]=grid[1][x]=grid[h-1][x]=0x3C00|wall
        for y in range(h):grid[y][0]=grid[y][w-1]=0x3C00|wall
    else:
        # Tree belts prevent walking around story gates or stepping through roofs.
        for y in range(0,h-2,3):
            for x in [0,2,w-4,w-2]:stamp(name,'tree',x,y,True,'Outdoor')
        for x in range(4,w-4,2):
            stamp(name,'tree',x,0,True,'Outdoor');stamp(name,'tree',x,h-3,True,'Outdoor')
        fill(name,w//2-2,0,4,h,'path'if theme!='Castelia'else'paving')
    return name
def fill(name,x,y,w,h,key,collide=False,theme='Outdoor'):
    block=C[theme][key][0][0];a=maps[name]
    for yy in range(max(0,y),min(a['h'],y+h)):
        for xx in range(max(0,x),min(a['w'],x+w)):a['grid'][yy][xx]=0x3000|(0xC00 if collide else 0)|block
def stamp(name,key,x,y,collide=True,theme=None):
    a=maps[name];blocks=C[theme or a['theme']][key]
    for dy,row in enumerate(blocks):
        for dx,b in enumerate(row):
            if 0<=x+dx<a['w'] and 0<=y+dy<a['h']:a['grid'][y+dy][x+dx]=0x3000|(0xC00 if collide else 0)|b
    return len(blocks[0]),len(blocks)
def actor(name,gfx,x,y,label,movement='FACE_DOWN',trainer=False,sight=2,flag='0'):
    a=maps[name];local=len(a['map']['object_events'])+1
    a['map']['object_events'].append({'graphics_id':'OBJ_EVENT_GFX_UN_'+gfx,'x':x,'y':y,'elevation':3,'movement_type':'MOVEMENT_TYPE_'+movement,'movement_range_x':1 if 'WANDER'in movement else 0,'movement_range_y':0,'trainer_type':'TRAINER_TYPE_NORMAL'if trainer else'TRAINER_TYPE_NONE','trainer_sight_or_berry_tree_id':str(sight if trainer else 0),'script':label,'flag':flag,'local_id':str(local)})
    if a['indoor']:fill(name,x,y,1,2,'floor',theme='Indoor')
    else:fill(name,x,y,1,1,'paving'if a['theme']=='Castelia'else'path')
    return local
def point(name,x,y,label):maps[name]['map']['bg_events'].append({'type':'sign','x':x,'y':y,'elevation':0,'player_facing_dir':'BG_EVENT_PLAYER_FACING_ANY','script':label})
def trigger(name,x,y,label):maps[name]['map']['coord_events'].append({'type':'trigger','x':x,'y':y,'elevation':0,'var':'VAR_TEMP_0','var_value':'0','script':label})
def connect(south,north):
    a,b=maps[south],maps[north];offset=a['w']//2-b['w']//2
    a['map']['connections'].append({'map':mid(north),'offset':offset,'direction':'up'})
    b['map']['connections'].append({'map':mid(south),'offset':-offset,'direction':'down'})
def gate(name,required,y=3):
    label='UN_Gate_'+name;script(label,f' goto_if_ge VAR_UN_STAGE, {required}, UN_End\n lockall\n'+message('UN_T_Gate')+' applymovement OBJ_EVENT_ID_PLAYER, UN_MoveDown\n waitmovement 0\n releaseall\n end')
    for x in range(maps[name]['w']//2-2,maps[name]['w']//2+2):trigger(name,x,y,label)
def door(outside,inside,x,y,building='house',bx=None,by=None):
    a,b=maps[outside],maps[inside]
    if bx is not None:
        w,h=stamp(outside,building,bx,by)
        x=bx+w//2;y=by+h-1
    if a['indoor']:fill(outside,x,y,1,1,'floor',theme='Indoor')
    else:fill(outside,x,y,1,2,'paving'if a['theme']=='Castelia'else'path')
    fill(inside,b['w']//2,b['h']-1,1,1,'floor',theme='Indoor')
    n,m=len(a['map']['warp_events']),len(b['map']['warp_events'])
    a['map']['warp_events'].append({'x':x,'y':y,'elevation':0,'dest_map':mid(inside),'dest_warp_id':str(m)})
    b['map']['warp_events'].append({'x':b['w']//2,'y':b['h']-1,'elevation':0,'dest_map':mid(outside),'dest_warp_id':str(n)})
def trainer(key,name,pic,mons,gfx=None,difficulty=True):
    ident='TRAINER_UN_'+key;tid=994+len(trainers);trainers.append((ident,name,pic,mons))
    trainer_flags.append(0x8e5+len(set(trainer_flags)))
    return ident
def challenge(label,stage,nextstage,ident,pt,en,afterPt,afterEn,reward=''):
    intro=text(label+'_Intro',pt,en);lose=text(label+'_Defeat','Meu parceiro confiou em mim. Agora preciso ouvir melhor.','My partner trusted me. I need to listen better.');after=text(label+'_After',afterPt,afterEn)
    body=f' lockall\n faceplayer\n goto_if_lt VAR_UN_STAGE, {stage}, UN_NotYet\n goto_if_gt VAR_UN_STAGE, {stage}, UN_Done\n trainerbattle_single {ident}, {intro}, {lose}, {label}_Win, NO_MUSIC\n goto {label}_Win\n{label}_Win::\n setvar VAR_UN_STAGE, {nextstage}\n{reward}'+message(after)+' releaseall\n end'
    script(label,body)
def variation(key,name,pic,baselevel,starterOffset):
    ids=[];shared=0x8e5+len(set(trainer_flags))
    for i,starter in enumerate(['Snivy','Tepig','Oshawott']):
        mons=[(starter,baselevel+starterOffset)] if baselevel<=5 else [('Lillipup',baselevel-1),(starter,baselevel)]
        ids.append(trainer(key+'_'+str(i+1),name,pic,mons));trainer_flags[-1]=shared
    return ids
# The chapter's connected geography.
for n,theme in [('NuvemaTown','Village'),('AccumulaTown','Village'),('StriatonCity','Striaton'),('NacreneCity','Nacrene')]:create(n,48,42,theme,title=n.replace('Town',' Town').replace('City',' City'))
for n,h in [('Route1',48),('Route2',56),('Route3',48)]:create(n,32,h,'Village',title='ROUTE '+n[-1])
create('Dreamyard',36,36,'Nacrene');create('WellspringCave',24,30,'Rooms',True,cave=True,title='WELLSPRING CAVE')
create('PinwheelOuter',40,44,'Village',title='PINWHEEL FOREST');create('PinwheelInner',40,58,'Village',title='PINWHEEL FOREST')
create('SkyarrowBridge',24,96,'Village',title='SKYARROW BRIDGE')
create('CasteliaCity',64,60,'Castelia',title='CASTELIA CITY');create('CasteliaStreet',48,36,'Castelia',title='CASTELIA / AVENIDA')
chain=['NuvemaTown','Route1','AccumulaTown','Route2','StriatonCity','Route3','NacreneCity','PinwheelOuter','PinwheelInner','SkyarrowBridge','CasteliaCity','CasteliaStreet']
for a,b in zip(chain,chain[1:]):connect(a,b)
for n,stage in [('NuvemaTown',2),('AccumulaTown',3),('Route2',4),('StriatonCity',8),('Route3',9),('NacreneCity',12),('PinwheelInner',13)]:gate(n,stage)
for city in ['Nuvema','Accumula','Striaton','Nacrene','Castelia']:
    town=city+('Town'if city in ('Nuvema','Accumula')else'City')
    create(city+'House',18,14,'Rooms',True,title=city.upper()+' / CASA')
    door(town,city+'House',0,0,building='tower'if city=='Castelia'else'warehouse'if city=='Nacrene'else'house',bx=7,by=7)
    if city!='Nuvema':
        create(city+'Center',22,18,'Rooms',True,title=city.upper()+' / POKEMON CENTER')
        door(town,city+'Center',0,0,building='center',bx=32 if city!='Castelia'else 43,by=8)
        actor(city+'Center','NURSE',11,5,'UN_Heal')
        stamp(city+'Center','machine',16,3)
        point(city+'Center',17,5,'EventScript_PC')
        create(city+'Mart',18,14,'Rooms',True,title=city.upper()+' / MART')
        door(town,city+'Mart',0,0,building='shop'if city=='Castelia'else'warehouse'if city=='Nacrene'else'house',bx=31 if city!='Castelia'else 44,by=29)
        actor(city+'Mart','CLERK',8,4,'UN_Mart')
create('NuvemaBedroom',20,15,'Rooms',True,title='NUVEMA / SEU QUARTO');door('NuvemaHouse','NuvemaBedroom',14,7)
create('NuvemaLab',22,18,'Rooms',True,title='LABORATORIO JUNIPER');door('NuvemaTown','NuvemaLab',0,0,'lab',32,8)
create('StriatonSchool',22,18,'Rooms',True,title='ESCOLA DE TREINADORES');door('StriatonCity','StriatonSchool',0,0,'house',7,29)
create('StriatonGym',22,28,'Rooms',True,title='GINASIO STRIATON');door('StriatonCity','StriatonGym',0,0,'gym',20,21)
create('FennelLab',22,18,'Rooms',True,title='LABORATORIO FENNEL');door('StriatonCity','FennelLab',0,0,'house',32,29)
create('NacreneMuseum',24,28,'Rooms',True,title='MUSEU / GINASIO NACRENE');door('NacreneCity','NacreneMuseum',0,0,'museum',21,24)
create('CasteliaPlasmaHouse',22,24,'Rooms',True,title='CASTELIA / ESCONDERIJO');door('CasteliaCity','CasteliaPlasmaHouse',0,0,'shop',7,37)
create('CasteliaGym',24,32,'Rooms',True,title='GINASIO CASTELIA');door('CasteliaStreet','CasteliaGym',0,0,'tower',28,8)
create('CasteliaStudio',20,16,'Rooms',True,title='ATELIE CASTELIA');door('CasteliaStreet','CasteliaStudio',0,0,'shop',7,9)
# Native door exits are also used for the two optional wild areas.
maps['StriatonCity']['map']['warp_events'].append({'x':45,'y':19,'elevation':0,'dest_map':mid('Dreamyard'),'dest_warp_id':'0'});fill('StriatonCity',44,18,3,3,'path')
maps['Dreamyard']['map']['warp_events'].append({'x':2,'y':18,'elevation':0,'dest_map':mid('StriatonCity'),'dest_warp_id':str(len(maps['StriatonCity']['map']['warp_events'])-1)});fill('Dreamyard',1,18,5,3,'path')
maps['Route3']['map']['warp_events'].append({'x':28,'y':16,'elevation':0,'dest_map':mid('WellspringCave'),'dest_warp_id':'0'});fill('Route3',24,16,7,2,'path')
maps['WellspringCave']['map']['warp_events'].append({'x':12,'y':29,'elevation':0,'dest_map':mid('Route3'),'dest_warp_id':'0'});fill('WellspringCave',12,29,1,1,'floor',theme='Indoor')
# Rich terrain; long routes have side paths, grass patches and trainer lanes.
for n in ['Route1','Route2','Route3','PinwheelOuter','PinwheelInner','Dreamyard']:
    a=maps[n];w,h=a['w'],a['h']
    for y in range(7,h-7,12):
        fill(n,5,y,7,5,'grass');fill(n,w-12,y+3,6,5,'grass');fill(n,5,y+5,w-10,2,'path')
        stamp(n,'tree',4,y-2,True,'Outdoor');stamp(n,'rock',w-7,y-1,True,'Outdoor')
    if n.startswith('Pinwheel'):
        for y in range(8,h-6,10):stamp(n,'tree',w//2-6,y,True,'Outdoor');stamp(n,'tree',w//2+4,y,True,'Outdoor')
bridge=maps['SkyarrowBridge'];fill('SkyarrowBridge',0,0,24,96,'water',True);fill('SkyarrowBridge',9,0,6,96,'bridge');fill('SkyarrowBridge',8,0,1,96,'fence',True);fill('SkyarrowBridge',15,0,1,96,'fence',True)
for y in range(10,90,18):stamp('SkyarrowBridge','sign',17,y,True,'Outdoor')
fill('CasteliaCity',4,50,56,7,'water',True);fill('CasteliaCity',25,47,8,13,'bridge');fill('CasteliaCity',4,44,56,6,'paving')
for x in [5,17,40,52]:fill('CasteliaCity',x,47,4,10,'bridge')
for x,y in [(7,22),(43,23),(7,4)]:stamp('CasteliaCity','tower',x,y,True)
for name,a in maps.items():
    if a['indoor']:
        for x in range(3,a['w']-4,6):stamp(name,'bookcase',x,2)
        stamp(name,'table',3,a['h']//2)
    elif 'Route'not in name and 'Pinwheel'not in name and name!='SkyarrowBridge':
        for x,y in [(16,8),(19,31),(29,35)]:
            if x<a['w']-4 and y<a['h']-4:stamp(name,'flowers',x,y,False,'Outdoor')
# Story text and shared script utilities.
text('Gate','Seus amigos ainda precisam de voce. Abra Missoes para ver o destino atual.','Your friends still need you. Open Missions to see your current destination.')
text('NotYet','Precisamos preparar o proximo passo. Seu C-Gear mostra a missao atual.','We must prepare the next step. Your C-Gear shows the current mission.')
text('Done','Seguimos juntos, um passo de cada vez. Mesmo a verdade pode mudar quando escutamos.','We keep going together, one step at a time. Even truth can change when we listen.')
script('UN_End',' end');script('UN_NotYet',message('UN_T_NotYet')+' releaseall\n end');script('UN_Done',message('UN_T_Done')+' releaseall\n end')
script('UN_MoveDown',' walk_normal_down\n step_end');script('UN_MoveLeft',' walk_normal_left\n walk_normal_left\n step_end');script('UN_MoveRight',' walk_normal_right\n walk_normal_right\n step_end')
text('Prologue','Bianca: Juniper mandou tres parceiros! Cheren ja leu cada pagina do manual. Eu so quero conhecer o meu! Escolha primeiro, {PLAYER}.','Bianca: Juniper sent three partners! Cheren read every manual page. I just want to meet mine! You choose first, {PLAYER}.')
text('Starter','Snivy, Tepig ou Oshawott? Esse parceiro vai viver esta historia ao seu lado.','Snivy, Tepig or Oshawott? This partner will live this story with you.')
text('FirstBattle','Cheren: Um parceiro nao e um premio. Vamos descobrir juntos como batalhar!','Cheren: A partner is not a prize. Let us learn how to battle together!')
text('FriendsLeave','Bianca: Meu quarto virou uma bagunca! Cheren: A gente limpa depois. A Professora Juniper nos espera no laboratorio. Sua mae preparou os tenis de corrida.','Bianca: We made such a mess! Cheren: We will clean it later. Professor Juniper is waiting in her lab. Your mom prepared your running shoes.')
bianca0=variation('BIANCA0','BIANCA','BIANCA',5,0);cheren0=variation('CHEREN0','CHEREN','CHEREN',5,0)
body=' lockall\n'+message('UN_T_Prologue')+message('UN_T_Starter')+' multichoice 0, 0, MULTI_UN_STARTER, TRUE\n copyvar VAR_UN_STARTER, VAR_RESULT\n addvar VAR_UN_STARTER, 1\n'
for i,species in enumerate(['SNIVY','TEPIG','OSHAWOTT']):body+=f' goto_if_eq VAR_RESULT, {i}, UN_Starter{i}\n'
for i,species in enumerate(['SNIVY','TEPIG','OSHAWOTT']):body+=f'UN_Starter{i}:\n givepokemon SPECIES_{species}, 5, ITEM_NONE\n goto UN_StarterReady\n'
body+='UN_StarterReady:\n setflag FLAG_SYS_POKEMON_GET\n'+message('UN_T_FirstBattle')
for i in range(3):body+=f' goto_if_eq VAR_UN_STARTER, {i+1}, UN_First{i}\n'
for i in range(3):
    body+=f'UN_First{i}:\n trainerbattle_single {bianca0[(i+1)%3]}, UN_T_FirstBattle, UN_T_Done, UN_First{i}_Second, NO_MUSIC\n goto UN_First{i}_Second\nUN_First{i}_Second::\n special HealPlayerParty\n trainerbattle_single {cheren0[(i+2)%3]}, UN_T_FirstBattle, UN_T_Done, UN_FirstWon, NO_MUSIC\n goto UN_FirstWon\n'
body+='UN_FirstWon::\n special HealPlayerParty\n setvar VAR_UN_STAGE, 1\n'+message('UN_T_FriendsLeave')+' releaseall\n end';script('UN_Prologue',body)
actor('NuvemaBedroom','BIANCA',7,7,'UN_FriendBianca');actor('NuvemaBedroom','CHEREN',12,7,'UN_FriendCheren')
simple('UN_FriendBianca','Bianca: Eu me perco ate na minha cidade. Mas meu parceiro sempre encontra um jeito de me trazer de volta.','Bianca: I get lost even in my own town. My partner always finds a way to bring me back.')
simple('UN_FriendCheren','Cheren: Ser forte e uma meta. Entender para que usar essa forca ainda e uma pergunta.','Cheren: Getting strong is a goal. What to use that strength for is still a question.')
text('Juniper','Juniper: Nao quero uma lista de capturas. Quero as historias que voces vao viver. Tome a Pokedex e estas Poke Balls. A Rota 1 muda com as estacoes; observe suas cores.','Juniper: I do not want a capture list. I want the stories you will live. Take this Pokedex and these Poke Balls. Route 1 changes with the seasons; watch its colors.')
script('UN_Juniper',' lock\n faceplayer\n goto_if_lt VAR_UN_STAGE, 1, UN_NotYet\n goto_if_gt VAR_UN_STAGE, 1, UN_Done\n'+message('UN_T_Juniper')+' setflag FLAG_SYS_POKEDEX_GET\n giveitem ITEM_POKE_BALL, 20\n giveitem ITEM_POTION, 5\n setvar VAR_UN_STAGE, 2\n release\n end');actor('NuvemaLab','JUNIPER',11,5,'UN_Juniper')
nBattle=trainer('N_ACCUMULA','N','N',[('Purrloin',7)])
challenge('UN_AccumulaScene',2,3,nBattle,'Ghetsis: A liberdade exige separar pessoas e Pokemon! N: Espere. Seu parceiro quer me dizer algo. Uma batalha pode revelar o que palavras escondem.','Ghetsis: Freedom demands separating people and Pokemon! N: Wait. Your partner wants to tell me something. A battle can reveal what words hide.','N: Eu ouvi confianca... e um ruido, como gelo quebrando dentro de um sino. Por que tres vozes respondem a voce?','N: I heard trust... and a noise, like ice breaking inside a bell. Why do three voices answer you?')
actor('AccumulaTown','GHETSIS',24,19,'UN_PlazaCitizen');actor('AccumulaTown','N',22,22,'UN_AccumulaScene');actor('AccumulaTown','CHEREN',26,24,'UN_FriendCheren')
simple('UN_PlazaCitizen','O discurso de Ghetsis parece bonito. Entao por que os Pokemon dos guardas se afastam dele?','Ghetsis gives a beautiful speech. Why do his guards Pokemon shy away from him?')
bianca1=variation('BIANCA1','BIANCA','BIANCA',9,0)
for i,t in enumerate(bianca1):challenge('UN_BiancaRoute'+str(i+1),3,4,t,'Bianca: Meu pai quer que eu volte. Eu quero descobrir quem posso ser! Vamos batalhar antes de Striaton?','Bianca: Dad wants me home. I want to discover who I can be! A battle before Striaton?','Bianca: Perder nao significa desistir. Vou mostrar a ele que meu parceiro cuida de mim tambem.','Bianca: Losing does not mean quitting. I will show him my partner also takes care of me.')
script('UN_BiancaRoute',' goto_if_eq VAR_UN_STARTER, 1, UN_BiancaRoute2\n goto_if_eq VAR_UN_STARTER, 2, UN_BiancaRoute3\n goto UN_BiancaRoute1');actor('Route2','BIANCA',17,8,'UN_BiancaRoute')
cheren1=variation('CHEREN1','CHEREN','CHEREN',11,0)
for i,t in enumerate(cheren1):challenge('UN_CherenSchool'+str(i+1),4,5,t,'Cheren: Aprendi as vantagens de tipo. Agora quero testar meu raciocinio, nao so o meu Pokemon.','Cheren: I learned type advantages. Now I want to test my thinking, not just my Pokemon.','Cheren: Os tres irmaos do restaurante lideram o ginasio. Eles escolhem o tipo que desafia seu parceiro.','Cheren: The three restaurant brothers lead the Gym. They choose the type that challenges your partner.')
script('UN_CherenSchool',' goto_if_eq VAR_UN_STARTER, 1, UN_CherenSchool3\n goto_if_eq VAR_UN_STARTER, 2, UN_CherenSchool1\n goto UN_CherenSchool2');actor('StriatonSchool','CHEREN',12,6,'UN_CherenSchool')
gym1=[]
for key,name,species in [('CHILI','CHILI','Pansear'),('CRESS','CRESS','Panpour'),('CILAN','CILAN','Pansage')]:
    t=trainer(key,name,key,[('Lillipup',12),(species,14)]);gym1.append(t)
    challenge('UN_'+key,5,6,t,'Bem-vindo ao restaurante! Preparar uma batalha tambem exige equilibrio. Mostre como cuida do seu parceiro.','Welcome to our restaurant! Preparing a battle also takes balance. Show how you care for your partner.','A Trio Badge e sua! Fennel investigou um sinal de sonhos no Dreamyard. Bianca foi ver o que houve.','The Trio Badge is yours! Fennel found a dream signal in the Dreamyard. Bianca went to investigate.',' setvar VAR_UN_BADGES, 1\n setflag FLAG_BADGE01_GET\n call Common_EventScript_PlayGymBadgeFanfare\n giveitem ITEM_TM_WORK_UP\n')
script('UN_StriatonLeader',' goto_if_eq VAR_UN_STARTER, 1, UN_CHILI\n goto_if_eq VAR_UN_STARTER, 2, UN_CRESS\n goto UN_CILAN')
actor('StriatonGym','CILAN',11,5,'UN_StriatonLeader');actor('StriatonGym','CHILI',7,5,'UN_StriatonLeader');actor('StriatonGym','CRESS',15,5,'UN_StriatonLeader')
plasmaDream=trainer('DREAMYARD','PLASMA','PLASMAM',[('Patrat',15),('Purrloin',16)])
challenge('UN_DreamyardPlasma',6,7,plasmaDream,'Plasma: A fumaca de Munna revela desejos. Nosso aparelho vai extrair a lembranca de um dragao que nem existe mais! Bianca: Isso esta machucando Munna!','Plasma: Munna smoke reveals wishes. Our device will extract the memory of a dragon that no longer exists! Bianca: That is hurting Munna!','Fennel: A fumaca mostrou fogo, raios e um vazio congelado. Leve Munna para o meu laboratorio. Vamos ouvir o sonho sem forcar ninguem.','Fennel: The smoke showed fire, lightning and a frozen void. Bring Munna to my lab. We will hear the dream without forcing anyone.')
actor('Dreamyard','PLASMAM',18,15,'UN_DreamyardPlasma');actor('Dreamyard','BIANCA',15,17,'UN_FriendBianca');actor('Dreamyard','FENNEL',21,17,'UN_Fennel')
simple('UN_Munna','Munna dorme em paz. Na fumaca, voce distingue um vulto com tres brilhos diferentes.','Munna sleeps peacefully. In its smoke you see a shape with three different lights.')
id=actor('Dreamyard','CHILD_M',18,18,'UN_Munna');maps['Dreamyard']['map']['object_events'][-1]['graphics_id']='OBJ_EVENT_GFX_SPECIES(MUNNA)'
text('Fennel','Fennel: Este C-Gear escuta ecos dos sonhos. Com pouca vida e depois de dois turnos, um sinal harmonico reforca sua captura. Sao tres cargas, recarregadas no Centro. Nao controla o Pokemon: ajuda voces a se entenderem.','Fennel: This C-Gear hears dream echoes. At low HP after two turns, a harmonic signal strengthens a catch. It has three charges, refilled at a Center. It does not control Pokemon: it helps you understand each other.')
script('UN_Fennel',' lock\n faceplayer\n goto_if_lt VAR_UN_STAGE, 7, UN_NotYet\n goto_if_gt VAR_UN_STAGE, 7, UN_Done\n'+message('UN_T_Fennel')+' setflag FLAG_UN_CGEAR\n setvar VAR_UN_RESONANCE, 3\n setvar VAR_UN_STAGE, 8\n release\n end');actor('FennelLab','FENNEL',11,5,'UN_Fennel');actor('FennelLab','SCIENTIST',16,9,'UN_SignalAssistant')
simple('UN_SignalAssistant','Tres frequencias aparecem juntas: verdade, ideais e... silencio. Fennel se recusa a dar nome a algo que ainda nao entende.','Three frequencies appear together: truth, ideals and... silence. Fennel refuses to name something she does not understand yet.')
plasmaCave=trainer('WELLSPRING','PLASMA','PLASMAF',[('Patrat',17),('Sandile',18)])
challenge('UN_WellspringPlasma',8,9,plasmaCave,'Cheren: A menina perdeu seu Pokemon para esses homens. Plasma: Estamos libertando! Cheren: Ela pediu para voce tirar o parceiro dela?','Cheren: These people took a girls Pokemon. Plasma: We are liberating it! Cheren: Did she ask you to take her partner?','Cheren: A menina e seu Pokemon correram um para o outro. Esta e a resposta que Ghetsis nao quis ouvir. Lenora, em Nacrene, pode explicar o simbolo do aparelho.','Cheren: The girl and her Pokemon ran to each other. That is the answer Ghetsis refused to hear. Lenora in Nacrene can explain the device symbol.')
actor('WellspringCave','PLASMAF',12,9,'UN_WellspringPlasma');actor('WellspringCave','CHEREN',9,12,'UN_FriendCheren');actor('Route3','CHILD_F',22,16,'UN_MissingChild')
simple('UN_MissingChild','Eles levaram meu Pokemon! Eu nao queria ser mais forte. So queria continuar andando com ele.','They took my Pokemon! I did not want to be stronger. I just wanted to keep walking with it.',('Meu parceiro voltou! Ele escolheu ficar comigo. Vou levar flores para Cheren e para voce.','My partner is back! It chose to stay. I will bring flowers for Cheren and you.'))
n2=trainer('N_NACRENE','N','N',[('Pidove',18),('Timburr',18),('Tympole',19)])
challenge('UN_NNacrene',9,10,n2,'N: O museu guarda ossos. Seus sonhos guardam algo vivo. Se um dragao nasceu de duas ideias, o que aconteceu com a parte que nenhuma delas quis?','N: The museum keeps bones. Your dreams keep something alive. If a dragon split into two ideas, what happened to the part neither wanted?','N: Kyurem. Foi esse o nome que ouvi no silencio. Ghetsis quer reconstruir um mundo perfeito. Por que o seu parceiro teme essa perfeicao?','N: Kyurem. That is the name I heard in the silence. Ghetsis wants to rebuild a perfect world. Why does your partner fear that perfection?')
actor('NacreneCity','N',24,23,'UN_NNacrene')
lenora=trainer('LENORA','LENORA','LENORA',[('Herdier',18),('Watchog',20)])
challenge('UN_Lenora',10,11,lenora,'Lenora: O simbolo esta numa placa antiga. Mas pesquisa e batalha exigem a mesma coisa: perceber detalhes!','Lenora: The symbol is on an ancient tablet. Research and battle require the same thing: notice the details!','Lenora: Tome a Basic Badge. Agora vamos examinar a placa... Espere! O alarme do museu!','Lenora: Take the Basic Badge. Now let us study the tablet... Wait! The museum alarm!',' setvar VAR_UN_BADGES, 2\n setflag FLAG_BADGE02_GET\n call Common_EventScript_PlayGymBadgeFanfare\n giveitem ITEM_TM_RETALIATE\n')
actor('NacreneMuseum','LENORA',12,6,'UN_Lenora')
text('Theft','Plasma: A placa do Dragao Original pertence ao futuro! Lenora: Voces falam de liberdade e roubam nossa memoria? Burgh: Seguiram para Pinwheel Forest. Eu protejo a saida; voce segue o rastro.','Plasma: The Original Dragon tablet belongs to the future! Lenora: You preach freedom and steal our memory? Burgh: They ran to Pinwheel Forest. I will guard the exit; follow their trail.')
script('UN_MuseumTheft',' lockall\n playse SE_DOOR\n applymovement 2, UN_MoveRight\n waitmovement 0\n'+message('UN_T_Theft')+' setvar VAR_UN_MEMORY, 1\n setvar VAR_UN_STAGE, 12\n releaseall\n end');actor('NacreneMuseum','PLASMAM',8,9,'UN_PlazaCitizen');actor('NacreneCity','BURGH',28,25,'UN_BurghForest')
simple('UN_BurghForest','Burgh: Uma floresta nao e um labirinto para quem sabe olhar. As folhas quebradas mostram o caminho que Plasma tentou esconder.','Burgh: A forest is no maze if you know how to look. Broken leaves show the path Plasma tried to hide.')
plasmaForest=trainer('PINWHEEL','PLASMA','PLASMAM',[('Sandile',20),('Scraggy',21)])
challenge('UN_PinwheelPlasma',12,13,plasmaForest,'Plasma: Fogo, raio e gelo vao voltar a ser um! Nao precisamos dos humanos que estragaram o primeiro mundo.','Plasma: Fire, lightning and ice will be one again! We do not need the humans who ruined the first world.','Burgh: Lenora recuperou a placa. Mas falta um fragmento, enviado de barco a Castelia. Vamos cruzar Skyarrow. A cidade ja esta sentindo o frio desse sonho.','Burgh: Lenora has her tablet back. A fragment was shipped to Castelia. Let us cross Skyarrow. The city already feels the cold of that dream.',' setvar VAR_UN_MEMORY, 2\n')
actor('PinwheelInner','PLASMAM',21,8,'UN_PinwheelPlasma');actor('PinwheelInner','BURGH',24,11,'UN_BurghForest')
text('CasteliaEntry','Bianca: Roubaram Munna na frente de todo mundo! Iris foi atras deles. Burgh: O fragmento atrai sonhos de Pokemon para um deposito. Entre na casa perto do cais. Eu vou impedir o barco de partir.','Bianca: They stole Munna in plain sight! Iris went after them. Burgh: The fragment draws Pokemon dreams into a depot. Enter the house by the docks. I will stop their boat.')
script('UN_CasteliaEntry',' lockall\n'+message('UN_T_CasteliaEntry')+' setvar VAR_UN_STAGE, 14\n releaseall\n end');actor('CasteliaCity','BIANCA',30,46,'UN_FriendBianca');actor('CasteliaCity','BURGH',34,46,'UN_BurghForest')
plasmaPort=trainer('CASTELIA','PLASMA','PLASMAF',[('Scraggy',21),('Whirlipede',22),('Watchog',22)])
challenge('UN_CasteliaPlasma',14,15,plasmaPort,'Plasma: Ghetsis vai unir Reshiram, Zekrom e o vazio de Kyurem! N: Eu pedi que escutassem os Pokemon, nao que transformassem seus sonhos em correntes!','Plasma: Ghetsis will unite Reshiram, Zekrom and Kyurem emptiness! N: I asked you to hear Pokemon, not turn their dreams into chains!','N: A verdade sem escolha vira ordem. Ideais sem escuta viram prisao. O fragmento respondeu a voce... nao a Ghetsis. Burgh: Munna esta livre. Quando estiver pronto, meu ginasio o espera.','N: Truth without choice becomes an order. Ideals without listening become a prison. The fragment answered you... not Ghetsis. Burgh: Munna is free. My Gym awaits when you are ready.',' setvar VAR_UN_MEMORY, 3\n')
actor('CasteliaPlasmaHouse','PLASMAF',11,6,'UN_CasteliaPlasma');actor('CasteliaPlasmaHouse','N',15,10,'UN_NPort');actor('CasteliaPlasmaHouse','GHETSIS',6,6,'UN_PlazaCitizen')
simple('UN_NPort','N: Ainda nao sei se posso confiar em voce. Mas posso confiar no que seu parceiro sentiu. Isso basta por enquanto.','N: I do not know if I can trust you yet. I can trust what your partner felt. That is enough for now.')
burgh=trainer('BURGH','BURGH','BURGH',[('Whirlipede',21),('Dwebble',21),('Leavanny',23)])
challenge('UN_Burgh',15,16,burgh,'Burgh: A cidade recuperou suas cores. Agora deixe seu parceiro pintar esta batalha!','Burgh: The city has its colors back. Now let your partner paint this battle!','Burgh: A Insect Badge e sua. Leve o fragmento ao cais. Fennel ouviu tres chamadas na mesma frequencia. Seus amigos estao esperando.','Burgh: The Insect Badge is yours. Bring the fragment to the docks. Fennel heard three calls on the same frequency. Your friends are waiting.',' setvar VAR_UN_BADGES, 3\n setflag FLAG_BADGE03_GET\n call Common_EventScript_PlayGymBadgeFanfare\n giveitem ITEM_TM_STRUGGLE_BUG\n')
actor('CasteliaGym','BURGH',12,5,'UN_Burgh')
text('Vision1','O fragmento aquece. Uma asa branca cobre o ceu dos seus sonhos. Reshiram nao procura um dono: procura uma verdade.','The fragment warms. A white wing fills your dream sky. Reshiram does not seek an owner: it seeks a truth.')
text('Vision2','Um raio abre o horizonte. Zekrom responde a um ideal que ainda nao recebeu nome. As duas vozes chamam uma terceira.','Lightning opens the horizon. Zekrom answers an ideal not yet named. Both voices call a third.')
text('Vision3','O cais congela por um instante. Kyurem aparece entre as duas luzes. No reflexo, tres sombras formam um unico dragao... e entao se separam.','The dock freezes for an instant. Kyurem appears between both lights. In the reflection, three shadows form one dragon... then separate.')
text('ChapterEnd','Juniper, pelo C-Gear: O Dragao Original nao pode nascer de uma ordem. Precisamos saber por que ele se dividiu. Bianca: Desta vez vamos juntos! Cheren: A proxima resposta esta alem de Castelia. CAPITULO 1 CONCLUIDO. Continue explorando Unova; a jornada dos tres dragoes continua no proximo capitulo.','Juniper, on C-Gear: The Original Dragon cannot be born from an order. We must learn why it split. Bianca: This time we go together! Cheren: The next answer lies beyond Castelia. CHAPTER 1 COMPLETE. Keep exploring Unova; the three-dragon journey continues in the next chapter.')
script('UN_DragonVision',' lockall\n showmonpic SPECIES_RESHIRAM, 7, 1\n playcry SPECIES_RESHIRAM, CRY_MODE_NORMAL\n'+message('UN_T_Vision1')+' waitcry\n hidemonpic\n showmonpic SPECIES_ZEKROM, 7, 1\n playcry SPECIES_ZEKROM, CRY_MODE_NORMAL\n'+message('UN_T_Vision2')+' waitcry\n hidemonpic\n showmonpic SPECIES_KYUREM, 7, 1\n playcry SPECIES_KYUREM, CRY_MODE_NORMAL\n'+message('UN_T_Vision3')+' waitcry\n hidemonpic\n setvar VAR_UN_STAGE, 17\n setflag FLAG_UN_CASTELIA_DONE\n'+message('UN_T_ChapterEnd')+' releaseall\n end')
for x in range(25,33):trigger('CasteliaCity',x,49,'UN_VisionTrigger')
script('UN_VisionTrigger',' goto_if_ne VAR_UN_STAGE, 16, UN_End\n goto UN_DragonVision')
simple('UN_Route4Closed','A investigacao segue para o norte no proximo capitulo. Castelia ainda tem treinadores, presentes e sonhos para descobrir.','The investigation heads north in the next chapter. Castelia still has trainers, gifts and dreams to discover.')
for x in range(22,26):trigger('CasteliaStreet',x,3,'UN_NorthBoundary')
script('UN_NorthBoundary',' lockall\n'+message('UN_T_UN_Route4Closed')+' applymovement OBJ_EVENT_ID_PLAYER, UN_MoveDown\n waitmovement 0\n releaseall\n end')
# Healing, storage, shopping and the anti-grinding coach work in the chapter.
text('Heal','Bem-vindo! Seus Pokemon merecem descanso. O sinal de sonhos tambem foi recarregado.','Welcome! Your Pokemon deserve a rest. Your dream signal was recharged too.')
script('UN_Heal',' lock\n faceplayer\n special HealPlayerParty\n callnative UnHeal\n playfanfare MUS_HEAL\n waitfanfare\n'+message('UN_T_Heal')+' release\n end')
script('UN_Mart',' lock\n faceplayer\n pokemart UN_MartItems\n release\n end\n .align 2\nUN_MartItems:\n .2byte ITEM_POKE_BALL, ITEM_GREAT_BALL, ITEM_POTION, ITEM_SUPER_POTION, ITEM_ANTIDOTE, ITEM_PARALYZE_HEAL, ITEM_ESCAPE_ROPE, ITEM_REPEL, ITEM_NONE')
text('Coach','Youngster: Com Anti-Grinding ligado, posso completar 999 Rare Candy e maximizar os IVs da equipe. O limite de nivel continua valendo.','Youngster: With Anti-Grinding enabled I can refill 999 Rare Candy and maximize party IVs. Your level limit still applies.')
text('CoachOff','Ative Anti-Grinding em Ajustes se quiser usar meu treino. Sua jornada continua igual.','Enable Anti-Grinding in Settings to use my training. Your journey continues as usual.')
script('UN_Coach',' lock\n faceplayer\n goto_if_unset FLAG_HE_ANTI_GRINDING, UN_CoachOff\n'+message('UN_T_Coach')+' callnative SiCoachFillCandy\n callnative SiCoachMaxIvs\n release\n end\nUN_CoachOff:\n'+message('UN_T_CoachOff')+' release\n end');actor('Route1','CHILD_M',19,36,'UN_Coach')
script('UN_Mother',' lock\n faceplayer\n special HealPlayerParty\n'+message(text('Mother','Voce pode voltar para descansar quando quiser. Ter um lugar para voltar tambem ajuda a seguir em frente.','Come back to rest whenever you want. Having a place to return to helps you keep going.'))+' release\n end');actor('NuvemaHouse','LADY',9,6,'UN_Mother')
# Residents have their own jobs, jokes and responses to the chapter outcome.
cityLines={
'NuvemaTown':[('Meu Lillipup segue a mochila, nao a mim. Acho que ele descobriu onde escondi os biscoitos.','My Lillipup follows my bag, not me. I think it found my biscuits.'),('Juniper anotou a data da primeira flor da vila. Eu anotei a primeira risada da minha filha. As duas sao pesquisa.','Juniper noted our first flower. I noted my daughters first laugh. Both are research.'),('Bianca quase saiu de pijama. Cheren fez uma lista para ela; esqueceu o proprio mapa.','Bianca almost left in pajamas. Cheren made her a list and forgot his own map.')],
'AccumulaTown':[('Dois musicos tocam na varanda. Meu trabalho e abrir as janelas para a cidade ouvir.','Two musicians play on a balcony. My job is opening windows so the town can hear.'),('Quase entreguei meu Pokemon depois do discurso. Ele segurou minha manga. Decidi ouvir tambem.','I almost gave up my Pokemon after that speech. It held my sleeve. I decided to listen too.'),('Quando as estacoes mudam, a praça muda de cheiro. Hoje sinto chuva chegando.','The plaza smells different each season. Today I can smell rain coming.')],
'StriatonCity':[('Cilan serve cha, Chili esquenta a comida, Cress confere a agua. Juntos, nunca queimam a chaleira. Quase nunca.','Cilan serves tea, Chili heats food, Cress checks water. Together they never burn a kettle. Almost never.'),('Fennel cochilou na reuniao e acordou com a resposta de uma equacao. Ninguem sabe se foi sorte.','Fennel fell asleep in a meeting and woke up with an equation answer. Nobody knows if it was luck.'),('Meu filho estuda na escola. Ele ensinou o professor a pedir desculpas ao proprio Pokemon.','My son studies at the school. He taught his teacher to apologize to his Pokemon.')],
'NacreneCity':[('Transformamos armazens em atelies. O cheiro da madeira ficou; agora ele se mistura com tinta.','We turned warehouses into studios. The wood smell stayed, now mixed with paint.'),('Lenora reconhece um osso pelo formato. Eu reconheço a voz dela no museu inteiro.','Lenora knows a bone by shape. I know her voice anywhere in the museum.'),('Meu Timburr ajudou a reconstruir esta parede. Nao quero que ninguem chame isso de uma vida sem escolha.','My Timburr rebuilt this wall. I will not let anyone call that a life without choice.')],
'CasteliaCity':[('Este porto nunca dorme. Quando o barco atrasa, meu Wingull e o primeiro a reclamar.','This port never sleeps. When a boat is late, my Wingull complains first.'),('Quero pintar o frio que tomou o cais. Burgh disse que primeiro preciso aprender a pintar silencio.','I want to paint the cold at the dock. Burgh said I first need to paint silence.'),('Bianca pediu ajuda para procurar Munna. Todos pararam por um minuto. Talvez uma cidade grande também saiba escutar.','Bianca asked for help finding Munna. Everyone stopped for a minute. Maybe a big city can listen too.')],
'CasteliaStreet':[('Meu escritorio fica no sexto andar. Subo de escada; meu Pokemon insiste que elevador nao conta como treino.','My office is on the sixth floor. I take the stairs; my Pokemon says elevators do not count as training.'),('O artista do atelie troca historias por retratos. A minha ficou torta, mas eu gostei.','The studio artist trades stories for portraits. Mine was crooked, but I liked it.'),('Vi N andando sozinho. Um Pidove o seguia, sem uma Poke Ball sequer.','I saw N walking alone. A Pidove followed him without any Poke Ball.')],
}
gfx=['WORKER','ARTIST','GENTLEMAN','MUSICIAN','LADY','BACKPACKER','SAILOR','CHILD_F','SCIENTIST']
resident=0
for n,lines in cityLines.items():
    a=maps[n]
    for i,(pt,en)in enumerate(lines):
        label='UN_Resident'+str(resident);resident+=1
        simple(label,pt,en,('A cidade recuperou o ritmo. Seu parceiro parece reconhecer cada rua por onde voces passaram.','The town found its rhythm again. Your partner seems to remember every street you crossed.'))
        actor(n,gfx[resident%len(gfx)],16+i*6,18+i*4,label,'WANDER_LEFT_AND_RIGHT')
for n,a in maps.items():
    if a['indoor'] and n not in ['NuvemaBedroom','StriatonGym','NacreneMuseum','CasteliaGym','CasteliaPlasmaHouse','WellspringCave']:
        pt,en=[('Escrevo o nome de cada parceiro num caderno. Nenhum deles e apenas um numero.','I write every partners name in a notebook. None is just a number.'),('Se meu Pokemon pudesse escolher o jantar, comeriamos somente frutas. Eu tento negociar.','If my Pokemon chose dinner, we would only eat berries. I try to negotiate.'),('Minha filha desenha os lugares que sonha visitar. Hoje desenhou voce chegando aqui.','My daughter draws places she dreams of visiting. Today she drew you arriving here.')][resident%3]
        label='UN_Resident'+str(resident);resident+=1;simple(label,pt,en);actor(n,gfx[resident%len(gfx)],a['w']-5,a['h']-5,label)
for n in ['Route1','Route2','Route3','PinwheelOuter','PinwheelInner','SkyarrowBridge','Dreamyard']:
    a=maps[n]
    for i in range(2):
        label='UN_Resident'+str(resident);resident+=1
        pt,en=[('Recolho lixo depois das batalhas. Poke Balls quebradas nao viram sementes so porque caem na grama.','I collect litter after battles. Broken Poke Balls do not become seeds because they land in grass.'),('Ouco os passos antes de ver o treinador. Quem corre com cuidado ainda percebe o canto dos Pokemon.','I hear footsteps before seeing trainers. Running carefully still lets you hear Pokemon sing.'),('A sombra da ponte muda com o sol. Meu parceiro acha que e um Pokemon gigante passando por cima.','The bridge shadow changes with sunlight. My partner thinks it is a giant Pokemon passing overhead.')][(resident+i)%3]
        simple(label,pt,en);actor(n,gfx[resident%len(gfx)],a['w']//2-1+i*2,a['h']//2+6+i*3,label)
# Forty early trainer battles, distinct species/teams and three difficulty tables.
teams=[('Patrat','Lillipup'),('Purrloin','Pidove'),('Sewaddle','Venipede'),('Tympole','Roggenrola'),('Blitzle','Pidove'),('Timburr','Drilbur'),('Cottonee','Petilil'),('Woobat','Purrloin')]
routeSettings=[('Route1',5,3),('Route2',8,5),('Dreamyard',11,3),('Route3',15,5),('WellspringCave',16,2),('PinwheelOuter',18,4),('PinwheelInner',19,5),('SkyarrowBridge',20,2),('CasteliaCity',21,3),('StriatonGym',12,2),('NacreneMuseum',18,2),('CasteliaGym',21,3)]
normal=0
for n,level,count in routeSettings:
    a=maps[n]
    for i in range(count):
        # Keep chapter actors, doors and the central lane clear.
        x=a['w']//2-5 if i%2==0 else a['w']//2+5
        y=7+(i+1)*(a['h']-14)//(count+1)
        if n=='CasteliaCity':x=20+i*4;y=29+i*4
        if n=='WellspringCave':x=7+i*10;y=18+i*3
        if a['indoor']:fill(n,x,y-1,1,3,'floor',theme='Indoor')
        else:fill(n,x-1,y-1,3,3,'path'if a['theme']!='Castelia'else'paving')
        if any(abs(o['x']-x)+abs(o['y']-y)<=2 for o in a['map']['object_events']):y+=3
        sp=teams[normal%len(teams)];mons=[(sp[0],level),(sp[1],level+1)] if level>6 else[(sp[0],level)]
        pic='YOUNGSTER'if normal%2==0 else'LASS';ident=trainer('FIELD'+str(normal),'LEO'if normal%2==0 else'LIA',pic,mons);label='UN_Field'+str(normal)
        intro=text(label+'_Intro',('Vamos testar um passo novo?'if normal%3==0 else'Conheci meu parceiro nesta rota. Hoje voce vai conhecer nos dois!'),'I met my partner on this route. Today you will meet both of us!');lose=text(label+'_Defeat','Vamos treinar sem esquecer de brincar.','We will train without forgetting to play.');after=text(label+'_After','Uma derrota tambem pode virar uma boa historia.','A defeat can also become a good story.')
        script(label,f' trainerbattle_single {ident}, {intro}, {lose}\n'+message(after)+' end');actor(n,'CHILD_M'if normal%2==0 else'CHILD_F',x,y,label,'FACE_RIGHT'if normal%2==0 else'FACE_LEFT',True,2)
        normal+=1
assert len(set(trainer_flags))<=59,(len(set(trainer_flags)),len(trainer_flags))
# Restore these scripted fight flags without moving the original trainer flag block.
p=Path('src/battle_setup.c');s=p.read_text();array='static const u16 sUnovaTrainerFlags[] = {'+','.join(hex(f)for f in trainer_flags)+'};\n';s=s.replace('u16 SinnohTrainerFlag(u16 trainerId)',array+'u16 SinnohTrainerFlag(u16 trainerId)',1);s=s.replace('    if (trainerId >= SI_TRAINER_FIRST','    if(trainerId>=UN_TRAINER_FIRST&&trainerId<UN_TRAINER_FIRST+UN_TRAINER_COUNT)return sUnovaTrainerFlags[trainerId-UN_TRAINER_FIRST];\n    if (trainerId >= SI_TRAINER_FIRST',1);p.write_text(s)
p=Path('include/constants/opponents.h');s=p.read_text().replace('#define TRAINERS_COUNT_EMERALD 994',f'#define TRAINERS_COUNT_EMERALD {994+len(trainers)}').replace('#define MAX_TRAINERS_COUNT_EMERALD 994',f'#define MAX_TRAINERS_COUNT_EMERALD {994+len(trainers)}');s+='\n#define UN_TRAINER_FIRST 994\n#define UN_TRAINER_COUNT '+str(len(trainers))+'\n'+''.join(f'#define {t[0]} {994+i}\n'for i,t in enumerate(trainers));p.write_text(s)
party=[]
for ident,name,pic,mons in trainers:
    pic='TRAINER_PIC_UN_'+pic if pic not in ('YOUNGSTER','LASS')else pic
    for difficulty,delta,iv in [('Normal',0,16),('Easy',-2,0),('Hard',2,31)]:
        party.append(f'=== {ident} ===\nDifficulty: {difficulty}\nName: {name}\nClass: Pkmn Trainer 2\nPic: {pic}\nGender: Female\nMusic: Male\nAI: Basic Trainer\n')
        for species,level in mons:party.append(f'{species}\nLevel: {max(3,level+delta)}\nIVs: {iv} HP / {iv} Atk / {iv} Def / {iv} SpA / {iv} SpD / {iv} Spe\n')
p=Path('src/data/trainers.party');p.write_text(p.read_text()+'\n\n'+'\n'.join(party)+'\n')
# On-frame scenes are gated by durable chapter state, never by temporary RAM.
frames={'NuvemaBedroom':[(0,'UN_Prologue')],'AccumulaTown':[(2,'UN_AccumulaScene')],'NacreneMuseum':[(11,'UN_MuseumTheft')],'CasteliaCity':[(13,'UN_CasteliaEntry')]}
for n,a in maps.items():
    root=Path('data/maps')/('Un'+n);root.mkdir(parents=True,exist_ok=True);(root/'map.json').write_text(json.dumps(a['map'],indent=2)+'\n')
    body='Un'+n+'_MapScripts::\n'
    if n in frames:
        body+=f' map_script MAP_SCRIPT_ON_FRAME_TABLE, UN_Frame{n}\n .byte 0\nUN_Frame{n}:\n'+''.join(f' map_script_2 VAR_UN_STAGE, {stage}, {label}\n'for stage,label in frames[n])+' .2byte 0\n'
    else:body+=' .byte 0\n'
    (root/'scripts.inc').write_text(body)
    layoutRoot=Path('data/layouts')/('Un'+n);layoutRoot.mkdir(parents=True,exist_ok=True)
    (layoutRoot/'map.bin').write_bytes(struct.pack('<'+'H'*(a['w']*a['h']),*(v for row in a['grid']for v in row)))
    border=a['grid'][0][0];(layoutRoot/'border.bin').write_bytes(struct.pack('<4H',border,border,border,border))
    layouts.append({'id':lid(n),'name':'Un'+n+'_Layout','width':a['w'],'height':a['h'],'primary_tileset':'gTileset_UnIndoor'if a['indoor']else'gTileset_UnOutdoor','secondary_tileset':'gTileset_Un'+a['theme'],'border_filepath':str(layoutRoot/'border.bin'),'blockdata_filepath':str(layoutRoot/'map.bin'),'layout_version':'emerald'})
p=Path('data/maps/map_groups.json');d=json.loads(p.read_text());d['group_order'].append('gMapGroup_Unova');d['gMapGroup_Unova']=['Un'+n for n in maps];p.write_text(json.dumps(d,indent=2)+'\n')
p=Path('data/layouts/layouts.json');d=json.loads(p.read_text());d['layouts']+=layouts;p.write_text(json.dumps(d,indent=2)+'\n')
p=Path('data/event_scripts.s');p.write_text(p.read_text()+'\n .include "data/scripts/unova_chapter.inc"\n')
Path('data/scripts/unova_chapter.inc').write_text('\n'.join(code+texts)+'\n')
header=''.join(f'extern const u8 {t}[], {t}_En[];\n'for t in translations)+'static const struct HeTranslation sUnovaTranslations[]={\n'+''.join(f' {{{t}_En,{t}}},\n'for t in translations)+'};\n';Path('src/data/unova_localization.h').write_text(header)
p=Path('src/hoenn_localization.c');s=p.read_text().replace('#include "data/sinnoh_localization.h"','#include "data/sinnoh_localization.h"\n#include "data/unova_localization.h"');s=s.replace('        for (i = 0; i < ARRAY_COUNT(sSinnohTranslations); i++)','        for(i=0;i<ARRAY_COUNT(sUnovaTranslations);i++)if(text==sUnovaTranslations[i].br)return sUnovaTranslations[i].en;\n        for (i = 0; i < ARRAY_COUNT(sSinnohTranslations); i++)',1);p.write_text(s)
p=Path('include/constants/script_menu.h');p.write_text(p.read_text()+'\n#define MULTI_UN_STARTER 255\n')
p=Path('src/data/script_menu.h');s='static const struct MenuAction sUnStarterChoices[]={{COMPOUND_STRING("Snivy")},{COMPOUND_STRING("Tepig")},{COMPOUND_STRING("Oshawott")}};\n'+p.read_text();s=s.replace('    [MULTI_SI_STARTER]','    [MULTI_UN_STARTER] = MULTICHOICE(sUnStarterChoices),\n    [MULTI_SI_STARTER]',1);p.write_text(s)
# Wild encounters let DexNav explore every outdoor leg, including Munna/Audino.
wild=[('Route1',2,4,['PATRAT','LILLIPUP','LILLIPUP','PATRAT','PATRAT','LILLIPUP','PIDOVE','PURRLOIN','AUDINO','AUDINO','DEERLING','DEERLING']),('Route2',4,7,['PATRAT','LILLIPUP','PURRLOIN','PIDOVE','PURRLOIN','LILLIPUP','PIDOVE','BLITZLE','AUDINO','AUDINO','DEERLING','DEERLING']),('Dreamyard',8,11,['MUNNA','PURRLOIN','PATRAT','MUNNA','PIDOVE','LILLIPUP','MUNNA','PURRLOIN','AUDINO','AUDINO','DEERLING','DEERLING']),('Route3',10,14,['PIDOVE','BLITZLE','PATRAT','LILLIPUP','PURRLOIN','ROGGENROLA','PIDOVE','BLITZLE','AUDINO','AUDINO','DEERLING','DEERLING']),('WellspringCave',12,16,['ROGGENROLA','WOOBAT']*6),('PinwheelOuter',14,17,['TIMBURR','TYMPOLE','PIDOVE','SEWADDLE','TIMBURR','TYMPOLE','VENIPEDE','SEWADDLE','AUDINO','AUDINO','DEERLING','DEERLING']),('PinwheelInner',16,20,['SEWADDLE','VENIPEDE','COTTONEE','PETILIL','PIDOVE','SEWADDLE','VENIPEDE','COTTONEE','AUDINO','AUDINO','DEERLING','DEERLING'])]
p=Path('src/data/wild_encounters.json');d=json.loads(p.read_text());group=d['wild_encounter_groups'][0]
for n,lo,hi,species in wild:
    group['encounters'].append({'map':mid(n),'base_label':'gUn'+n,'land_mons':{'encounter_rate':15,'mons':[{'min_level':lo,'max_level':hi,'species':'SPECIES_'+s}for s in species]}})
p.write_text(json.dumps(d,indent=2)+'\n')
# Dedicated heal locations avoid falling back to Littleroot after an Unova loss.
heals=['NuvemaHouse','AccumulaCenter','StriatonCenter','NacreneCenter','CasteliaCenter']
p=Path('include/constants/heal_locations.h');s=p.read_text().replace('    NUM_HEAL_LOCATIONS',''.join('    HEAL_LOCATION_UN_'+n.upper()+',\n'for n in heals)+'    NUM_HEAL_LOCATIONS');p.write_text(s)
p=Path('src/data/heal_locations.h');s=p.read_text();tables=['sHealLocations','sHealLocationRespawnMaps','sHealLocationNurseIds']
for name in tables:
    match=re.search(r'(?:static )?const [^;]+\b'+name+r'\[[^]]*\][^=]*=\s*\{',s)
    if not match:continue
    end=s.index('\n};',match.end());entries=[]
    for n in heals:
        key='[HEAL_LOCATION_UN_'+n.upper()+' - 1]'
        if name=='sHealLocationNurseIds':value='1'
        elif name=='sHealLocations':value=f'{{ MAP_GROUP({mid(n)}), MAP_NUM({mid(n)}), 10, 10}}'
        else:value=f'{{ MAP_GROUP({mid(n)}), MAP_NUM({mid(n)}), 10, 10}}'
        entries.append('    '+key+' = '+value+',')
    s=s[:end]+'\n'+'\n'.join(entries)+s[end:]
p.write_text(s)
Path('tools/unova_manifest.json').write_text(json.dumps({'maps':list(maps),'layouts':layouts,'trainers':[x[0]for x in trainers],'trainer_flags':trainer_flags,'normal_trainers':normal,'residents':resident,'wild_maps':[x[0]for x in wild]},indent=2))
Path('src/data/unova_map_names.h').write_text(''.join(f'    case {lid(n)}:return COMPOUND_STRING("{a["title"].upper()[:20]}");\n'for n,a in maps.items()))
print('Generated',len(maps),'maps,',normal,'field battles,',len(trainers),'trainer variants,',resident,'residents')
