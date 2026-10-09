"""Build the living Sinnoh layer on the recovered 0.9.1 source (run once).
All changes are scoped to LAYOUT_SI_* maps; compiled trainer flags retain save size.
"""
from pathlib import Path
import json,re,struct,shutil,textwrap,collections,unicodedata
R=Path('.')
A=Path('/workspace/scratch/1e7880676e8a/platinum-assets/graphics/object_events')
layouts={x['id']:x for x in json.load(open('data/layouts/layouts.json'))['layouts']}
maps={p.parent.name:json.loads(p.read_text()) for p in sorted(Path('data/maps').glob('*/map.json')) if 'LAYOUT_SI_' in p.read_text()}
assert len(maps)==214
assert not any(o.get("script","").startswith("SI_W_") for m in maps.values() for o in m.get("object_events",[])), "Run only against the recovered 0.9.1 base"
script=[];translations=[]
def text(key,pt,en):
 label='SI_W_T_'+key
 def encode(s):
  allowed={m[1] for m in re.finditer(r"^'(.+)'\s*=",Path('charmap.txt').read_text(),re.M) if len(m[1])==1}
  s=''.join(c if ord(c)<128 or c in allowed else ''.join(x for x in unicodedata.normalize('NFD',c) if not unicodedata.combining(x)) for c in s)
  lines=textwrap.wrap(s,26,break_long_words=False,break_on_hyphens=False)
  return ''.join(x+('' if i==len(lines)-1 else '\\n' if i%2==0 else '\\p') for i,x in enumerate(lines)).replace('"','\\"')+'$'
 script.extend([label+'::',' .string "'+encode(pt)+'"',label+'_En::',' .string "'+encode(en)+'"'])
 translations.append(label);return label
def addcode(label,body):script.extend([label+'::',body])
def npcscript(label,before,after=None):
 body=' lock\n faceplayer\n'
 if after:body+=' goto_if_ge VAR_SI_STAGE, 23, '+label+'_After\n'
 body+=' msgbox '+before+', MSGBOX_DEFAULT\n release\n end\n'
 if after:body+=label+'_After:\n msgbox '+after+', MSGBOX_DEFAULT\n release\n end'
 addcode(label,body)
# Exact original Platinum sheets. Each of the nine frames uses 4x4 GBA tiles.
assets='worker fisherman hiker scientist_m scientist_f nurse_joy cashier_m cashier_f policeman sailor guitarist clown school_kid_m school_kid_f aroma_lady ace_trainer_m ace_trainer_f breeder cheryl riley rancher cowgirl gentleman skier_m'.split()
pic=Path('src/data/object_events/object_event_graphics.h')
table=Path('src/data/object_events/object_event_pic_tables.h')
info=Path('src/data/object_events/object_event_graphics_info.h')
ptr=Path('src/data/object_events/object_event_graphics_info_pointers.h')
enum=Path('include/constants/event_objects.h')
pal=Path('src/event_object_movement.c')
template=re.search(r'const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_SiYoungster = \{.*?\n\};',info.read_text(),re.S).group()
gfx={}
for i,n in enumerate(assets):
 stem='Si'+''.join(s.title() for s in n.split('_'));g='OBJ_EVENT_GFX_SI_'+n.upper();gfx[n]=g
 for sub,ext in [('pics/people','.png'),('palettes','.pal')]:
  dest=Path('graphics/object_events')/sub/(n+'_pt'+ext)
  shutil.copy2(A/sub/(n+'_pt'+ext),dest)
 pic.write_text(pic.read_text()+f'\nconst u16 gObjectEventPic_{stem}[] = INCGFX_U16("graphics/object_events/pics/people/{n}_pt.png", ".4bpp", "-mwidth 4 -mheight 4");\nconst u16 gObjectEventPal_{stem}[] = INCGFX_U16("graphics/object_events/palettes/{n}_pt.pal", ".gbapal");\n')
 table.write_text(table.read_text()+f'\nstatic const struct SpriteFrameImage sPicTable_{stem}[] = {{'+','.join(f'overworld_frame(gObjectEventPic_{stem},4,4,{f})' for f in range(9))+'};\n')
 info.write_text(info.read_text()+'\n'+template.replace('SiYoungster',stem).replace('0x12a0',hex(0x12C0+i))+'\n')
 t=ptr.read_text();t=f'extern const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_{stem};\n'+t
 t=t.replace('[OBJ_EVENT_GFX_SI_YOUNGSTER]',f'[{g}] = &gObjectEventGraphicsInfo_{stem},\n[OBJ_EVENT_GFX_SI_YOUNGSTER]',1);ptr.write_text(t)
 enum.write_text(enum.read_text().replace('    NUM_OBJ_EVENT_GFX,',f'    {g},\n    NUM_OBJ_EVENT_GFX,'))
 pal.write_text(pal.read_text().replace('{gObjectEventPal_SiYoungster, 0x12a0},',f'{{gObjectEventPal_{stem}, {hex(0x12C0+i)}}},\n{{gObjectEventPal_SiYoungster, 0x12a0}},'))
# Local context: jobs, landmarks, daily life and consequences of the crisis.
city={
'TwinleafTown':[
('Mamãe disse para deixar as botas na porta. Voltei com lama até no cabelo!','Mom told me to leave my boots outside. Even my hair came back muddy!'),
('Barry saiu sem terminar o café. Aposto que esqueceu alguma coisa de novo.','Barry left without finishing breakfast. I bet he forgot something again.'),
('Meu avô conta que o lago guarda sentimentos. Vou escrever os meus antes de viajar.','Grandpa says the lake keeps feelings. I will write mine before leaving.')],
'SandgemTown':[
('Uma Buneary invadiu o laboratório e levou as etiquetas! Rowan fingiu que fazia parte da pesquisa.','A Buneary stole the lab labels! Rowan pretended it was part of his research.'),
('Recolho algas da praia. Hoje todas apontavam para o lago, contra a corrente.','I collect seaweed. Today it pointed to the lake against the current.'),
('Tem um jovem na Rota 201 que ajuda a treinar. Ele só dá doces com Anti-Grinding ligado.','A youngster on Route 201 helps training. His candy needs Anti-Grinding enabled.')],
'JubilifeCity':[
('Estou montando um programa sobre iniciantes. Prefiro uma derrota honesta a uma vitória inventada.','I am making a show about beginners. An honest loss beats a fake victory.'),
('O relógio da estação atrasou três vezes. O meu adiantou. Como chego no horário assim?','The station clock slowed three times. Mine sped up. How can I arrive on time?'),
('Na escola, a professora pediu uma redação sobre nosso primeiro parceiro. Chorei escrevendo a minha.','Our teacher asked us to write about our first partner. I cried writing mine.')],
'OreburghCity':[
('Caligo comprou minério em nome da Galáctica. Quando perguntei pelo recibo, ele desapareceu.','Caligo bought ore for Galactic. When I asked for a receipt, he disappeared.'),
('Roark conhece cada turno da mina. Ontem cobriu um colega para ele ver o nascimento da filha.','Roark knows every mine shift. Yesterday he covered for a new father.'),
('Meu Geodude dorme no carrinho vazio. Confiro duas vezes antes de empurrar!','My Geodude sleeps in an empty cart. I check twice before pushing!')],
'FloaromaTown':[
('O cheiro das flores ficou metálico quando ligaram as turbinas. Minhas Combee estão inquietas.','The flowers smelled metallic when the turbines started. My Combee are restless.'),
('Fizemos um canteiro para cada morador. O de minha irmã sempre dá as primeiras flores.','We planted a bed for each resident. My sister always gets the first flowers.'),
('Quero vender mel sem assustar as Combee. Ganhar dinheiro não justifica machucar um parceiro.','I want to sell honey without scaring Combee. Money cannot justify hurting a partner.')],
'EternaCity':[
('O prédio da Galáctica fica aceso à noite. Vi carregarem uma máquina coberta de gelo.','Galactic stays lit at night. I saw them carry a machine covered in ice.'),
('Gardenia conversa com as plantas. Ri dela até meu Budew florescer ouvindo sua voz.','Gardenia talks to plants. I laughed until my Budew bloomed at her voice.'),
('Cheryl procura um Budew saudável na floresta. Ela entende de amizade melhor que qualquer aparelho.','Cheryl wants to see a healthy Budew in the forest. She knows friendship better than any device.')],
'HearthomeCity':[
('Ensaiamos mesmo com a luz piscando. Fantina disse que coragem também merece aplausos.','We rehearsed through flickering lights. Fantina said courage deserves applause too.'),
('Minha filha perdeu o concurso e voltou sorrindo. O Pokémon dela aprendeu a confiar nela.','My daughter lost the contest and smiled. Her Pokemon learned to trust her.'),
('O músico da praça troca experiências de palco por uma surpresa para quem tem a insígnia local.','The plaza musician has a surprise for trainers with the local badge.')],
'SolaceonTown':[
('Um ovo rachou ao ouvir os sinos. Agora o pequeno só dorme com música.','An egg hatched at the bells. The little one now only sleeps with music.'),
('As letras das ruínas mudaram de lugar no meu desenho. Não me diga que desenhei errado!','The ruin letters moved in my drawing. Do not tell me I drew it wrong!'),
('No pasto, os Pokémon mais velhos ensinam os pequenos a atravessar a chuva juntos.','Older Pokemon in the pasture teach the young to cross the rain together.')],
'VeilstoneCity':[
('A Galáctica prometeu energia barata. Meu pai trabalha dobrado e a nossa conta só aumentou.','Galactic promised cheap power. Dad works double shifts and our bill only grew.'),
('Maylene corre descalça pela cidade. Eu me canso só de olhar!','Maylene runs barefoot through town. Just watching makes me tired!'),
('Não fotografe a entrada do HQ. Há gente desaparecida ligada àquele prédio. Procure Looker.','Do not photograph HQ. Missing people are linked to that building. Find Looker.')],
'PastoriaCity':[
('Wake ajudou a erguer a barragem. O grito dele venceu o barulho de três máquinas.','Wake helped raise the dam. His shout beat three machines.'),
('O pântano filtra a água da cidade. Não é um terreno vazio para construir qualquer coisa.','The marsh filters our water. It is not empty land to build on.'),
('Meu Croagunk escolheu meu guarda-chuva como casa. Ando molhado, ele anda feliz.','My Croagunk lives under my umbrella. I get wet; he stays happy.')],
'CelesticTown':[
('Cynthia procura as palavras que faltam na lenda. Os idosos lembram coisas que livro nenhum guarda.','Cynthia seeks missing words from the legend. Elders remember things no book keeps.'),
('Tempo, espaço e sombra precisam coexistir. Cortar um deles rasga os outros dois.','Time, space and shadow must coexist. Cutting one tears the other two.'),
('A senhora do mural ensina história às crianças. Hoje uma perguntou quem escuta Giratina.','The mural keeper teaches children. Today one asked who listens to Giratina.')],
'CanalaveCity':[
('A biblioteca recebeu páginas sem tinta. A escrita reaparece perto dos cristais.','The library received blank pages. Writing returns near the crystals.'),
('Os barcos estão prontos, mas o capitão espera todo mundo embarcar. Ninguém fica para trás.','Boats are ready, but the captain waits for everyone. Nobody gets left behind.'),
('Riley guarda um ovo de Riolu. Ele só o entrega quando Rowan conclui a pesquisa da biblioteca.','Riley keeps a Riolu egg. He will offer it after Rowan finishes the library research.')],
'SnowpointCity':[
('Deixamos lanternas para os viajantes no frio. Se apagar uma, acenda de novo para o próximo.','We leave lanterns for travelers. If one goes out, relight it for the next person.'),
('Barry veio do Lago Acuity calado. Foi a primeira vez que o vi sem correr.','Barry came from Lake Acuity in silence. It was the first time I saw him stop running.'),
('Candice treina na neve, mas distribui cobertores antes de qualquer batalha.','Candice trains in snow, but hands out blankets before any battle.')],
'SunyshoreCity':[
('Os painéis solares voltaram a funcionar por alguns minutos. Volkner quer entender o sinal.','Solar panels worked again for a few minutes. Volkner wants to understand the signal.'),
('O farol guia barcos, mas hoje eu vi uma luz vindo do mar para ele.','The lighthouse guides boats. Today a light came from the sea toward it.'),
('Um pequeno Shinx dorme sob a passarela aquecida. Todos fingem que não deixamos comida ali.','A Shinx sleeps under the warm walkway. We pretend nobody leaves food there.')],
}
roles=[
('worker','Cuido das ferramentas antes de sair. Meu parceiro conta comigo.','I check my tools before leaving. My partner relies on me.'),
('fisherman','Pescar exige esperar. Aprendi mais com a água do que com pressa.','Fishing takes patience. Water taught me more than rushing.'),
('hiker','Marquei o caminho para quem vem depois. Uma trilha boa se compartilha.','I marked the path for the next traveler. A good trail is shared.'),
('scientist_f','Anoto também os erros. Um resultado bonito não vale se estiver errado.','I record mistakes too. A pretty result is worthless if it is wrong.'),
('guitarist','Meu Kricketune acompanha a melodia. A gente erra junto e tenta de novo.','My Kricketune follows the melody. We miss together and try again.'),
('clown','Treino uma piada nova por dia. Meu Mime Jr. é meu crítico mais sincero.','I practice a new joke daily. My Mime Jr. is my most honest critic.'),
('school_kid_f','Hoje consegui ler um mapa sem ajuda. Amanhã vou desenhar meu próprio caminho.','Today I read a map alone. Tomorrow I will draw my own path.'),
('breeder','Um parceiro cansado merece descanso. Vitória nenhuma paga confiança perdida.','A tired partner deserves rest. No win pays for lost trust.'),
('rancher','Meu pai me ensinou a reconhecer os passos de cada Pokémon do pasto.','Dad taught me to recognize every Pokemon by its footsteps.'),
('cowgirl','Meu Ponyta corre ao meu lado, sem rédea. A escolha dele importa para mim.','My Ponyta runs by my side without reins. His choice matters to me.'),
('gentleman','Guardo a primeira Poké Ball. Ainda lembro como minha mão tremia.','I keep my first Poke Ball. I still remember my shaking hand.'),
('skier_m','Levo chocolate quente extra. Sempre aparece um viajante que precisa.','I pack extra hot chocolate. A traveler always needs some.')]
after=[
('Os relógios concordam outra vez. Hoje minha única pressa é chegar para o jantar.','Clocks agree again. Today I only rush to get home for dinner.'),
('Vi vocês ajudando na crise. Quero que meu filho cresça sabendo que alguém se importou.','I saw you help in the crisis. I want my son to know someone cared.'),
('A Galáctica deixou estragos. A reconstrução começa com vizinhos trabalhando juntos.','Galactic left damage. Rebuilding starts with neighbors working together.'),
('O ar voltou a ter cheiro de chuva. Eu nem percebia o quanto sentia falta.','The air smells like rain again. I had not realized how much I missed it.'),
('Giratina não precisava ser apagado. Também há lugar para quem vive na sombra.','Giratina did not need erasing. There is room for those who live in shadow.'),
('Vamos fazer uma festa pequena. Cada pessoa traz algo; ninguém precisa pagar para entrar.','We are having a small party. Everyone brings something; nobody pays to join.')]
route_notes=[
('Ouvi passos nas folhas e fiquei quieto. Um Starly pousou no meu ombro!','I stayed still at rustling leaves. A Starly landed on my shoulder!'),
('A estrada é longa. Prefiro conversar com meus parceiros a medir só a distância.','The road is long. I talk to my partners instead of just counting miles.'),
('Quem luta aprende; quem escuta também. Não ignore os moradores pelo caminho.','Fighting teaches; listening does too. Do not ignore people along the way.'),
('Se a tempestade vier, procuro abrigo para os Pokémon primeiro.','If a storm comes, I find shelter for the Pokemon first.')]
def context(name,index):
 cityname=next((c for c in city if name.startswith(c)),None)
 if cityname:return city[cityname][index%len(city[cityname])]
 rn=re.search(r'Route(\d+)',name)
 if rn:
  n=int(rn[1]);pt,en=route_notes[index%4]
  return (f'Esta é a Rota {n}. '+pt,f'This is Route {n}. '+en)
 if 'EternaForest' in name:return ('As árvores parecem guardar vozes antigas. Cheryl nos ajuda a cuidar delas.','The trees keep ancient voices. Cheryl helps us care for them.')
 if 'Lake' in name:return ('A água guarda lembranças. O coletor da Galáctica parece arrancar algo dela.','The water holds memories. Galactic collectors seem to tear something out.')
 if 'Mine' in name:return ('Roark pediu para não tocar nos cristais instáveis. Um pulso pode ferir alguém.','Roark asked us not to touch unstable crystals. A pulse could hurt someone.')
 if 'League' in name:return ('A Liga não pergunta de onde você veio. Aqui seus parceiros contam a sua história.','The League does not ask where you came from. Your partners tell your story.')
 if 'Coronet' in name or 'Spear' in name:return ('As nuvens giram sobre o cume. Não caminhe sozinho se o sinal mudar.','Clouds swirl over the summit. Do not walk alone when the signal changes.')
 return ('Neste lugar aprendi a ouvir meu parceiro. Cada viagem deixa uma lembrança diferente.','Here I learned to listen to my partner. Every journey leaves a different memory.')
def grid(name):
 l=layouts[maps[name]['layout']];raw=struct.unpack('<'+'H'*(l['width']*l['height']),Path(l['blockdata_filepath']).read_bytes())
 pts={(x,y) for y in range(1,l['height']-1) for x in range(1,l['width']-1) if raw[y*l['width']+x]&0xC00==0 and raw[y*l['width']+x]>>12 in (0,3)}
 # Restrict additions to the largest connected floor component.
 comps=[]
 while pts:
  todo=[pts.pop()];c=set(todo)
  for x,y in todo:
   for a in [(x+1,y),(x-1,y),(x,y+1),(x,y-1)]:
    if a in pts:pts.remove(a);c.add(a);todo.append(a)
  comps.append(c)
 return max(comps,key=len)
floors={n:grid(n) for n in maps}
def safe(name):
 m=maps[name];used={(o['x'],o['y']) for o in m.get('object_events',[])}
 for w in m.get('warp_events',[]):used.add((w['x'],w['y']));used.add((w['x'],w['y']+1))
 return floors[name]-used
def place(name,x,y,g,sc):
 m=maps[name];spots=safe(name);pt=min(spots,key=lambda a:abs(a[0]-x)+abs(a[1]-y))
 objs=m.setdefault('object_events',[])
 if len(objs)>=16:
  old=next((o for o in objs if o['script'].startswith('SI_W_Resident')),None)
  if not old:return None
  objs.remove(old)
 obj={'graphics_id':g,'x':pt[0],'y':pt[1],'elevation':3,'movement_type':'MOVEMENT_TYPE_FACE_DOWN','movement_range_x':0,'movement_range_y':0,'trainer_type':'TRAINER_TYPE_NONE','trainer_sight_or_berry_tree_id':'0','script':sc,'flag':'0','local_id':'LOCALID_SI_W_'+re.sub(r'\W','_',name).upper()+'_'+str(len(objs)+1)}
 objs.append(obj);return obj
resident_index=0
pickup=[]
for name,m in maps.items():
 for i,o in enumerate(m.get('object_events',[])):
  if o['script']=='SI_Heal':o['graphics_id']=gfx['nurse_joy'];continue
  if o['script']=='SI_Clerk':o['graphics_id']=gfx['cashier_f' if i%2 else 'cashier_m'];continue
  if o['script']!='SI_Npc':continue
  if o['graphics_id']=='OBJ_EVENT_GFX_ITEM_BALL' and len(pickup)<7:
   pickup.append((name,o));continue
  role=roles[resident_index%len(roles)];pt,en=context(name,i)
  before=text('Resident_'+str(resident_index),role[1]+' '+pt,role[2]+' '+en)
  final=text('ResidentAfter_'+str(resident_index),*after[(i+resident_index)%len(after)])
  label='SI_W_Resident_'+str(resident_index);npcscript(label,before,final)
  o['script']=label;o['graphics_id']=gfx[role[0]];o['movement_type']='MOVEMENT_TYPE_LOOK_AROUND'
  free=safe(name)
  x,y=o['x'],o['y']
  if (x,y) not in floors[name]:
   x,y=min(free,key=lambda a:abs(a[0]-x)+abs(a[1]-y));o['x']=x;o['y']=y
  if (x-1,y) in free and (x+1,y) in free:
   o['movement_type']='MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT';o['movement_range_x']=1
  elif (x,y-1) in free and (x,y+1) in free:
   o['movement_type']='MOVEMENT_TYPE_WANDER_UP_AND_DOWN';o['movement_range_y']=1
  resident_index+=1
 for i,bg in enumerate(m.get('bg_events',[])):
  if bg.get('script')=='SI_Sign':
   t=text('Sign_'+name+'_'+str(i),*context(name,i));sc='SI_W_Sign_'+name+'_'+str(i);addcode(sc,' msgbox '+t+', MSGBOX_NPC\n end');bg['script']=sc
# Every ordinary trainer has a distinct trainer flag, party and post-battle line.
constants=Path('include/constants/opponents.h');const=constants.read_text()
ids={n:int(v) for n,v in re.findall(r'#define\s+(TRAINER_SI_\w+)\s+(\d+)',const)}
regular_ids=sorted([n for n in ids if re.fullmatch(r'TRAINER_SI_(JONATHON|DARIUS|ROUTE\d+|FIELD\d+)',n)],key=lambda n:ids[n])
party=Path('src/data/trainers.party');part=party.read_text()
for ident in regular_ids+['TRAINER_SI_BARRY']:
 part=re.sub(r'=== '+ident+r' ===.*?(?=^=== |\Z)','',part,flags=re.S|re.M)
setup=Path('src/battle_setup.c');setuptext=setup.read_text()
flags_list=[int(x.strip(),16) for x in re.search(r'sSinnohTrainerFlags\[\] = \{(.*?)\}',setuptext).group(1).split(',')]
nextid=max(ids.values())+1;extra_flags=list(range(0x4B0,0x4DC))+list(range(0x4DD,0x4E0))+list(range(0x4EC,0x4F0))
def alloc(ident,flag):
 global nextid,const
 const+=f'\n#define {ident} {nextid}\n';ids[ident]=nextid;nextid+=1;flags_list.append(flag);return ident
route_lv={201:4,202:5,203:7,204:13,205:18,206:23,207:13,208:24,209:27,210:32,211:35,212:29,213:34,214:30,215:29,216:41,217:43,218:37,219:5,220:34,221:35,222:49,223:51,224:59,225:59,226:60,227:61,228:61,229:60,230:60}
def level(name):
 rn=re.search(r'Route(\d+)',name)
 if rn:return route_lv.get(int(rn[1]),20)
 return 49 if 'Victory' in name else 36 if 'Canalave' in name else 12 if 'Oreburgh' in name else 8 if 'Jubilife' in name else 20 if 'Eterna' in name else 27 if 'Hearthome' in name else 30
archetypes=[
 ('Youngster','TRAINER_PIC_SI_YOUNGSTER_DP','OBJ_EVENT_GFX_SI_YOUNGSTER','Male',['Starly','Shinx','Bidoof']),
 ('Lass','TRAINER_PIC_SI_LASS_DP','OBJ_EVENT_GFX_SI_LASS','Female',['Buneary','Budew','Pachirisu']),
 ('Hiker','TRAINER_PIC_HIKER',gfx['hiker'],'Male',['Geodude','Machop','Onix']),
 ('Bug Catcher','TRAINER_PIC_BUG_CATCHER','OBJ_EVENT_GFX_SI_YOUNGSTER','Male',['Kricketot','Burmy','Combee']),
 ('Fisherman','TRAINER_PIC_FISHERMAN',gfx['fisherman'],'Male',['Magikarp','Buizel','Shellos']),
 ('Aroma Lady','TRAINER_PIC_AROMA_LADY',gfx['aroma_lady'],'Female',['Budew','Cherubi','Roselia']),
 ('Cooltrainer 2','TRAINER_PIC_COOLTRAINER_M',gfx['ace_trainer_m'],'Male',['Gible','Riolu','Sneasel']),
 ('Cooltrainer 2','TRAINER_PIC_COOLTRAINER_F',gfx['ace_trainer_f'],'Female',['Ralts','Ponyta','Snover']),
 ('Psychic','TRAINER_PIC_PSYCHIC_M',gfx['scientist_m'],'Male',['Abra','Bronzor','Chingling'])]
evo1={'Starly':'Staravia','Shinx':'Luxio','Bidoof':'Bibarel','Buneary':'Lopunny','Budew':'Roselia','Geodude':'Graveler','Machop':'Machoke','Kricketot':'Kricketune','Burmy':'Mothim','Magikarp':'Gyarados','Buizel':'Floatzel','Shellos':'Gastrodon','Cherubi':'Cherrim','Gible':'Gabite','Riolu':'Lucario','Ralts':'Kirlia','Snover':'Abomasnow','Abra':'Kadabra','Bronzor':'Bronzong','Chingling':'Chimecho'}
evo2={'Starly':'Staraptor','Shinx':'Luxray','Budew':'Roserade','Geodude':'Golem','Machop':'Machamp','Gible':'Garchomp','Ralts':'Gardevoir','Ponyta':'Rapidash','Sneasel':'Weavile'}
names='CAIO LIA RAFA NINA OTAVIO BIA LUCAS MAIA NICO IRIS ENZO LUNA TEO ANA IVO EVA PEDRO LARA JOAO ALICE DANTE CECI LEVI JADE RUI SARA LEO MEL YURI CLARA'.split()
parties=[];trainer_records=[]
def makeparty(ident,name,lv,arch,species=None):
 cls,pic,g,gender,pool=arch;species=species or pool[:2 if lv<25 else 3]
 for difficulty,delta,iv in [('',0,16),('Easy',-2,0),('Hard',2,31)]:
  block=f'=== {ident} ===\n'+(f'Difficulty: {difficulty}\n' if difficulty else '')+f'Name: {name}\nClass: {cls}\nPic: {pic}\nGender: {gender}\nMusic: {gender}\nAI: Basic Trainer\n'
  for i,mon in enumerate(species):
   mon=evo2.get(mon,evo1.get(mon,mon)) if lv>=32 else evo1.get(mon,mon) if lv>=18 else mon
   block+=f'\n{mon}\nLevel: {max(2,lv+delta+i%2)}\nIVs: {iv} HP / {iv} Atk / {iv} Def / {iv} SpA / {iv} SpD / {iv} Spe\n'
  parties.append(block)
def train(name,o):
 idx=len(trainer_records);ident=regular_ids[idx] if idx<len(regular_ids) else alloc('TRAINER_SI_WORLD'+str(idx),extra_flags.pop(0));arch=archetypes[idx%len(archetypes)];lv=level(name)
 makeparty(ident,names[idx%len(names)],lv,arch)
 intro=text('TrainerIntro'+str(idx),[
 'Estou treinando para não travar diante da Liga. Me ajuda com uma batalha?',
 'Meu parceiro inventou uma estratégia. Vamos descobrir se funciona!',
 'Prometi ao meu irmão que melhoraria hoje. Quero enfrentar você.',
 'A trilha ficou tensa. Uma batalha honesta ajuda a recuperar a coragem.',
 'Sem atalhos: vou crescer junto com meus Pokémon. Vamos lutar!'][idx%5],
 ['I train so I will not freeze at the League. Help me with a battle?',
 'My partner invented a strategy. Let us see if it works!',
 'I promised my brother I would improve today. I want to face you.',
 'The trail feels tense. An honest battle restores courage.',
 'No shortcuts: I will grow with my Pokemon. Let us battle!'][idx%5])
 defeat=text('TrainerDefeat'+str(idx),'Errei, mas já entendi o que tentar na próxima!','I missed it, but now I know what to try next!')
 pt,en=context(name,idx);aftertext=text('TrainerAfter'+str(idx),'Vou anotar essa batalha no meu caderno. '+pt,'I will write this battle in my notebook. '+en)
 sc='SI_W_Trainer_'+str(idx);addcode(sc,f' trainerbattle_single {ident}, {intro}, {defeat}\n msgbox {aftertext}, MSGBOX_AUTOCLOSE\n end')
 o['script']=sc;o['graphics_id']=arch[2];o['trainer_type']='TRAINER_TYPE_NORMAL';o['trainer_sight_or_berry_tree_id']='2';o['movement_type']='MOVEMENT_TYPE_FACE_DOWN';o['movement_range_x']=o['movement_range_y']=0
 # Trainer sight requires the script to begin with trainerbattle, not lock/message.
 for dx,dy,facing in [(0,1,'DOWN'),(0,-1,'UP'),(1,0,'RIGHT'),(-1,0,'LEFT')]:
  if all((o['x']+dx*k,o['y']+dy*k) in safe(name) for k in (1,2)):
   o['movement_type']='MOVEMENT_TYPE_FACE_'+facing;break
 else:o['trainer_sight_or_berry_tree_id']='1'
 trainer_records.append({'map':name,'script':sc,'id':ident,'level':lv,'x':o['x'],'y':o['y']})
for name,m in maps.items():
 for o in m.get('object_events',[]):
  if o['script'].startswith('SI_Trainer_') or o['script'].startswith('SI_C_Trainer_FIELD'):train(name,o)
# At least two challengers on the main early routes and additional cave/Gym encounters.
for name in maps:
 if not (re.fullmatch(r'Route\d+(?:_North|_South|_East|_West)?',name) or name in ['EternaForest','VictoryRoad','MtCoronetSummit'] or 'Gym' in name):continue
 wanted=4 if name in ['VictoryRoad','MtCoronetSummit'] else 2
 have=sum(t['map']==name for t in trainer_records)
 for i in range(max(0,wanted-have)):
  if len(trainer_records)>=91:break
  l=layouts[maps[name]['layout']]
  o=place(name,(i+1)*l['width']//(wanted+1),l['height']//2,'OBJ_EVENT_GFX_SI_YOUNGSTER','SI_W_NewTrainer')
  if o:train(name,o)
# Complete all reused trainer definitions, even those not referenced by an object.
for ident in regular_ids[len(trainer_records):]:makeparty(ident,'NICO',12,archetypes[0])
# Barry grows from reckless competition into a responsible friend.
barry=[
 ('Route203',3,8,0x3B,'Quero chegar primeiro em tudo! Mas antes preciso saber se nossos parceiros estão prontos.','I want to be first at everything! First, let us see if our partners are ready.'),
 ('EternaCity',10,23,0x4E7,'Corri atrás da Galáctica sem pensar. Você fez melhor: ouviu as pessoas. Quero aprender com você.','I rushed after Galactic without thinking. You listened to people. I want to learn from you.'),
 ('CanalaveCity',15,37,0x4E8,'Papai só fala da Liga. Eu queria uma vitória para mostrar a ele. Hoje quero merecer a confiança do meu time.','Dad only talks about the League. I wanted a win to show him. Today I want to earn my team trust.'),
 ('SnowpointCity',18,44,0x4E9,'Falhei no lago. Não vou fingir que está tudo bem. Vamos treinar e voltar mais fortes, juntos.','I failed at the lake. I will not pretend I am fine. Let us train and return stronger together.'),
 ('PokmonLeague',24,56,0x4EA,'Desta vez vou esperar você. Antes da Liga, uma última batalha entre amigos?','This time I will wait for you. One last battle between friends before the League?'),
 ('FightArea',29,65,0x4EB,'Agora ajudo quem está começando. Ser forte também é ensinar. Mas ainda quero te desafiar!','Now I help beginners. Strength also means teaching. I still want to challenge you!')]
for i,(name,stage,lv,fl,pt,en) in enumerate(barry):
 label='SI_Barry' if i==0 else 'SI_W_Barry'+str(i)
 o=next((o for o in maps[name]['object_events'] if o['script']=='SI_Barry'),None) if i==0 else place(name,layouts[maps[name]['layout']]['width']//2+4,layouts[maps[name]['layout']]['height']//2,gfx.get('riley'),'SI_W_Barry'+str(i))
 if not o:continue
 o['script']=label;o['graphics_id']='OBJ_EVENT_GFX_SI_BARRY_PT';o['trainer_type']='TRAINER_TYPE_NONE'
 intro=text('BarryIntro'+str(i),pt+' Vamos batalhar?',en+' Shall we battle?')
 defeat=text('BarryDefeat'+str(i),'Foi incrível! Vou cuidar melhor de cada decisão.','That was amazing! I will take more care with each decision.')
 done=text('BarryDone'+str(i),'Não vou abandonar ninguém por causa de uma derrota. Pode contar comigo.','I will not abandon anyone over a defeat. You can count on me.')
 early=text('BarryWait'+str(i),'Estou preparando minha equipe. Siga sua missão; depois a gente batalha!','I am preparing my team. Follow your mission; we can battle later!')
 variants=[]
 for starter in range(1,4):
  ident='TRAINER_SI_BARRY' if i==0 and starter==1 else alloc('TRAINER_SI_BARRY'+str(i)+'_'+str(starter),fl)
  rival=['Chimchar','Piplup','Turtwig'][starter-1]
  rival= {'Chimchar':'Infernape','Piplup':'Empoleon','Turtwig':'Torterra'}[rival] if lv>=32 else {'Chimchar':'Monferno','Piplup':'Prinplup','Turtwig':'Grotle'}[rival] if lv>=14 else rival
  roster=['Starly',rival] if i==0 else ['Starly','Buizel',rival] if i<3 else ['Starly','Buizel','Heracross',rival]
  makeparty(ident,'BARRY',lv,('Pkmn Trainer 2','TRAINER_PIC_SI_BARRY_DP','OBJ_EVENT_GFX_SI_BARRY_PT','Male',[]),roster);variants.append(ident)
 body=f' lock\n faceplayer\n goto_if_lt VAR_SI_STAGE, {stage}, {label}_Wait\n goto_if_defeated {variants[0]}, {label}_Done\n msgbox {intro}, MSGBOX_YESNO\n goto_if_eq VAR_RESULT, FALSE, {label}_Exit\n special HealPlayerParty\n callnative SiInferStarter\n goto_if_eq VAR_SI_STARTER, 2, {label}_B\n goto_if_eq VAR_SI_STARTER, 3, {label}_C\n trainerbattle_single {variants[0]}, {intro}, {defeat}\n goto {label}_Done\n{label}_B:\n trainerbattle_single {variants[1]}, {intro}, {defeat}\n goto {label}_Done\n{label}_C:\n trainerbattle_single {variants[2]}, {intro}, {defeat}\n{label}_Done:\n special HealPlayerParty\n msgbox {done}, MSGBOX_DEFAULT\n goto {label}_Exit\n{label}_Wait:\n msgbox {early}, MSGBOX_DEFAULT\n{label}_Exit:\n release\n end'
 if i==0:
  oldscript=Path('data/scripts/sinnoh_chapter1.inc');s=oldscript.read_text();s=re.sub(r'SI_Barry::.*?(?=\n[A-Za-z0-9_]+::)',label+'::\n'+body,s,flags=re.S);oldscript.write_text(s)
 else:addcode(label,body)
for i,(name,pt,en) in enumerate([
 ('TwinleafTown','Você vai ouvir que sou apressado. É verdade! Mas eu volto por um amigo. A gente se vê na Rota 203.','They will say I rush. True! But I return for a friend. See you on Route 203.'),
 ('LakeVerity','A Galáctica não vai tocar no lago da nossa infância. Você investiga; eu cuido dos Pokémon feridos.','Galactic will not touch our childhood lake. You investigate; I care for hurt Pokemon.'),
 ('LakeValor','Eles tiraram a água e deixaram os Pokémon. Eu seguro a recuperação; vá atrás de Saturn!','They drained the water and left the Pokemon. I help the recovery; go after Saturn!'),
 ('SpearPillar','Desta vez não vou correr na frente. Vou ficar aqui e garantir que todos consigam voltar.','This time I will not rush ahead. I will stay and make sure everyone can return.')]):
 sc='SI_W_BarrySupport'+str(i);t=text('BarrySupport'+str(i),pt,en)
 addcode(sc,' lock\n faceplayer\n special HealPlayerParty\n msgbox '+t+', MSGBOX_DEFAULT\n release\n end')
 o=place(name,layouts[maps[name]['layout']]['width']//2-4,layouts[maps[name]['layout']]['height']//2,'OBJ_EVENT_GFX_SI_BARRY_PT',sc)
# World activities and item pickups have one-time flags and retry on full bag.
flagfile=Path('include/constants/flags.h');fs=flagfile.read_text()
quests=[
 ('EternaForest','cheryl','BUDEW',0x4AC,'SOOTHE_BELL',1,0,'Budew aprende a confiar antes de florescer. Mostre um Budew da sua equipe e eu ajudo vocês com um presente.','Budew learns trust before blooming. Show me one from your party for a gift.'),
 ('JubilifeCity','school_kid_m','STARLY',0x4AE,'QUICK_BALL',5,0,'Estou desenhando as aves de Sinnoh. Posso observar um Starly da sua equipe?','I draw Sinnoh birds. May I see a Starly from your party?'),
 ('Route219','fisherman',None,0x4AF,'OLD_ROD',1,1,'Ganhei esta vara quando comecei. Quero que você descubra a calma de pescar também.','I got this rod as a beginner. I want you to discover fishing too.'),
 ('HearthomeCity','guitarist',None,0x4DC,'DUSK_BALL',5,11,'Depois da insígnia de Fantina, deixo um presente para a sua próxima viagem.','After Fantina badge, I have a gift for your next journey.')]
for i,(name,role,mon,fl,item,count,stage,pt,en) in enumerate(quests):
 sc='SI_W_Quest'+str(i);flag='FLAG_SI_WORLD_QUEST'+str(i);fs+=f'\n#define {flag} {hex(fl)}\n';offer=text('QuestOffer'+str(i),pt,en)
 done=text('QuestDone'+str(i),'Obrigado por voltar! Quero acompanhar o que vocês vão descobrir.','Thanks for returning! I want to hear what you discover.')
 missing=text('QuestMissing'+str(i),'Volte depois de cumprir esse pedido. Seu parceiro precisa estar na equipe.','Return after meeting the request. The partner must be in your party.')
 full=text('BagFull'+str(i),'Sua mochila está cheia. Vou guardar o presente até você poder levar.','Your bag is full. I will keep the gift until you have space.')
 body=f' lock\n faceplayer\n goto_if_set {flag}, {sc}_Done\n msgbox {offer}, MSGBOX_DEFAULT\n goto_if_lt VAR_SI_STAGE, {stage}, {sc}_Missing\n'
 if mon:body+=f' callnative SiCheck{mon.title()}\n goto_if_eq VAR_RESULT, FALSE, {sc}_Missing\n'
 body+=f' giveitem ITEM_{item}, {count}\n goto_if_eq VAR_RESULT, FALSE, {sc}_Full\n setflag {flag}\n'
 if i==0:body+=' callnative SiPrismRecharge\n'
 body+=f'{sc}_Done:\n msgbox {done}, MSGBOX_DEFAULT\n goto {sc}_Exit\n{sc}_Missing:\n msgbox {missing}, MSGBOX_DEFAULT\n goto {sc}_Exit\n{sc}_Full:\n msgbox {full}, MSGBOX_DEFAULT\n{sc}_Exit:\n release\n end'
 addcode(sc,body);l=layouts[maps[name]['layout']];place(name,l['width']//2,l['height']//2,gfx[role],sc)
# Riley's egg cannot be lost when the party is full.
sc='SI_W_RileyEgg';fs+='\n#define FLAG_SI_RILEY_EGG 0x4AD\n'
offer=text('RileyOffer','Este ovo de Riolu sente a energia dos lagos. Depois da pesquisa na biblioteca, quero que viaje com você. Deixe um espaço na equipe.','This Riolu egg senses lake energy. After the library research, I want it to travel with you. Leave a party slot.')
done=text('RileyDone','Riolu vai conhecer o mundo pelos seus olhos. Cuide bem dessa confiança.','Riolu will see the world through your eyes. Care for that trust.')
addcode(sc,f' lock\n faceplayer\n goto_if_set FLAG_SI_RILEY_EGG, {sc}_Done\n msgbox {offer}, MSGBOX_DEFAULT\n goto_if_lt VAR_SI_STAGE, 17, {sc}_Exit\n getpartysize\n goto_if_ge VAR_RESULT, 6, {sc}_Exit\n giveegg SPECIES_RIOLU\n setflag FLAG_SI_RILEY_EGG\n{sc}_Done:\n msgbox {done}, MSGBOX_DEFAULT\n{sc}_Exit:\n release\n end')
place('CanalaveCity',11,12,gfx['riley'],sc)
for i,(name,o) in enumerate(pickup):
 flag='FLAG_SI_WORLD_PICKUP'+str(i);fs+=f'\n#define {flag} {hex(0x4E0+i)}\n'
 item=['POTION','ANTIDOTE','POKE_BALL','PARALYZE_HEAL','SUPER_POTION','ETHER','GREAT_BALL'][i]
 sc='SI_W_Pickup'+str(i);o['script']=sc;o['flag']=flag;o['movement_type']='MOVEMENT_TYPE_NONE'
 addcode(sc,f' finditem ITEM_{item}\n end')
# Rowan explains the mechanic and reacts to the current chapter.
text('PrismRowan','O Prisma dos Lagos responde à sua estratégia. Mesprit ajuda contra um alvo com status. Azelf desperta depois do Lago Valor; Uxie depois de Acuity. Cada captura reforçada usa uma carga. Vença um treinador novo para recuperar uma. Abra MISSÃO e use L ou R para ajustar.','The Lake Prism responds to strategy. Mesprit helps against a target with status. Azelf wakes after Lake Valor; Uxie after Acuity. Each boosted throw uses one charge. Win against a new trainer to recover one. Open MISSION and press L or R to adjust.')
phases=[
 (23,'Os lagos voltaram a respirar. Você mostrou que tempo, espaço e sombra podem coexistir. Agora leve essa experiência até a Liga.','The lakes breathe again. You showed time, space and shadow can coexist. Take that experience to the League.'),
 (17,'Barry voltou de Acuity mudado. Não meço coragem pela vitória. Procure os guardiões e cuide de quem ficou para trás.','Barry returned changed from Acuity. I do not measure courage in wins. Seek the guardians and care for those left behind.'),
 (13,'A energia de Azelf acordou outro modo do Prisma. A crise de Valor revelou o que a Galáctica está roubando dos lagos.','Azelf awakened another Prism mode. The Valor crisis revealed what Galactic steals from the lakes.'),
 (7,'Roark confirmou o condutor. O próximo coletor está nas turbinas. As pessoas de Floaroma dependem da água que passa ali.','Roark confirmed the conductor. The next collector is at the turbines. Floaroma people depend on that water.')]
rowan=Path('data/scripts/sinnoh_chapter1.inc');s=rowan.read_text()
s=s.replace(' msgbox SI_Text_Rowan, MSGBOX_DEFAULT',' msgbox SI_Text_Rowan, MSGBOX_DEFAULT\n msgbox SI_W_T_PrismRowan, MSGBOX_DEFAULT',1)
body='SI_RowanLater:\n callnative SiPrismRepair\n'
for i,(stage,pt,en) in enumerate(phases):
 label='SI_W_RowanPhase'+str(i);body+=f' goto_if_ge VAR_SI_STAGE, {stage}, {label}\n'
 t=text('RowanPhase'+str(i),pt,en);addcode(label,f' msgbox {t}, MSGBOX_DEFAULT\n release\n end')
body+=' msgbox SI_Text_RowanLater, MSGBOX_DEFAULT\n release\n end'
s=re.sub(r'SI_RowanLater:.*?(?=\nSI_Lake::)',body,s,flags=re.S);rowan.write_text(s)
# Attach the generated world scripts to the existing shared campaign assembly.
rowan.write_text(rowan.read_text()+'\n.include "data/scripts/sinnoh_world.inc"\n')
Path('data/scripts/sinnoh_world.inc').write_text('\n'.join(script)+'\n')
loc=Path('src/data/sinnoh_localization.h');ls=loc.read_text()
ls='\n'.join(f'extern const u8 {n}[], {n}_En[];' for n in translations)+'\n'+ls
ls=ls.replace('static const struct HeTranslation sSinnohTranslations[] = {','static const struct HeTranslation sSinnohTranslations[] = {\n'+'\n'.join(f'{{{n}_En,{n}}},' for n in translations))
loc.write_text(ls);flagfile.write_text(fs)
party.write_text(part+'\n\n'+'\n\n'.join(parties))
const=re.sub(r'(#define (?:MAX_)?TRAINERS_COUNT_EMERALD )\d+',r'\g<1>'+str(nextid),const)
const=re.sub(r'(#define SI_TRAINER_COUNT )\d+',r'\g<1>'+str(nextid-864),const);constants.write_text(const)
setuptext=re.sub(r'sSinnohTrainerFlags\[\] = \{.*?\}', 'sSinnohTrainerFlags[] = {'+', '.join(hex(x) for x in flags_list)+'}',setuptext);setup.write_text(setuptext)
for name,m in maps.items():Path('data/maps',name,'map.json').write_text(json.dumps(m,indent=2)+'\n')
Path('docs/sinnoh_world.json').write_text(json.dumps({'maps':len(maps),'residents':resident_index,'trainers':trainer_records,'barry_battles':len(barry),'new_sprites':assets,'dialogues':len(translations)},indent=2)+'\n')
# Catch duplicate assembly labels before compiling.
allasm=rowan.read_text()+'\n'+Path('data/scripts/sinnoh_world.inc').read_text()
labels=re.findall(r'^([A-Za-z0-9_]+)::?',allasm,re.M)
duplicates=[n for n,c in collections.Counter(labels).items() if c>1]
assert not duplicates,duplicates
assert all(len(m.get('object_events',[]))<=16 for m in maps.values())
assert not any(o['script']=='SI_Npc' for m in maps.values() for o in m.get('object_events',[]))
print('World:',resident_index,'residents,',len(trainer_records),'trainers,',len(translations),'dialogues')
