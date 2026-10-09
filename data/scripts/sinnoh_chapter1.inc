SI_Travel::
 lock
 faceplayer
 goto_if_unset FLAG_IS_CHAMPION, SI_TravelLocked
 msgbox SI_Text_Travel, MSGBOX_YESNO
 goto_if_eq VAR_RESULT, NO, SI_End
 goto_if_ne VAR_SI_STAGE, 0, SI_TravelWarp
 setvar VAR_SI_STAGE, 1
SI_TravelWarp:
 warp MAP_TWINLEAF_TOWN, 255, 9, 21
 waitstate
 lockall
 msgbox SI_Text_Arrival, MSGBOX_DEFAULT
 releaseall
 end
SI_TravelLocked:
 msgbox SI_Text_TravelLocked, MSGBOX_DEFAULT
 release
 end
SI_Return::
 goto_if_eq VAR_HE_SEASON, 1, SI_C_SeasonOwn
 lock
 faceplayer
 msgbox SI_Text_Return, MSGBOX_YESNO
 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SLATEPORT_CITY, 255, 20, 21
 waitstate
 releaseall
 end
SI_End:
 releaseall
 end
SI_Rowan::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 2, SI_RowanLater
 msgbox SI_Text_Rowan, MSGBOX_DEFAULT
 msgbox SI_W_T_PrismRowan, MSGBOX_DEFAULT
 setvar VAR_SI_STAGE, 2
 callnative SiPrismRepair
 release
 end
SI_RowanLater:
 callnative SiPrismRepair
 goto_if_ge VAR_SI_STAGE, 23, SI_W_RowanPhase0
 goto_if_ge VAR_SI_STAGE, 17, SI_W_RowanPhase1
 goto_if_ge VAR_SI_STAGE, 13, SI_W_RowanPhase2
 goto_if_ge VAR_SI_STAGE, 7, SI_W_RowanPhase3
 msgbox SI_Text_RowanLater, MSGBOX_DEFAULT
 release
 end
SI_Lake::
 lock
 faceplayer
 goto_if_lt VAR_SI_STAGE, 2, SI_LakeEarly
 goto_if_ge VAR_SI_STAGE, 3, SI_LakeDone
 trainerbattle_single TRAINER_SI_LAKE, SI_Text_LakeIntro, SI_Text_Lose, SI_LakeWin, NO_MUSIC
 goto SI_LakeWin
SI_LakeWin:
 msgbox SI_Text_LakeWin, MSGBOX_DEFAULT
 setvar VAR_SI_STAGE, 3
 release
 end
SI_Looker::
 lock
 faceplayer
 goto_if_lt VAR_SI_STAGE, 3, SI_LookerEarly
 goto_if_ge VAR_SI_STAGE, 4, SI_LookerLater
 msgbox SI_Text_Looker, MSGBOX_DEFAULT
 setvar VAR_SI_STAGE, 4
 release
 end
SI_Museum::
 lock
 faceplayer
 msgbox SI_Text_Museum, MSGBOX_DEFAULT
 setvar VAR_SI_CLUES, 1
 release
 end
SI_Mine::
 lock
 faceplayer
 goto_if_lt VAR_SI_STAGE, 4, SI_MineEarly
 goto_if_ge VAR_SI_STAGE, 6, SI_MineDone
 goto_if_eq VAR_SI_STAGE, 5, SI_MinePuzzle
 trainerbattle_single TRAINER_SI_MINE, SI_Text_MineIntro, SI_Text_Lose, SI_MinePuzzle, NO_MUSIC
 goto SI_MinePuzzle
SI_MinePuzzle:
 setvar VAR_SI_STAGE, 5
 msgbox SI_Text_MinePuzzle, MSGBOX_DEFAULT
 multichoice 15, 5, MULTI_HE_SIGNAL, FALSE
 goto_if_eq VAR_RESULT, MULTI_B_PRESSED, SI_End
 goto_if_eq VAR_RESULT, 3, SI_End
 goto_if_ne VAR_RESULT, 2, SI_Wrong
 multichoice 15, 5, MULTI_HE_SIGNAL, FALSE
 goto_if_eq VAR_RESULT, MULTI_B_PRESSED, SI_End
 goto_if_eq VAR_RESULT, 3, SI_End
 goto_if_ne VAR_RESULT, 0, SI_Wrong
 multichoice 15, 5, MULTI_HE_SIGNAL, FALSE
 goto_if_eq VAR_RESULT, MULTI_B_PRESSED, SI_End
 goto_if_eq VAR_RESULT, 3, SI_End
 goto_if_ne VAR_RESULT, 1, SI_Wrong
 msgbox SI_Text_MineWin, MSGBOX_DEFAULT
 setvar VAR_SI_STAGE, 6
 release
 end
SI_Wrong:
 msgbox SI_Text_Wrong, MSGBOX_DEFAULT
 release
 end
SI_Roark::
 lock
 faceplayer
 goto_if_lt VAR_SI_STAGE, 6, SI_RoarkEarly
 goto_if_ge VAR_SI_STAGE, 7, SI_RoarkAfter
 trainerbattle_single TRAINER_SI_ROARK, SI_Text_RoarkIntro, SI_Text_RoarkDefeat, SI_RoarkWin, NO_MUSIC
 goto SI_RoarkWin
SI_RoarkWin:
 message SI_Text_Badge
 waitmessage
 call Common_EventScript_PlayGymBadgeFanfare
 setvar VAR_SI_BADGES, 1
 setflag FLAG_BADGE01_GET
 giveitem ITEM_HM_ROCK_SMASH
 setvar VAR_SI_STAGE, 7
 msgbox SI_Text_Ending, MSGBOX_DEFAULT
SI_RoarkAfter:
 msgbox SI_Text_RoarkAfter, MSGBOX_DEFAULT
 goto_if_eq VAR_SI_CHOICE, 1, SI_End
 giveitem ITEM_TM_ROCK_TOMB
 goto_if_eq VAR_RESULT, FALSE, SI_End
 setvar VAR_SI_CHOICE, 1
 release
 end
SI_Barry::
 lock
 faceplayer
 goto_if_lt VAR_SI_STAGE, 3, SI_Barry_Wait
 goto_if_defeated TRAINER_SI_BARRY, SI_Barry_Done
 msgbox SI_W_T_BarryIntro0, MSGBOX_YESNO
 goto_if_eq VAR_RESULT, FALSE, SI_Barry_Exit
 special HealPlayerParty
 callnative SiInferStarter
 goto_if_eq VAR_SI_STARTER, 2, SI_Barry_B
 goto_if_eq VAR_SI_STARTER, 3, SI_Barry_C
 trainerbattle_single TRAINER_SI_BARRY, SI_W_T_BarryIntro0, SI_W_T_BarryDefeat0
 goto SI_Barry_Done
SI_Barry_B:
 trainerbattle_single TRAINER_SI_BARRY0_2, SI_W_T_BarryIntro0, SI_W_T_BarryDefeat0
 goto SI_Barry_Done
SI_Barry_C:
 trainerbattle_single TRAINER_SI_BARRY0_3, SI_W_T_BarryIntro0, SI_W_T_BarryDefeat0
SI_Barry_Done:
 special HealPlayerParty
 msgbox SI_W_T_BarryDone0, MSGBOX_DEFAULT
 goto SI_Barry_Exit
SI_Barry_Wait:
 msgbox SI_W_T_BarryWait0, MSGBOX_DEFAULT
SI_Barry_Exit:
 release
 end
SI_Heal::
 lock
 faceplayer
 special HealPlayerParty
 special SiSetHealPoint
 msgbox SI_Text_Heal, MSGBOX_DEFAULT
 release
 end
SI_Clerk::
 lock
 faceplayer
 msgbox SI_Text_Clerk, MSGBOX_DEFAULT
 pokemart SI_Shop
 release
 end
 .align 2
SI_Shop:
 .2byte ITEM_POKE_BALL
 .2byte ITEM_GREAT_BALL
 .2byte ITEM_ULTRA_BALL
 .2byte ITEM_POTION
 .2byte ITEM_SUPER_POTION
 .2byte ITEM_HYPER_POTION
 .2byte ITEM_REVIVE
 .2byte ITEM_ESCAPE_ROPE
 .2byte ITEM_ANTIDOTE
 .2byte ITEM_PARALYZE_HEAL
 .2byte ITEM_REPEL
 pokemartlistend
SI_Journal::
 lockall
 goto_if_ge VAR_SI_STAGE, 7, SI_C_Journal
 goto_if_lt VAR_SI_STAGE, 2, SI_Goal1
 goto_if_eq VAR_SI_STAGE, 2, SI_Goal2
 goto_if_eq VAR_SI_STAGE, 3, SI_Goal3
 goto_if_eq VAR_SI_STAGE, 4, SI_Goal4
 goto_if_eq VAR_SI_STAGE, 5, SI_Goal5
 goto_if_eq VAR_SI_STAGE, 6, SI_Goal6
 goto SI_Goal7
SI_Npc::
 msgbox SI_Text_Npc, MSGBOX_NPC
 end
SI_Sign::
 msgbox SI_Text_Sign, MSGBOX_NPC
 end
SI_Boundary::
 msgbox SI_Text_Boundary, MSGBOX_NPC
 end
SI_LakeEarly::
 msgbox SI_Text_LakeEarly, MSGBOX_NPC
 end
SI_LakeDone::
 msgbox SI_Text_LakeDone, MSGBOX_NPC
 end
SI_LookerEarly::
 msgbox SI_Text_LookerEarly, MSGBOX_NPC
 end
SI_LookerLater::
 msgbox SI_Text_LookerLater, MSGBOX_NPC
 end
SI_MineEarly::
 msgbox SI_Text_MineEarly, MSGBOX_NPC
 end
SI_MineDone::
 msgbox SI_Text_MineDone, MSGBOX_NPC
 end
SI_RoarkEarly::
 msgbox SI_Text_RoarkEarly, MSGBOX_NPC
 end
SI_Goal1::
 msgbox SI_Text_Goal1, MSGBOX_NPC
 end
SI_Goal2::
 msgbox SI_Text_Goal2, MSGBOX_NPC
 end
SI_Goal3::
 msgbox SI_Text_Goal3, MSGBOX_NPC
 end
SI_Goal4::
 msgbox SI_Text_Goal4, MSGBOX_NPC
 end
SI_Goal5::
 msgbox SI_Text_Goal5, MSGBOX_NPC
 end
SI_Goal6::
 msgbox SI_Text_Goal6, MSGBOX_NPC
 end
SI_Goal7::
 msgbox SI_Text_Goal7, MSGBOX_NPC
 end
SI_Trainer_JONATHON::
 trainerbattle_single TRAINER_SI_JONATHON, SI_Text_TrainerIntro, SI_Text_Lose
 msgbox SI_Text_TrainerAfter, MSGBOX_AUTOCLOSE
 end
SI_Trainer_DARIUS::
 trainerbattle_single TRAINER_SI_DARIUS, SI_Text_TrainerIntro, SI_Text_Lose
 msgbox SI_Text_TrainerAfter, MSGBOX_AUTOCLOSE
 end
SI_Trainer_ROUTE0::
 trainerbattle_single TRAINER_SI_ROUTE0, SI_Text_TrainerIntro, SI_Text_Lose
 msgbox SI_Text_TrainerAfter, MSGBOX_AUTOCLOSE
 end
SI_Trainer_ROUTE1::
 trainerbattle_single TRAINER_SI_ROUTE1, SI_Text_TrainerIntro, SI_Text_Lose
 msgbox SI_Text_TrainerAfter, MSGBOX_AUTOCLOSE
 end
SI_Trainer_ROUTE2::
 trainerbattle_single TRAINER_SI_ROUTE2, SI_Text_TrainerIntro, SI_Text_Lose
 msgbox SI_Text_TrainerAfter, MSGBOX_AUTOCLOSE
 end
SI_Trainer_ROUTE3::
 trainerbattle_single TRAINER_SI_ROUTE3, SI_Text_TrainerIntro, SI_Text_Lose
 msgbox SI_Text_TrainerAfter, MSGBOX_AUTOCLOSE
 end
SI_Trainer_ROUTE4::
 trainerbattle_single TRAINER_SI_ROUTE4, SI_Text_TrainerIntro, SI_Text_Lose
 msgbox SI_Text_TrainerAfter, MSGBOX_AUTOCLOSE
 end
SI_Trainer_ROUTE5::
 trainerbattle_single TRAINER_SI_ROUTE5, SI_Text_TrainerIntro, SI_Text_Lose
 msgbox SI_Text_TrainerAfter, MSGBOX_AUTOCLOSE
 end
SI_Trainer_ROUTE6::
 trainerbattle_single TRAINER_SI_ROUTE6, SI_Text_TrainerIntro, SI_Text_Lose
 msgbox SI_Text_TrainerAfter, MSGBOX_AUTOCLOSE
 end
SI_Trainer_ROUTE7::
 trainerbattle_single TRAINER_SI_ROUTE7, SI_Text_TrainerIntro, SI_Text_Lose
 msgbox SI_Text_TrainerAfter, MSGBOX_AUTOCLOSE
 end
SI_Text_Npc::
 .string "As pesquisas de Rowan estão\nparadas. A Galáctica compra\pcarvão e recolhe cristais\nda mina. Ninguém explica\ppor quê.$"
SI_Text_Npc_En::
 .string "Rowan's research has\nstalled. Galactic agents\pbuy coal and collect mine\ncrystals. Nobody knows why.$"
SI_Text_Sign::
 .string "SINNOH - FIOS DO AMANHA.\nConsulte MISSAO no menu\ppara acompanhar sua\nproxima etapa.$"
SI_Text_Sign_En::
 .string "SINNOH - THREADS OF TOMORROW.\nOpen MISSION in the menu\pto follow your next goal.$"
SI_Text_Boundary::
 .string "Fim da área desta demo. O\npróximo trecho de Sinnoh\pvirá em outra atualização.\nVocê pode explorar esta\párea ou voltar a Hoenn.$"
SI_Text_Boundary_En::
 .string "This is the edge of the\ndemo. More of Sinnoh will\pcome in a later update. You\nmay explore here or return\pto Hoenn.$"
SI_Text_TravelLocked::
 .string "A Devon recebeu um pedido\nde Rowan, em Sinnoh. Venha\pdepois de entrar no Hall da\nFama de Hoenn. Precisamos\pde um campeão.$"
SI_Text_TravelLocked_En::
 .string "Devon received a request\nfrom Rowan in Sinnoh.\pReturn after entering\nHoenn's Hall of Fame. We\pneed a champion.$"
SI_Text_Travel::
 .string "Rowan detectou em Sinnoh o\nmesmo sinal da Operação\pEclipse. Não há Rocket por\nlá: a Equipe Galáctica\precolhe os fragmentos. Quer\nviajar para Twinleaf? Sua\pequipe e seu progresso\nficam com você.$"
SI_Text_Travel_En::
 .string "Rowan detected the Eclipse\nsignal in Sinnoh. Rocket is\pabsent: Team Galactic is\ncollecting the fragments.\pTravel to Twinleaf? You\nkeep your party and\pprogress.$"
SI_Text_Arrival::
 .string "CAPÍTULO SINNOH - FIOS DO\nAMANHA. O silêncio de\pTwinleaf é cortado por um\nruído no rádio. Uma voz\pdiz: o mundo novo começa\nonde o tempo parou. Rowan\pespera no laboratório de\nSandgem.$"
SI_Text_Arrival_En::
 .string "SINNOH CHAPTER - THREADS OF\nTOMORROW. A radio breaks\pTwinleaf's silence. A voice\nsays: a new world begins\pwhere time stopped. Rowan\nawaits in Sandgem's lab.$"
SI_Text_Return::
 .string "O transporte de pesquisa\nvolta para Slateport. Quer\pretornar a Hoenn? A\ninvestigação de Sinnoh\pcontinuará de onde parou.$"
SI_Text_Return_En::
 .string "The research transport\nreturns to Slateport.\pReturn to Hoenn? Your\nSinnoh investigation will\premain where you left it.$"
SI_Text_Rowan::
 .string "ROWAN: Bem-vindo,\n{PLAYER}. Vou te mostrar\puma descoberta. Os\pcristais de Oreburgh retêm\npequenos pulsos de energia.\pA Galáctica diz que eles\ncuram o clima dos lagos.\pMas meus relógios discordam\nentre si. Preciso de uma\pamostra intacta. Vá ao Lago\nVerity, a oeste da Rota\p201. Não deixe que\ntransformem uma hipótese em\puma arma.$"
SI_Text_Rowan_En::
 .string "ROWAN: Welcome, {PLAYER}.\nLet me show you a discovery.\pOreburgh\pcrystals retain tiny energy\npulses. Galactic claims\pthey heal the lake climate.\nBut my clocks disagree with\peach other. I need an\nintact sample. Visit Lake\pVerity west of Route 201.\nDo not let a hypothesis\pbecome a weapon.$"
SI_Text_RowanLater::
 .string "ROWAN: A amostra emite três\npulsos: C, A, B. O minério\pé apenas um condutor.\nAlguém tenta sincronizar\pSinnoh com um sinal\ndistante. Investigue a\pescola de Jubilife e a mina\nde Oreburgh.$"
SI_Text_RowanLater_En::
 .string "ROWAN: The sample emits\nthree pulses: C, A, B. The\pore is only a conductor.\nSomebody is synchronizing\pSinnoh with a distant\nsignal. Investigate\pJubilife's school and\nOreburgh Mine.$"
SI_Text_LakeEarly::
 .string "GALÁCTICA: Pesquisa\nautorizada! Só converso com\prepresentantes de Rowan.\nProcure o laboratório de\pSandgem primeiro.$"
SI_Text_LakeEarly_En::
 .string "GALACTIC: Authorized\nresearch! I only speak with\pRowan's representatives.\nVisit Sandgem's lab first.$"
SI_Text_LakeIntro::
 .string "GALÁCTICA: A Rocket\ncontrolava cidades. Nós\pvamos corrigir o próprio\ntempo. Este coletor não\ppode cair nas mãos de\nRowan. Afaste-se do lago!$"
SI_Text_LakeIntro_En::
 .string "GALACTIC: Rocket controlled\ncities. We will correct\ptime itself. Rowan must\nnever obtain this\pcollector. Step away from\nthe lake!$"
SI_Text_Lose::
 .string "O sinal... ficou instável!$"
SI_Text_Lose_En::
 .string "The signal... became\nunstable!$"
SI_Text_LakeWin::
 .string "O coletor desliga. Entre os\nfios há uma etiqueta: LOTE\pO-17, MINA OREBURGH. Você\nguarda a leitura para\pRowan. Um policial em\nJubilife pode identificar a\pcarga.$"
SI_Text_LakeWin_En::
 .string "The collector powers down.\nIts wires carry a label:\pLOT O-17, OREBURGH MINE.\nYou keep the reading for\pRowan. An officer in\nJubilife may identify the\pshipment.$"
SI_Text_LakeDone::
 .string "A água voltou a refletir o\ncéu. A etiqueta da carga\paponta para Oreburgh; leve\na pista ao policial da\pescola de Jubilife.$"
SI_Text_LakeDone_En::
 .string "The water reflects the sky\nagain. The shipment label\ppoints to Oreburgh. Take it\nto the officer at\pJubilife's school.$"
SI_Text_LookerEarly::
 .string "LOOKER: Estou investigando\ncargas de carvão com peso\perrado. Rowan procura\nalguém no laboratório.\pComece por lá e examine o\nLago Verity.$"
SI_Text_LookerEarly_En::
 .string "LOOKER: I am investigating\ncoal shipments with the\pwrong weight. Rowan needs\nhelp in his lab. Start\pthere, then inspect Lake\nVerity.$"
SI_Text_Looker::
 .string "LOOKER: O-17... A mesma\ncarga que passou pela TV de\pJubilife. Disseram que era\nequipamento médico. Por\pdentro, havia antenas! A\nresponsável usa o nome\pCaligo. Roark entrou na\nmina para tirar os\poperários de lá. Siga pela\nRota 203 e encontre-o. Vou\pimpedir que o comboio saia\nda cidade.$"
SI_Text_Looker_En::
 .string "LOOKER: O-17... That\nshipment passed through\pJubilife TV. They called it\nmedical equipment, but it\pcontained antennas! The\nofficer in charge calls\pherself Caligo. Roark\nentered the mine to rescue\pthe workers. Follow Route\n203 and find him. I will\pstop their convoy.$"
SI_Text_LookerLater::
 .string "LOOKER: Vá pela Rota 203,\natravesse Oreburgh Gate e\pdesça à mina. O museu\nguarda registros dos\pcristais: podem revelar\ncomo desligar a máquina.$"
SI_Text_LookerLater_En::
 .string "LOOKER: Follow Route 203\nthrough Oreburgh Gate, then\pdescend into the mine. The\nmuseum keeps crystal\precords. They may reveal\nhow to stop the machine.$"
SI_Text_BarryIntro::
 .string "BARRY: Você acaba de começar?\nEntão não vou pegar\pleve! Sinnoh não é uma\nvisita guiada. Depois da\pbatalha, te mostro o\ncaminho para Oreburgh.$"
SI_Text_BarryIntro_En::
 .string "BARRY: You are a new trainer?\nThen I will not\phold back! Sinnoh is no\nguided tour. After our\pbattle, I will show you the\nway to Oreburgh.$"
SI_Text_BarryAfter::
 .string "BARRY: Roark foi para a\nmina! O ginásio fica no\poeste da cidade. A mina\nfica ao sul. Se precisar\pcurar a equipe, use o\nCentro Pokémon.$"
SI_Text_BarryAfter_En::
 .string "BARRY: Roark entered the\nmine! The Gym is in the\pwest of town and the mine\nis south. Use the Pokemon\pCenter to heal your party.$"
SI_Text_Museum::
 .string "ARQUIVISTA: O carvão não é\no alvo. Eles querem os\pcristais que vibram junto\ndo lago. Uma nota antiga\pdiz: terceira luz, primeira\nluz, segunda luz. No\pcoletor, isso significa C,\nA, B. Leve essa ordem para\pa mina.$"
SI_Text_Museum_En::
 .string "ARCHIVIST: Coal is not the\ntarget. They want crystals\pthat vibrate with the lake.\nAn old note reads: third\plight, first light, second\nlight. On the collector\pthat means C, A, B. Take\nthis sequence to the mine.$"
SI_Text_MineEarly::
 .string "CALIGO: Os operários estão\nsob proteção da Galáctica.\pSem uma ordem de\ninvestigação, não há o que\pdiscutir. Procure o\npolicial de Jubilife.$"
SI_Text_MineEarly_En::
 .string "CALIGO: The workers are\nunder Galactic protection.\pWithout an investigation\norder, there is nothing to\pdiscuss. Find Jubilife's\nofficer.$"
SI_Text_MineIntro::
 .string "CALIGO: Cyrus está errado\nnuma coisa: um mundo novo\pprecisa de gente para\nconstruí-lo. Eu vou salvar\pestes operários, desde que\ntrabalhem para nós. Você\pderrubou a Rocket, mas\nainda acha que basta vencer\puma batalha?$"
SI_Text_MineIntro_En::
 .string "CALIGO: Cyrus is wrong\nabout one thing: a new\pworld needs people to build\nit. I will save these\pworkers, provided they work\nfor us. You defeated\pRocket, yet still think one\nbattle solves everything?$"
SI_Text_MinePuzzle::
 .string "A máquina continua ligada.\nRoark segura a passagem\penquanto você corta o\nsinal. As três luzes\pprecisam da ordem C, A, B.\nErrar não consome itens;\pcancelar permite tentar de\nnovo.$"
SI_Text_MinePuzzle_En::
 .string "The machine is still\nrunning. Roark holds the\ppassage while you cut the\nsignal. The three lights\prequire C, A, B. Wrong\nanswers cost no items.\pCancel to try again later.$"
SI_Text_Wrong::
 .string "A luz vermelha acendeu. A\nmáquina reiniciou a\psequência. Tente C, A, B.$"
SI_Text_Wrong_En::
 .string "The red light came on. The\nmachine reset its sequence.\pTry C, A, B.$"
SI_Text_MineWin::
 .string "O pulso cessa. Caligo recua\nlevando uma folha: DESTINO\p- VALLEY WINDWORKS. ROARK:\nOs operários estão seguros.\pVou guardar os cristais no\nmuseu. Venha ao ginásio!\pQuero conhecer a força do\ntreinador que salvou nossa\pmina.$"
SI_Text_MineWin_En::
 .string "The pulse stops. Caligo\nretreats with a page:\pDESTINATION - VALLEY\nWINDWORKS. ROARK: The\pworkers are safe. I will\nkeep the crystals in the\pmuseum. Come to my Gym! Let\nme see the strength of the\ptrainer who saved our\nmine.$"
SI_Text_MineDone::
 .string "A mina voltou ao trabalho.\nRoark já está no ginásio. O\pnome Valley Windworks ficou\nna ordem de carga da\pGaláctica.$"
SI_Text_MineDone_En::
 .string "The mine is working again.\nRoark awaits at the Gym.\pGalactic's shipping order\nnamed Valley Windworks.$"
SI_Text_RoarkEarly::
 .string "ROARK: Primeiro preciso\nproteger a mina. Encontre\pLooker na escola de\nJubilife e resolva o\pcoletor no fundo da mina.\nDepois poderemos batalhar.$"
SI_Text_RoarkEarly_En::
 .string "ROARK: I must secure the\nmine first. Find Looker at\pJubilife's school and\ndisable the collector at\pthe bottom of the mine.\nThen we can battle.$"
SI_Text_RoarkIntro::
 .string "ROARK: Voce protegeu a\nmemoria das pedras. Agora\pmostre a forca de sua\nequipe no nosso ginasio!$"
SI_Text_RoarkIntro_En::
 .string "ROARK: You protected the\nmemory inside stone. Show\pme your team at my Gym!$"
SI_Text_RoarkDefeat::
 .string "Sua força não precisa\napagar ninguém!$"
SI_Text_RoarkDefeat_En::
 .string "Your strength need not\nerase anyone!$"
SI_Text_Badge::
 .string "Voce recebeu a COAL BADGE!\nPrimeira insignia de\pSinnoh!$"
SI_Text_Badge_En::
 .string "You received the COAL BADGE!\nYour first Sinnoh badge!$"
SI_Text_Ending::
 .string "LOOKER: O pulso foi enviado\na Valley Windworks.\pSiga ao norte, atravesse\na Rota 204 e Floaroma.\pA Galactica precisa ser\ninterrompida!$"
SI_Text_Ending_En::
 .string "LOOKER: The pulse reached\nValley Windworks. Go north\pthrough Route 204 and\nFloaroma. Stop Galactic!$"
SI_Text_RoarkAfter::
 .string "ROARK: Sua proxima missao\nesta em Valley Windworks.\pA TM continua aqui caso\nsua mochila esteja cheia.$"
SI_Text_RoarkAfter_En::
 .string "ROARK: Your next mission\nis at Valley Windworks.\pYour TM stays here if\nyour Bag is full.$"
SI_Text_TrainerIntro::
 .string "Vamos trocar experiencias\nnuma batalha de Sinnoh!$"
SI_Text_TrainerIntro_En::
 .string "Let us share our experience\nin a Sinnoh battle!$"
SI_Text_TrainerAfter::
 .string "Uma região nova sempre tem\nalgo a ensinar.$"
SI_Text_TrainerAfter_En::
 .string "A new region always has\nsomething to teach.$"
SI_Text_Heal::
 .string "Sua equipe está pronta! Boa\nsorte na investigação.$"
SI_Text_Heal_En::
 .string "Your party is ready! Good\nluck with the\pinvestigation.$"
SI_Text_Clerk::
 .string "Temos suprimentos para sua\njornada em Sinnoh.$"
SI_Text_Clerk_En::
 .string "We have supplies for your\nSinnoh journey.$"
SI_Text_Goal1::
 .string "SINNOH - FIOS DO AMANHA. Vá\nao laboratório de Rowan em\pSandgem. Saia de Twinleaf\nao norte e siga a Rota 201\ppara leste.$"
SI_Text_Goal1_En::
 .string "SINNOH - THREADS OF\nTOMORROW. Visit Rowan's lab\pin Sandgem. Leave Twinleaf\nto the north, then follow\pRoute 201 east.$"
SI_Text_Goal2::
 .string "SINNOH - FIOS DO AMANHA.\nInvestigue o coletor da\pGaláctica no Lago Verity, a\noeste da Rota 201.$"
SI_Text_Goal2_En::
 .string "SINNOH - THREADS OF\nTOMORROW. Investigate\pGalactic's collector at\nLake Verity, west of Route\p201.$"
SI_Text_Goal3::
 .string "SINNOH - FIOS DO AMANHA.\nLeve a etiqueta O-17 ao\ppolicial Looker na escola\nde Jubilife. Siga ao norte\pde Sandgem pela Rota 202.$"
SI_Text_Goal3_En::
 .string "SINNOH - THREADS OF\nTOMORROW. Take label O-17\pto Looker at Jubilife's\nschool. Follow Route 202\pnorth of Sandgem.$"
SI_Text_Goal4::
 .string "SINNOH - FIOS DO AMANHA.\nSiga a Rota 203 para\pOreburgh. Investigue o\nmuseu e vença Caligo no\pfundo da mina.$"
SI_Text_Goal4_En::
 .string "SINNOH - THREADS OF\nTOMORROW. Follow Route 203\pto Oreburgh. Investigate\nthe museum and defeat\pCaligo at the bottom of the\nmine.$"
SI_Text_Goal5::
 .string "SINNOH - FIOS DO AMANHA.\nCaligo foi vencida.\pDesligue o coletor na mina\nusando C, A, B.$"
SI_Text_Goal5_En::
 .string "SINNOH - THREADS OF\nTOMORROW. Caligo was\pdefeated. Stop the mine\ncollector using C, A, B.$"
SI_Text_Goal6::
 .string "SINNOH - FIOS DO AMANHA. A\nmina está segura. Desafie\pRoark no ginásio de\nOreburgh. Insígnias de\pSinnoh: 0/8.$"
SI_Text_Goal6_En::
 .string "SINNOH - THREADS OF\nTOMORROW. The mine is safe.\pChallenge Roark at Oreburgh\nGym. Sinnoh badges: 0/8.$"
SI_Text_Goal7::
 .string "SINNOH - CAPÍTULO 1\nCONCLUÍDO. Insígnias de\pSinnoh: 1/8. A continuação\nserá em Valley Windworks. O\ptransporte em Twinleaf\nretorna a Hoenn.$"
SI_Text_Goal7_En::
 .string "SINNOH - CHAPTER 1\nCOMPLETE. Sinnoh badges:\p1/8. The story continues at\nValley Windworks in a\pfuture version. Twinleaf\ntransport returns to Hoenn.$"

SI_Starter::
 lockall
 msgbox SI_Text_Starter, MSGBOX_DEFAULT
 multichoice 12, 3, MULTI_SI_STARTER, TRUE
 goto_if_eq VAR_RESULT, 1, SI_GiveChimchar
 goto_if_eq VAR_RESULT, 2, SI_GivePiplup
 setvar VAR_SI_STARTER, 1
 givemon SPECIES_TURTWIG, 5
 goto SI_StarterDone
SI_GiveChimchar:
 setvar VAR_SI_STARTER, 2
 givemon SPECIES_CHIMCHAR, 5
 goto SI_StarterDone
SI_GivePiplup:
 setvar VAR_SI_STARTER, 3
 givemon SPECIES_PIPLUP, 5
SI_StarterDone:
 setflag FLAG_SYS_POKEMON_GET
 setflag FLAG_SYS_POKEDEX_GET
 setvar VAR_SI_STAGE, 1
 giveitem ITEM_POKE_BALL, 5
 giveitem ITEM_POTION, 3
 msgbox SI_Text_StarterDone, MSGBOX_DEFAULT
 releaseall
 end
SI_Text_Starter:
 .string "ROWAN: Bem-vindo a Twinleaf!\nEscolha seu primeiro\pparceiro Pokémon. Vamos\ninvestigar os lagos!$"
SI_Text_StarterDone:
 .string "ROWAN: Agora venha falar\ncomigo. Preciso de ajuda\pcom os sinais do Lago\nVerity. Um novo treinador\ppode descobrir o que a\nGalactica esta procurando.$"

@ Route 201 anti-grinding assistant. Same save flag as New Game rules.
SI_TrainingCoach::
 lock
 faceplayer
 goto_if_unset FLAG_HE_ANTI_GRINDING, SI_CoachOff
 msgbox SI_CoachOffer, MSGBOX_YESNO
 goto_if_eq VAR_RESULT, NO, SI_End
 callnative SiCoachFillCandy
 goto_if_eq VAR_RESULT, FALSE, SI_CoachFull
 callnative SiCoachMaxIvs
 msgbox SI_CoachDone, MSGBOX_DEFAULT
 release
 end
SI_CoachOff::
 msgbox SI_CoachOffText, MSGBOX_DEFAULT
 release
 end
SI_CoachFull::
 msgbox SI_CoachFullText, MSGBOX_DEFAULT
 release
 end
SI_CoachOffer::
 .string "Anti-Grinding ligado!\nCompletar 999 Rare Candy e\pmaximizar os IVs da equipe?\nO limite de nivel continua\pvalendo para os doces.$"
SI_CoachOffer_En::
 .string "Anti-Grinding is enabled!\nFill up to 999 Rare Candy\pand maximize your team's\nIVs? Candy still respects\pyour chosen level cap.$"
SI_CoachDone::
 .string "Voce tem 999 Rare Candy!\nOs seis IVs dos Pokemon da\pequipe agora sao 31.\nVolte para treinar outros\pPokemon ou repor os doces.$"
SI_CoachDone_En::
 .string "You now have 999 Rare Candy!\nYour party Pokemon now have\p31 in all six IVs. Return\nto train other Pokemon or\pto refill your candy.$"
SI_CoachOffText::
 .string "Este apoio precisa de\nAnti-Grinding ligado nas\pregras da sua jornada.\nCom ele desligado, nao dou\pdoces nem altero IVs.$"
SI_CoachOffText_En::
 .string "This support requires\nAnti-Grinding in your\pjourney rules. When it is\noff, I do not give candy\por change any IVs.$"
SI_CoachFullText::
 .string "Sua mochila nao tem espaco.\nOrganize os itens e volte.\pNenhum IV foi alterado.$"
SI_CoachFullText_En::
 .string "Your Bag has no room.\nOrganize it and come back.\pNo IVs were changed.$"

.include "data/scripts/sinnoh_world.inc"
