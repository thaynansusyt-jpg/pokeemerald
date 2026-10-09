SI_W_T_Resident_0::
 .string "Cuido das ferramentas\nantes de sair. Meu\pparceiro conta comigo. Os\nbarcos estão prontos, mas\po capitão espera todo\nmundo embarcar. Ninguém\pfica para trás.$"
SI_W_T_Resident_0_En::
 .string "I check my tools before\nleaving. My partner relies\pon me. Boats are ready,\nbut the captain waits for\peveryone. Nobody gets left\nbehind.$"
SI_W_T_ResidentAfter_0::
 .string "Vi vocês ajudando na\ncrise. Quero que meu filho\pcresça sabendo que alguém\nse importou.$"
SI_W_T_ResidentAfter_0_En::
 .string "I saw you help in the\ncrisis. I want my son to\pknow someone cared.$"
SI_W_Resident_0::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_0_After
 msgbox SI_W_T_Resident_0, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_0_After:
 msgbox SI_W_T_ResidentAfter_0, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_1::
 .string "Pescar exige esperar.\nAprendi mais com a água do\pque com pressa. Tempo,\nespaço e sombra precisam\pcoexistir. Cortar um deles\nrasga os outros dois.$"
SI_W_T_Resident_1_En::
 .string "Fishing takes patience.\nWater taught me more than\prushing. Time, space and\nshadow must coexist.\pCutting one tears the\nother two.$"
SI_W_T_ResidentAfter_1::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_1_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_1::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_1_After
 msgbox SI_W_T_Resident_1, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_1_After:
 msgbox SI_W_T_ResidentAfter_1, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_2::
 .string "Marquei o caminho para\nquem vem depois. Uma\ptrilha boa se compartilha.\nO prédio da Galáctica fica\paceso à noite. Vi\ncarregarem uma máquina\pcoberta de gelo.$"
SI_W_T_Resident_2_En::
 .string "I marked the path for the\nnext traveler. A good\ptrail is shared. Galactic\nstays lit at night. I saw\pthem carry a machine\ncovered in ice.$"
SI_W_T_ResidentAfter_2::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_2_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_2::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_2_After
 msgbox SI_W_T_Resident_2, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_2_After:
 msgbox SI_W_T_ResidentAfter_2, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_3::
 .string "Anoto também os erros. Um\nresultado bonito não vale\pse estiver errado.\nGardenia conversa com as\pplantas. Ri dela até meu\nBudew florescer ouvindo\psua voz.$"
SI_W_T_Resident_3_En::
 .string "I record mistakes too. A\npretty result is worthless\pif it is wrong. Gardenia\ntalks to plants. I laughed\puntil my Budew bloomed at\nher voice.$"
SI_W_T_ResidentAfter_3::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_3_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_3::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_3_After
 msgbox SI_W_T_Resident_3, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_3_After:
 msgbox SI_W_T_ResidentAfter_3, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_4::
 .string "Meu Kricketune acompanha a\nmelodia. A gente erra\pjunto e tenta de novo.\nCheryl procura um Budew\psaudável na floresta. Ela\nentende de amizade melhor\pque qualquer aparelho.$"
SI_W_T_Resident_4_En::
 .string "My Kricketune follows the\nmelody. We miss together\pand try again. Cheryl\nwants to see a healthy\pBudew in the forest. She\nknows friendship better\pthan any device.$"
SI_W_T_ResidentAfter_4::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_4_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_4::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_4_After
 msgbox SI_W_T_Resident_4, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_4_After:
 msgbox SI_W_T_ResidentAfter_4, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_5::
 .string "Treino uma piada nova por\ndia. Meu Mime Jr. é meu\pcrítico mais sincero. O\nprédio da Galáctica fica\paceso à noite. Vi\ncarregarem uma máquina\pcoberta de gelo.$"
SI_W_T_Resident_5_En::
 .string "I practice a new joke\ndaily. My Mime Jr. is my\pmost honest critic.\nGalactic stays lit at\pnight. I saw them carry a\nmachine covered in ice.$"
SI_W_T_ResidentAfter_5::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_5_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_5::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_5_After
 msgbox SI_W_T_Resident_5, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_5_After:
 msgbox SI_W_T_ResidentAfter_5, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_6::
 .string "Hoje consegui ler um mapa\nsem ajuda. Amanhã vou\pdesenhar meu próprio\ncaminho. Gardenia conversa\pcom as plantas. Ri dela\naté meu Budew florescer\pouvindo sua voz.$"
SI_W_T_Resident_6_En::
 .string "Today I read a map alone.\nTomorrow I will draw my\pown path. Gardenia talks\nto plants. I laughed until\pmy Budew bloomed at her\nvoice.$"
SI_W_T_ResidentAfter_6::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_6_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_6::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_6_After
 msgbox SI_W_T_Resident_6, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_6_After:
 msgbox SI_W_T_ResidentAfter_6, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_7::
 .string "Um parceiro cansado merece\ndescanso. Vitória nenhuma\ppaga confiança perdida.\nCheryl procura um Budew\psaudável na floresta. Ela\nentende de amizade melhor\pque qualquer aparelho.$"
SI_W_T_Resident_7_En::
 .string "A tired partner deserves\nrest. No win pays for lost\ptrust. Cheryl wants to see\na healthy Budew in the\pforest. She knows\nfriendship better than any\pdevice.$"
SI_W_T_ResidentAfter_7::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_7_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_7::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_7_After
 msgbox SI_W_T_Resident_7, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_7_After:
 msgbox SI_W_T_ResidentAfter_7, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_8::
 .string "Meu pai me ensinou a\nreconhecer os passos de\pcada Pokémon do pasto. O\nprédio da Galáctica fica\paceso à noite. Vi\ncarregarem uma máquina\pcoberta de gelo.$"
SI_W_T_Resident_8_En::
 .string "Dad taught me to recognize\nevery Pokemon by its\pfootsteps. Galactic stays\nlit at night. I saw them\pcarry a machine covered in\nice.$"
SI_W_T_ResidentAfter_8::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_8_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_8::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_8_After
 msgbox SI_W_T_Resident_8, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_8_After:
 msgbox SI_W_T_ResidentAfter_8, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_9::
 .string "Meu Ponyta corre ao meu\nlado, sem rédea. A escolha\pdele importa para mim.\nGardenia conversa com as\pplantas. Ri dela até meu\nBudew florescer ouvindo\psua voz.$"
SI_W_T_Resident_9_En::
 .string "My Ponyta runs by my side\nwithout reins. His choice\pmatters to me. Gardenia\ntalks to plants. I laughed\puntil my Budew bloomed at\nher voice.$"
SI_W_T_ResidentAfter_9::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_9_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_9::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_9_After
 msgbox SI_W_T_Resident_9, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_9_After:
 msgbox SI_W_T_ResidentAfter_9, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_10::
 .string "Guardo a primeira Poké\nBall. Ainda lembro como\pminha mão tremia. Cheryl\nprocura um Budew saudável\pna floresta. Ela entende\nde amizade melhor que\pqualquer aparelho.$"
SI_W_T_Resident_10_En::
 .string "I keep my first Poke Ball.\nI still remember my\pshaking hand. Cheryl wants\nto see a healthy Budew in\pthe forest. She knows\nfriendship better than any\pdevice.$"
SI_W_T_ResidentAfter_10::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_10_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_10::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_10_After
 msgbox SI_W_T_Resident_10, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_10_After:
 msgbox SI_W_T_ResidentAfter_10, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_11::
 .string "Levo chocolate quente\nextra. Sempre aparece um\pviajante que precisa. O\nprédio da Galáctica fica\paceso à noite. Vi\ncarregarem uma máquina\pcoberta de gelo.$"
SI_W_T_Resident_11_En::
 .string "I pack extra hot\nchocolate. A traveler\palways needs some.\nGalactic stays lit at\pnight. I saw them carry a\nmachine covered in ice.$"
SI_W_T_ResidentAfter_11::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_11_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_11::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_11_After
 msgbox SI_W_T_Resident_11, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_11_After:
 msgbox SI_W_T_ResidentAfter_11, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_12::
 .string "Cuido das ferramentas\nantes de sair. Meu\pparceiro conta comigo.\nGardenia conversa com as\pplantas. Ri dela até meu\nBudew florescer ouvindo\psua voz.$"
SI_W_T_Resident_12_En::
 .string "I check my tools before\nleaving. My partner relies\pon me. Gardenia talks to\nplants. I laughed until my\pBudew bloomed at her\nvoice.$"
SI_W_T_ResidentAfter_12::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_12_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_12::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_12_After
 msgbox SI_W_T_Resident_12, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_12_After:
 msgbox SI_W_T_ResidentAfter_12, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_13::
 .string "Pescar exige esperar.\nAprendi mais com a água do\pque com pressa. Cheryl\nprocura um Budew saudável\pna floresta. Ela entende\nde amizade melhor que\pqualquer aparelho.$"
SI_W_T_Resident_13_En::
 .string "Fishing takes patience.\nWater taught me more than\prushing. Cheryl wants to\nsee a healthy Budew in the\pforest. She knows\nfriendship better than any\pdevice.$"
SI_W_T_ResidentAfter_13::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_13_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_13::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_13_After
 msgbox SI_W_T_Resident_13, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_13_After:
 msgbox SI_W_T_ResidentAfter_13, MSGBOX_DEFAULT
 release
 end
SI_W_T_Sign_EternaCity_0::
 .string "O prédio da Galáctica fica\naceso à noite. Vi\pcarregarem uma máquina\ncoberta de gelo.$"
SI_W_T_Sign_EternaCity_0_En::
 .string "Galactic stays lit at\nnight. I saw them carry a\pmachine covered in ice.$"
SI_W_Sign_EternaCity_0::
 msgbox SI_W_T_Sign_EternaCity_0, MSGBOX_NPC
 end
SI_W_T_Sign_EternaCity_1::
 .string "Gardenia conversa com as\nplantas. Ri dela até meu\pBudew florescer ouvindo\nsua voz.$"
SI_W_T_Sign_EternaCity_1_En::
 .string "Gardenia talks to plants.\nI laughed until my Budew\pbloomed at her voice.$"
SI_W_Sign_EternaCity_1::
 msgbox SI_W_T_Sign_EternaCity_1, MSGBOX_NPC
 end
SI_W_T_Sign_EternaCity_2::
 .string "Cheryl procura um Budew\nsaudável na floresta. Ela\pentende de amizade melhor\nque qualquer aparelho.$"
SI_W_T_Sign_EternaCity_2_En::
 .string "Cheryl wants to see a\nhealthy Budew in the\pforest. She knows\nfriendship better than any\pdevice.$"
SI_W_Sign_EternaCity_2::
 msgbox SI_W_T_Sign_EternaCity_2, MSGBOX_NPC
 end
SI_W_T_Sign_EternaCity_3::
 .string "O prédio da Galáctica fica\naceso à noite. Vi\pcarregarem uma máquina\ncoberta de gelo.$"
SI_W_T_Sign_EternaCity_3_En::
 .string "Galactic stays lit at\nnight. I saw them carry a\pmachine covered in ice.$"
SI_W_Sign_EternaCity_3::
 msgbox SI_W_T_Sign_EternaCity_3, MSGBOX_NPC
 end
SI_W_T_Resident_14::
 .string "Marquei o caminho para\nquem vem depois. Uma\ptrilha boa se compartilha.\nO prédio da Galáctica fica\paceso à noite. Vi\ncarregarem uma máquina\pcoberta de gelo.$"
SI_W_T_Resident_14_En::
 .string "I marked the path for the\nnext traveler. A good\ptrail is shared. Galactic\nstays lit at night. I saw\pthem carry a machine\ncovered in ice.$"
SI_W_T_ResidentAfter_14::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_14_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_14::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_14_After
 msgbox SI_W_T_Resident_14, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_14_After:
 msgbox SI_W_T_ResidentAfter_14, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_15::
 .string "Anoto também os erros. Um\nresultado bonito não vale\pse estiver errado. O\nprédio da Galáctica fica\paceso à noite. Vi\ncarregarem uma máquina\pcoberta de gelo.$"
SI_W_T_Resident_15_En::
 .string "I record mistakes too. A\npretty result is worthless\pif it is wrong. Galactic\nstays lit at night. I saw\pthem carry a machine\ncovered in ice.$"
SI_W_T_ResidentAfter_15::
 .string "O ar voltou a ter cheiro\nde chuva. Eu nem percebia\po quanto sentia falta.$"
SI_W_T_ResidentAfter_15_En::
 .string "The air smells like rain\nagain. I had not realized\phow much I missed it.$"
SI_W_Resident_15::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_15_After
 msgbox SI_W_T_Resident_15, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_15_After:
 msgbox SI_W_T_ResidentAfter_15, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_16::
 .string "Meu Kricketune acompanha a\nmelodia. A gente erra\pjunto e tenta de novo.\nGardenia conversa com as\pplantas. Ri dela até meu\nBudew florescer ouvindo\psua voz.$"
SI_W_T_Resident_16_En::
 .string "My Kricketune follows the\nmelody. We miss together\pand try again. Gardenia\ntalks to plants. I laughed\puntil my Budew bloomed at\nher voice.$"
SI_W_T_ResidentAfter_16::
 .string "Vamos fazer uma festa\npequena. Cada pessoa traz\palgo; ninguém precisa\npagar para entrar.$"
SI_W_T_ResidentAfter_16_En::
 .string "We are having a small\nparty. Everyone brings\psomething; nobody pays to\njoin.$"
SI_W_Resident_16::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_16_After
 msgbox SI_W_T_Resident_16, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_16_After:
 msgbox SI_W_T_ResidentAfter_16, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_17::
 .string "Treino uma piada nova por\ndia. Meu Mime Jr. é meu\pcrítico mais sincero.\nCheryl procura um Budew\psaudável na floresta. Ela\nentende de amizade melhor\pque qualquer aparelho.$"
SI_W_T_Resident_17_En::
 .string "I practice a new joke\ndaily. My Mime Jr. is my\pmost honest critic. Cheryl\nwants to see a healthy\pBudew in the forest. She\nknows friendship better\pthan any device.$"
SI_W_T_ResidentAfter_17::
 .string "Vi vocês ajudando na\ncrise. Quero que meu filho\pcresça sabendo que alguém\nse importou.$"
SI_W_T_ResidentAfter_17_En::
 .string "I saw you help in the\ncrisis. I want my son to\pknow someone cared.$"
SI_W_Resident_17::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_17_After
 msgbox SI_W_T_Resident_17, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_17_After:
 msgbox SI_W_T_ResidentAfter_17, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_18::
 .string "Hoje consegui ler um mapa\nsem ajuda. Amanhã vou\pdesenhar meu próprio\ncaminho. O prédio da\pGaláctica fica aceso à\nnoite. Vi carregarem uma\pmáquina coberta de gelo.$"
SI_W_T_Resident_18_En::
 .string "Today I read a map alone.\nTomorrow I will draw my\pown path. Galactic stays\nlit at night. I saw them\pcarry a machine covered in\nice.$"
SI_W_T_ResidentAfter_18::
 .string "O ar voltou a ter cheiro\nde chuva. Eu nem percebia\po quanto sentia falta.$"
SI_W_T_ResidentAfter_18_En::
 .string "The air smells like rain\nagain. I had not realized\phow much I missed it.$"
SI_W_Resident_18::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_18_After
 msgbox SI_W_T_Resident_18, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_18_After:
 msgbox SI_W_T_ResidentAfter_18, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_19::
 .string "Um parceiro cansado merece\ndescanso. Vitória nenhuma\ppaga confiança perdida. O\nprédio da Galáctica fica\paceso à noite. Vi\ncarregarem uma máquina\pcoberta de gelo.$"
SI_W_T_Resident_19_En::
 .string "A tired partner deserves\nrest. No win pays for lost\ptrust. Galactic stays lit\nat night. I saw them carry\pa machine covered in ice.$"
SI_W_T_ResidentAfter_19::
 .string "Vi vocês ajudando na\ncrise. Quero que meu filho\pcresça sabendo que alguém\nse importou.$"
SI_W_T_ResidentAfter_19_En::
 .string "I saw you help in the\ncrisis. I want my son to\pknow someone cared.$"
SI_W_Resident_19::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_19_After
 msgbox SI_W_T_Resident_19, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_19_After:
 msgbox SI_W_T_ResidentAfter_19, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_20::
 .string "Meu pai me ensinou a\nreconhecer os passos de\pcada Pokémon do pasto.\nGardenia conversa com as\pplantas. Ri dela até meu\nBudew florescer ouvindo\psua voz.$"
SI_W_T_Resident_20_En::
 .string "Dad taught me to recognize\nevery Pokemon by its\pfootsteps. Gardenia talks\nto plants. I laughed until\pmy Budew bloomed at her\nvoice.$"
SI_W_T_ResidentAfter_20::
 .string "O ar voltou a ter cheiro\nde chuva. Eu nem percebia\po quanto sentia falta.$"
SI_W_T_ResidentAfter_20_En::
 .string "The air smells like rain\nagain. I had not realized\phow much I missed it.$"
SI_W_Resident_20::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_20_After
 msgbox SI_W_T_Resident_20, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_20_After:
 msgbox SI_W_T_ResidentAfter_20, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_21::
 .string "Meu Ponyta corre ao meu\nlado, sem rédea. A escolha\pdele importa para mim.\nCheryl procura um Budew\psaudável na floresta. Ela\nentende de amizade melhor\pque qualquer aparelho.$"
SI_W_T_Resident_21_En::
 .string "My Ponyta runs by my side\nwithout reins. His choice\pmatters to me. Cheryl\nwants to see a healthy\pBudew in the forest. She\nknows friendship better\pthan any device.$"
SI_W_T_ResidentAfter_21::
 .string "Vamos fazer uma festa\npequena. Cada pessoa traz\palgo; ninguém precisa\npagar para entrar.$"
SI_W_T_ResidentAfter_21_En::
 .string "We are having a small\nparty. Everyone brings\psomething; nobody pays to\njoin.$"
SI_W_Resident_21::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_21_After
 msgbox SI_W_T_Resident_21, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_21_After:
 msgbox SI_W_T_ResidentAfter_21, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_22::
 .string "Guardo a primeira Poké\nBall. Ainda lembro como\pminha mão tremia. O prédio\nda Galáctica fica aceso à\pnoite. Vi carregarem uma\nmáquina coberta de gelo.$"
SI_W_T_Resident_22_En::
 .string "I keep my first Poke Ball.\nI still remember my\pshaking hand. Galactic\nstays lit at night. I saw\pthem carry a machine\ncovered in ice.$"
SI_W_T_ResidentAfter_22::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_22_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_22::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_22_After
 msgbox SI_W_T_Resident_22, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_22_After:
 msgbox SI_W_T_ResidentAfter_22, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_23::
 .string "Levo chocolate quente\nextra. Sempre aparece um\pviajante que precisa.\nGardenia conversa com as\pplantas. Ri dela até meu\nBudew florescer ouvindo\psua voz.$"
SI_W_T_Resident_23_En::
 .string "I pack extra hot\nchocolate. A traveler\palways needs some.\nGardenia talks to plants.\pI laughed until my Budew\nbloomed at her voice.$"
SI_W_T_ResidentAfter_23::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_23_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_23::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_23_After
 msgbox SI_W_T_Resident_23, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_23_After:
 msgbox SI_W_T_ResidentAfter_23, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_24::
 .string "Cuido das ferramentas\nantes de sair. Meu\pparceiro conta comigo.\nCheryl procura um Budew\psaudável na floresta. Ela\nentende de amizade melhor\pque qualquer aparelho.$"
SI_W_T_Resident_24_En::
 .string "I check my tools before\nleaving. My partner relies\pon me. Cheryl wants to see\na healthy Budew in the\pforest. She knows\nfriendship better than any\pdevice.$"
SI_W_T_ResidentAfter_24::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_24_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_24::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_24_After
 msgbox SI_W_T_Resident_24, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_24_After:
 msgbox SI_W_T_ResidentAfter_24, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_25::
 .string "Pescar exige esperar.\nAprendi mais com a água do\pque com pressa. O prédio\nda Galáctica fica aceso à\pnoite. Vi carregarem uma\nmáquina coberta de gelo.$"
SI_W_T_Resident_25_En::
 .string "Fishing takes patience.\nWater taught me more than\prushing. Galactic stays\nlit at night. I saw them\pcarry a machine covered in\nice.$"
SI_W_T_ResidentAfter_25::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_25_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_25::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_25_After
 msgbox SI_W_T_Resident_25, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_25_After:
 msgbox SI_W_T_ResidentAfter_25, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_26::
 .string "Marquei o caminho para\nquem vem depois. Uma\ptrilha boa se compartilha.\nO prédio da Galáctica fica\paceso à noite. Vi\ncarregarem uma máquina\pcoberta de gelo.$"
SI_W_T_Resident_26_En::
 .string "I marked the path for the\nnext traveler. A good\ptrail is shared. Galactic\nstays lit at night. I saw\pthem carry a machine\ncovered in ice.$"
SI_W_T_ResidentAfter_26::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_26_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_26::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_26_After
 msgbox SI_W_T_Resident_26, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_26_After:
 msgbox SI_W_T_ResidentAfter_26, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_27::
 .string "Anoto também os erros. Um\nresultado bonito não vale\pse estiver errado.\nGardenia conversa com as\pplantas. Ri dela até meu\nBudew florescer ouvindo\psua voz.$"
SI_W_T_Resident_27_En::
 .string "I record mistakes too. A\npretty result is worthless\pif it is wrong. Gardenia\ntalks to plants. I laughed\puntil my Budew bloomed at\nher voice.$"
SI_W_T_ResidentAfter_27::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_27_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_27::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_27_After
 msgbox SI_W_T_Resident_27, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_27_After:
 msgbox SI_W_T_ResidentAfter_27, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_28::
 .string "Meu Kricketune acompanha a\nmelodia. A gente erra\pjunto e tenta de novo.\nCheryl procura um Budew\psaudável na floresta. Ela\nentende de amizade melhor\pque qualquer aparelho.$"
SI_W_T_Resident_28_En::
 .string "My Kricketune follows the\nmelody. We miss together\pand try again. Cheryl\nwants to see a healthy\pBudew in the forest. She\nknows friendship better\pthan any device.$"
SI_W_T_ResidentAfter_28::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_28_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_28::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_28_After
 msgbox SI_W_T_Resident_28, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_28_After:
 msgbox SI_W_T_ResidentAfter_28, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_29::
 .string "Treino uma piada nova por\ndia. Meu Mime Jr. é meu\pcrítico mais sincero. O\nprédio da Galáctica fica\paceso à noite. Vi\ncarregarem uma máquina\pcoberta de gelo.$"
SI_W_T_Resident_29_En::
 .string "I practice a new joke\ndaily. My Mime Jr. is my\pmost honest critic.\nGalactic stays lit at\pnight. I saw them carry a\nmachine covered in ice.$"
SI_W_T_ResidentAfter_29::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_29_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_29::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_29_After
 msgbox SI_W_T_Resident_29, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_29_After:
 msgbox SI_W_T_ResidentAfter_29, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_30::
 .string "Hoje consegui ler um mapa\nsem ajuda. Amanhã vou\pdesenhar meu próprio\ncaminho. Gardenia conversa\pcom as plantas. Ri dela\naté meu Budew florescer\pouvindo sua voz.$"
SI_W_T_Resident_30_En::
 .string "Today I read a map alone.\nTomorrow I will draw my\pown path. Gardenia talks\nto plants. I laughed until\pmy Budew bloomed at her\nvoice.$"
SI_W_T_ResidentAfter_30::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_30_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_30::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_30_After
 msgbox SI_W_T_Resident_30, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_30_After:
 msgbox SI_W_T_ResidentAfter_30, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_31::
 .string "Um parceiro cansado merece\ndescanso. Vitória nenhuma\ppaga confiança perdida. O\nprédio da Galáctica fica\paceso à noite. Vi\ncarregarem uma máquina\pcoberta de gelo.$"
SI_W_T_Resident_31_En::
 .string "A tired partner deserves\nrest. No win pays for lost\ptrust. Galactic stays lit\nat night. I saw them carry\pa machine covered in ice.$"
SI_W_T_ResidentAfter_31::
 .string "Vi vocês ajudando na\ncrise. Quero que meu filho\pcresça sabendo que alguém\nse importou.$"
SI_W_T_ResidentAfter_31_En::
 .string "I saw you help in the\ncrisis. I want my son to\pknow someone cared.$"
SI_W_Resident_31::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_31_After
 msgbox SI_W_T_Resident_31, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_31_After:
 msgbox SI_W_T_ResidentAfter_31, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_32::
 .string "Meu pai me ensinou a\nreconhecer os passos de\pcada Pokémon do pasto.\nGardenia conversa com as\pplantas. Ri dela até meu\nBudew florescer ouvindo\psua voz.$"
SI_W_T_Resident_32_En::
 .string "Dad taught me to recognize\nevery Pokemon by its\pfootsteps. Gardenia talks\nto plants. I laughed until\pmy Budew bloomed at her\nvoice.$"
SI_W_T_ResidentAfter_32::
 .string "O ar voltou a ter cheiro\nde chuva. Eu nem percebia\po quanto sentia falta.$"
SI_W_T_ResidentAfter_32_En::
 .string "The air smells like rain\nagain. I had not realized\phow much I missed it.$"
SI_W_Resident_32::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_32_After
 msgbox SI_W_T_Resident_32, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_32_After:
 msgbox SI_W_T_ResidentAfter_32, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_33::
 .string "Meu Ponyta corre ao meu\nlado, sem rédea. A escolha\pdele importa para mim.\nCheryl procura um Budew\psaudável na floresta. Ela\nentende de amizade melhor\pque qualquer aparelho.$"
SI_W_T_Resident_33_En::
 .string "My Ponyta runs by my side\nwithout reins. His choice\pmatters to me. Cheryl\nwants to see a healthy\pBudew in the forest. She\nknows friendship better\pthan any device.$"
SI_W_T_ResidentAfter_33::
 .string "Vamos fazer uma festa\npequena. Cada pessoa traz\palgo; ninguém precisa\npagar para entrar.$"
SI_W_T_ResidentAfter_33_En::
 .string "We are having a small\nparty. Everyone brings\psomething; nobody pays to\njoin.$"
SI_W_Resident_33::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_33_After
 msgbox SI_W_T_Resident_33, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_33_After:
 msgbox SI_W_T_ResidentAfter_33, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_34::
 .string "Guardo a primeira Poké\nBall. Ainda lembro como\pminha mão tremia. O prédio\nda Galáctica fica aceso à\pnoite. Vi carregarem uma\nmáquina coberta de gelo.$"
SI_W_T_Resident_34_En::
 .string "I keep my first Poke Ball.\nI still remember my\pshaking hand. Galactic\nstays lit at night. I saw\pthem carry a machine\ncovered in ice.$"
SI_W_T_ResidentAfter_34::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_34_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_34::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_34_After
 msgbox SI_W_T_Resident_34, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_34_After:
 msgbox SI_W_T_ResidentAfter_34, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_35::
 .string "Levo chocolate quente\nextra. Sempre aparece um\pviajante que precisa.\nGardenia conversa com as\pplantas. Ri dela até meu\nBudew florescer ouvindo\psua voz.$"
SI_W_T_Resident_35_En::
 .string "I pack extra hot\nchocolate. A traveler\palways needs some.\nGardenia talks to plants.\pI laughed until my Budew\nbloomed at her voice.$"
SI_W_T_ResidentAfter_35::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_35_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_35::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_35_After
 msgbox SI_W_T_Resident_35, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_35_After:
 msgbox SI_W_T_ResidentAfter_35, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_36::
 .string "Cuido das ferramentas\nantes de sair. Meu\pparceiro conta comigo.\nCheryl procura um Budew\psaudável na floresta. Ela\nentende de amizade melhor\pque qualquer aparelho.$"
SI_W_T_Resident_36_En::
 .string "I check my tools before\nleaving. My partner relies\pon me. Cheryl wants to see\na healthy Budew in the\pforest. She knows\nfriendship better than any\pdevice.$"
SI_W_T_ResidentAfter_36::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_36_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_36::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_36_After
 msgbox SI_W_T_Resident_36, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_36_After:
 msgbox SI_W_T_ResidentAfter_36, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_37::
 .string "Pescar exige esperar.\nAprendi mais com a água do\pque com pressa. O prédio\nda Galáctica fica aceso à\pnoite. Vi carregarem uma\nmáquina coberta de gelo.$"
SI_W_T_Resident_37_En::
 .string "Fishing takes patience.\nWater taught me more than\prushing. Galactic stays\nlit at night. I saw them\pcarry a machine covered in\nice.$"
SI_W_T_ResidentAfter_37::
 .string "Vi vocês ajudando na\ncrise. Quero que meu filho\pcresça sabendo que alguém\nse importou.$"
SI_W_T_ResidentAfter_37_En::
 .string "I saw you help in the\ncrisis. I want my son to\pknow someone cared.$"
SI_W_Resident_37::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_37_After
 msgbox SI_W_T_Resident_37, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_37_After:
 msgbox SI_W_T_ResidentAfter_37, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_38::
 .string "Marquei o caminho para\nquem vem depois. Uma\ptrilha boa se compartilha.\nGardenia conversa com as\pplantas. Ri dela até meu\nBudew florescer ouvindo\psua voz.$"
SI_W_T_Resident_38_En::
 .string "I marked the path for the\nnext traveler. A good\ptrail is shared. Gardenia\ntalks to plants. I laughed\puntil my Budew bloomed at\nher voice.$"
SI_W_T_ResidentAfter_38::
 .string "O ar voltou a ter cheiro\nde chuva. Eu nem percebia\po quanto sentia falta.$"
SI_W_T_ResidentAfter_38_En::
 .string "The air smells like rain\nagain. I had not realized\phow much I missed it.$"
SI_W_Resident_38::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_38_After
 msgbox SI_W_T_Resident_38, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_38_After:
 msgbox SI_W_T_ResidentAfter_38, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_39::
 .string "Anoto também os erros. Um\nresultado bonito não vale\pse estiver errado. Cheryl\nprocura um Budew saudável\pna floresta. Ela entende\nde amizade melhor que\pqualquer aparelho.$"
SI_W_T_Resident_39_En::
 .string "I record mistakes too. A\npretty result is worthless\pif it is wrong. Cheryl\nwants to see a healthy\pBudew in the forest. She\nknows friendship better\pthan any device.$"
SI_W_T_ResidentAfter_39::
 .string "Vamos fazer uma festa\npequena. Cada pessoa traz\palgo; ninguém precisa\npagar para entrar.$"
SI_W_T_ResidentAfter_39_En::
 .string "We are having a small\nparty. Everyone brings\psomething; nobody pays to\njoin.$"
SI_W_Resident_39::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_39_After
 msgbox SI_W_T_Resident_39, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_39_After:
 msgbox SI_W_T_ResidentAfter_39, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_40::
 .string "Meu Kricketune acompanha a\nmelodia. A gente erra\pjunto e tenta de novo. O\nprédio da Galáctica fica\paceso à noite. Vi\ncarregarem uma máquina\pcoberta de gelo.$"
SI_W_T_Resident_40_En::
 .string "My Kricketune follows the\nmelody. We miss together\pand try again. Galactic\nstays lit at night. I saw\pthem carry a machine\ncovered in ice.$"
SI_W_T_ResidentAfter_40::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_40_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_40::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_40_After
 msgbox SI_W_T_Resident_40, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_40_After:
 msgbox SI_W_T_ResidentAfter_40, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_41::
 .string "Treino uma piada nova por\ndia. Meu Mime Jr. é meu\pcrítico mais sincero.\nGardenia conversa com as\pplantas. Ri dela até meu\nBudew florescer ouvindo\psua voz.$"
SI_W_T_Resident_41_En::
 .string "I practice a new joke\ndaily. My Mime Jr. is my\pmost honest critic.\nGardenia talks to plants.\pI laughed until my Budew\nbloomed at her voice.$"
SI_W_T_ResidentAfter_41::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_41_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_41::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_41_After
 msgbox SI_W_T_Resident_41, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_41_After:
 msgbox SI_W_T_ResidentAfter_41, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_42::
 .string "Hoje consegui ler um mapa\nsem ajuda. Amanhã vou\pdesenhar meu próprio\ncaminho. Cheryl procura um\pBudew saudável na\nfloresta. Ela entende de\pamizade melhor que\nqualquer aparelho.$"
SI_W_T_Resident_42_En::
 .string "Today I read a map alone.\nTomorrow I will draw my\pown path. Cheryl wants to\nsee a healthy Budew in the\pforest. She knows\nfriendship better than any\pdevice.$"
SI_W_T_ResidentAfter_42::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_42_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_42::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_42_After
 msgbox SI_W_T_Resident_42, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_42_After:
 msgbox SI_W_T_ResidentAfter_42, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_43::
 .string "Um parceiro cansado merece\ndescanso. Vitória nenhuma\ppaga confiança perdida. O\nprédio da Galáctica fica\paceso à noite. Vi\ncarregarem uma máquina\pcoberta de gelo.$"
SI_W_T_Resident_43_En::
 .string "A tired partner deserves\nrest. No win pays for lost\ptrust. Galactic stays lit\nat night. I saw them carry\pa machine covered in ice.$"
SI_W_T_ResidentAfter_43::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_43_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_43::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_43_After
 msgbox SI_W_T_Resident_43, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_43_After:
 msgbox SI_W_T_ResidentAfter_43, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_44::
 .string "Meu pai me ensinou a\nreconhecer os passos de\pcada Pokémon do pasto. O\nprédio da Galáctica fica\paceso à noite. Vi\ncarregarem uma máquina\pcoberta de gelo.$"
SI_W_T_Resident_44_En::
 .string "Dad taught me to recognize\nevery Pokemon by its\pfootsteps. Galactic stays\nlit at night. I saw them\pcarry a machine covered in\nice.$"
SI_W_T_ResidentAfter_44::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_44_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_44::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_44_After
 msgbox SI_W_T_Resident_44, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_44_After:
 msgbox SI_W_T_ResidentAfter_44, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_45::
 .string "Meu Ponyta corre ao meu\nlado, sem rédea. A escolha\pdele importa para mim. O\nprédio da Galáctica fica\paceso à noite. Vi\ncarregarem uma máquina\pcoberta de gelo.$"
SI_W_T_Resident_45_En::
 .string "My Ponyta runs by my side\nwithout reins. His choice\pmatters to me. Galactic\nstays lit at night. I saw\pthem carry a machine\ncovered in ice.$"
SI_W_T_ResidentAfter_45::
 .string "O ar voltou a ter cheiro\nde chuva. Eu nem percebia\po quanto sentia falta.$"
SI_W_T_ResidentAfter_45_En::
 .string "The air smells like rain\nagain. I had not realized\phow much I missed it.$"
SI_W_Resident_45::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_45_After
 msgbox SI_W_T_Resident_45, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_45_After:
 msgbox SI_W_T_ResidentAfter_45, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_46::
 .string "Guardo a primeira Poké\nBall. Ainda lembro como\pminha mão tremia. Gardenia\nconversa com as plantas.\pRi dela até meu Budew\nflorescer ouvindo sua voz.$"
SI_W_T_Resident_46_En::
 .string "I keep my first Poke Ball.\nI still remember my\pshaking hand. Gardenia\ntalks to plants. I laughed\puntil my Budew bloomed at\nher voice.$"
SI_W_T_ResidentAfter_46::
 .string "Vamos fazer uma festa\npequena. Cada pessoa traz\palgo; ninguém precisa\npagar para entrar.$"
SI_W_T_ResidentAfter_46_En::
 .string "We are having a small\nparty. Everyone brings\psomething; nobody pays to\njoin.$"
SI_W_Resident_46::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_46_After
 msgbox SI_W_T_Resident_46, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_46_After:
 msgbox SI_W_T_ResidentAfter_46, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_47::
 .string "Levo chocolate quente\nextra. Sempre aparece um\pviajante que precisa.\nCheryl procura um Budew\psaudável na floresta. Ela\nentende de amizade melhor\pque qualquer aparelho.$"
SI_W_T_Resident_47_En::
 .string "I pack extra hot\nchocolate. A traveler\palways needs some. Cheryl\nwants to see a healthy\pBudew in the forest. She\nknows friendship better\pthan any device.$"
SI_W_T_ResidentAfter_47::
 .string "Vi vocês ajudando na\ncrise. Quero que meu filho\pcresça sabendo que alguém\nse importou.$"
SI_W_T_ResidentAfter_47_En::
 .string "I saw you help in the\ncrisis. I want my son to\pknow someone cared.$"
SI_W_Resident_47::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_47_After
 msgbox SI_W_T_Resident_47, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_47_After:
 msgbox SI_W_T_ResidentAfter_47, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_48::
 .string "Cuido das ferramentas\nantes de sair. Meu\pparceiro conta comigo. O\nprédio da Galáctica fica\paceso à noite. Vi\ncarregarem uma máquina\pcoberta de gelo.$"
SI_W_T_Resident_48_En::
 .string "I check my tools before\nleaving. My partner relies\pon me. Galactic stays lit\nat night. I saw them carry\pa machine covered in ice.$"
SI_W_T_ResidentAfter_48::
 .string "O ar voltou a ter cheiro\nde chuva. Eu nem percebia\po quanto sentia falta.$"
SI_W_T_ResidentAfter_48_En::
 .string "The air smells like rain\nagain. I had not realized\phow much I missed it.$"
SI_W_Resident_48::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_48_After
 msgbox SI_W_T_Resident_48, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_48_After:
 msgbox SI_W_T_ResidentAfter_48, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_49::
 .string "Pescar exige esperar.\nAprendi mais com a água do\pque com pressa. Gardenia\nconversa com as plantas.\pRi dela até meu Budew\nflorescer ouvindo sua voz.$"
SI_W_T_Resident_49_En::
 .string "Fishing takes patience.\nWater taught me more than\prushing. Gardenia talks to\nplants. I laughed until my\pBudew bloomed at her\nvoice.$"
SI_W_T_ResidentAfter_49::
 .string "Vamos fazer uma festa\npequena. Cada pessoa traz\palgo; ninguém precisa\npagar para entrar.$"
SI_W_T_ResidentAfter_49_En::
 .string "We are having a small\nparty. Everyone brings\psomething; nobody pays to\njoin.$"
SI_W_Resident_49::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_49_After
 msgbox SI_W_T_Resident_49, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_49_After:
 msgbox SI_W_T_ResidentAfter_49, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_50::
 .string "Marquei o caminho para\nquem vem depois. Uma\ptrilha boa se compartilha.\nAs árvores parecem guardar\pvozes antigas. Cheryl nos\najuda a cuidar delas.$"
SI_W_T_Resident_50_En::
 .string "I marked the path for the\nnext traveler. A good\ptrail is shared. The trees\nkeep ancient voices.\pCheryl helps us care for\nthem.$"
SI_W_T_ResidentAfter_50::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_50_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_50::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_50_After
 msgbox SI_W_T_Resident_50, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_50_After:
 msgbox SI_W_T_ResidentAfter_50, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_51::
 .string "Anoto também os erros. Um\nresultado bonito não vale\pse estiver errado. As\nárvores parecem guardar\pvozes antigas. Cheryl nos\najuda a cuidar delas.$"
SI_W_T_Resident_51_En::
 .string "I record mistakes too. A\npretty result is worthless\pif it is wrong. The trees\nkeep ancient voices.\pCheryl helps us care for\nthem.$"
SI_W_T_ResidentAfter_51::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_51_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_51::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_51_After
 msgbox SI_W_T_Resident_51, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_51_After:
 msgbox SI_W_T_ResidentAfter_51, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_52::
 .string "Meu Kricketune acompanha a\nmelodia. A gente erra\pjunto e tenta de novo. As\nárvores parecem guardar\pvozes antigas. Cheryl nos\najuda a cuidar delas.$"
SI_W_T_Resident_52_En::
 .string "My Kricketune follows the\nmelody. We miss together\pand try again. The trees\nkeep ancient voices.\pCheryl helps us care for\nthem.$"
SI_W_T_ResidentAfter_52::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_52_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_52::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_52_After
 msgbox SI_W_T_Resident_52, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_52_After:
 msgbox SI_W_T_ResidentAfter_52, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_53::
 .string "Treino uma piada nova por\ndia. Meu Mime Jr. é meu\pcrítico mais sincero. As\nárvores parecem guardar\pvozes antigas. Cheryl nos\najuda a cuidar delas.$"
SI_W_T_Resident_53_En::
 .string "I practice a new joke\ndaily. My Mime Jr. is my\pmost honest critic. The\ntrees keep ancient voices.\pCheryl helps us care for\nthem.$"
SI_W_T_ResidentAfter_53::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_53_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_53::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_53_After
 msgbox SI_W_T_Resident_53, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_53_After:
 msgbox SI_W_T_ResidentAfter_53, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_54::
 .string "Hoje consegui ler um mapa\nsem ajuda. Amanhã vou\pdesenhar meu próprio\ncaminho. As árvores\pparecem guardar vozes\nantigas. Cheryl nos ajuda\pa cuidar delas.$"
SI_W_T_Resident_54_En::
 .string "Today I read a map alone.\nTomorrow I will draw my\pown path. The trees keep\nancient voices. Cheryl\phelps us care for them.$"
SI_W_T_ResidentAfter_54::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_54_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_54::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_54_After
 msgbox SI_W_T_Resident_54, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_54_After:
 msgbox SI_W_T_ResidentAfter_54, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_55::
 .string "Um parceiro cansado merece\ndescanso. Vitória nenhuma\ppaga confiança perdida. As\nárvores parecem guardar\pvozes antigas. Cheryl nos\najuda a cuidar delas.$"
SI_W_T_Resident_55_En::
 .string "A tired partner deserves\nrest. No win pays for lost\ptrust. The trees keep\nancient voices. Cheryl\phelps us care for them.$"
SI_W_T_ResidentAfter_55::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_55_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_55::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_55_After
 msgbox SI_W_T_Resident_55, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_55_After:
 msgbox SI_W_T_ResidentAfter_55, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_56::
 .string "Meu pai me ensinou a\nreconhecer os passos de\pcada Pokémon do pasto. As\nárvores parecem guardar\pvozes antigas. Cheryl nos\najuda a cuidar delas.$"
SI_W_T_Resident_56_En::
 .string "Dad taught me to recognize\nevery Pokemon by its\pfootsteps. The trees keep\nancient voices. Cheryl\phelps us care for them.$"
SI_W_T_ResidentAfter_56::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_56_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_56::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_56_After
 msgbox SI_W_T_Resident_56, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_56_After:
 msgbox SI_W_T_ResidentAfter_56, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_57::
 .string "Meu Ponyta corre ao meu\nlado, sem rédea. A escolha\pdele importa para mim. As\nárvores parecem guardar\pvozes antigas. Cheryl nos\najuda a cuidar delas.$"
SI_W_T_Resident_57_En::
 .string "My Ponyta runs by my side\nwithout reins. His choice\pmatters to me. The trees\nkeep ancient voices.\pCheryl helps us care for\nthem.$"
SI_W_T_ResidentAfter_57::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_57_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_57::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_57_After
 msgbox SI_W_T_Resident_57, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_57_After:
 msgbox SI_W_T_ResidentAfter_57, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_58::
 .string "Guardo a primeira Poké\nBall. Ainda lembro como\pminha mão tremia. As\nárvores parecem guardar\pvozes antigas. Cheryl nos\najuda a cuidar delas.$"
SI_W_T_Resident_58_En::
 .string "I keep my first Poke Ball.\nI still remember my\pshaking hand. The trees\nkeep ancient voices.\pCheryl helps us care for\nthem.$"
SI_W_T_ResidentAfter_58::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_58_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_58::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_58_After
 msgbox SI_W_T_Resident_58, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_58_After:
 msgbox SI_W_T_ResidentAfter_58, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_59::
 .string "Levo chocolate quente\nextra. Sempre aparece um\pviajante que precisa. As\nárvores parecem guardar\pvozes antigas. Cheryl nos\najuda a cuidar delas.$"
SI_W_T_Resident_59_En::
 .string "I pack extra hot\nchocolate. A traveler\palways needs some. The\ntrees keep ancient voices.\pCheryl helps us care for\nthem.$"
SI_W_T_ResidentAfter_59::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_59_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_59::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_59_After
 msgbox SI_W_T_Resident_59, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_59_After:
 msgbox SI_W_T_ResidentAfter_59, MSGBOX_DEFAULT
 release
 end
SI_W_T_Sign_EternaForest_0::
 .string "As árvores parecem guardar\nvozes antigas. Cheryl nos\pajuda a cuidar delas.$"
SI_W_T_Sign_EternaForest_0_En::
 .string "The trees keep ancient\nvoices. Cheryl helps us\pcare for them.$"
SI_W_Sign_EternaForest_0::
 msgbox SI_W_T_Sign_EternaForest_0, MSGBOX_NPC
 end
SI_W_T_Sign_EternaForest_1::
 .string "As árvores parecem guardar\nvozes antigas. Cheryl nos\pajuda a cuidar delas.$"
SI_W_T_Sign_EternaForest_1_En::
 .string "The trees keep ancient\nvoices. Cheryl helps us\pcare for them.$"
SI_W_Sign_EternaForest_1::
 msgbox SI_W_T_Sign_EternaForest_1, MSGBOX_NPC
 end
SI_W_T_Resident_60::
 .string "Cuido das ferramentas\nantes de sair. Meu\pparceiro conta comigo.\nNeste lugar aprendi a\pouvir meu parceiro. Cada\nviagem deixa uma lembrança\pdiferente.$"
SI_W_T_Resident_60_En::
 .string "I check my tools before\nleaving. My partner relies\pon me. Here I learned to\nlisten to my partner.\pEvery journey leaves a\ndifferent memory.$"
SI_W_T_ResidentAfter_60::
 .string "Vi vocês ajudando na\ncrise. Quero que meu filho\pcresça sabendo que alguém\nse importou.$"
SI_W_T_ResidentAfter_60_En::
 .string "I saw you help in the\ncrisis. I want my son to\pknow someone cared.$"
SI_W_Resident_60::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_60_After
 msgbox SI_W_T_Resident_60, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_60_After:
 msgbox SI_W_T_ResidentAfter_60, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_61::
 .string "Pescar exige esperar.\nAprendi mais com a água do\pque com pressa. Neste\nlugar aprendi a ouvir meu\pparceiro. Cada viagem\ndeixa uma lembrança\pdiferente.$"
SI_W_T_Resident_61_En::
 .string "Fishing takes patience.\nWater taught me more than\prushing. Here I learned to\nlisten to my partner.\pEvery journey leaves a\ndifferent memory.$"
SI_W_T_ResidentAfter_61::
 .string "Vi vocês ajudando na\ncrise. Quero que meu filho\pcresça sabendo que alguém\nse importou.$"
SI_W_T_ResidentAfter_61_En::
 .string "I saw you help in the\ncrisis. I want my son to\pknow someone cared.$"
SI_W_Resident_61::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_61_After
 msgbox SI_W_T_Resident_61, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_61_After:
 msgbox SI_W_T_ResidentAfter_61, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_62::
 .string "Marquei o caminho para\nquem vem depois. Uma\ptrilha boa se compartilha.\nNeste lugar aprendi a\pouvir meu parceiro. Cada\nviagem deixa uma lembrança\pdiferente.$"
SI_W_T_Resident_62_En::
 .string "I marked the path for the\nnext traveler. A good\ptrail is shared. Here I\nlearned to listen to my\ppartner. Every journey\nleaves a different memory.$"
SI_W_T_ResidentAfter_62::
 .string "O ar voltou a ter cheiro\nde chuva. Eu nem percebia\po quanto sentia falta.$"
SI_W_T_ResidentAfter_62_En::
 .string "The air smells like rain\nagain. I had not realized\phow much I missed it.$"
SI_W_Resident_62::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_62_After
 msgbox SI_W_T_Resident_62, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_62_After:
 msgbox SI_W_T_ResidentAfter_62, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_63::
 .string "Anoto também os erros. Um\nresultado bonito não vale\pse estiver errado. Neste\nlugar aprendi a ouvir meu\pparceiro. Cada viagem\ndeixa uma lembrança\pdiferente.$"
SI_W_T_Resident_63_En::
 .string "I record mistakes too. A\npretty result is worthless\pif it is wrong. Here I\nlearned to listen to my\ppartner. Every journey\nleaves a different memory.$"
SI_W_T_ResidentAfter_63::
 .string "Vamos fazer uma festa\npequena. Cada pessoa traz\palgo; ninguém precisa\npagar para entrar.$"
SI_W_T_ResidentAfter_63_En::
 .string "We are having a small\nparty. Everyone brings\psomething; nobody pays to\njoin.$"
SI_W_Resident_63::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_63_After
 msgbox SI_W_T_Resident_63, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_63_After:
 msgbox SI_W_T_ResidentAfter_63, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_64::
 .string "Meu Kricketune acompanha a\nmelodia. A gente erra\pjunto e tenta de novo.\nNeste lugar aprendi a\pouvir meu parceiro. Cada\nviagem deixa uma lembrança\pdiferente.$"
SI_W_T_Resident_64_En::
 .string "My Kricketune follows the\nmelody. We miss together\pand try again. Here I\nlearned to listen to my\ppartner. Every journey\nleaves a different memory.$"
SI_W_T_ResidentAfter_64::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_64_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_64::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_64_After
 msgbox SI_W_T_Resident_64, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_64_After:
 msgbox SI_W_T_ResidentAfter_64, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_65::
 .string "Treino uma piada nova por\ndia. Meu Mime Jr. é meu\pcrítico mais sincero.\nNeste lugar aprendi a\pouvir meu parceiro. Cada\nviagem deixa uma lembrança\pdiferente.$"
SI_W_T_Resident_65_En::
 .string "I practice a new joke\ndaily. My Mime Jr. is my\pmost honest critic. Here I\nlearned to listen to my\ppartner. Every journey\nleaves a different memory.$"
SI_W_T_ResidentAfter_65::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_65_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_65::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_65_After
 msgbox SI_W_T_Resident_65, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_65_After:
 msgbox SI_W_T_ResidentAfter_65, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_66::
 .string "Hoje consegui ler um mapa\nsem ajuda. Amanhã vou\pdesenhar meu próprio\ncaminho. O cheiro das\pflores ficou metálico\nquando ligaram as\pturbinas. Minhas Combee\nestão inquietas.$"
SI_W_T_Resident_66_En::
 .string "Today I read a map alone.\nTomorrow I will draw my\pown path. The flowers\nsmelled metallic when the\pturbines started. My\nCombee are restless.$"
SI_W_T_ResidentAfter_66::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_66_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_66::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_66_After
 msgbox SI_W_T_Resident_66, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_66_After:
 msgbox SI_W_T_ResidentAfter_66, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_67::
 .string "Um parceiro cansado merece\ndescanso. Vitória nenhuma\ppaga confiança perdida.\nFizemos um canteiro para\pcada morador. O de minha\nirmã sempre dá as\pprimeiras flores.$"
SI_W_T_Resident_67_En::
 .string "A tired partner deserves\nrest. No win pays for lost\ptrust. We planted a bed\nfor each resident. My\psister always gets the\nfirst flowers.$"
SI_W_T_ResidentAfter_67::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_67_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_67::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_67_After
 msgbox SI_W_T_Resident_67, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_67_After:
 msgbox SI_W_T_ResidentAfter_67, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_68::
 .string "Meu pai me ensinou a\nreconhecer os passos de\pcada Pokémon do pasto.\nQuero vender mel sem\passustar as Combee. Ganhar\ndinheiro não justifica\pmachucar um parceiro.$"
SI_W_T_Resident_68_En::
 .string "Dad taught me to recognize\nevery Pokemon by its\pfootsteps. I want to sell\nhoney without scaring\pCombee. Money cannot\njustify hurting a partner.$"
SI_W_T_ResidentAfter_68::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_68_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_68::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_68_After
 msgbox SI_W_T_Resident_68, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_68_After:
 msgbox SI_W_T_ResidentAfter_68, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_69::
 .string "Meu Ponyta corre ao meu\nlado, sem rédea. A escolha\pdele importa para mim. O\ncheiro das flores ficou\pmetálico quando ligaram as\nturbinas. Minhas Combee\pestão inquietas.$"
SI_W_T_Resident_69_En::
 .string "My Ponyta runs by my side\nwithout reins. His choice\pmatters to me. The flowers\nsmelled metallic when the\pturbines started. My\nCombee are restless.$"
SI_W_T_ResidentAfter_69::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_69_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_69::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_69_After
 msgbox SI_W_T_Resident_69, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_69_After:
 msgbox SI_W_T_ResidentAfter_69, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_70::
 .string "Guardo a primeira Poké\nBall. Ainda lembro como\pminha mão tremia. Fizemos\num canteiro para cada\pmorador. O de minha irmã\nsempre dá as primeiras\pflores.$"
SI_W_T_Resident_70_En::
 .string "I keep my first Poke Ball.\nI still remember my\pshaking hand. We planted a\nbed for each resident. My\psister always gets the\nfirst flowers.$"
SI_W_T_ResidentAfter_70::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_70_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_70::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_70_After
 msgbox SI_W_T_Resident_70, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_70_After:
 msgbox SI_W_T_ResidentAfter_70, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_71::
 .string "Levo chocolate quente\nextra. Sempre aparece um\pviajante que precisa.\nQuero vender mel sem\passustar as Combee. Ganhar\ndinheiro não justifica\pmachucar um parceiro.$"
SI_W_T_Resident_71_En::
 .string "I pack extra hot\nchocolate. A traveler\palways needs some. I want\nto sell honey without\pscaring Combee. Money\ncannot justify hurting a\ppartner.$"
SI_W_T_ResidentAfter_71::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_71_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_71::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_71_After
 msgbox SI_W_T_Resident_71, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_71_After:
 msgbox SI_W_T_ResidentAfter_71, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_72::
 .string "Cuido das ferramentas\nantes de sair. Meu\pparceiro conta comigo. O\ncheiro das flores ficou\pmetálico quando ligaram as\nturbinas. Minhas Combee\pestão inquietas.$"
SI_W_T_Resident_72_En::
 .string "I check my tools before\nleaving. My partner relies\pon me. The flowers smelled\nmetallic when the turbines\pstarted. My Combee are\nrestless.$"
SI_W_T_ResidentAfter_72::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_72_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_72::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_72_After
 msgbox SI_W_T_Resident_72, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_72_After:
 msgbox SI_W_T_ResidentAfter_72, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_73::
 .string "Pescar exige esperar.\nAprendi mais com a água do\pque com pressa. Fizemos um\ncanteiro para cada\pmorador. O de minha irmã\nsempre dá as primeiras\pflores.$"
SI_W_T_Resident_73_En::
 .string "Fishing takes patience.\nWater taught me more than\prushing. We planted a bed\nfor each resident. My\psister always gets the\nfirst flowers.$"
SI_W_T_ResidentAfter_73::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_73_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_73::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_73_After
 msgbox SI_W_T_Resident_73, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_73_After:
 msgbox SI_W_T_ResidentAfter_73, MSGBOX_DEFAULT
 release
 end
SI_W_T_Sign_FloaromaTown_0::
 .string "O cheiro das flores ficou\nmetálico quando ligaram as\pturbinas. Minhas Combee\nestão inquietas.$"
SI_W_T_Sign_FloaromaTown_0_En::
 .string "The flowers smelled\nmetallic when the turbines\pstarted. My Combee are\nrestless.$"
SI_W_Sign_FloaromaTown_0::
 msgbox SI_W_T_Sign_FloaromaTown_0, MSGBOX_NPC
 end
SI_W_T_Sign_FloaromaTown_1::
 .string "Fizemos um canteiro para\ncada morador. O de minha\pirmã sempre dá as\nprimeiras flores.$"
SI_W_T_Sign_FloaromaTown_1_En::
 .string "We planted a bed for each\nresident. My sister always\pgets the first flowers.$"
SI_W_Sign_FloaromaTown_1::
 msgbox SI_W_T_Sign_FloaromaTown_1, MSGBOX_NPC
 end
SI_W_T_Sign_FloaromaTown_2::
 .string "Quero vender mel sem\nassustar as Combee. Ganhar\pdinheiro não justifica\nmachucar um parceiro.$"
SI_W_T_Sign_FloaromaTown_2_En::
 .string "I want to sell honey\nwithout scaring Combee.\pMoney cannot justify\nhurting a partner.$"
SI_W_Sign_FloaromaTown_2::
 msgbox SI_W_T_Sign_FloaromaTown_2, MSGBOX_NPC
 end
SI_W_T_Sign_FloaromaTown_3::
 .string "O cheiro das flores ficou\nmetálico quando ligaram as\pturbinas. Minhas Combee\nestão inquietas.$"
SI_W_T_Sign_FloaromaTown_3_En::
 .string "The flowers smelled\nmetallic when the turbines\pstarted. My Combee are\nrestless.$"
SI_W_Sign_FloaromaTown_3::
 msgbox SI_W_T_Sign_FloaromaTown_3, MSGBOX_NPC
 end
SI_W_T_Resident_74::
 .string "Marquei o caminho para\nquem vem depois. Uma\ptrilha boa se compartilha.\nO cheiro das flores ficou\pmetálico quando ligaram as\nturbinas. Minhas Combee\pestão inquietas.$"
SI_W_T_Resident_74_En::
 .string "I marked the path for the\nnext traveler. A good\ptrail is shared. The\nflowers smelled metallic\pwhen the turbines started.\nMy Combee are restless.$"
SI_W_T_ResidentAfter_74::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_74_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_74::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_74_After
 msgbox SI_W_T_Resident_74, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_74_After:
 msgbox SI_W_T_ResidentAfter_74, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_75::
 .string "Anoto também os erros. Um\nresultado bonito não vale\pse estiver errado. O\ncheiro das flores ficou\pmetálico quando ligaram as\nturbinas. Minhas Combee\pestão inquietas.$"
SI_W_T_Resident_75_En::
 .string "I record mistakes too. A\npretty result is worthless\pif it is wrong. The\nflowers smelled metallic\pwhen the turbines started.\nMy Combee are restless.$"
SI_W_T_ResidentAfter_75::
 .string "O ar voltou a ter cheiro\nde chuva. Eu nem percebia\po quanto sentia falta.$"
SI_W_T_ResidentAfter_75_En::
 .string "The air smells like rain\nagain. I had not realized\phow much I missed it.$"
SI_W_Resident_75::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_75_After
 msgbox SI_W_T_Resident_75, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_75_After:
 msgbox SI_W_T_ResidentAfter_75, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_76::
 .string "Meu Kricketune acompanha a\nmelodia. A gente erra\pjunto e tenta de novo.\nFizemos um canteiro para\pcada morador. O de minha\nirmã sempre dá as\pprimeiras flores.$"
SI_W_T_Resident_76_En::
 .string "My Kricketune follows the\nmelody. We miss together\pand try again. We planted\na bed for each resident.\pMy sister always gets the\nfirst flowers.$"
SI_W_T_ResidentAfter_76::
 .string "Vamos fazer uma festa\npequena. Cada pessoa traz\palgo; ninguém precisa\npagar para entrar.$"
SI_W_T_ResidentAfter_76_En::
 .string "We are having a small\nparty. Everyone brings\psomething; nobody pays to\njoin.$"
SI_W_Resident_76::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_76_After
 msgbox SI_W_T_Resident_76, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_76_After:
 msgbox SI_W_T_ResidentAfter_76, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_77::
 .string "Treino uma piada nova por\ndia. Meu Mime Jr. é meu\pcrítico mais sincero.\nQuero vender mel sem\passustar as Combee. Ganhar\ndinheiro não justifica\pmachucar um parceiro.$"
SI_W_T_Resident_77_En::
 .string "I practice a new joke\ndaily. My Mime Jr. is my\pmost honest critic. I want\nto sell honey without\pscaring Combee. Money\ncannot justify hurting a\ppartner.$"
SI_W_T_ResidentAfter_77::
 .string "Vi vocês ajudando na\ncrise. Quero que meu filho\pcresça sabendo que alguém\nse importou.$"
SI_W_T_ResidentAfter_77_En::
 .string "I saw you help in the\ncrisis. I want my son to\pknow someone cared.$"
SI_W_Resident_77::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_77_After
 msgbox SI_W_T_Resident_77, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_77_After:
 msgbox SI_W_T_ResidentAfter_77, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_78::
 .string "Hoje consegui ler um mapa\nsem ajuda. Amanhã vou\pdesenhar meu próprio\ncaminho. O cheiro das\pflores ficou metálico\nquando ligaram as\pturbinas. Minhas Combee\nestão inquietas.$"
SI_W_T_Resident_78_En::
 .string "Today I read a map alone.\nTomorrow I will draw my\pown path. The flowers\nsmelled metallic when the\pturbines started. My\nCombee are restless.$"
SI_W_T_ResidentAfter_78::
 .string "O ar voltou a ter cheiro\nde chuva. Eu nem percebia\po quanto sentia falta.$"
SI_W_T_ResidentAfter_78_En::
 .string "The air smells like rain\nagain. I had not realized\phow much I missed it.$"
SI_W_Resident_78::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_78_After
 msgbox SI_W_T_Resident_78, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_78_After:
 msgbox SI_W_T_ResidentAfter_78, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_79::
 .string "Um parceiro cansado merece\ndescanso. Vitória nenhuma\ppaga confiança perdida. O\ncheiro das flores ficou\pmetálico quando ligaram as\nturbinas. Minhas Combee\pestão inquietas.$"
SI_W_T_Resident_79_En::
 .string "A tired partner deserves\nrest. No win pays for lost\ptrust. The flowers smelled\nmetallic when the turbines\pstarted. My Combee are\nrestless.$"
SI_W_T_ResidentAfter_79::
 .string "Vi vocês ajudando na\ncrise. Quero que meu filho\pcresça sabendo que alguém\nse importou.$"
SI_W_T_ResidentAfter_79_En::
 .string "I saw you help in the\ncrisis. I want my son to\pknow someone cared.$"
SI_W_Resident_79::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_79_After
 msgbox SI_W_T_Resident_79, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_79_After:
 msgbox SI_W_T_ResidentAfter_79, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_80::
 .string "Meu pai me ensinou a\nreconhecer os passos de\pcada Pokémon do pasto.\nFizemos um canteiro para\pcada morador. O de minha\nirmã sempre dá as\pprimeiras flores.$"
SI_W_T_Resident_80_En::
 .string "Dad taught me to recognize\nevery Pokemon by its\pfootsteps. We planted a\nbed for each resident. My\psister always gets the\nfirst flowers.$"
SI_W_T_ResidentAfter_80::
 .string "O ar voltou a ter cheiro\nde chuva. Eu nem percebia\po quanto sentia falta.$"
SI_W_T_ResidentAfter_80_En::
 .string "The air smells like rain\nagain. I had not realized\phow much I missed it.$"
SI_W_Resident_80::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_80_After
 msgbox SI_W_T_Resident_80, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_80_After:
 msgbox SI_W_T_ResidentAfter_80, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_81::
 .string "Meu Ponyta corre ao meu\nlado, sem rédea. A escolha\pdele importa para mim. O\ncheiro das flores ficou\pmetálico quando ligaram as\nturbinas. Minhas Combee\pestão inquietas.$"
SI_W_T_Resident_81_En::
 .string "My Ponyta runs by my side\nwithout reins. His choice\pmatters to me. The flowers\nsmelled metallic when the\pturbines started. My\nCombee are restless.$"
SI_W_T_ResidentAfter_81::
 .string "O ar voltou a ter cheiro\nde chuva. Eu nem percebia\po quanto sentia falta.$"
SI_W_T_ResidentAfter_81_En::
 .string "The air smells like rain\nagain. I had not realized\phow much I missed it.$"
SI_W_Resident_81::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_81_After
 msgbox SI_W_T_Resident_81, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_81_After:
 msgbox SI_W_T_ResidentAfter_81, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_82::
 .string "Guardo a primeira Poké\nBall. Ainda lembro como\pminha mão tremia. Fizemos\num canteiro para cada\pmorador. O de minha irmã\nsempre dá as primeiras\pflores.$"
SI_W_T_Resident_82_En::
 .string "I keep my first Poke Ball.\nI still remember my\pshaking hand. We planted a\nbed for each resident. My\psister always gets the\nfirst flowers.$"
SI_W_T_ResidentAfter_82::
 .string "Vamos fazer uma festa\npequena. Cada pessoa traz\palgo; ninguém precisa\npagar para entrar.$"
SI_W_T_ResidentAfter_82_En::
 .string "We are having a small\nparty. Everyone brings\psomething; nobody pays to\njoin.$"
SI_W_Resident_82::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_82_After
 msgbox SI_W_T_Resident_82, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_82_After:
 msgbox SI_W_T_ResidentAfter_82, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_83::
 .string "Levo chocolate quente\nextra. Sempre aparece um\pviajante que precisa.\nQuero vender mel sem\passustar as Combee. Ganhar\ndinheiro não justifica\pmachucar um parceiro.$"
SI_W_T_Resident_83_En::
 .string "I pack extra hot\nchocolate. A traveler\palways needs some. I want\nto sell honey without\pscaring Combee. Money\ncannot justify hurting a\ppartner.$"
SI_W_T_ResidentAfter_83::
 .string "Vi vocês ajudando na\ncrise. Quero que meu filho\pcresça sabendo que alguém\nse importou.$"
SI_W_T_ResidentAfter_83_En::
 .string "I saw you help in the\ncrisis. I want my son to\pknow someone cared.$"
SI_W_Resident_83::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_83_After
 msgbox SI_W_T_Resident_83, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_83_After:
 msgbox SI_W_T_ResidentAfter_83, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_84::
 .string "Cuido das ferramentas\nantes de sair. Meu\pparceiro conta comigo. O\ncheiro das flores ficou\pmetálico quando ligaram as\nturbinas. Minhas Combee\pestão inquietas.$"
SI_W_T_Resident_84_En::
 .string "I check my tools before\nleaving. My partner relies\pon me. The flowers smelled\nmetallic when the turbines\pstarted. My Combee are\nrestless.$"
SI_W_T_ResidentAfter_84::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_84_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_84::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_84_After
 msgbox SI_W_T_Resident_84, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_84_After:
 msgbox SI_W_T_ResidentAfter_84, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_85::
 .string "Pescar exige esperar.\nAprendi mais com a água do\pque com pressa. Fizemos um\ncanteiro para cada\pmorador. O de minha irmã\nsempre dá as primeiras\pflores.$"
SI_W_T_Resident_85_En::
 .string "Fishing takes patience.\nWater taught me more than\prushing. We planted a bed\nfor each resident. My\psister always gets the\nfirst flowers.$"
SI_W_T_ResidentAfter_85::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_85_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_85::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_85_After
 msgbox SI_W_T_Resident_85, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_85_After:
 msgbox SI_W_T_ResidentAfter_85, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_86::
 .string "Marquei o caminho para\nquem vem depois. Uma\ptrilha boa se compartilha.\nQuero vender mel sem\passustar as Combee. Ganhar\ndinheiro não justifica\pmachucar um parceiro.$"
SI_W_T_Resident_86_En::
 .string "I marked the path for the\nnext traveler. A good\ptrail is shared. I want to\nsell honey without scaring\pCombee. Money cannot\njustify hurting a partner.$"
SI_W_T_ResidentAfter_86::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_86_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_86::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_86_After
 msgbox SI_W_T_Resident_86, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_86_After:
 msgbox SI_W_T_ResidentAfter_86, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_87::
 .string "Anoto também os erros. Um\nresultado bonito não vale\pse estiver errado. O\ncheiro das flores ficou\pmetálico quando ligaram as\nturbinas. Minhas Combee\pestão inquietas.$"
SI_W_T_Resident_87_En::
 .string "I record mistakes too. A\npretty result is worthless\pif it is wrong. The\nflowers smelled metallic\pwhen the turbines started.\nMy Combee are restless.$"
SI_W_T_ResidentAfter_87::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_87_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_87::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_87_After
 msgbox SI_W_T_Resident_87, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_87_After:
 msgbox SI_W_T_ResidentAfter_87, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_88::
 .string "Meu Kricketune acompanha a\nmelodia. A gente erra\pjunto e tenta de novo.\nMinha filha perdeu o\pconcurso e voltou\nsorrindo. O Pokémon dela\paprendeu a confiar nela.$"
SI_W_T_Resident_88_En::
 .string "My Kricketune follows the\nmelody. We miss together\pand try again. My daughter\nlost the contest and\psmiled. Her Pokemon\nlearned to trust her.$"
SI_W_T_ResidentAfter_88::
 .string "Vamos fazer uma festa\npequena. Cada pessoa traz\palgo; ninguém precisa\npagar para entrar.$"
SI_W_T_ResidentAfter_88_En::
 .string "We are having a small\nparty. Everyone brings\psomething; nobody pays to\njoin.$"
SI_W_Resident_88::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_88_After
 msgbox SI_W_T_Resident_88, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_88_After:
 msgbox SI_W_T_ResidentAfter_88, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_89::
 .string "Treino uma piada nova por\ndia. Meu Mime Jr. é meu\pcrítico mais sincero. O\nrelógio da estação atrasou\ptrês vezes. O meu\nadiantou. Como chego no\phorário assim?$"
SI_W_T_Resident_89_En::
 .string "I practice a new joke\ndaily. My Mime Jr. is my\pmost honest critic. The\nstation clock slowed three\ptimes. Mine sped up. How\ncan I arrive on time?$"
SI_W_T_ResidentAfter_89::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_89_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_89::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_89_After
 msgbox SI_W_T_Resident_89, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_89_After:
 msgbox SI_W_T_ResidentAfter_89, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_90::
 .string "Hoje consegui ler um mapa\nsem ajuda. Amanhã vou\pdesenhar meu próprio\ncaminho. Na escola, a\pprofessora pediu uma\nredação sobre nosso\pprimeiro parceiro. Chorei\nescrevendo a minha.$"
SI_W_T_Resident_90_En::
 .string "Today I read a map alone.\nTomorrow I will draw my\pown path. Our teacher\nasked us to write about\pour first partner. I cried\nwriting mine.$"
SI_W_T_ResidentAfter_90::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_90_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_90::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_90_After
 msgbox SI_W_T_Resident_90, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_90_After:
 msgbox SI_W_T_ResidentAfter_90, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_91::
 .string "Um parceiro cansado merece\ndescanso. Vitória nenhuma\ppaga confiança perdida.\nEstou montando um programa\psobre iniciantes. Prefiro\numa derrota honesta a uma\pvitória inventada.$"
SI_W_T_Resident_91_En::
 .string "A tired partner deserves\nrest. No win pays for lost\ptrust. I am making a show\nabout beginners. An honest\ploss beats a fake victory.$"
SI_W_T_ResidentAfter_91::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_91_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_91::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_91_After
 msgbox SI_W_T_Resident_91, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_91_After:
 msgbox SI_W_T_ResidentAfter_91, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_92::
 .string "Meu pai me ensinou a\nreconhecer os passos de\pcada Pokémon do pasto. O\nrelógio da estação atrasou\ptrês vezes. O meu\nadiantou. Como chego no\phorário assim?$"
SI_W_T_Resident_92_En::
 .string "Dad taught me to recognize\nevery Pokemon by its\pfootsteps. The station\nclock slowed three times.\pMine sped up. How can I\narrive on time?$"
SI_W_T_ResidentAfter_92::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_92_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_92::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_92_After
 msgbox SI_W_T_Resident_92, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_92_After:
 msgbox SI_W_T_ResidentAfter_92, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_93::
 .string "Meu Ponyta corre ao meu\nlado, sem rédea. A escolha\pdele importa para mim. Na\nescola, a professora pediu\puma redação sobre nosso\nprimeiro parceiro. Chorei\pescrevendo a minha.$"
SI_W_T_Resident_93_En::
 .string "My Ponyta runs by my side\nwithout reins. His choice\pmatters to me. Our teacher\nasked us to write about\pour first partner. I cried\nwriting mine.$"
SI_W_T_ResidentAfter_93::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_93_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_93::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_93_After
 msgbox SI_W_T_Resident_93, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_93_After:
 msgbox SI_W_T_ResidentAfter_93, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_94::
 .string "Guardo a primeira Poké\nBall. Ainda lembro como\pminha mão tremia. Estou\nmontando um programa sobre\piniciantes. Prefiro uma\nderrota honesta a uma\pvitória inventada.$"
SI_W_T_Resident_94_En::
 .string "I keep my first Poke Ball.\nI still remember my\pshaking hand. I am making\na show about beginners. An\phonest loss beats a fake\nvictory.$"
SI_W_T_ResidentAfter_94::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_94_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_94::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_94_After
 msgbox SI_W_T_Resident_94, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_94_After:
 msgbox SI_W_T_ResidentAfter_94, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_95::
 .string "Levo chocolate quente\nextra. Sempre aparece um\pviajante que precisa. O\nrelógio da estação atrasou\ptrês vezes. O meu\nadiantou. Como chego no\phorário assim?$"
SI_W_T_Resident_95_En::
 .string "I pack extra hot\nchocolate. A traveler\palways needs some. The\nstation clock slowed three\ptimes. Mine sped up. How\ncan I arrive on time?$"
SI_W_T_ResidentAfter_95::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_95_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_95::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_95_After
 msgbox SI_W_T_Resident_95, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_95_After:
 msgbox SI_W_T_ResidentAfter_95, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_96::
 .string "Cuido das ferramentas\nantes de sair. Meu\pparceiro conta comigo. Na\nescola, a professora pediu\puma redação sobre nosso\nprimeiro parceiro. Chorei\pescrevendo a minha.$"
SI_W_T_Resident_96_En::
 .string "I check my tools before\nleaving. My partner relies\pon me. Our teacher asked\nus to write about our\pfirst partner. I cried\nwriting mine.$"
SI_W_T_ResidentAfter_96::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_96_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_96::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_96_After
 msgbox SI_W_T_Resident_96, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_96_After:
 msgbox SI_W_T_ResidentAfter_96, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_97::
 .string "Pescar exige esperar.\nAprendi mais com a água do\pque com pressa. Estou\nmontando um programa sobre\piniciantes. Prefiro uma\nderrota honesta a uma\pvitória inventada.$"
SI_W_T_Resident_97_En::
 .string "Fishing takes patience.\nWater taught me more than\prushing. I am making a\nshow about beginners. An\phonest loss beats a fake\nvictory.$"
SI_W_T_ResidentAfter_97::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_97_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_97::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_97_After
 msgbox SI_W_T_Resident_97, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_97_After:
 msgbox SI_W_T_ResidentAfter_97, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_98::
 .string "Marquei o caminho para\nquem vem depois. Uma\ptrilha boa se compartilha.\nO relógio da estação\patrasou três vezes. O meu\nadiantou. Como chego no\phorário assim?$"
SI_W_T_Resident_98_En::
 .string "I marked the path for the\nnext traveler. A good\ptrail is shared. The\nstation clock slowed three\ptimes. Mine sped up. How\ncan I arrive on time?$"
SI_W_T_ResidentAfter_98::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_98_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_98::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_98_After
 msgbox SI_W_T_Resident_98, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_98_After:
 msgbox SI_W_T_ResidentAfter_98, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_99::
 .string "Anoto também os erros. Um\nresultado bonito não vale\pse estiver errado. Na\nescola, a professora pediu\puma redação sobre nosso\nprimeiro parceiro. Chorei\pescrevendo a minha.$"
SI_W_T_Resident_99_En::
 .string "I record mistakes too. A\npretty result is worthless\pif it is wrong. Our\nteacher asked us to write\pabout our first partner. I\ncried writing mine.$"
SI_W_T_ResidentAfter_99::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_99_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_99::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_99_After
 msgbox SI_W_T_Resident_99, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_99_After:
 msgbox SI_W_T_ResidentAfter_99, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_100::
 .string "Meu Kricketune acompanha a\nmelodia. A gente erra\pjunto e tenta de novo.\nEstou montando um programa\psobre iniciantes. Prefiro\numa derrota honesta a uma\pvitória inventada.$"
SI_W_T_Resident_100_En::
 .string "My Kricketune follows the\nmelody. We miss together\pand try again. I am making\na show about beginners. An\phonest loss beats a fake\nvictory.$"
SI_W_T_ResidentAfter_100::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_100_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_100::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_100_After
 msgbox SI_W_T_Resident_100, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_100_After:
 msgbox SI_W_T_ResidentAfter_100, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_101::
 .string "Treino uma piada nova por\ndia. Meu Mime Jr. é meu\pcrítico mais sincero. O\nrelógio da estação atrasou\ptrês vezes. O meu\nadiantou. Como chego no\phorário assim?$"
SI_W_T_Resident_101_En::
 .string "I practice a new joke\ndaily. My Mime Jr. is my\pmost honest critic. The\nstation clock slowed three\ptimes. Mine sped up. How\ncan I arrive on time?$"
SI_W_T_ResidentAfter_101::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_101_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_101::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_101_After
 msgbox SI_W_T_Resident_101, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_101_After:
 msgbox SI_W_T_ResidentAfter_101, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_102::
 .string "Hoje consegui ler um mapa\nsem ajuda. Amanhã vou\pdesenhar meu próprio\ncaminho. Na escola, a\pprofessora pediu uma\nredação sobre nosso\pprimeiro parceiro. Chorei\nescrevendo a minha.$"
SI_W_T_Resident_102_En::
 .string "Today I read a map alone.\nTomorrow I will draw my\pown path. Our teacher\nasked us to write about\pour first partner. I cried\nwriting mine.$"
SI_W_T_ResidentAfter_102::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_102_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_102::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_102_After
 msgbox SI_W_T_Resident_102, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_102_After:
 msgbox SI_W_T_ResidentAfter_102, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_103::
 .string "Um parceiro cansado merece\ndescanso. Vitória nenhuma\ppaga confiança perdida.\nEstou montando um programa\psobre iniciantes. Prefiro\numa derrota honesta a uma\pvitória inventada.$"
SI_W_T_Resident_103_En::
 .string "A tired partner deserves\nrest. No win pays for lost\ptrust. I am making a show\nabout beginners. An honest\ploss beats a fake victory.$"
SI_W_T_ResidentAfter_103::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_103_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_103::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_103_After
 msgbox SI_W_T_Resident_103, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_103_After:
 msgbox SI_W_T_ResidentAfter_103, MSGBOX_DEFAULT
 release
 end
SI_W_T_Sign_JubilifeCity_0::
 .string "Estou montando um programa\nsobre iniciantes. Prefiro\puma derrota honesta a uma\nvitória inventada.$"
SI_W_T_Sign_JubilifeCity_0_En::
 .string "I am making a show about\nbeginners. An honest loss\pbeats a fake victory.$"
SI_W_Sign_JubilifeCity_0::
 msgbox SI_W_T_Sign_JubilifeCity_0, MSGBOX_NPC
 end
SI_W_T_Sign_JubilifeCity_1::
 .string "O relógio da estação\natrasou três vezes. O meu\padiantou. Como chego no\nhorário assim?$"
SI_W_T_Sign_JubilifeCity_1_En::
 .string "The station clock slowed\nthree times. Mine sped up.\pHow can I arrive on time?$"
SI_W_Sign_JubilifeCity_1::
 msgbox SI_W_T_Sign_JubilifeCity_1, MSGBOX_NPC
 end
SI_W_T_Sign_JubilifeCity_2::
 .string "Na escola, a professora\npediu uma redação sobre\pnosso primeiro parceiro.\nChorei escrevendo a minha.$"
SI_W_T_Sign_JubilifeCity_2_En::
 .string "Our teacher asked us to\nwrite about our first\ppartner. I cried writing\nmine.$"
SI_W_Sign_JubilifeCity_2::
 msgbox SI_W_T_Sign_JubilifeCity_2, MSGBOX_NPC
 end
SI_W_T_Sign_JubilifeCity_3::
 .string "Estou montando um programa\nsobre iniciantes. Prefiro\puma derrota honesta a uma\nvitória inventada.$"
SI_W_T_Sign_JubilifeCity_3_En::
 .string "I am making a show about\nbeginners. An honest loss\pbeats a fake victory.$"
SI_W_Sign_JubilifeCity_3::
 msgbox SI_W_T_Sign_JubilifeCity_3, MSGBOX_NPC
 end
SI_W_T_Sign_JubilifeCity_4::
 .string "O relógio da estação\natrasou três vezes. O meu\padiantou. Como chego no\nhorário assim?$"
SI_W_T_Sign_JubilifeCity_4_En::
 .string "The station clock slowed\nthree times. Mine sped up.\pHow can I arrive on time?$"
SI_W_Sign_JubilifeCity_4::
 msgbox SI_W_T_Sign_JubilifeCity_4, MSGBOX_NPC
 end
SI_W_T_Sign_JubilifeCity_5::
 .string "Na escola, a professora\npediu uma redação sobre\pnosso primeiro parceiro.\nChorei escrevendo a minha.$"
SI_W_T_Sign_JubilifeCity_5_En::
 .string "Our teacher asked us to\nwrite about our first\ppartner. I cried writing\nmine.$"
SI_W_Sign_JubilifeCity_5::
 msgbox SI_W_T_Sign_JubilifeCity_5, MSGBOX_NPC
 end
SI_W_T_Sign_JubilifeCity_6::
 .string "Estou montando um programa\nsobre iniciantes. Prefiro\puma derrota honesta a uma\nvitória inventada.$"
SI_W_T_Sign_JubilifeCity_6_En::
 .string "I am making a show about\nbeginners. An honest loss\pbeats a fake victory.$"
SI_W_Sign_JubilifeCity_6::
 msgbox SI_W_T_Sign_JubilifeCity_6, MSGBOX_NPC
 end
SI_W_T_Sign_JubilifeCity_7::
 .string "O relógio da estação\natrasou três vezes. O meu\padiantou. Como chego no\nhorário assim?$"
SI_W_T_Sign_JubilifeCity_7_En::
 .string "The station clock slowed\nthree times. Mine sped up.\pHow can I arrive on time?$"
SI_W_Sign_JubilifeCity_7::
 msgbox SI_W_T_Sign_JubilifeCity_7, MSGBOX_NPC
 end
SI_W_T_Sign_JubilifeCity_8::
 .string "Na escola, a professora\npediu uma redação sobre\pnosso primeiro parceiro.\nChorei escrevendo a minha.$"
SI_W_T_Sign_JubilifeCity_8_En::
 .string "Our teacher asked us to\nwrite about our first\ppartner. I cried writing\nmine.$"
SI_W_Sign_JubilifeCity_8::
 msgbox SI_W_T_Sign_JubilifeCity_8, MSGBOX_NPC
 end
SI_W_T_Sign_JubilifeCity_9::
 .string "Estou montando um programa\nsobre iniciantes. Prefiro\puma derrota honesta a uma\nvitória inventada.$"
SI_W_T_Sign_JubilifeCity_9_En::
 .string "I am making a show about\nbeginners. An honest loss\pbeats a fake victory.$"
SI_W_Sign_JubilifeCity_9::
 msgbox SI_W_T_Sign_JubilifeCity_9, MSGBOX_NPC
 end
SI_W_T_Resident_104::
 .string "Meu pai me ensinou a\nreconhecer os passos de\pcada Pokémon do pasto.\nEstou montando um programa\psobre iniciantes. Prefiro\numa derrota honesta a uma\pvitória inventada.$"
SI_W_T_Resident_104_En::
 .string "Dad taught me to recognize\nevery Pokemon by its\pfootsteps. I am making a\nshow about beginners. An\phonest loss beats a fake\nvictory.$"
SI_W_T_ResidentAfter_104::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_104_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_104::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_104_After
 msgbox SI_W_T_Resident_104, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_104_After:
 msgbox SI_W_T_ResidentAfter_104, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_105::
 .string "Meu Ponyta corre ao meu\nlado, sem rédea. A escolha\pdele importa para mim. O\nrelógio da estação atrasou\ptrês vezes. O meu\nadiantou. Como chego no\phorário assim?$"
SI_W_T_Resident_105_En::
 .string "My Ponyta runs by my side\nwithout reins. His choice\pmatters to me. The station\nclock slowed three times.\pMine sped up. How can I\narrive on time?$"
SI_W_T_ResidentAfter_105::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_105_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_105::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_105_After
 msgbox SI_W_T_Resident_105, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_105_After:
 msgbox SI_W_T_ResidentAfter_105, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_106::
 .string "Guardo a primeira Poké\nBall. Ainda lembro como\pminha mão tremia. Na\nescola, a professora pediu\puma redação sobre nosso\nprimeiro parceiro. Chorei\pescrevendo a minha.$"
SI_W_T_Resident_106_En::
 .string "I keep my first Poke Ball.\nI still remember my\pshaking hand. Our teacher\nasked us to write about\pour first partner. I cried\nwriting mine.$"
SI_W_T_ResidentAfter_106::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_106_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_106::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_106_After
 msgbox SI_W_T_Resident_106, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_106_After:
 msgbox SI_W_T_ResidentAfter_106, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_107::
 .string "Levo chocolate quente\nextra. Sempre aparece um\pviajante que precisa.\nEstou montando um programa\psobre iniciantes. Prefiro\numa derrota honesta a uma\pvitória inventada.$"
SI_W_T_Resident_107_En::
 .string "I pack extra hot\nchocolate. A traveler\palways needs some. I am\nmaking a show about\pbeginners. An honest loss\nbeats a fake victory.$"
SI_W_T_ResidentAfter_107::
 .string "Vamos fazer uma festa\npequena. Cada pessoa traz\palgo; ninguém precisa\npagar para entrar.$"
SI_W_T_ResidentAfter_107_En::
 .string "We are having a small\nparty. Everyone brings\psomething; nobody pays to\njoin.$"
SI_W_Resident_107::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_107_After
 msgbox SI_W_T_Resident_107, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_107_After:
 msgbox SI_W_T_ResidentAfter_107, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_108::
 .string "Cuido das ferramentas\nantes de sair. Meu\pparceiro conta comigo. O\nrelógio da estação atrasou\ptrês vezes. O meu\nadiantou. Como chego no\phorário assim?$"
SI_W_T_Resident_108_En::
 .string "I check my tools before\nleaving. My partner relies\pon me. The station clock\nslowed three times. Mine\psped up. How can I arrive\non time?$"
SI_W_T_ResidentAfter_108::
 .string "Vi vocês ajudando na\ncrise. Quero que meu filho\pcresça sabendo que alguém\nse importou.$"
SI_W_T_ResidentAfter_108_En::
 .string "I saw you help in the\ncrisis. I want my son to\pknow someone cared.$"
SI_W_Resident_108::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_108_After
 msgbox SI_W_T_Resident_108, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_108_After:
 msgbox SI_W_T_ResidentAfter_108, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_109::
 .string "Pescar exige esperar.\nAprendi mais com a água do\pque com pressa. Na escola,\na professora pediu uma\predação sobre nosso\nprimeiro parceiro. Chorei\pescrevendo a minha.$"
SI_W_T_Resident_109_En::
 .string "Fishing takes patience.\nWater taught me more than\prushing. Our teacher asked\nus to write about our\pfirst partner. I cried\nwriting mine.$"
SI_W_T_ResidentAfter_109::
 .string "O ar voltou a ter cheiro\nde chuva. Eu nem percebia\po quanto sentia falta.$"
SI_W_T_ResidentAfter_109_En::
 .string "The air smells like rain\nagain. I had not realized\phow much I missed it.$"
SI_W_Resident_109::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_109_After
 msgbox SI_W_T_Resident_109, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_109_After:
 msgbox SI_W_T_ResidentAfter_109, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_110::
 .string "Marquei o caminho para\nquem vem depois. Uma\ptrilha boa se compartilha.\nEstou montando um programa\psobre iniciantes. Prefiro\numa derrota honesta a uma\pvitória inventada.$"
SI_W_T_Resident_110_En::
 .string "I marked the path for the\nnext traveler. A good\ptrail is shared. I am\nmaking a show about\pbeginners. An honest loss\nbeats a fake victory.$"
SI_W_T_ResidentAfter_110::
 .string "Vamos fazer uma festa\npequena. Cada pessoa traz\palgo; ninguém precisa\npagar para entrar.$"
SI_W_T_ResidentAfter_110_En::
 .string "We are having a small\nparty. Everyone brings\psomething; nobody pays to\njoin.$"
SI_W_Resident_110::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_110_After
 msgbox SI_W_T_Resident_110, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_110_After:
 msgbox SI_W_T_ResidentAfter_110, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_111::
 .string "Anoto também os erros. Um\nresultado bonito não vale\pse estiver errado. Estou\nmontando um programa sobre\piniciantes. Prefiro uma\nderrota honesta a uma\pvitória inventada.$"
SI_W_T_Resident_111_En::
 .string "I record mistakes too. A\npretty result is worthless\pif it is wrong. I am\nmaking a show about\pbeginners. An honest loss\nbeats a fake victory.$"
SI_W_T_ResidentAfter_111::
 .string "O ar voltou a ter cheiro\nde chuva. Eu nem percebia\po quanto sentia falta.$"
SI_W_T_ResidentAfter_111_En::
 .string "The air smells like rain\nagain. I had not realized\phow much I missed it.$"
SI_W_Resident_111::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_111_After
 msgbox SI_W_T_Resident_111, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_111_After:
 msgbox SI_W_T_ResidentAfter_111, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_112::
 .string "Meu Kricketune acompanha a\nmelodia. A gente erra\pjunto e tenta de novo. O\nrelógio da estação atrasou\ptrês vezes. O meu\nadiantou. Como chego no\phorário assim?$"
SI_W_T_Resident_112_En::
 .string "My Kricketune follows the\nmelody. We miss together\pand try again. The station\nclock slowed three times.\pMine sped up. How can I\narrive on time?$"
SI_W_T_ResidentAfter_112::
 .string "Vamos fazer uma festa\npequena. Cada pessoa traz\palgo; ninguém precisa\npagar para entrar.$"
SI_W_T_ResidentAfter_112_En::
 .string "We are having a small\nparty. Everyone brings\psomething; nobody pays to\njoin.$"
SI_W_Resident_112::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_112_After
 msgbox SI_W_T_Resident_112, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_112_After:
 msgbox SI_W_T_ResidentAfter_112, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_113::
 .string "Treino uma piada nova por\ndia. Meu Mime Jr. é meu\pcrítico mais sincero. Na\nescola, a professora pediu\puma redação sobre nosso\nprimeiro parceiro. Chorei\pescrevendo a minha.$"
SI_W_T_Resident_113_En::
 .string "I practice a new joke\ndaily. My Mime Jr. is my\pmost honest critic. Our\nteacher asked us to write\pabout our first partner. I\ncried writing mine.$"
SI_W_T_ResidentAfter_113::
 .string "Vi vocês ajudando na\ncrise. Quero que meu filho\pcresça sabendo que alguém\nse importou.$"
SI_W_T_ResidentAfter_113_En::
 .string "I saw you help in the\ncrisis. I want my son to\pknow someone cared.$"
SI_W_Resident_113::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_113_After
 msgbox SI_W_T_Resident_113, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_113_After:
 msgbox SI_W_T_ResidentAfter_113, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_114::
 .string "Hoje consegui ler um mapa\nsem ajuda. Amanhã vou\pdesenhar meu próprio\ncaminho. Estou montando um\pprograma sobre iniciantes.\nPrefiro uma derrota\phonesta a uma vitória\ninventada.$"
SI_W_T_Resident_114_En::
 .string "Today I read a map alone.\nTomorrow I will draw my\pown path. I am making a\nshow about beginners. An\phonest loss beats a fake\nvictory.$"
SI_W_T_ResidentAfter_114::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_114_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_114::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_114_After
 msgbox SI_W_T_Resident_114, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_114_After:
 msgbox SI_W_T_ResidentAfter_114, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_115::
 .string "Um parceiro cansado merece\ndescanso. Vitória nenhuma\ppaga confiança perdida. O\nrelógio da estação atrasou\ptrês vezes. O meu\nadiantou. Como chego no\phorário assim?$"
SI_W_T_Resident_115_En::
 .string "A tired partner deserves\nrest. No win pays for lost\ptrust. The station clock\nslowed three times. Mine\psped up. How can I arrive\non time?$"
SI_W_T_ResidentAfter_115::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_115_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_115::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_115_After
 msgbox SI_W_T_Resident_115, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_115_After:
 msgbox SI_W_T_ResidentAfter_115, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_116::
 .string "Meu pai me ensinou a\nreconhecer os passos de\pcada Pokémon do pasto. Na\nescola, a professora pediu\puma redação sobre nosso\nprimeiro parceiro. Chorei\pescrevendo a minha.$"
SI_W_T_Resident_116_En::
 .string "Dad taught me to recognize\nevery Pokemon by its\pfootsteps. Our teacher\nasked us to write about\pour first partner. I cried\nwriting mine.$"
SI_W_T_ResidentAfter_116::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_116_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_116::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_116_After
 msgbox SI_W_T_Resident_116, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_116_After:
 msgbox SI_W_T_ResidentAfter_116, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_117::
 .string "Meu Ponyta corre ao meu\nlado, sem rédea. A escolha\pdele importa para mim.\nEstou montando um programa\psobre iniciantes. Prefiro\numa derrota honesta a uma\pvitória inventada.$"
SI_W_T_Resident_117_En::
 .string "My Ponyta runs by my side\nwithout reins. His choice\pmatters to me. I am making\na show about beginners. An\phonest loss beats a fake\nvictory.$"
SI_W_T_ResidentAfter_117::
 .string "O ar voltou a ter cheiro\nde chuva. Eu nem percebia\po quanto sentia falta.$"
SI_W_T_ResidentAfter_117_En::
 .string "The air smells like rain\nagain. I had not realized\phow much I missed it.$"
SI_W_Resident_117::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_117_After
 msgbox SI_W_T_Resident_117, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_117_After:
 msgbox SI_W_T_ResidentAfter_117, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_118::
 .string "Guardo a primeira Poké\nBall. Ainda lembro como\pminha mão tremia. Estou\nmontando um programa sobre\piniciantes. Prefiro uma\nderrota honesta a uma\pvitória inventada.$"
SI_W_T_Resident_118_En::
 .string "I keep my first Poke Ball.\nI still remember my\pshaking hand. I am making\na show about beginners. An\phonest loss beats a fake\nvictory.$"
SI_W_T_ResidentAfter_118::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_118_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_118::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_118_After
 msgbox SI_W_T_Resident_118, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_118_After:
 msgbox SI_W_T_ResidentAfter_118, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_119::
 .string "Levo chocolate quente\nextra. Sempre aparece um\pviajante que precisa. O\nrelógio da estação atrasou\ptrês vezes. O meu\nadiantou. Como chego no\phorário assim?$"
SI_W_T_Resident_119_En::
 .string "I pack extra hot\nchocolate. A traveler\palways needs some. The\nstation clock slowed three\ptimes. Mine sped up. How\ncan I arrive on time?$"
SI_W_T_ResidentAfter_119::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_119_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_119::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_119_After
 msgbox SI_W_T_Resident_119, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_119_After:
 msgbox SI_W_T_ResidentAfter_119, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_120::
 .string "Cuido das ferramentas\nantes de sair. Meu\pparceiro conta comigo. Na\nescola, a professora pediu\puma redação sobre nosso\nprimeiro parceiro. Chorei\pescrevendo a minha.$"
SI_W_T_Resident_120_En::
 .string "I check my tools before\nleaving. My partner relies\pon me. Our teacher asked\nus to write about our\pfirst partner. I cried\nwriting mine.$"
SI_W_T_ResidentAfter_120::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_120_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_120::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_120_After
 msgbox SI_W_T_Resident_120, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_120_After:
 msgbox SI_W_T_ResidentAfter_120, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_121::
 .string "Pescar exige esperar.\nAprendi mais com a água do\pque com pressa. Estou\nmontando um programa sobre\piniciantes. Prefiro uma\nderrota honesta a uma\pvitória inventada.$"
SI_W_T_Resident_121_En::
 .string "Fishing takes patience.\nWater taught me more than\prushing. I am making a\nshow about beginners. An\phonest loss beats a fake\nvictory.$"
SI_W_T_ResidentAfter_121::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_121_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_121::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_121_After
 msgbox SI_W_T_Resident_121, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_121_After:
 msgbox SI_W_T_ResidentAfter_121, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_122::
 .string "Marquei o caminho para\nquem vem depois. Uma\ptrilha boa se compartilha.\nEstou montando um programa\psobre iniciantes. Prefiro\numa derrota honesta a uma\pvitória inventada.$"
SI_W_T_Resident_122_En::
 .string "I marked the path for the\nnext traveler. A good\ptrail is shared. I am\nmaking a show about\pbeginners. An honest loss\nbeats a fake victory.$"
SI_W_T_ResidentAfter_122::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_122_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_122::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_122_After
 msgbox SI_W_T_Resident_122, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_122_After:
 msgbox SI_W_T_ResidentAfter_122, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_123::
 .string "Anoto também os erros. Um\nresultado bonito não vale\pse estiver errado. O\nrelógio da estação atrasou\ptrês vezes. O meu\nadiantou. Como chego no\phorário assim?$"
SI_W_T_Resident_123_En::
 .string "I record mistakes too. A\npretty result is worthless\pif it is wrong. The\nstation clock slowed three\ptimes. Mine sped up. How\ncan I arrive on time?$"
SI_W_T_ResidentAfter_123::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_123_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_123::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_123_After
 msgbox SI_W_T_Resident_123, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_123_After:
 msgbox SI_W_T_ResidentAfter_123, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_124::
 .string "Meu Kricketune acompanha a\nmelodia. A gente erra\pjunto e tenta de novo.\nEstou montando um programa\psobre iniciantes. Prefiro\numa derrota honesta a uma\pvitória inventada.$"
SI_W_T_Resident_124_En::
 .string "My Kricketune follows the\nmelody. We miss together\pand try again. I am making\na show about beginners. An\phonest loss beats a fake\nvictory.$"
SI_W_T_ResidentAfter_124::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_124_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_124::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_124_After
 msgbox SI_W_T_Resident_124, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_124_After:
 msgbox SI_W_T_ResidentAfter_124, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_125::
 .string "Treino uma piada nova por\ndia. Meu Mime Jr. é meu\pcrítico mais sincero. O\nrelógio da estação atrasou\ptrês vezes. O meu\nadiantou. Como chego no\phorário assim?$"
SI_W_T_Resident_125_En::
 .string "I practice a new joke\ndaily. My Mime Jr. is my\pmost honest critic. The\nstation clock slowed three\ptimes. Mine sped up. How\ncan I arrive on time?$"
SI_W_T_ResidentAfter_125::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_125_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_125::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_125_After
 msgbox SI_W_T_Resident_125, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_125_After:
 msgbox SI_W_T_ResidentAfter_125, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_126::
 .string "Hoje consegui ler um mapa\nsem ajuda. Amanhã vou\pdesenhar meu próprio\ncaminho. Estou montando um\pprograma sobre iniciantes.\nPrefiro uma derrota\phonesta a uma vitória\ninventada.$"
SI_W_T_Resident_126_En::
 .string "Today I read a map alone.\nTomorrow I will draw my\pown path. I am making a\nshow about beginners. An\phonest loss beats a fake\nvictory.$"
SI_W_T_ResidentAfter_126::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_126_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_126::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_126_After
 msgbox SI_W_T_Resident_126, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_126_After:
 msgbox SI_W_T_ResidentAfter_126, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_127::
 .string "Um parceiro cansado merece\ndescanso. Vitória nenhuma\ppaga confiança perdida. O\nrelógio da estação atrasou\ptrês vezes. O meu\nadiantou. Como chego no\phorário assim?$"
SI_W_T_Resident_127_En::
 .string "A tired partner deserves\nrest. No win pays for lost\ptrust. The station clock\nslowed three times. Mine\psped up. How can I arrive\non time?$"
SI_W_T_ResidentAfter_127::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_127_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_127::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_127_After
 msgbox SI_W_T_Resident_127, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_127_After:
 msgbox SI_W_T_ResidentAfter_127, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_128::
 .string "Meu pai me ensinou a\nreconhecer os passos de\pcada Pokémon do pasto. Na\nescola, a professora pediu\puma redação sobre nosso\nprimeiro parceiro. Chorei\pescrevendo a minha.$"
SI_W_T_Resident_128_En::
 .string "Dad taught me to recognize\nevery Pokemon by its\pfootsteps. Our teacher\nasked us to write about\pour first partner. I cried\nwriting mine.$"
SI_W_T_ResidentAfter_128::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_128_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_128::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_128_After
 msgbox SI_W_T_Resident_128, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_128_After:
 msgbox SI_W_T_ResidentAfter_128, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_129::
 .string "Meu Ponyta corre ao meu\nlado, sem rédea. A escolha\pdele importa para mim.\nEstou montando um programa\psobre iniciantes. Prefiro\numa derrota honesta a uma\pvitória inventada.$"
SI_W_T_Resident_129_En::
 .string "My Ponyta runs by my side\nwithout reins. His choice\pmatters to me. I am making\na show about beginners. An\phonest loss beats a fake\nvictory.$"
SI_W_T_ResidentAfter_129::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_129_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_129::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_129_After
 msgbox SI_W_T_Resident_129, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_129_After:
 msgbox SI_W_T_ResidentAfter_129, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_130::
 .string "Guardo a primeira Poké\nBall. Ainda lembro como\pminha mão tremia. O\nrelógio da estação atrasou\ptrês vezes. O meu\nadiantou. Como chego no\phorário assim?$"
SI_W_T_Resident_130_En::
 .string "I keep my first Poke Ball.\nI still remember my\pshaking hand. The station\nclock slowed three times.\pMine sped up. How can I\narrive on time?$"
SI_W_T_ResidentAfter_130::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_130_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_130::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_130_After
 msgbox SI_W_T_Resident_130, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_130_After:
 msgbox SI_W_T_ResidentAfter_130, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_131::
 .string "Levo chocolate quente\nextra. Sempre aparece um\pviajante que precisa.\nEstou montando um programa\psobre iniciantes. Prefiro\numa derrota honesta a uma\pvitória inventada.$"
SI_W_T_Resident_131_En::
 .string "I pack extra hot\nchocolate. A traveler\palways needs some. I am\nmaking a show about\pbeginners. An honest loss\nbeats a fake victory.$"
SI_W_T_ResidentAfter_131::
 .string "Vamos fazer uma festa\npequena. Cada pessoa traz\palgo; ninguém precisa\npagar para entrar.$"
SI_W_T_ResidentAfter_131_En::
 .string "We are having a small\nparty. Everyone brings\psomething; nobody pays to\njoin.$"
SI_W_Resident_131::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_131_After
 msgbox SI_W_T_Resident_131, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_131_After:
 msgbox SI_W_T_ResidentAfter_131, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_132::
 .string "Cuido das ferramentas\nantes de sair. Meu\pparceiro conta comigo. O\nrelógio da estação atrasou\ptrês vezes. O meu\nadiantou. Como chego no\phorário assim?$"
SI_W_T_Resident_132_En::
 .string "I check my tools before\nleaving. My partner relies\pon me. The station clock\nslowed three times. Mine\psped up. How can I arrive\non time?$"
SI_W_T_ResidentAfter_132::
 .string "Vi vocês ajudando na\ncrise. Quero que meu filho\pcresça sabendo que alguém\nse importou.$"
SI_W_T_ResidentAfter_132_En::
 .string "I saw you help in the\ncrisis. I want my son to\pknow someone cared.$"
SI_W_Resident_132::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_132_After
 msgbox SI_W_T_Resident_132, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_132_After:
 msgbox SI_W_T_ResidentAfter_132, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_133::
 .string "Pescar exige esperar.\nAprendi mais com a água do\pque com pressa. Na escola,\na professora pediu uma\predação sobre nosso\nprimeiro parceiro. Chorei\pescrevendo a minha.$"
SI_W_T_Resident_133_En::
 .string "Fishing takes patience.\nWater taught me more than\prushing. Our teacher asked\nus to write about our\pfirst partner. I cried\nwriting mine.$"
SI_W_T_ResidentAfter_133::
 .string "O ar voltou a ter cheiro\nde chuva. Eu nem percebia\po quanto sentia falta.$"
SI_W_T_ResidentAfter_133_En::
 .string "The air smells like rain\nagain. I had not realized\phow much I missed it.$"
SI_W_Resident_133::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_133_After
 msgbox SI_W_T_Resident_133, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_133_After:
 msgbox SI_W_T_ResidentAfter_133, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_134::
 .string "Marquei o caminho para\nquem vem depois. Uma\ptrilha boa se compartilha.\nEstou montando um programa\psobre iniciantes. Prefiro\numa derrota honesta a uma\pvitória inventada.$"
SI_W_T_Resident_134_En::
 .string "I marked the path for the\nnext traveler. A good\ptrail is shared. I am\nmaking a show about\pbeginners. An honest loss\nbeats a fake victory.$"
SI_W_T_ResidentAfter_134::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_134_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_134::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_134_After
 msgbox SI_W_T_Resident_134, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_134_After:
 msgbox SI_W_T_ResidentAfter_134, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_135::
 .string "Anoto também os erros. Um\nresultado bonito não vale\pse estiver errado. O\nrelógio da estação atrasou\ptrês vezes. O meu\nadiantou. Como chego no\phorário assim?$"
SI_W_T_Resident_135_En::
 .string "I record mistakes too. A\npretty result is worthless\pif it is wrong. The\nstation clock slowed three\ptimes. Mine sped up. How\ncan I arrive on time?$"
SI_W_T_ResidentAfter_135::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_135_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_135::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_135_After
 msgbox SI_W_T_Resident_135, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_135_After:
 msgbox SI_W_T_ResidentAfter_135, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_136::
 .string "Meu Kricketune acompanha a\nmelodia. A gente erra\pjunto e tenta de novo. Na\nescola, a professora pediu\puma redação sobre nosso\nprimeiro parceiro. Chorei\pescrevendo a minha.$"
SI_W_T_Resident_136_En::
 .string "My Kricketune follows the\nmelody. We miss together\pand try again. Our teacher\nasked us to write about\pour first partner. I cried\nwriting mine.$"
SI_W_T_ResidentAfter_136::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_136_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_136::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_136_After
 msgbox SI_W_T_Resident_136, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_136_After:
 msgbox SI_W_T_ResidentAfter_136, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_137::
 .string "Treino uma piada nova por\ndia. Meu Mime Jr. é meu\pcrítico mais sincero.\nEstou montando um programa\psobre iniciantes. Prefiro\numa derrota honesta a uma\pvitória inventada.$"
SI_W_T_Resident_137_En::
 .string "I practice a new joke\ndaily. My Mime Jr. is my\pmost honest critic. I am\nmaking a show about\pbeginners. An honest loss\nbeats a fake victory.$"
SI_W_T_ResidentAfter_137::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_137_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_137::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_137_After
 msgbox SI_W_T_Resident_137, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_137_After:
 msgbox SI_W_T_ResidentAfter_137, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_138::
 .string "Hoje consegui ler um mapa\nsem ajuda. Amanhã vou\pdesenhar meu próprio\ncaminho. Estou montando um\pprograma sobre iniciantes.\nPrefiro uma derrota\phonesta a uma vitória\ninventada.$"
SI_W_T_Resident_138_En::
 .string "Today I read a map alone.\nTomorrow I will draw my\pown path. I am making a\nshow about beginners. An\phonest loss beats a fake\nvictory.$"
SI_W_T_ResidentAfter_138::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_138_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_138::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_138_After
 msgbox SI_W_T_Resident_138, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_138_After:
 msgbox SI_W_T_ResidentAfter_138, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_139::
 .string "Um parceiro cansado merece\ndescanso. Vitória nenhuma\ppaga confiança perdida. O\nrelógio da estação atrasou\ptrês vezes. O meu\nadiantou. Como chego no\phorário assim?$"
SI_W_T_Resident_139_En::
 .string "A tired partner deserves\nrest. No win pays for lost\ptrust. The station clock\nslowed three times. Mine\psped up. How can I arrive\non time?$"
SI_W_T_ResidentAfter_139::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_139_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_139::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_139_After
 msgbox SI_W_T_Resident_139, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_139_After:
 msgbox SI_W_T_ResidentAfter_139, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_140::
 .string "Meu pai me ensinou a\nreconhecer os passos de\pcada Pokémon do pasto. Na\nescola, a professora pediu\puma redação sobre nosso\nprimeiro parceiro. Chorei\pescrevendo a minha.$"
SI_W_T_Resident_140_En::
 .string "Dad taught me to recognize\nevery Pokemon by its\pfootsteps. Our teacher\nasked us to write about\pour first partner. I cried\nwriting mine.$"
SI_W_T_ResidentAfter_140::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_140_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_140::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_140_After
 msgbox SI_W_T_Resident_140, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_140_After:
 msgbox SI_W_T_ResidentAfter_140, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_141::
 .string "Meu Ponyta corre ao meu\nlado, sem rédea. A escolha\pdele importa para mim. O\nrelógio da estação atrasou\ptrês vezes. O meu\nadiantou. Como chego no\phorário assim?$"
SI_W_T_Resident_141_En::
 .string "My Ponyta runs by my side\nwithout reins. His choice\pmatters to me. The station\nclock slowed three times.\pMine sped up. How can I\narrive on time?$"
SI_W_T_ResidentAfter_141::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_141_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_141::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_141_After
 msgbox SI_W_T_Resident_141, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_141_After:
 msgbox SI_W_T_ResidentAfter_141, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_142::
 .string "Guardo a primeira Poké\nBall. Ainda lembro como\pminha mão tremia. Na\nescola, a professora pediu\puma redação sobre nosso\nprimeiro parceiro. Chorei\pescrevendo a minha.$"
SI_W_T_Resident_142_En::
 .string "I keep my first Poke Ball.\nI still remember my\pshaking hand. Our teacher\nasked us to write about\pour first partner. I cried\nwriting mine.$"
SI_W_T_ResidentAfter_142::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_142_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_142::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_142_After
 msgbox SI_W_T_Resident_142, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_142_After:
 msgbox SI_W_T_ResidentAfter_142, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_143::
 .string "Levo chocolate quente\nextra. Sempre aparece um\pviajante que precisa.\nEstou montando um programa\psobre iniciantes. Prefiro\numa derrota honesta a uma\pvitória inventada.$"
SI_W_T_Resident_143_En::
 .string "I pack extra hot\nchocolate. A traveler\palways needs some. I am\nmaking a show about\pbeginners. An honest loss\nbeats a fake victory.$"
SI_W_T_ResidentAfter_143::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_143_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_143::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_143_After
 msgbox SI_W_T_Resident_143, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_143_After:
 msgbox SI_W_T_ResidentAfter_143, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_144::
 .string "Cuido das ferramentas\nantes de sair. Meu\pparceiro conta comigo. O\nrelógio da estação atrasou\ptrês vezes. O meu\nadiantou. Como chego no\phorário assim?$"
SI_W_T_Resident_144_En::
 .string "I check my tools before\nleaving. My partner relies\pon me. The station clock\nslowed three times. Mine\psped up. How can I arrive\non time?$"
SI_W_T_ResidentAfter_144::
 .string "Vi vocês ajudando na\ncrise. Quero que meu filho\pcresça sabendo que alguém\nse importou.$"
SI_W_T_ResidentAfter_144_En::
 .string "I saw you help in the\ncrisis. I want my son to\pknow someone cared.$"
SI_W_Resident_144::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_144_After
 msgbox SI_W_T_Resident_144, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_144_After:
 msgbox SI_W_T_ResidentAfter_144, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_145::
 .string "Pescar exige esperar.\nAprendi mais com a água do\pque com pressa. Na escola,\na professora pediu uma\predação sobre nosso\nprimeiro parceiro. Chorei\pescrevendo a minha.$"
SI_W_T_Resident_145_En::
 .string "Fishing takes patience.\nWater taught me more than\prushing. Our teacher asked\nus to write about our\pfirst partner. I cried\nwriting mine.$"
SI_W_T_ResidentAfter_145::
 .string "O ar voltou a ter cheiro\nde chuva. Eu nem percebia\po quanto sentia falta.$"
SI_W_T_ResidentAfter_145_En::
 .string "The air smells like rain\nagain. I had not realized\phow much I missed it.$"
SI_W_Resident_145::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_145_After
 msgbox SI_W_T_Resident_145, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_145_After:
 msgbox SI_W_T_ResidentAfter_145, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_146::
 .string "Marquei o caminho para\nquem vem depois. Uma\ptrilha boa se compartilha.\nEstou montando um programa\psobre iniciantes. Prefiro\numa derrota honesta a uma\pvitória inventada.$"
SI_W_T_Resident_146_En::
 .string "I marked the path for the\nnext traveler. A good\ptrail is shared. I am\nmaking a show about\pbeginners. An honest loss\nbeats a fake victory.$"
SI_W_T_ResidentAfter_146::
 .string "Vamos fazer uma festa\npequena. Cada pessoa traz\palgo; ninguém precisa\npagar para entrar.$"
SI_W_T_ResidentAfter_146_En::
 .string "We are having a small\nparty. Everyone brings\psomething; nobody pays to\njoin.$"
SI_W_Resident_146::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_146_After
 msgbox SI_W_T_Resident_146, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_146_After:
 msgbox SI_W_T_ResidentAfter_146, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_147::
 .string "Anoto também os erros. Um\nresultado bonito não vale\pse estiver errado. Estou\nmontando um programa sobre\piniciantes. Prefiro uma\nderrota honesta a uma\pvitória inventada.$"
SI_W_T_Resident_147_En::
 .string "I record mistakes too. A\npretty result is worthless\pif it is wrong. I am\nmaking a show about\pbeginners. An honest loss\nbeats a fake victory.$"
SI_W_T_ResidentAfter_147::
 .string "O ar voltou a ter cheiro\nde chuva. Eu nem percebia\po quanto sentia falta.$"
SI_W_T_ResidentAfter_147_En::
 .string "The air smells like rain\nagain. I had not realized\phow much I missed it.$"
SI_W_Resident_147::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_147_After
 msgbox SI_W_T_Resident_147, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_147_After:
 msgbox SI_W_T_ResidentAfter_147, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_148::
 .string "Meu Kricketune acompanha a\nmelodia. A gente erra\pjunto e tenta de novo. O\nrelógio da estação atrasou\ptrês vezes. O meu\nadiantou. Como chego no\phorário assim?$"
SI_W_T_Resident_148_En::
 .string "My Kricketune follows the\nmelody. We miss together\pand try again. The station\nclock slowed three times.\pMine sped up. How can I\narrive on time?$"
SI_W_T_ResidentAfter_148::
 .string "Vamos fazer uma festa\npequena. Cada pessoa traz\palgo; ninguém precisa\npagar para entrar.$"
SI_W_T_ResidentAfter_148_En::
 .string "We are having a small\nparty. Everyone brings\psomething; nobody pays to\njoin.$"
SI_W_Resident_148::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_148_After
 msgbox SI_W_T_Resident_148, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_148_After:
 msgbox SI_W_T_ResidentAfter_148, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_149::
 .string "Treino uma piada nova por\ndia. Meu Mime Jr. é meu\pcrítico mais sincero. Na\nescola, a professora pediu\puma redação sobre nosso\nprimeiro parceiro. Chorei\pescrevendo a minha.$"
SI_W_T_Resident_149_En::
 .string "I practice a new joke\ndaily. My Mime Jr. is my\pmost honest critic. Our\nteacher asked us to write\pabout our first partner. I\ncried writing mine.$"
SI_W_T_ResidentAfter_149::
 .string "Vi vocês ajudando na\ncrise. Quero que meu filho\pcresça sabendo que alguém\nse importou.$"
SI_W_T_ResidentAfter_149_En::
 .string "I saw you help in the\ncrisis. I want my son to\pknow someone cared.$"
SI_W_Resident_149::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_149_After
 msgbox SI_W_T_Resident_149, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_149_After:
 msgbox SI_W_T_ResidentAfter_149, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_150::
 .string "Hoje consegui ler um mapa\nsem ajuda. Amanhã vou\pdesenhar meu próprio\ncaminho. Estou montando um\pprograma sobre iniciantes.\nPrefiro uma derrota\phonesta a uma vitória\ninventada.$"
SI_W_T_Resident_150_En::
 .string "Today I read a map alone.\nTomorrow I will draw my\pown path. I am making a\nshow about beginners. An\phonest loss beats a fake\nvictory.$"
SI_W_T_ResidentAfter_150::
 .string "O ar voltou a ter cheiro\nde chuva. Eu nem percebia\po quanto sentia falta.$"
SI_W_T_ResidentAfter_150_En::
 .string "The air smells like rain\nagain. I had not realized\phow much I missed it.$"
SI_W_Resident_150::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_150_After
 msgbox SI_W_T_Resident_150, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_150_After:
 msgbox SI_W_T_ResidentAfter_150, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_151::
 .string "Um parceiro cansado merece\ndescanso. Vitória nenhuma\ppaga confiança perdida. O\nrelógio da estação atrasou\ptrês vezes. O meu\nadiantou. Como chego no\phorário assim?$"
SI_W_T_Resident_151_En::
 .string "A tired partner deserves\nrest. No win pays for lost\ptrust. The station clock\nslowed three times. Mine\psped up. How can I arrive\non time?$"
SI_W_T_ResidentAfter_151::
 .string "Vamos fazer uma festa\npequena. Cada pessoa traz\palgo; ninguém precisa\npagar para entrar.$"
SI_W_T_ResidentAfter_151_En::
 .string "We are having a small\nparty. Everyone brings\psomething; nobody pays to\njoin.$"
SI_W_Resident_151::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_151_After
 msgbox SI_W_T_Resident_151, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_151_After:
 msgbox SI_W_T_ResidentAfter_151, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_152::
 .string "Meu pai me ensinou a\nreconhecer os passos de\pcada Pokémon do pasto. Na\nescola, a professora pediu\puma redação sobre nosso\nprimeiro parceiro. Chorei\pescrevendo a minha.$"
SI_W_T_Resident_152_En::
 .string "Dad taught me to recognize\nevery Pokemon by its\pfootsteps. Our teacher\nasked us to write about\pour first partner. I cried\nwriting mine.$"
SI_W_T_ResidentAfter_152::
 .string "Vi vocês ajudando na\ncrise. Quero que meu filho\pcresça sabendo que alguém\nse importou.$"
SI_W_T_ResidentAfter_152_En::
 .string "I saw you help in the\ncrisis. I want my son to\pknow someone cared.$"
SI_W_Resident_152::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_152_After
 msgbox SI_W_T_Resident_152, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_152_After:
 msgbox SI_W_T_ResidentAfter_152, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_153::
 .string "Meu Ponyta corre ao meu\nlado, sem rédea. A escolha\pdele importa para mim.\nEstou montando um programa\psobre iniciantes. Prefiro\numa derrota honesta a uma\pvitória inventada.$"
SI_W_T_Resident_153_En::
 .string "My Ponyta runs by my side\nwithout reins. His choice\pmatters to me. I am making\na show about beginners. An\phonest loss beats a fake\nvictory.$"
SI_W_T_ResidentAfter_153::
 .string "O ar voltou a ter cheiro\nde chuva. Eu nem percebia\po quanto sentia falta.$"
SI_W_T_ResidentAfter_153_En::
 .string "The air smells like rain\nagain. I had not realized\phow much I missed it.$"
SI_W_Resident_153::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_153_After
 msgbox SI_W_T_Resident_153, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_153_After:
 msgbox SI_W_T_ResidentAfter_153, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_154::
 .string "Guardo a primeira Poké\nBall. Ainda lembro como\pminha mão tremia. O\nrelógio da estação atrasou\ptrês vezes. O meu\nadiantou. Como chego no\phorário assim?$"
SI_W_T_Resident_154_En::
 .string "I keep my first Poke Ball.\nI still remember my\pshaking hand. The station\nclock slowed three times.\pMine sped up. How can I\narrive on time?$"
SI_W_T_ResidentAfter_154::
 .string "Vamos fazer uma festa\npequena. Cada pessoa traz\palgo; ninguém precisa\npagar para entrar.$"
SI_W_T_ResidentAfter_154_En::
 .string "We are having a small\nparty. Everyone brings\psomething; nobody pays to\njoin.$"
SI_W_Resident_154::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_154_After
 msgbox SI_W_T_Resident_154, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_154_After:
 msgbox SI_W_T_ResidentAfter_154, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_155::
 .string "Levo chocolate quente\nextra. Sempre aparece um\pviajante que precisa. Na\nescola, a professora pediu\puma redação sobre nosso\nprimeiro parceiro. Chorei\pescrevendo a minha.$"
SI_W_T_Resident_155_En::
 .string "I pack extra hot\nchocolate. A traveler\palways needs some. Our\nteacher asked us to write\pabout our first partner. I\ncried writing mine.$"
SI_W_T_ResidentAfter_155::
 .string "Vi vocês ajudando na\ncrise. Quero que meu filho\pcresça sabendo que alguém\nse importou.$"
SI_W_T_ResidentAfter_155_En::
 .string "I saw you help in the\ncrisis. I want my son to\pknow someone cared.$"
SI_W_Resident_155::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_155_After
 msgbox SI_W_T_Resident_155, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_155_After:
 msgbox SI_W_T_ResidentAfter_155, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_156::
 .string "Cuido das ferramentas\nantes de sair. Meu\pparceiro conta comigo.\nEstou montando um programa\psobre iniciantes. Prefiro\numa derrota honesta a uma\pvitória inventada.$"
SI_W_T_Resident_156_En::
 .string "I check my tools before\nleaving. My partner relies\pon me. I am making a show\nabout beginners. An honest\ploss beats a fake victory.$"
SI_W_T_ResidentAfter_156::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_156_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_156::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_156_After
 msgbox SI_W_T_Resident_156, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_156_After:
 msgbox SI_W_T_ResidentAfter_156, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_157::
 .string "Pescar exige esperar.\nAprendi mais com a água do\pque com pressa. O relógio\nda estação atrasou três\pvezes. O meu adiantou.\nComo chego no horário\passim?$"
SI_W_T_Resident_157_En::
 .string "Fishing takes patience.\nWater taught me more than\prushing. The station clock\nslowed three times. Mine\psped up. How can I arrive\non time?$"
SI_W_T_ResidentAfter_157::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_157_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_157::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_157_After
 msgbox SI_W_T_Resident_157, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_157_After:
 msgbox SI_W_T_ResidentAfter_157, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_158::
 .string "Marquei o caminho para\nquem vem depois. Uma\ptrilha boa se compartilha.\nNa escola, a professora\ppediu uma redação sobre\nnosso primeiro parceiro.\pChorei escrevendo a minha.$"
SI_W_T_Resident_158_En::
 .string "I marked the path for the\nnext traveler. A good\ptrail is shared. Our\nteacher asked us to write\pabout our first partner. I\ncried writing mine.$"
SI_W_T_ResidentAfter_158::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_158_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_158::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_158_After
 msgbox SI_W_T_Resident_158, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_158_After:
 msgbox SI_W_T_ResidentAfter_158, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_159::
 .string "Anoto também os erros. Um\nresultado bonito não vale\pse estiver errado. Estou\nmontando um programa sobre\piniciantes. Prefiro uma\nderrota honesta a uma\pvitória inventada.$"
SI_W_T_Resident_159_En::
 .string "I record mistakes too. A\npretty result is worthless\pif it is wrong. I am\nmaking a show about\pbeginners. An honest loss\nbeats a fake victory.$"
SI_W_T_ResidentAfter_159::
 .string "O ar voltou a ter cheiro\nde chuva. Eu nem percebia\po quanto sentia falta.$"
SI_W_T_ResidentAfter_159_En::
 .string "The air smells like rain\nagain. I had not realized\phow much I missed it.$"
SI_W_Resident_159::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_159_After
 msgbox SI_W_T_Resident_159, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_159_After:
 msgbox SI_W_T_ResidentAfter_159, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_160::
 .string "Meu Kricketune acompanha a\nmelodia. A gente erra\pjunto e tenta de novo. O\nrelógio da estação atrasou\ptrês vezes. O meu\nadiantou. Como chego no\phorário assim?$"
SI_W_T_Resident_160_En::
 .string "My Kricketune follows the\nmelody. We miss together\pand try again. The station\nclock slowed three times.\pMine sped up. How can I\narrive on time?$"
SI_W_T_ResidentAfter_160::
 .string "Vamos fazer uma festa\npequena. Cada pessoa traz\palgo; ninguém precisa\npagar para entrar.$"
SI_W_T_ResidentAfter_160_En::
 .string "We are having a small\nparty. Everyone brings\psomething; nobody pays to\njoin.$"
SI_W_Resident_160::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_160_After
 msgbox SI_W_T_Resident_160, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_160_After:
 msgbox SI_W_T_ResidentAfter_160, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_161::
 .string "Treino uma piada nova por\ndia. Meu Mime Jr. é meu\pcrítico mais sincero. Na\nescola, a professora pediu\puma redação sobre nosso\nprimeiro parceiro. Chorei\pescrevendo a minha.$"
SI_W_T_Resident_161_En::
 .string "I practice a new joke\ndaily. My Mime Jr. is my\pmost honest critic. Our\nteacher asked us to write\pabout our first partner. I\ncried writing mine.$"
SI_W_T_ResidentAfter_161::
 .string "Vi vocês ajudando na\ncrise. Quero que meu filho\pcresça sabendo que alguém\nse importou.$"
SI_W_T_ResidentAfter_161_En::
 .string "I saw you help in the\ncrisis. I want my son to\pknow someone cared.$"
SI_W_Resident_161::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_161_After
 msgbox SI_W_T_Resident_161, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_161_After:
 msgbox SI_W_T_ResidentAfter_161, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_162::
 .string "Hoje consegui ler um mapa\nsem ajuda. Amanhã vou\pdesenhar meu próprio\ncaminho. Estou montando um\pprograma sobre iniciantes.\nPrefiro uma derrota\phonesta a uma vitória\ninventada.$"
SI_W_T_Resident_162_En::
 .string "Today I read a map alone.\nTomorrow I will draw my\pown path. I am making a\nshow about beginners. An\phonest loss beats a fake\nvictory.$"
SI_W_T_ResidentAfter_162::
 .string "O ar voltou a ter cheiro\nde chuva. Eu nem percebia\po quanto sentia falta.$"
SI_W_T_ResidentAfter_162_En::
 .string "The air smells like rain\nagain. I had not realized\phow much I missed it.$"
SI_W_Resident_162::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_162_After
 msgbox SI_W_T_Resident_162, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_162_After:
 msgbox SI_W_T_ResidentAfter_162, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_163::
 .string "Um parceiro cansado merece\ndescanso. Vitória nenhuma\ppaga confiança perdida.\nEstou montando um programa\psobre iniciantes. Prefiro\numa derrota honesta a uma\pvitória inventada.$"
SI_W_T_Resident_163_En::
 .string "A tired partner deserves\nrest. No win pays for lost\ptrust. I am making a show\nabout beginners. An honest\ploss beats a fake victory.$"
SI_W_T_ResidentAfter_163::
 .string "Vi vocês ajudando na\ncrise. Quero que meu filho\pcresça sabendo que alguém\nse importou.$"
SI_W_T_ResidentAfter_163_En::
 .string "I saw you help in the\ncrisis. I want my son to\pknow someone cared.$"
SI_W_Resident_163::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_163_After
 msgbox SI_W_T_Resident_163, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_163_After:
 msgbox SI_W_T_ResidentAfter_163, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_164::
 .string "Meu pai me ensinou a\nreconhecer os passos de\pcada Pokémon do pasto. O\nrelógio da estação atrasou\ptrês vezes. O meu\nadiantou. Como chego no\phorário assim?$"
SI_W_T_Resident_164_En::
 .string "Dad taught me to recognize\nevery Pokemon by its\pfootsteps. The station\nclock slowed three times.\pMine sped up. How can I\narrive on time?$"
SI_W_T_ResidentAfter_164::
 .string "O ar voltou a ter cheiro\nde chuva. Eu nem percebia\po quanto sentia falta.$"
SI_W_T_ResidentAfter_164_En::
 .string "The air smells like rain\nagain. I had not realized\phow much I missed it.$"
SI_W_Resident_164::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_164_After
 msgbox SI_W_T_Resident_164, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_164_After:
 msgbox SI_W_T_ResidentAfter_164, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_165::
 .string "Meu Ponyta corre ao meu\nlado, sem rédea. A escolha\pdele importa para mim. Na\nescola, a professora pediu\puma redação sobre nosso\nprimeiro parceiro. Chorei\pescrevendo a minha.$"
SI_W_T_Resident_165_En::
 .string "My Ponyta runs by my side\nwithout reins. His choice\pmatters to me. Our teacher\nasked us to write about\pour first partner. I cried\nwriting mine.$"
SI_W_T_ResidentAfter_165::
 .string "Vamos fazer uma festa\npequena. Cada pessoa traz\palgo; ninguém precisa\npagar para entrar.$"
SI_W_T_ResidentAfter_165_En::
 .string "We are having a small\nparty. Everyone brings\psomething; nobody pays to\njoin.$"
SI_W_Resident_165::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_165_After
 msgbox SI_W_T_Resident_165, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_165_After:
 msgbox SI_W_T_ResidentAfter_165, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_166::
 .string "Guardo a primeira Poké\nBall. Ainda lembro como\pminha mão tremia. Caligo\ncomprou minério em nome da\pGaláctica. Quando\nperguntei pelo recibo, ele\pdesapareceu.$"
SI_W_T_Resident_166_En::
 .string "I keep my first Poke Ball.\nI still remember my\pshaking hand. Caligo\nbought ore for Galactic.\pWhen I asked for a\nreceipt, he disappeared.$"
SI_W_T_ResidentAfter_166::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_166_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_166::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_166_After
 msgbox SI_W_T_Resident_166, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_166_After:
 msgbox SI_W_T_ResidentAfter_166, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_167::
 .string "Levo chocolate quente\nextra. Sempre aparece um\pviajante que precisa.\nRoark conhece cada turno\pda mina. Ontem cobriu um\ncolega para ele ver o\pnascimento da filha.$"
SI_W_T_Resident_167_En::
 .string "I pack extra hot\nchocolate. A traveler\palways needs some. Roark\nknows every mine shift.\pYesterday he covered for a\nnew father.$"
SI_W_T_ResidentAfter_167::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_167_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_167::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_167_After
 msgbox SI_W_T_Resident_167, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_167_After:
 msgbox SI_W_T_ResidentAfter_167, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_168::
 .string "Cuido das ferramentas\nantes de sair. Meu\pparceiro conta comigo. Meu\nGeodude dorme no carrinho\pvazio. Confiro duas vezes\nantes de empurrar!$"
SI_W_T_Resident_168_En::
 .string "I check my tools before\nleaving. My partner relies\pon me. My Geodude sleeps\nin an empty cart. I check\ptwice before pushing!$"
SI_W_T_ResidentAfter_168::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_168_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_168::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_168_After
 msgbox SI_W_T_Resident_168, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_168_After:
 msgbox SI_W_T_ResidentAfter_168, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_169::
 .string "Pescar exige esperar.\nAprendi mais com a água do\pque com pressa. Caligo\ncomprou minério em nome da\pGaláctica. Quando\nperguntei pelo recibo, ele\pdesapareceu.$"
SI_W_T_Resident_169_En::
 .string "Fishing takes patience.\nWater taught me more than\prushing. Caligo bought ore\nfor Galactic. When I asked\pfor a receipt, he\ndisappeared.$"
SI_W_T_ResidentAfter_169::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_169_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_169::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_169_After
 msgbox SI_W_T_Resident_169, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_169_After:
 msgbox SI_W_T_ResidentAfter_169, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_170::
 .string "Marquei o caminho para\nquem vem depois. Uma\ptrilha boa se compartilha.\nRoark conhece cada turno\pda mina. Ontem cobriu um\ncolega para ele ver o\pnascimento da filha.$"
SI_W_T_Resident_170_En::
 .string "I marked the path for the\nnext traveler. A good\ptrail is shared. Roark\nknows every mine shift.\pYesterday he covered for a\nnew father.$"
SI_W_T_ResidentAfter_170::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_170_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_170::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_170_After
 msgbox SI_W_T_Resident_170, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_170_After:
 msgbox SI_W_T_ResidentAfter_170, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_171::
 .string "Anoto também os erros. Um\nresultado bonito não vale\pse estiver errado. Meu\nGeodude dorme no carrinho\pvazio. Confiro duas vezes\nantes de empurrar!$"
SI_W_T_Resident_171_En::
 .string "I record mistakes too. A\npretty result is worthless\pif it is wrong. My Geodude\nsleeps in an empty cart. I\pcheck twice before\npushing!$"
SI_W_T_ResidentAfter_171::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_171_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_171::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_171_After
 msgbox SI_W_T_Resident_171, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_171_After:
 msgbox SI_W_T_ResidentAfter_171, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_172::
 .string "Meu Kricketune acompanha a\nmelodia. A gente erra\pjunto e tenta de novo.\nCaligo comprou minério em\pnome da Galáctica. Quando\nperguntei pelo recibo, ele\pdesapareceu.$"
SI_W_T_Resident_172_En::
 .string "My Kricketune follows the\nmelody. We miss together\pand try again. Caligo\nbought ore for Galactic.\pWhen I asked for a\nreceipt, he disappeared.$"
SI_W_T_ResidentAfter_172::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_172_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_172::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_172_After
 msgbox SI_W_T_Resident_172, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_172_After:
 msgbox SI_W_T_ResidentAfter_172, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_173::
 .string "Treino uma piada nova por\ndia. Meu Mime Jr. é meu\pcrítico mais sincero.\nRoark conhece cada turno\pda mina. Ontem cobriu um\ncolega para ele ver o\pnascimento da filha.$"
SI_W_T_Resident_173_En::
 .string "I practice a new joke\ndaily. My Mime Jr. is my\pmost honest critic. Roark\nknows every mine shift.\pYesterday he covered for a\nnew father.$"
SI_W_T_ResidentAfter_173::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_173_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_173::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_173_After
 msgbox SI_W_T_Resident_173, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_173_After:
 msgbox SI_W_T_ResidentAfter_173, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_174::
 .string "Hoje consegui ler um mapa\nsem ajuda. Amanhã vou\pdesenhar meu próprio\ncaminho. Meu Geodude dorme\pno carrinho vazio. Confiro\nduas vezes antes de\pempurrar!$"
SI_W_T_Resident_174_En::
 .string "Today I read a map alone.\nTomorrow I will draw my\pown path. My Geodude\nsleeps in an empty cart. I\pcheck twice before\npushing!$"
SI_W_T_ResidentAfter_174::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_174_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_174::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_174_After
 msgbox SI_W_T_Resident_174, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_174_After:
 msgbox SI_W_T_ResidentAfter_174, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_175::
 .string "Um parceiro cansado merece\ndescanso. Vitória nenhuma\ppaga confiança perdida.\nCaligo comprou minério em\pnome da Galáctica. Quando\nperguntei pelo recibo, ele\pdesapareceu.$"
SI_W_T_Resident_175_En::
 .string "A tired partner deserves\nrest. No win pays for lost\ptrust. Caligo bought ore\nfor Galactic. When I asked\pfor a receipt, he\ndisappeared.$"
SI_W_T_ResidentAfter_175::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_175_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_175::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_175_After
 msgbox SI_W_T_Resident_175, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_175_After:
 msgbox SI_W_T_ResidentAfter_175, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_176::
 .string "Meu pai me ensinou a\nreconhecer os passos de\pcada Pokémon do pasto.\nRoark conhece cada turno\pda mina. Ontem cobriu um\ncolega para ele ver o\pnascimento da filha.$"
SI_W_T_Resident_176_En::
 .string "Dad taught me to recognize\nevery Pokemon by its\pfootsteps. Roark knows\nevery mine shift.\pYesterday he covered for a\nnew father.$"
SI_W_T_ResidentAfter_176::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_176_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_176::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_176_After
 msgbox SI_W_T_Resident_176, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_176_After:
 msgbox SI_W_T_ResidentAfter_176, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_177::
 .string "Meu Ponyta corre ao meu\nlado, sem rédea. A escolha\pdele importa para mim. Meu\nGeodude dorme no carrinho\pvazio. Confiro duas vezes\nantes de empurrar!$"
SI_W_T_Resident_177_En::
 .string "My Ponyta runs by my side\nwithout reins. His choice\pmatters to me. My Geodude\nsleeps in an empty cart. I\pcheck twice before\npushing!$"
SI_W_T_ResidentAfter_177::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_177_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_177::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_177_After
 msgbox SI_W_T_Resident_177, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_177_After:
 msgbox SI_W_T_ResidentAfter_177, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_178::
 .string "Guardo a primeira Poké\nBall. Ainda lembro como\pminha mão tremia. Caligo\ncomprou minério em nome da\pGaláctica. Quando\nperguntei pelo recibo, ele\pdesapareceu.$"
SI_W_T_Resident_178_En::
 .string "I keep my first Poke Ball.\nI still remember my\pshaking hand. Caligo\nbought ore for Galactic.\pWhen I asked for a\nreceipt, he disappeared.$"
SI_W_T_ResidentAfter_178::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_178_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_178::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_178_After
 msgbox SI_W_T_Resident_178, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_178_After:
 msgbox SI_W_T_ResidentAfter_178, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_179::
 .string "Levo chocolate quente\nextra. Sempre aparece um\pviajante que precisa.\nRoark conhece cada turno\pda mina. Ontem cobriu um\ncolega para ele ver o\pnascimento da filha.$"
SI_W_T_Resident_179_En::
 .string "I pack extra hot\nchocolate. A traveler\palways needs some. Roark\nknows every mine shift.\pYesterday he covered for a\nnew father.$"
SI_W_T_ResidentAfter_179::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_179_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_179::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_179_After
 msgbox SI_W_T_Resident_179, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_179_After:
 msgbox SI_W_T_ResidentAfter_179, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_180::
 .string "Cuido das ferramentas\nantes de sair. Meu\pparceiro conta comigo. Meu\nGeodude dorme no carrinho\pvazio. Confiro duas vezes\nantes de empurrar!$"
SI_W_T_Resident_180_En::
 .string "I check my tools before\nleaving. My partner relies\pon me. My Geodude sleeps\nin an empty cart. I check\ptwice before pushing!$"
SI_W_T_ResidentAfter_180::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_180_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_180::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_180_After
 msgbox SI_W_T_Resident_180, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_180_After:
 msgbox SI_W_T_ResidentAfter_180, MSGBOX_DEFAULT
 release
 end
SI_W_T_Sign_OreburghCity_0::
 .string "Caligo comprou minério em\nnome da Galáctica. Quando\pperguntei pelo recibo, ele\ndesapareceu.$"
SI_W_T_Sign_OreburghCity_0_En::
 .string "Caligo bought ore for\nGalactic. When I asked for\pa receipt, he disappeared.$"
SI_W_Sign_OreburghCity_0::
 msgbox SI_W_T_Sign_OreburghCity_0, MSGBOX_NPC
 end
SI_W_T_Sign_OreburghCity_1::
 .string "Roark conhece cada turno\nda mina. Ontem cobriu um\pcolega para ele ver o\nnascimento da filha.$"
SI_W_T_Sign_OreburghCity_1_En::
 .string "Roark knows every mine\nshift. Yesterday he\pcovered for a new father.$"
SI_W_Sign_OreburghCity_1::
 msgbox SI_W_T_Sign_OreburghCity_1, MSGBOX_NPC
 end
SI_W_T_Sign_OreburghCity_2::
 .string "Meu Geodude dorme no\ncarrinho vazio. Confiro\pduas vezes antes de\nempurrar!$"
SI_W_T_Sign_OreburghCity_2_En::
 .string "My Geodude sleeps in an\nempty cart. I check twice\pbefore pushing!$"
SI_W_Sign_OreburghCity_2::
 msgbox SI_W_T_Sign_OreburghCity_2, MSGBOX_NPC
 end
SI_W_T_Sign_OreburghCity_3::
 .string "Caligo comprou minério em\nnome da Galáctica. Quando\pperguntei pelo recibo, ele\ndesapareceu.$"
SI_W_T_Sign_OreburghCity_3_En::
 .string "Caligo bought ore for\nGalactic. When I asked for\pa receipt, he disappeared.$"
SI_W_Sign_OreburghCity_3::
 msgbox SI_W_T_Sign_OreburghCity_3, MSGBOX_NPC
 end
SI_W_T_Sign_OreburghCity_4::
 .string "Roark conhece cada turno\nda mina. Ontem cobriu um\pcolega para ele ver o\nnascimento da filha.$"
SI_W_T_Sign_OreburghCity_4_En::
 .string "Roark knows every mine\nshift. Yesterday he\pcovered for a new father.$"
SI_W_Sign_OreburghCity_4::
 msgbox SI_W_T_Sign_OreburghCity_4, MSGBOX_NPC
 end
SI_W_T_Sign_OreburghCity_5::
 .string "Meu Geodude dorme no\ncarrinho vazio. Confiro\pduas vezes antes de\nempurrar!$"
SI_W_T_Sign_OreburghCity_5_En::
 .string "My Geodude sleeps in an\nempty cart. I check twice\pbefore pushing!$"
SI_W_Sign_OreburghCity_5::
 msgbox SI_W_T_Sign_OreburghCity_5, MSGBOX_NPC
 end
SI_W_T_Sign_OreburghCity_6::
 .string "Caligo comprou minério em\nnome da Galáctica. Quando\pperguntei pelo recibo, ele\ndesapareceu.$"
SI_W_T_Sign_OreburghCity_6_En::
 .string "Caligo bought ore for\nGalactic. When I asked for\pa receipt, he disappeared.$"
SI_W_Sign_OreburghCity_6::
 msgbox SI_W_T_Sign_OreburghCity_6, MSGBOX_NPC
 end
SI_W_T_Resident_181::
 .string "Pescar exige esperar.\nAprendi mais com a água do\pque com pressa. Caligo\ncomprou minério em nome da\pGaláctica. Quando\nperguntei pelo recibo, ele\pdesapareceu.$"
SI_W_T_Resident_181_En::
 .string "Fishing takes patience.\nWater taught me more than\prushing. Caligo bought ore\nfor Galactic. When I asked\pfor a receipt, he\ndisappeared.$"
SI_W_T_ResidentAfter_181::
 .string "Vi vocês ajudando na\ncrise. Quero que meu filho\pcresça sabendo que alguém\nse importou.$"
SI_W_T_ResidentAfter_181_En::
 .string "I saw you help in the\ncrisis. I want my son to\pknow someone cared.$"
SI_W_Resident_181::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_181_After
 msgbox SI_W_T_Resident_181, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_181_After:
 msgbox SI_W_T_ResidentAfter_181, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_182::
 .string "Marquei o caminho para\nquem vem depois. Uma\ptrilha boa se compartilha.\nRoark conhece cada turno\pda mina. Ontem cobriu um\ncolega para ele ver o\pnascimento da filha.$"
SI_W_T_Resident_182_En::
 .string "I marked the path for the\nnext traveler. A good\ptrail is shared. Roark\nknows every mine shift.\pYesterday he covered for a\nnew father.$"
SI_W_T_ResidentAfter_182::
 .string "O ar voltou a ter cheiro\nde chuva. Eu nem percebia\po quanto sentia falta.$"
SI_W_T_ResidentAfter_182_En::
 .string "The air smells like rain\nagain. I had not realized\phow much I missed it.$"
SI_W_Resident_182::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_182_After
 msgbox SI_W_T_Resident_182, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_182_After:
 msgbox SI_W_T_ResidentAfter_182, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_183::
 .string "Anoto também os erros. Um\nresultado bonito não vale\pse estiver errado. Meu\nGeodude dorme no carrinho\pvazio. Confiro duas vezes\nantes de empurrar!$"
SI_W_T_Resident_183_En::
 .string "I record mistakes too. A\npretty result is worthless\pif it is wrong. My Geodude\nsleeps in an empty cart. I\pcheck twice before\npushing!$"
SI_W_T_ResidentAfter_183::
 .string "Vamos fazer uma festa\npequena. Cada pessoa traz\palgo; ninguém precisa\npagar para entrar.$"
SI_W_T_ResidentAfter_183_En::
 .string "We are having a small\nparty. Everyone brings\psomething; nobody pays to\njoin.$"
SI_W_Resident_183::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_183_After
 msgbox SI_W_T_Resident_183, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_183_After:
 msgbox SI_W_T_ResidentAfter_183, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_184::
 .string "Meu Kricketune acompanha a\nmelodia. A gente erra\pjunto e tenta de novo.\nCaligo comprou minério em\pnome da Galáctica. Quando\nperguntei pelo recibo, ele\pdesapareceu.$"
SI_W_T_Resident_184_En::
 .string "My Kricketune follows the\nmelody. We miss together\pand try again. Caligo\nbought ore for Galactic.\pWhen I asked for a\nreceipt, he disappeared.$"
SI_W_T_ResidentAfter_184::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_184_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_184::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_184_After
 msgbox SI_W_T_Resident_184, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_184_After:
 msgbox SI_W_T_ResidentAfter_184, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_185::
 .string "Treino uma piada nova por\ndia. Meu Mime Jr. é meu\pcrítico mais sincero.\nRoark conhece cada turno\pda mina. Ontem cobriu um\ncolega para ele ver o\pnascimento da filha.$"
SI_W_T_Resident_185_En::
 .string "I practice a new joke\ndaily. My Mime Jr. is my\pmost honest critic. Roark\nknows every mine shift.\pYesterday he covered for a\nnew father.$"
SI_W_T_ResidentAfter_185::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_185_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_185::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_185_After
 msgbox SI_W_T_Resident_185, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_185_After:
 msgbox SI_W_T_ResidentAfter_185, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_186::
 .string "Hoje consegui ler um mapa\nsem ajuda. Amanhã vou\pdesenhar meu próprio\ncaminho. Meu Geodude dorme\pno carrinho vazio. Confiro\nduas vezes antes de\pempurrar!$"
SI_W_T_Resident_186_En::
 .string "Today I read a map alone.\nTomorrow I will draw my\pown path. My Geodude\nsleeps in an empty cart. I\pcheck twice before\npushing!$"
SI_W_T_ResidentAfter_186::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_186_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_186::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_186_After
 msgbox SI_W_T_Resident_186, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_186_After:
 msgbox SI_W_T_ResidentAfter_186, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_187::
 .string "Um parceiro cansado merece\ndescanso. Vitória nenhuma\ppaga confiança perdida.\nCaligo comprou minério em\pnome da Galáctica. Quando\nperguntei pelo recibo, ele\pdesapareceu.$"
SI_W_T_Resident_187_En::
 .string "A tired partner deserves\nrest. No win pays for lost\ptrust. Caligo bought ore\nfor Galactic. When I asked\pfor a receipt, he\ndisappeared.$"
SI_W_T_ResidentAfter_187::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_187_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_187::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_187_After
 msgbox SI_W_T_Resident_187, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_187_After:
 msgbox SI_W_T_ResidentAfter_187, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_188::
 .string "Meu pai me ensinou a\nreconhecer os passos de\pcada Pokémon do pasto.\nCaligo comprou minério em\pnome da Galáctica. Quando\nperguntei pelo recibo, ele\pdesapareceu.$"
SI_W_T_Resident_188_En::
 .string "Dad taught me to recognize\nevery Pokemon by its\pfootsteps. Caligo bought\nore for Galactic. When I\pasked for a receipt, he\ndisappeared.$"
SI_W_T_ResidentAfter_188::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_188_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_188::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_188_After
 msgbox SI_W_T_Resident_188, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_188_After:
 msgbox SI_W_T_ResidentAfter_188, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_189::
 .string "Meu Ponyta corre ao meu\nlado, sem rédea. A escolha\pdele importa para mim.\nRoark conhece cada turno\pda mina. Ontem cobriu um\ncolega para ele ver o\pnascimento da filha.$"
SI_W_T_Resident_189_En::
 .string "My Ponyta runs by my side\nwithout reins. His choice\pmatters to me. Roark knows\nevery mine shift.\pYesterday he covered for a\nnew father.$"
SI_W_T_ResidentAfter_189::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_189_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_189::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_189_After
 msgbox SI_W_T_Resident_189, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_189_After:
 msgbox SI_W_T_ResidentAfter_189, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_190::
 .string "Guardo a primeira Poké\nBall. Ainda lembro como\pminha mão tremia. Meu\nGeodude dorme no carrinho\pvazio. Confiro duas vezes\nantes de empurrar!$"
SI_W_T_Resident_190_En::
 .string "I keep my first Poke Ball.\nI still remember my\pshaking hand. My Geodude\nsleeps in an empty cart. I\pcheck twice before\npushing!$"
SI_W_T_ResidentAfter_190::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_190_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_190::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_190_After
 msgbox SI_W_T_Resident_190, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_190_After:
 msgbox SI_W_T_ResidentAfter_190, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_191::
 .string "Levo chocolate quente\nextra. Sempre aparece um\pviajante que precisa.\nCaligo comprou minério em\pnome da Galáctica. Quando\nperguntei pelo recibo, ele\pdesapareceu.$"
SI_W_T_Resident_191_En::
 .string "I pack extra hot\nchocolate. A traveler\palways needs some. Caligo\nbought ore for Galactic.\pWhen I asked for a\nreceipt, he disappeared.$"
SI_W_T_ResidentAfter_191::
 .string "Vamos fazer uma festa\npequena. Cada pessoa traz\palgo; ninguém precisa\npagar para entrar.$"
SI_W_T_ResidentAfter_191_En::
 .string "We are having a small\nparty. Everyone brings\psomething; nobody pays to\njoin.$"
SI_W_Resident_191::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_191_After
 msgbox SI_W_T_Resident_191, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_191_After:
 msgbox SI_W_T_ResidentAfter_191, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_192::
 .string "Cuido das ferramentas\nantes de sair. Meu\pparceiro conta comigo.\nRoark conhece cada turno\pda mina. Ontem cobriu um\ncolega para ele ver o\pnascimento da filha.$"
SI_W_T_Resident_192_En::
 .string "I check my tools before\nleaving. My partner relies\pon me. Roark knows every\nmine shift. Yesterday he\pcovered for a new father.$"
SI_W_T_ResidentAfter_192::
 .string "Vi vocês ajudando na\ncrise. Quero que meu filho\pcresça sabendo que alguém\nse importou.$"
SI_W_T_ResidentAfter_192_En::
 .string "I saw you help in the\ncrisis. I want my son to\pknow someone cared.$"
SI_W_Resident_192::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_192_After
 msgbox SI_W_T_Resident_192, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_192_After:
 msgbox SI_W_T_ResidentAfter_192, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_193::
 .string "Pescar exige esperar.\nAprendi mais com a água do\pque com pressa. Meu\nGeodude dorme no carrinho\pvazio. Confiro duas vezes\nantes de empurrar!$"
SI_W_T_Resident_193_En::
 .string "Fishing takes patience.\nWater taught me more than\prushing. My Geodude sleeps\nin an empty cart. I check\ptwice before pushing!$"
SI_W_T_ResidentAfter_193::
 .string "O ar voltou a ter cheiro\nde chuva. Eu nem percebia\po quanto sentia falta.$"
SI_W_T_ResidentAfter_193_En::
 .string "The air smells like rain\nagain. I had not realized\phow much I missed it.$"
SI_W_Resident_193::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_193_After
 msgbox SI_W_T_Resident_193, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_193_After:
 msgbox SI_W_T_ResidentAfter_193, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_194::
 .string "Marquei o caminho para\nquem vem depois. Uma\ptrilha boa se compartilha.\nCaligo comprou minério em\pnome da Galáctica. Quando\nperguntei pelo recibo, ele\pdesapareceu.$"
SI_W_T_Resident_194_En::
 .string "I marked the path for the\nnext traveler. A good\ptrail is shared. Caligo\nbought ore for Galactic.\pWhen I asked for a\nreceipt, he disappeared.$"
SI_W_T_ResidentAfter_194::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_194_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_194::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_194_After
 msgbox SI_W_T_Resident_194, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_194_After:
 msgbox SI_W_T_ResidentAfter_194, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_195::
 .string "Anoto também os erros. Um\nresultado bonito não vale\pse estiver errado. Roark\nconhece cada turno da\pmina. Ontem cobriu um\ncolega para ele ver o\pnascimento da filha.$"
SI_W_T_Resident_195_En::
 .string "I record mistakes too. A\npretty result is worthless\pif it is wrong. Roark\nknows every mine shift.\pYesterday he covered for a\nnew father.$"
SI_W_T_ResidentAfter_195::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_195_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_195::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_195_After
 msgbox SI_W_T_Resident_195, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_195_After:
 msgbox SI_W_T_ResidentAfter_195, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_196::
 .string "Meu Kricketune acompanha a\nmelodia. A gente erra\pjunto e tenta de novo. Meu\nGeodude dorme no carrinho\pvazio. Confiro duas vezes\nantes de empurrar!$"
SI_W_T_Resident_196_En::
 .string "My Kricketune follows the\nmelody. We miss together\pand try again. My Geodude\nsleeps in an empty cart. I\pcheck twice before\npushing!$"
SI_W_T_ResidentAfter_196::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_196_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_196::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_196_After
 msgbox SI_W_T_Resident_196, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_196_After:
 msgbox SI_W_T_ResidentAfter_196, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_197::
 .string "Treino uma piada nova por\ndia. Meu Mime Jr. é meu\pcrítico mais sincero.\nCaligo comprou minério em\pnome da Galáctica. Quando\nperguntei pelo recibo, ele\pdesapareceu.$"
SI_W_T_Resident_197_En::
 .string "I practice a new joke\ndaily. My Mime Jr. is my\pmost honest critic. Caligo\nbought ore for Galactic.\pWhen I asked for a\nreceipt, he disappeared.$"
SI_W_T_ResidentAfter_197::
 .string "Vamos fazer uma festa\npequena. Cada pessoa traz\palgo; ninguém precisa\npagar para entrar.$"
SI_W_T_ResidentAfter_197_En::
 .string "We are having a small\nparty. Everyone brings\psomething; nobody pays to\njoin.$"
SI_W_Resident_197::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_197_After
 msgbox SI_W_T_Resident_197, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_197_After:
 msgbox SI_W_T_ResidentAfter_197, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_198::
 .string "Hoje consegui ler um mapa\nsem ajuda. Amanhã vou\pdesenhar meu próprio\ncaminho. Roark conhece\pcada turno da mina. Ontem\ncobriu um colega para ele\pver o nascimento da filha.$"
SI_W_T_Resident_198_En::
 .string "Today I read a map alone.\nTomorrow I will draw my\pown path. Roark knows\nevery mine shift.\pYesterday he covered for a\nnew father.$"
SI_W_T_ResidentAfter_198::
 .string "Vi vocês ajudando na\ncrise. Quero que meu filho\pcresça sabendo que alguém\nse importou.$"
SI_W_T_ResidentAfter_198_En::
 .string "I saw you help in the\ncrisis. I want my son to\pknow someone cared.$"
SI_W_Resident_198::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_198_After
 msgbox SI_W_T_Resident_198, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_198_After:
 msgbox SI_W_T_ResidentAfter_198, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_199::
 .string "Um parceiro cansado merece\ndescanso. Vitória nenhuma\ppaga confiança perdida.\nMeu Geodude dorme no\pcarrinho vazio. Confiro\nduas vezes antes de\pempurrar!$"
SI_W_T_Resident_199_En::
 .string "A tired partner deserves\nrest. No win pays for lost\ptrust. My Geodude sleeps\nin an empty cart. I check\ptwice before pushing!$"
SI_W_T_ResidentAfter_199::
 .string "O ar voltou a ter cheiro\nde chuva. Eu nem percebia\po quanto sentia falta.$"
SI_W_T_ResidentAfter_199_En::
 .string "The air smells like rain\nagain. I had not realized\phow much I missed it.$"
SI_W_Resident_199::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_199_After
 msgbox SI_W_T_Resident_199, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_199_After:
 msgbox SI_W_T_ResidentAfter_199, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_200::
 .string "Meu pai me ensinou a\nreconhecer os passos de\pcada Pokémon do pasto.\nCaligo comprou minério em\pnome da Galáctica. Quando\nperguntei pelo recibo, ele\pdesapareceu.$"
SI_W_T_Resident_200_En::
 .string "Dad taught me to recognize\nevery Pokemon by its\pfootsteps. Caligo bought\nore for Galactic. When I\pasked for a receipt, he\ndisappeared.$"
SI_W_T_ResidentAfter_200::
 .string "Vamos fazer uma festa\npequena. Cada pessoa traz\palgo; ninguém precisa\npagar para entrar.$"
SI_W_T_ResidentAfter_200_En::
 .string "We are having a small\nparty. Everyone brings\psomething; nobody pays to\njoin.$"
SI_W_Resident_200::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_200_After
 msgbox SI_W_T_Resident_200, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_200_After:
 msgbox SI_W_T_ResidentAfter_200, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_201::
 .string "Meu Ponyta corre ao meu\nlado, sem rédea. A escolha\pdele importa para mim.\nCaligo comprou minério em\pnome da Galáctica. Quando\nperguntei pelo recibo, ele\pdesapareceu.$"
SI_W_T_Resident_201_En::
 .string "My Ponyta runs by my side\nwithout reins. His choice\pmatters to me. Caligo\nbought ore for Galactic.\pWhen I asked for a\nreceipt, he disappeared.$"
SI_W_T_ResidentAfter_201::
 .string "O ar voltou a ter cheiro\nde chuva. Eu nem percebia\po quanto sentia falta.$"
SI_W_T_ResidentAfter_201_En::
 .string "The air smells like rain\nagain. I had not realized\phow much I missed it.$"
SI_W_Resident_201::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_201_After
 msgbox SI_W_T_Resident_201, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_201_After:
 msgbox SI_W_T_ResidentAfter_201, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_202::
 .string "Guardo a primeira Poké\nBall. Ainda lembro como\pminha mão tremia. Roark\nconhece cada turno da\pmina. Ontem cobriu um\ncolega para ele ver o\pnascimento da filha.$"
SI_W_T_Resident_202_En::
 .string "I keep my first Poke Ball.\nI still remember my\pshaking hand. Roark knows\nevery mine shift.\pYesterday he covered for a\nnew father.$"
SI_W_T_ResidentAfter_202::
 .string "Vamos fazer uma festa\npequena. Cada pessoa traz\palgo; ninguém precisa\npagar para entrar.$"
SI_W_T_ResidentAfter_202_En::
 .string "We are having a small\nparty. Everyone brings\psomething; nobody pays to\njoin.$"
SI_W_Resident_202::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_202_After
 msgbox SI_W_T_Resident_202, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_202_After:
 msgbox SI_W_T_ResidentAfter_202, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_203::
 .string "Levo chocolate quente\nextra. Sempre aparece um\pviajante que precisa.\nCaligo comprou minério em\pnome da Galáctica. Quando\nperguntei pelo recibo, ele\pdesapareceu.$"
SI_W_T_Resident_203_En::
 .string "I pack extra hot\nchocolate. A traveler\palways needs some. Caligo\nbought ore for Galactic.\pWhen I asked for a\nreceipt, he disappeared.$"
SI_W_T_ResidentAfter_203::
 .string "Vamos fazer uma festa\npequena. Cada pessoa traz\palgo; ninguém precisa\npagar para entrar.$"
SI_W_T_ResidentAfter_203_En::
 .string "We are having a small\nparty. Everyone brings\psomething; nobody pays to\njoin.$"
SI_W_Resident_203::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_203_After
 msgbox SI_W_T_Resident_203, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_203_After:
 msgbox SI_W_T_ResidentAfter_203, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_204::
 .string "Cuido das ferramentas\nantes de sair. Meu\pparceiro conta comigo.\nRoark conhece cada turno\pda mina. Ontem cobriu um\ncolega para ele ver o\pnascimento da filha.$"
SI_W_T_Resident_204_En::
 .string "I check my tools before\nleaving. My partner relies\pon me. Roark knows every\nmine shift. Yesterday he\pcovered for a new father.$"
SI_W_T_ResidentAfter_204::
 .string "Vi vocês ajudando na\ncrise. Quero que meu filho\pcresça sabendo que alguém\nse importou.$"
SI_W_T_ResidentAfter_204_En::
 .string "I saw you help in the\ncrisis. I want my son to\pknow someone cared.$"
SI_W_Resident_204::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_204_After
 msgbox SI_W_T_Resident_204, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_204_After:
 msgbox SI_W_T_ResidentAfter_204, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_205::
 .string "Pescar exige esperar.\nAprendi mais com a água do\pque com pressa. Meu\nGeodude dorme no carrinho\pvazio. Confiro duas vezes\nantes de empurrar!$"
SI_W_T_Resident_205_En::
 .string "Fishing takes patience.\nWater taught me more than\prushing. My Geodude sleeps\nin an empty cart. I check\ptwice before pushing!$"
SI_W_T_ResidentAfter_205::
 .string "O ar voltou a ter cheiro\nde chuva. Eu nem percebia\po quanto sentia falta.$"
SI_W_T_ResidentAfter_205_En::
 .string "The air smells like rain\nagain. I had not realized\phow much I missed it.$"
SI_W_Resident_205::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_205_After
 msgbox SI_W_T_Resident_205, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_205_After:
 msgbox SI_W_T_ResidentAfter_205, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_206::
 .string "Marquei o caminho para\nquem vem depois. Uma\ptrilha boa se compartilha.\nCaligo comprou minério em\pnome da Galáctica. Quando\nperguntei pelo recibo, ele\pdesapareceu.$"
SI_W_T_Resident_206_En::
 .string "I marked the path for the\nnext traveler. A good\ptrail is shared. Caligo\nbought ore for Galactic.\pWhen I asked for a\nreceipt, he disappeared.$"
SI_W_T_ResidentAfter_206::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_206_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_206::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_206_After
 msgbox SI_W_T_Resident_206, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_206_After:
 msgbox SI_W_T_ResidentAfter_206, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_207::
 .string "Anoto também os erros. Um\nresultado bonito não vale\pse estiver errado. Roark\nconhece cada turno da\pmina. Ontem cobriu um\ncolega para ele ver o\pnascimento da filha.$"
SI_W_T_Resident_207_En::
 .string "I record mistakes too. A\npretty result is worthless\pif it is wrong. Roark\nknows every mine shift.\pYesterday he covered for a\nnew father.$"
SI_W_T_ResidentAfter_207::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_207_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_207::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_207_After
 msgbox SI_W_T_Resident_207, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_207_After:
 msgbox SI_W_T_ResidentAfter_207, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_208::
 .string "Meu Kricketune acompanha a\nmelodia. A gente erra\pjunto e tenta de novo. Meu\nGeodude dorme no carrinho\pvazio. Confiro duas vezes\nantes de empurrar!$"
SI_W_T_Resident_208_En::
 .string "My Kricketune follows the\nmelody. We miss together\pand try again. My Geodude\nsleeps in an empty cart. I\pcheck twice before\npushing!$"
SI_W_T_ResidentAfter_208::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_208_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_208::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_208_After
 msgbox SI_W_T_Resident_208, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_208_After:
 msgbox SI_W_T_ResidentAfter_208, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_209::
 .string "Treino uma piada nova por\ndia. Meu Mime Jr. é meu\pcrítico mais sincero.\nRoark conhece cada turno\pda mina. Ontem cobriu um\ncolega para ele ver o\pnascimento da filha.$"
SI_W_T_Resident_209_En::
 .string "I practice a new joke\ndaily. My Mime Jr. is my\pmost honest critic. Roark\nknows every mine shift.\pYesterday he covered for a\nnew father.$"
SI_W_T_ResidentAfter_209::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_209_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_209::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_209_After
 msgbox SI_W_T_Resident_209, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_209_After:
 msgbox SI_W_T_ResidentAfter_209, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_210::
 .string "Hoje consegui ler um mapa\nsem ajuda. Amanhã vou\pdesenhar meu próprio\ncaminho. Meu Geodude dorme\pno carrinho vazio. Confiro\nduas vezes antes de\pempurrar!$"
SI_W_T_Resident_210_En::
 .string "Today I read a map alone.\nTomorrow I will draw my\pown path. My Geodude\nsleeps in an empty cart. I\pcheck twice before\npushing!$"
SI_W_T_ResidentAfter_210::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_210_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_210::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_210_After
 msgbox SI_W_T_Resident_210, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_210_After:
 msgbox SI_W_T_ResidentAfter_210, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_211::
 .string "Um parceiro cansado merece\ndescanso. Vitória nenhuma\ppaga confiança perdida.\nCaligo comprou minério em\pnome da Galáctica. Quando\nperguntei pelo recibo, ele\pdesapareceu.$"
SI_W_T_Resident_211_En::
 .string "A tired partner deserves\nrest. No win pays for lost\ptrust. Caligo bought ore\nfor Galactic. When I asked\pfor a receipt, he\ndisappeared.$"
SI_W_T_ResidentAfter_211::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_211_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_211::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_211_After
 msgbox SI_W_T_Resident_211, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_211_After:
 msgbox SI_W_T_ResidentAfter_211, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_212::
 .string "Meu pai me ensinou a\nreconhecer os passos de\pcada Pokémon do pasto.\nRoark conhece cada turno\pda mina. Ontem cobriu um\ncolega para ele ver o\pnascimento da filha.$"
SI_W_T_Resident_212_En::
 .string "Dad taught me to recognize\nevery Pokemon by its\pfootsteps. Roark knows\nevery mine shift.\pYesterday he covered for a\nnew father.$"
SI_W_T_ResidentAfter_212::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_212_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_212::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_212_After
 msgbox SI_W_T_Resident_212, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_212_After:
 msgbox SI_W_T_ResidentAfter_212, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_213::
 .string "Meu Ponyta corre ao meu\nlado, sem rédea. A escolha\pdele importa para mim. Meu\nGeodude dorme no carrinho\pvazio. Confiro duas vezes\nantes de empurrar!$"
SI_W_T_Resident_213_En::
 .string "My Ponyta runs by my side\nwithout reins. His choice\pmatters to me. My Geodude\nsleeps in an empty cart. I\pcheck twice before\npushing!$"
SI_W_T_ResidentAfter_213::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_213_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_213::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_213_After
 msgbox SI_W_T_Resident_213, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_213_After:
 msgbox SI_W_T_ResidentAfter_213, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_214::
 .string "Guardo a primeira Poké\nBall. Ainda lembro como\pminha mão tremia. Caligo\ncomprou minério em nome da\pGaláctica. Quando\nperguntei pelo recibo, ele\pdesapareceu.$"
SI_W_T_Resident_214_En::
 .string "I keep my first Poke Ball.\nI still remember my\pshaking hand. Caligo\nbought ore for Galactic.\pWhen I asked for a\nreceipt, he disappeared.$"
SI_W_T_ResidentAfter_214::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_214_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_214::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_214_After
 msgbox SI_W_T_Resident_214, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_214_After:
 msgbox SI_W_T_ResidentAfter_214, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_215::
 .string "Levo chocolate quente\nextra. Sempre aparece um\pviajante que precisa.\nNeste lugar aprendi a\pouvir meu parceiro. Cada\nviagem deixa uma lembrança\pdiferente.$"
SI_W_T_Resident_215_En::
 .string "I pack extra hot\nchocolate. A traveler\palways needs some. Here I\nlearned to listen to my\ppartner. Every journey\nleaves a different memory.$"
SI_W_T_ResidentAfter_215::
 .string "Vamos fazer uma festa\npequena. Cada pessoa traz\palgo; ninguém precisa\npagar para entrar.$"
SI_W_T_ResidentAfter_215_En::
 .string "We are having a small\nparty. Everyone brings\psomething; nobody pays to\njoin.$"
SI_W_Resident_215::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_215_After
 msgbox SI_W_T_Resident_215, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_215_After:
 msgbox SI_W_T_ResidentAfter_215, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_216::
 .string "Cuido das ferramentas\nantes de sair. Meu\pparceiro conta comigo.\nNeste lugar aprendi a\pouvir meu parceiro. Cada\nviagem deixa uma lembrança\pdiferente.$"
SI_W_T_Resident_216_En::
 .string "I check my tools before\nleaving. My partner relies\pon me. Here I learned to\nlisten to my partner.\pEvery journey leaves a\ndifferent memory.$"
SI_W_T_ResidentAfter_216::
 .string "Vi vocês ajudando na\ncrise. Quero que meu filho\pcresça sabendo que alguém\nse importou.$"
SI_W_T_ResidentAfter_216_En::
 .string "I saw you help in the\ncrisis. I want my son to\pknow someone cared.$"
SI_W_Resident_216::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_216_After
 msgbox SI_W_T_Resident_216, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_216_After:
 msgbox SI_W_T_ResidentAfter_216, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_217::
 .string "Pescar exige esperar.\nAprendi mais com a água do\pque com pressa. Roark\npediu para não tocar nos\pcristais instáveis. Um\npulso pode ferir alguém.$"
SI_W_T_Resident_217_En::
 .string "Fishing takes patience.\nWater taught me more than\prushing. Roark asked us\nnot to touch unstable\pcrystals. A pulse could\nhurt someone.$"
SI_W_T_ResidentAfter_217::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_217_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_217::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_217_After
 msgbox SI_W_T_Resident_217, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_217_After:
 msgbox SI_W_T_ResidentAfter_217, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_218::
 .string "Marquei o caminho para\nquem vem depois. Uma\ptrilha boa se compartilha.\nRoark pediu para não tocar\pnos cristais instáveis. Um\npulso pode ferir alguém.$"
SI_W_T_Resident_218_En::
 .string "I marked the path for the\nnext traveler. A good\ptrail is shared. Roark\nasked us not to touch\punstable crystals. A pulse\ncould hurt someone.$"
SI_W_T_ResidentAfter_218::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_218_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_218::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_218_After
 msgbox SI_W_T_Resident_218, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_218_After:
 msgbox SI_W_T_ResidentAfter_218, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_219::
 .string "Anoto também os erros. Um\nresultado bonito não vale\pse estiver errado. Neste\nlugar aprendi a ouvir meu\pparceiro. Cada viagem\ndeixa uma lembrança\pdiferente.$"
SI_W_T_Resident_219_En::
 .string "I record mistakes too. A\npretty result is worthless\pif it is wrong. Here I\nlearned to listen to my\ppartner. Every journey\nleaves a different memory.$"
SI_W_T_ResidentAfter_219::
 .string "O ar voltou a ter cheiro\nde chuva. Eu nem percebia\po quanto sentia falta.$"
SI_W_T_ResidentAfter_219_En::
 .string "The air smells like rain\nagain. I had not realized\phow much I missed it.$"
SI_W_Resident_219::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_219_After
 msgbox SI_W_T_Resident_219, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_219_After:
 msgbox SI_W_T_ResidentAfter_219, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_220::
 .string "Meu Kricketune acompanha a\nmelodia. A gente erra\pjunto e tenta de novo.\nNeste lugar aprendi a\pouvir meu parceiro. Cada\nviagem deixa uma lembrança\pdiferente.$"
SI_W_T_Resident_220_En::
 .string "My Kricketune follows the\nmelody. We miss together\pand try again. Here I\nlearned to listen to my\ppartner. Every journey\nleaves a different memory.$"
SI_W_T_ResidentAfter_220::
 .string "Vamos fazer uma festa\npequena. Cada pessoa traz\palgo; ninguém precisa\npagar para entrar.$"
SI_W_T_ResidentAfter_220_En::
 .string "We are having a small\nparty. Everyone brings\psomething; nobody pays to\njoin.$"
SI_W_Resident_220::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_220_After
 msgbox SI_W_T_Resident_220, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_220_After:
 msgbox SI_W_T_ResidentAfter_220, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_221::
 .string "Treino uma piada nova por\ndia. Meu Mime Jr. é meu\pcrítico mais sincero.\nNeste lugar aprendi a\pouvir meu parceiro. Cada\nviagem deixa uma lembrança\pdiferente.$"
SI_W_T_Resident_221_En::
 .string "I practice a new joke\ndaily. My Mime Jr. is my\pmost honest critic. Here I\nlearned to listen to my\ppartner. Every journey\nleaves a different memory.$"
SI_W_T_ResidentAfter_221::
 .string "Vi vocês ajudando na\ncrise. Quero que meu filho\pcresça sabendo que alguém\nse importou.$"
SI_W_T_ResidentAfter_221_En::
 .string "I saw you help in the\ncrisis. I want my son to\pknow someone cared.$"
SI_W_Resident_221::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_221_After
 msgbox SI_W_T_Resident_221, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_221_After:
 msgbox SI_W_T_ResidentAfter_221, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_222::
 .string "Hoje consegui ler um mapa\nsem ajuda. Amanhã vou\pdesenhar meu próprio\ncaminho. Neste lugar\paprendi a ouvir meu\nparceiro. Cada viagem\pdeixa uma lembrança\ndiferente.$"
SI_W_T_Resident_222_En::
 .string "Today I read a map alone.\nTomorrow I will draw my\pown path. Here I learned\nto listen to my partner.\pEvery journey leaves a\ndifferent memory.$"
SI_W_T_ResidentAfter_222::
 .string "O ar voltou a ter cheiro\nde chuva. Eu nem percebia\po quanto sentia falta.$"
SI_W_T_ResidentAfter_222_En::
 .string "The air smells like rain\nagain. I had not realized\phow much I missed it.$"
SI_W_Resident_222::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_222_After
 msgbox SI_W_T_Resident_222, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_222_After:
 msgbox SI_W_T_ResidentAfter_222, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_223::
 .string "Um parceiro cansado merece\ndescanso. Vitória nenhuma\ppaga confiança perdida.\nNeste lugar aprendi a\pouvir meu parceiro. Cada\nviagem deixa uma lembrança\pdiferente.$"
SI_W_T_Resident_223_En::
 .string "A tired partner deserves\nrest. No win pays for lost\ptrust. Here I learned to\nlisten to my partner.\pEvery journey leaves a\ndifferent memory.$"
SI_W_T_ResidentAfter_223::
 .string "Vamos fazer uma festa\npequena. Cada pessoa traz\palgo; ninguém precisa\npagar para entrar.$"
SI_W_T_ResidentAfter_223_En::
 .string "We are having a small\nparty. Everyone brings\psomething; nobody pays to\njoin.$"
SI_W_Resident_223::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_223_After
 msgbox SI_W_T_Resident_223, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_223_After:
 msgbox SI_W_T_ResidentAfter_223, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_224::
 .string "Meu pai me ensinou a\nreconhecer os passos de\pcada Pokémon do pasto.\nNeste lugar aprendi a\pouvir meu parceiro. Cada\nviagem deixa uma lembrança\pdiferente.$"
SI_W_T_Resident_224_En::
 .string "Dad taught me to recognize\nevery Pokemon by its\pfootsteps. Here I learned\nto listen to my partner.\pEvery journey leaves a\ndifferent memory.$"
SI_W_T_ResidentAfter_224::
 .string "Vi vocês ajudando na\ncrise. Quero que meu filho\pcresça sabendo que alguém\nse importou.$"
SI_W_T_ResidentAfter_224_En::
 .string "I saw you help in the\ncrisis. I want my son to\pknow someone cared.$"
SI_W_Resident_224::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_224_After
 msgbox SI_W_T_Resident_224, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_224_After:
 msgbox SI_W_T_ResidentAfter_224, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_225::
 .string "Meu Ponyta corre ao meu\nlado, sem rédea. A escolha\pdele importa para mim.\nNeste lugar aprendi a\pouvir meu parceiro. Cada\nviagem deixa uma lembrança\pdiferente.$"
SI_W_T_Resident_225_En::
 .string "My Ponyta runs by my side\nwithout reins. His choice\pmatters to me. Here I\nlearned to listen to my\ppartner. Every journey\nleaves a different memory.$"
SI_W_T_ResidentAfter_225::
 .string "O ar voltou a ter cheiro\nde chuva. Eu nem percebia\po quanto sentia falta.$"
SI_W_T_ResidentAfter_225_En::
 .string "The air smells like rain\nagain. I had not realized\phow much I missed it.$"
SI_W_Resident_225::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_225_After
 msgbox SI_W_T_Resident_225, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_225_After:
 msgbox SI_W_T_ResidentAfter_225, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_226::
 .string "Guardo a primeira Poké\nBall. Ainda lembro como\pminha mão tremia. Neste\nlugar aprendi a ouvir meu\pparceiro. Cada viagem\ndeixa uma lembrança\pdiferente.$"
SI_W_T_Resident_226_En::
 .string "I keep my first Poke Ball.\nI still remember my\pshaking hand. Here I\nlearned to listen to my\ppartner. Every journey\nleaves a different memory.$"
SI_W_T_ResidentAfter_226::
 .string "Vamos fazer uma festa\npequena. Cada pessoa traz\palgo; ninguém precisa\npagar para entrar.$"
SI_W_T_ResidentAfter_226_En::
 .string "We are having a small\nparty. Everyone brings\psomething; nobody pays to\njoin.$"
SI_W_Resident_226::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_226_After
 msgbox SI_W_T_Resident_226, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_226_After:
 msgbox SI_W_T_ResidentAfter_226, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_227::
 .string "Levo chocolate quente\nextra. Sempre aparece um\pviajante que precisa.\nNeste lugar aprendi a\pouvir meu parceiro. Cada\nviagem deixa uma lembrança\pdiferente.$"
SI_W_T_Resident_227_En::
 .string "I pack extra hot\nchocolate. A traveler\palways needs some. Here I\nlearned to listen to my\ppartner. Every journey\nleaves a different memory.$"
SI_W_T_ResidentAfter_227::
 .string "Vi vocês ajudando na\ncrise. Quero que meu filho\pcresça sabendo que alguém\nse importou.$"
SI_W_T_ResidentAfter_227_En::
 .string "I saw you help in the\ncrisis. I want my son to\pknow someone cared.$"
SI_W_Resident_227::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_227_After
 msgbox SI_W_T_Resident_227, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_227_After:
 msgbox SI_W_T_ResidentAfter_227, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_228::
 .string "Cuido das ferramentas\nantes de sair. Meu\pparceiro conta comigo.\nNeste lugar aprendi a\pouvir meu parceiro. Cada\nviagem deixa uma lembrança\pdiferente.$"
SI_W_T_Resident_228_En::
 .string "I check my tools before\nleaving. My partner relies\pon me. Here I learned to\nlisten to my partner.\pEvery journey leaves a\ndifferent memory.$"
SI_W_T_ResidentAfter_228::
 .string "O ar voltou a ter cheiro\nde chuva. Eu nem percebia\po quanto sentia falta.$"
SI_W_T_ResidentAfter_228_En::
 .string "The air smells like rain\nagain. I had not realized\phow much I missed it.$"
SI_W_Resident_228::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_228_After
 msgbox SI_W_T_Resident_228, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_228_After:
 msgbox SI_W_T_ResidentAfter_228, MSGBOX_DEFAULT
 release
 end
SI_W_T_Sign_OreburghMuseum_0::
 .string "Neste lugar aprendi a\nouvir meu parceiro. Cada\pviagem deixa uma lembrança\ndiferente.$"
SI_W_T_Sign_OreburghMuseum_0_En::
 .string "Here I learned to listen\nto my partner. Every\pjourney leaves a different\nmemory.$"
SI_W_Sign_OreburghMuseum_0::
 msgbox SI_W_T_Sign_OreburghMuseum_0, MSGBOX_NPC
 end
SI_W_T_Sign_OreburghMuseum_1::
 .string "Neste lugar aprendi a\nouvir meu parceiro. Cada\pviagem deixa uma lembrança\ndiferente.$"
SI_W_T_Sign_OreburghMuseum_1_En::
 .string "Here I learned to listen\nto my partner. Every\pjourney leaves a different\nmemory.$"
SI_W_Sign_OreburghMuseum_1::
 msgbox SI_W_T_Sign_OreburghMuseum_1, MSGBOX_NPC
 end
SI_W_T_Sign_OreburghMuseum_2::
 .string "Neste lugar aprendi a\nouvir meu parceiro. Cada\pviagem deixa uma lembrança\ndiferente.$"
SI_W_T_Sign_OreburghMuseum_2_En::
 .string "Here I learned to listen\nto my partner. Every\pjourney leaves a different\nmemory.$"
SI_W_Sign_OreburghMuseum_2::
 msgbox SI_W_T_Sign_OreburghMuseum_2, MSGBOX_NPC
 end
SI_W_T_Sign_OreburghMuseum_3::
 .string "Neste lugar aprendi a\nouvir meu parceiro. Cada\pviagem deixa uma lembrança\ndiferente.$"
SI_W_T_Sign_OreburghMuseum_3_En::
 .string "Here I learned to listen\nto my partner. Every\pjourney leaves a different\nmemory.$"
SI_W_Sign_OreburghMuseum_3::
 msgbox SI_W_T_Sign_OreburghMuseum_3, MSGBOX_NPC
 end
SI_W_T_Sign_OreburghMuseum_4::
 .string "Neste lugar aprendi a\nouvir meu parceiro. Cada\pviagem deixa uma lembrança\ndiferente.$"
SI_W_T_Sign_OreburghMuseum_4_En::
 .string "Here I learned to listen\nto my partner. Every\pjourney leaves a different\nmemory.$"
SI_W_Sign_OreburghMuseum_4::
 msgbox SI_W_T_Sign_OreburghMuseum_4, MSGBOX_NPC
 end
SI_W_T_Sign_OreburghMuseum_5::
 .string "Neste lugar aprendi a\nouvir meu parceiro. Cada\pviagem deixa uma lembrança\ndiferente.$"
SI_W_T_Sign_OreburghMuseum_5_En::
 .string "Here I learned to listen\nto my partner. Every\pjourney leaves a different\nmemory.$"
SI_W_Sign_OreburghMuseum_5::
 msgbox SI_W_T_Sign_OreburghMuseum_5, MSGBOX_NPC
 end
SI_W_T_Sign_OreburghMuseum_6::
 .string "Neste lugar aprendi a\nouvir meu parceiro. Cada\pviagem deixa uma lembrança\ndiferente.$"
SI_W_T_Sign_OreburghMuseum_6_En::
 .string "Here I learned to listen\nto my partner. Every\pjourney leaves a different\nmemory.$"
SI_W_Sign_OreburghMuseum_6::
 msgbox SI_W_T_Sign_OreburghMuseum_6, MSGBOX_NPC
 end
SI_W_T_Sign_OreburghMuseum_7::
 .string "Neste lugar aprendi a\nouvir meu parceiro. Cada\pviagem deixa uma lembrança\ndiferente.$"
SI_W_T_Sign_OreburghMuseum_7_En::
 .string "Here I learned to listen\nto my partner. Every\pjourney leaves a different\nmemory.$"
SI_W_Sign_OreburghMuseum_7::
 msgbox SI_W_T_Sign_OreburghMuseum_7, MSGBOX_NPC
 end
SI_W_T_Sign_OreburghMuseum_8::
 .string "Neste lugar aprendi a\nouvir meu parceiro. Cada\pviagem deixa uma lembrança\ndiferente.$"
SI_W_T_Sign_OreburghMuseum_8_En::
 .string "Here I learned to listen\nto my partner. Every\pjourney leaves a different\nmemory.$"
SI_W_Sign_OreburghMuseum_8::
 msgbox SI_W_T_Sign_OreburghMuseum_8, MSGBOX_NPC
 end
SI_W_T_Sign_OreburghMuseum_9::
 .string "Neste lugar aprendi a\nouvir meu parceiro. Cada\pviagem deixa uma lembrança\ndiferente.$"
SI_W_T_Sign_OreburghMuseum_9_En::
 .string "Here I learned to listen\nto my partner. Every\pjourney leaves a different\nmemory.$"
SI_W_Sign_OreburghMuseum_9::
 msgbox SI_W_T_Sign_OreburghMuseum_9, MSGBOX_NPC
 end
SI_W_T_Sign_OreburghMuseum_10::
 .string "Neste lugar aprendi a\nouvir meu parceiro. Cada\pviagem deixa uma lembrança\ndiferente.$"
SI_W_T_Sign_OreburghMuseum_10_En::
 .string "Here I learned to listen\nto my partner. Every\pjourney leaves a different\nmemory.$"
SI_W_Sign_OreburghMuseum_10::
 msgbox SI_W_T_Sign_OreburghMuseum_10, MSGBOX_NPC
 end
SI_W_T_Sign_OreburghMuseum_11::
 .string "Neste lugar aprendi a\nouvir meu parceiro. Cada\pviagem deixa uma lembrança\ndiferente.$"
SI_W_T_Sign_OreburghMuseum_11_En::
 .string "Here I learned to listen\nto my partner. Every\pjourney leaves a different\nmemory.$"
SI_W_Sign_OreburghMuseum_11::
 msgbox SI_W_T_Sign_OreburghMuseum_11, MSGBOX_NPC
 end
SI_W_T_Sign_OreburghMuseum_12::
 .string "Neste lugar aprendi a\nouvir meu parceiro. Cada\pviagem deixa uma lembrança\ndiferente.$"
SI_W_T_Sign_OreburghMuseum_12_En::
 .string "Here I learned to listen\nto my partner. Every\pjourney leaves a different\nmemory.$"
SI_W_Sign_OreburghMuseum_12::
 msgbox SI_W_T_Sign_OreburghMuseum_12, MSGBOX_NPC
 end
SI_W_T_Sign_OreburghMuseum_13::
 .string "Neste lugar aprendi a\nouvir meu parceiro. Cada\pviagem deixa uma lembrança\ndiferente.$"
SI_W_T_Sign_OreburghMuseum_13_En::
 .string "Here I learned to listen\nto my partner. Every\pjourney leaves a different\nmemory.$"
SI_W_Sign_OreburghMuseum_13::
 msgbox SI_W_T_Sign_OreburghMuseum_13, MSGBOX_NPC
 end
SI_W_T_Sign_OreburghMuseum_14::
 .string "Neste lugar aprendi a\nouvir meu parceiro. Cada\pviagem deixa uma lembrança\ndiferente.$"
SI_W_T_Sign_OreburghMuseum_14_En::
 .string "Here I learned to listen\nto my partner. Every\pjourney leaves a different\nmemory.$"
SI_W_Sign_OreburghMuseum_14::
 msgbox SI_W_T_Sign_OreburghMuseum_14, MSGBOX_NPC
 end
SI_W_T_Sign_OreburghMuseum_15::
 .string "Neste lugar aprendi a\nouvir meu parceiro. Cada\pviagem deixa uma lembrança\ndiferente.$"
SI_W_T_Sign_OreburghMuseum_15_En::
 .string "Here I learned to listen\nto my partner. Every\pjourney leaves a different\nmemory.$"
SI_W_Sign_OreburghMuseum_15::
 msgbox SI_W_T_Sign_OreburghMuseum_15, MSGBOX_NPC
 end
SI_W_T_Resident_229::
 .string "Pescar exige esperar.\nAprendi mais com a água do\pque com pressa. O pântano\nfiltra a água da cidade.\pNão é um terreno vazio\npara construir qualquer\pcoisa.$"
SI_W_T_Resident_229_En::
 .string "Fishing takes patience.\nWater taught me more than\prushing. The marsh filters\nour water. It is not empty\pland to build on.$"
SI_W_T_ResidentAfter_229::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_229_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_229::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_229_After
 msgbox SI_W_T_Resident_229, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_229_After:
 msgbox SI_W_T_ResidentAfter_229, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_230::
 .string "Marquei o caminho para\nquem vem depois. Uma\ptrilha boa se compartilha.\nNeste lugar aprendi a\pouvir meu parceiro. Cada\nviagem deixa uma lembrança\pdiferente.$"
SI_W_T_Resident_230_En::
 .string "I marked the path for the\nnext traveler. A good\ptrail is shared. Here I\nlearned to listen to my\ppartner. Every journey\nleaves a different memory.$"
SI_W_T_ResidentAfter_230::
 .string "O ar voltou a ter cheiro\nde chuva. Eu nem percebia\po quanto sentia falta.$"
SI_W_T_ResidentAfter_230_En::
 .string "The air smells like rain\nagain. I had not realized\phow much I missed it.$"
SI_W_Resident_230::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_230_After
 msgbox SI_W_T_Resident_230, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_230_After:
 msgbox SI_W_T_ResidentAfter_230, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_231::
 .string "Anoto também os erros. Um\nresultado bonito não vale\pse estiver errado. Esta é\na Rota 201. A estrada é\plonga. Prefiro conversar\ncom meus parceiros a medir\psó a distância.$"
SI_W_T_Resident_231_En::
 .string "I record mistakes too. A\npretty result is worthless\pif it is wrong. This is\nRoute 201. The road is\plong. I talk to my\npartners instead of just\pcounting miles.$"
SI_W_T_ResidentAfter_231::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_231_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_231::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_231_After
 msgbox SI_W_T_Resident_231, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_231_After:
 msgbox SI_W_T_ResidentAfter_231, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_232::
 .string "Meu Kricketune acompanha a\nmelodia. A gente erra\pjunto e tenta de novo.\nEsta é a Rota 201. Quem\pluta aprende; quem escuta\ntambém. Não ignore os\pmoradores pelo caminho.$"
SI_W_T_Resident_232_En::
 .string "My Kricketune follows the\nmelody. We miss together\pand try again. This is\nRoute 201. Fighting\pteaches; listening does\ntoo. Do not ignore people\palong the way.$"
SI_W_T_ResidentAfter_232::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_232_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_232::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_232_After
 msgbox SI_W_T_Resident_232, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_232_After:
 msgbox SI_W_T_ResidentAfter_232, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_233::
 .string "Treino uma piada nova por\ndia. Meu Mime Jr. é meu\pcrítico mais sincero. Esta\né a Rota 201. Se a\ptempestade vier, procuro\nabrigo para os Pokémon\pprimeiro.$"
SI_W_T_Resident_233_En::
 .string "I practice a new joke\ndaily. My Mime Jr. is my\pmost honest critic. This\nis Route 201. If a storm\pcomes, I find shelter for\nthe Pokemon first.$"
SI_W_T_ResidentAfter_233::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_233_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_233::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_233_After
 msgbox SI_W_T_Resident_233, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_233_After:
 msgbox SI_W_T_ResidentAfter_233, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_234::
 .string "Hoje consegui ler um mapa\nsem ajuda. Amanhã vou\pdesenhar meu próprio\ncaminho. Esta é a Rota\p201. Ouvi passos nas\nfolhas e fiquei quieto. Um\pStarly pousou no meu\nombro!$"
SI_W_T_Resident_234_En::
 .string "Today I read a map alone.\nTomorrow I will draw my\pown path. This is Route\n201. I stayed still at\prustling leaves. A Starly\nlanded on my shoulder!$"
SI_W_T_ResidentAfter_234::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_234_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_234::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_234_After
 msgbox SI_W_T_Resident_234, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_234_After:
 msgbox SI_W_T_ResidentAfter_234, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_235::
 .string "Um parceiro cansado merece\ndescanso. Vitória nenhuma\ppaga confiança perdida.\nEsta é a Rota 201. A\pestrada é longa. Prefiro\nconversar com meus\pparceiros a medir só a\ndistância.$"
SI_W_T_Resident_235_En::
 .string "A tired partner deserves\nrest. No win pays for lost\ptrust. This is Route 201.\nThe road is long. I talk\pto my partners instead of\njust counting miles.$"
SI_W_T_ResidentAfter_235::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_235_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_235::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_235_After
 msgbox SI_W_T_Resident_235, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_235_After:
 msgbox SI_W_T_ResidentAfter_235, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_236::
 .string "Meu pai me ensinou a\nreconhecer os passos de\pcada Pokémon do pasto.\nEsta é a Rota 201. Quem\pluta aprende; quem escuta\ntambém. Não ignore os\pmoradores pelo caminho.$"
SI_W_T_Resident_236_En::
 .string "Dad taught me to recognize\nevery Pokemon by its\pfootsteps. This is Route\n201. Fighting teaches;\plistening does too. Do not\nignore people along the\pway.$"
SI_W_T_ResidentAfter_236::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_236_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_236::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_236_After
 msgbox SI_W_T_Resident_236, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_236_After:
 msgbox SI_W_T_ResidentAfter_236, MSGBOX_DEFAULT
 release
 end
SI_W_T_Sign_Route201_0::
 .string "Esta é a Rota 201. Ouvi\npassos nas folhas e fiquei\pquieto. Um Starly pousou\nno meu ombro!$"
SI_W_T_Sign_Route201_0_En::
 .string "This is Route 201. I\nstayed still at rustling\pleaves. A Starly landed on\nmy shoulder!$"
SI_W_Sign_Route201_0::
 msgbox SI_W_T_Sign_Route201_0, MSGBOX_NPC
 end
SI_W_T_Sign_Route201_1::
 .string "Esta é a Rota 201. A\nestrada é longa. Prefiro\pconversar com meus\nparceiros a medir só a\pdistância.$"
SI_W_T_Sign_Route201_1_En::
 .string "This is Route 201. The\nroad is long. I talk to my\ppartners instead of just\ncounting miles.$"
SI_W_Sign_Route201_1::
 msgbox SI_W_T_Sign_Route201_1, MSGBOX_NPC
 end
SI_W_T_Sign_Route201_2::
 .string "Esta é a Rota 201. Quem\nluta aprende; quem escuta\ptambém. Não ignore os\nmoradores pelo caminho.$"
SI_W_T_Sign_Route201_2_En::
 .string "This is Route 201.\nFighting teaches;\plistening does too. Do not\nignore people along the\pway.$"
SI_W_Sign_Route201_2::
 msgbox SI_W_T_Sign_Route201_2, MSGBOX_NPC
 end
SI_W_T_Sign_Route202_0::
 .string "Esta é a Rota 202. Ouvi\npassos nas folhas e fiquei\pquieto. Um Starly pousou\nno meu ombro!$"
SI_W_T_Sign_Route202_0_En::
 .string "This is Route 202. I\nstayed still at rustling\pleaves. A Starly landed on\nmy shoulder!$"
SI_W_Sign_Route202_0::
 msgbox SI_W_T_Sign_Route202_0, MSGBOX_NPC
 end
SI_W_T_Sign_Route202_1::
 .string "Esta é a Rota 202. A\nestrada é longa. Prefiro\pconversar com meus\nparceiros a medir só a\pdistância.$"
SI_W_T_Sign_Route202_1_En::
 .string "This is Route 202. The\nroad is long. I talk to my\ppartners instead of just\ncounting miles.$"
SI_W_Sign_Route202_1::
 msgbox SI_W_T_Sign_Route202_1, MSGBOX_NPC
 end
SI_W_T_Sign_Route202_2::
 .string "Esta é a Rota 202. Quem\nluta aprende; quem escuta\ptambém. Não ignore os\nmoradores pelo caminho.$"
SI_W_T_Sign_Route202_2_En::
 .string "This is Route 202.\nFighting teaches;\plistening does too. Do not\nignore people along the\pway.$"
SI_W_Sign_Route202_2::
 msgbox SI_W_T_Sign_Route202_2, MSGBOX_NPC
 end
SI_W_T_Resident_237::
 .string "Meu Ponyta corre ao meu\nlado, sem rédea. A escolha\pdele importa para mim.\nEsta é a Rota 203. Ouvi\ppassos nas folhas e fiquei\nquieto. Um Starly pousou\pno meu ombro!$"
SI_W_T_Resident_237_En::
 .string "My Ponyta runs by my side\nwithout reins. His choice\pmatters to me. This is\nRoute 203. I stayed still\pat rustling leaves. A\nStarly landed on my\pshoulder!$"
SI_W_T_ResidentAfter_237::
 .string "O ar voltou a ter cheiro\nde chuva. Eu nem percebia\po quanto sentia falta.$"
SI_W_T_ResidentAfter_237_En::
 .string "The air smells like rain\nagain. I had not realized\phow much I missed it.$"
SI_W_Resident_237::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_237_After
 msgbox SI_W_T_Resident_237, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_237_After:
 msgbox SI_W_T_ResidentAfter_237, MSGBOX_DEFAULT
 release
 end
SI_W_T_Sign_Route203_0::
 .string "Esta é a Rota 203. Ouvi\npassos nas folhas e fiquei\pquieto. Um Starly pousou\nno meu ombro!$"
SI_W_T_Sign_Route203_0_En::
 .string "This is Route 203. I\nstayed still at rustling\pleaves. A Starly landed on\nmy shoulder!$"
SI_W_Sign_Route203_0::
 msgbox SI_W_T_Sign_Route203_0, MSGBOX_NPC
 end
SI_W_T_Sign_Route203_1::
 .string "Esta é a Rota 203. A\nestrada é longa. Prefiro\pconversar com meus\nparceiros a medir só a\pdistância.$"
SI_W_T_Sign_Route203_1_En::
 .string "This is Route 203. The\nroad is long. I talk to my\ppartners instead of just\ncounting miles.$"
SI_W_Sign_Route203_1::
 msgbox SI_W_T_Sign_Route203_1, MSGBOX_NPC
 end
SI_W_T_Sign_Route203_2::
 .string "Esta é a Rota 203. Quem\nluta aprende; quem escuta\ptambém. Não ignore os\nmoradores pelo caminho.$"
SI_W_T_Sign_Route203_2_En::
 .string "This is Route 203.\nFighting teaches;\plistening does too. Do not\nignore people along the\pway.$"
SI_W_Sign_Route203_2::
 msgbox SI_W_T_Sign_Route203_2, MSGBOX_NPC
 end
SI_W_T_Sign_Route203_3::
 .string "Esta é a Rota 203. Se a\ntempestade vier, procuro\pabrigo para os Pokémon\nprimeiro.$"
SI_W_T_Sign_Route203_3_En::
 .string "This is Route 203. If a\nstorm comes, I find\pshelter for the Pokemon\nfirst.$"
SI_W_Sign_Route203_3::
 msgbox SI_W_T_Sign_Route203_3, MSGBOX_NPC
 end
SI_W_T_Resident_238::
 .string "Guardo a primeira Poké\nBall. Ainda lembro como\pminha mão tremia. Esta é a\nRota 204. Ouvi passos nas\pfolhas e fiquei quieto. Um\nStarly pousou no meu\pombro!$"
SI_W_T_Resident_238_En::
 .string "I keep my first Poke Ball.\nI still remember my\pshaking hand. This is\nRoute 204. I stayed still\pat rustling leaves. A\nStarly landed on my\pshoulder!$"
SI_W_T_ResidentAfter_238::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_238_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_238::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_238_After
 msgbox SI_W_T_Resident_238, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_238_After:
 msgbox SI_W_T_ResidentAfter_238, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_239::
 .string "Levo chocolate quente\nextra. Sempre aparece um\pviajante que precisa. Esta\né a Rota 204. A estrada é\plonga. Prefiro conversar\ncom meus parceiros a medir\psó a distância.$"
SI_W_T_Resident_239_En::
 .string "I pack extra hot\nchocolate. A traveler\palways needs some. This is\nRoute 204. The road is\plong. I talk to my\npartners instead of just\pcounting miles.$"
SI_W_T_ResidentAfter_239::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_239_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_239::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_239_After
 msgbox SI_W_T_Resident_239, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_239_After:
 msgbox SI_W_T_ResidentAfter_239, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_240::
 .string "Cuido das ferramentas\nantes de sair. Meu\pparceiro conta comigo.\nEsta é a Rota 204. Quem\pluta aprende; quem escuta\ntambém. Não ignore os\pmoradores pelo caminho.$"
SI_W_T_Resident_240_En::
 .string "I check my tools before\nleaving. My partner relies\pon me. This is Route 204.\nFighting teaches;\plistening does too. Do not\nignore people along the\pway.$"
SI_W_T_ResidentAfter_240::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_240_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_240::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_240_After
 msgbox SI_W_T_Resident_240, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_240_After:
 msgbox SI_W_T_ResidentAfter_240, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_241::
 .string "Pescar exige esperar.\nAprendi mais com a água do\pque com pressa. Esta é a\nRota 204. Se a tempestade\pvier, procuro abrigo para\nos Pokémon primeiro.$"
SI_W_T_Resident_241_En::
 .string "Fishing takes patience.\nWater taught me more than\prushing. This is Route\n204. If a storm comes, I\pfind shelter for the\nPokemon first.$"
SI_W_T_ResidentAfter_241::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_241_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_241::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_241_After
 msgbox SI_W_T_Resident_241, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_241_After:
 msgbox SI_W_T_ResidentAfter_241, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_242::
 .string "Marquei o caminho para\nquem vem depois. Uma\ptrilha boa se compartilha.\nEsta é a Rota 204. Ouvi\ppassos nas folhas e fiquei\nquieto. Um Starly pousou\pno meu ombro!$"
SI_W_T_Resident_242_En::
 .string "I marked the path for the\nnext traveler. A good\ptrail is shared. This is\nRoute 204. I stayed still\pat rustling leaves. A\nStarly landed on my\pshoulder!$"
SI_W_T_ResidentAfter_242::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_242_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_242::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_242_After
 msgbox SI_W_T_Resident_242, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_242_After:
 msgbox SI_W_T_ResidentAfter_242, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_243::
 .string "Anoto também os erros. Um\nresultado bonito não vale\pse estiver errado. Esta é\na Rota 204. A estrada é\plonga. Prefiro conversar\ncom meus parceiros a medir\psó a distância.$"
SI_W_T_Resident_243_En::
 .string "I record mistakes too. A\npretty result is worthless\pif it is wrong. This is\nRoute 204. The road is\plong. I talk to my\npartners instead of just\pcounting miles.$"
SI_W_T_ResidentAfter_243::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_243_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_243::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_243_After
 msgbox SI_W_T_Resident_243, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_243_After:
 msgbox SI_W_T_ResidentAfter_243, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_244::
 .string "Meu Kricketune acompanha a\nmelodia. A gente erra\pjunto e tenta de novo.\nEsta é a Rota 204. Quem\pluta aprende; quem escuta\ntambém. Não ignore os\pmoradores pelo caminho.$"
SI_W_T_Resident_244_En::
 .string "My Kricketune follows the\nmelody. We miss together\pand try again. This is\nRoute 204. Fighting\pteaches; listening does\ntoo. Do not ignore people\palong the way.$"
SI_W_T_ResidentAfter_244::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_244_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_244::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_244_After
 msgbox SI_W_T_Resident_244, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_244_After:
 msgbox SI_W_T_ResidentAfter_244, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_245::
 .string "Treino uma piada nova por\ndia. Meu Mime Jr. é meu\pcrítico mais sincero. Esta\né a Rota 204. Se a\ptempestade vier, procuro\nabrigo para os Pokémon\pprimeiro.$"
SI_W_T_Resident_245_En::
 .string "I practice a new joke\ndaily. My Mime Jr. is my\pmost honest critic. This\nis Route 204. If a storm\pcomes, I find shelter for\nthe Pokemon first.$"
SI_W_T_ResidentAfter_245::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_245_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_245::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_245_After
 msgbox SI_W_T_Resident_245, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_245_After:
 msgbox SI_W_T_ResidentAfter_245, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_246::
 .string "Hoje consegui ler um mapa\nsem ajuda. Amanhã vou\pdesenhar meu próprio\ncaminho. Esta é a Rota\p204. Ouvi passos nas\nfolhas e fiquei quieto. Um\pStarly pousou no meu\nombro!$"
SI_W_T_Resident_246_En::
 .string "Today I read a map alone.\nTomorrow I will draw my\pown path. This is Route\n204. I stayed still at\prustling leaves. A Starly\nlanded on my shoulder!$"
SI_W_T_ResidentAfter_246::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_246_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_246::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_246_After
 msgbox SI_W_T_Resident_246, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_246_After:
 msgbox SI_W_T_ResidentAfter_246, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_247::
 .string "Um parceiro cansado merece\ndescanso. Vitória nenhuma\ppaga confiança perdida.\nEsta é a Rota 204. A\pestrada é longa. Prefiro\nconversar com meus\pparceiros a medir só a\ndistância.$"
SI_W_T_Resident_247_En::
 .string "A tired partner deserves\nrest. No win pays for lost\ptrust. This is Route 204.\nThe road is long. I talk\pto my partners instead of\njust counting miles.$"
SI_W_T_ResidentAfter_247::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_247_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_247::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_247_After
 msgbox SI_W_T_Resident_247, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_247_After:
 msgbox SI_W_T_ResidentAfter_247, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_248::
 .string "Meu pai me ensinou a\nreconhecer os passos de\pcada Pokémon do pasto.\nEsta é a Rota 204. Quem\pluta aprende; quem escuta\ntambém. Não ignore os\pmoradores pelo caminho.$"
SI_W_T_Resident_248_En::
 .string "Dad taught me to recognize\nevery Pokemon by its\pfootsteps. This is Route\n204. Fighting teaches;\plistening does too. Do not\nignore people along the\pway.$"
SI_W_T_ResidentAfter_248::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_248_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_248::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_248_After
 msgbox SI_W_T_Resident_248, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_248_After:
 msgbox SI_W_T_ResidentAfter_248, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_249::
 .string "Meu Ponyta corre ao meu\nlado, sem rédea. A escolha\pdele importa para mim.\nEsta é a Rota 204. Se a\ptempestade vier, procuro\nabrigo para os Pokémon\pprimeiro.$"
SI_W_T_Resident_249_En::
 .string "My Ponyta runs by my side\nwithout reins. His choice\pmatters to me. This is\nRoute 204. If a storm\pcomes, I find shelter for\nthe Pokemon first.$"
SI_W_T_ResidentAfter_249::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_249_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_249::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_249_After
 msgbox SI_W_T_Resident_249, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_249_After:
 msgbox SI_W_T_ResidentAfter_249, MSGBOX_DEFAULT
 release
 end
SI_W_T_Sign_Route204_0::
 .string "Esta é a Rota 204. Ouvi\npassos nas folhas e fiquei\pquieto. Um Starly pousou\nno meu ombro!$"
SI_W_T_Sign_Route204_0_En::
 .string "This is Route 204. I\nstayed still at rustling\pleaves. A Starly landed on\nmy shoulder!$"
SI_W_Sign_Route204_0::
 msgbox SI_W_T_Sign_Route204_0, MSGBOX_NPC
 end
SI_W_T_Sign_Route204_1::
 .string "Esta é a Rota 204. A\nestrada é longa. Prefiro\pconversar com meus\nparceiros a medir só a\pdistância.$"
SI_W_T_Sign_Route204_1_En::
 .string "This is Route 204. The\nroad is long. I talk to my\ppartners instead of just\ncounting miles.$"
SI_W_Sign_Route204_1::
 msgbox SI_W_T_Sign_Route204_1, MSGBOX_NPC
 end
SI_W_T_Sign_Route204_2::
 .string "Esta é a Rota 204. Quem\nluta aprende; quem escuta\ptambém. Não ignore os\nmoradores pelo caminho.$"
SI_W_T_Sign_Route204_2_En::
 .string "This is Route 204.\nFighting teaches;\plistening does too. Do not\nignore people along the\pway.$"
SI_W_Sign_Route204_2::
 msgbox SI_W_T_Sign_Route204_2, MSGBOX_NPC
 end
SI_W_T_Sign_Route204_3::
 .string "Esta é a Rota 204. Se a\ntempestade vier, procuro\pabrigo para os Pokémon\nprimeiro.$"
SI_W_T_Sign_Route204_3_En::
 .string "This is Route 204. If a\nstorm comes, I find\pshelter for the Pokemon\nfirst.$"
SI_W_Sign_Route204_3::
 msgbox SI_W_T_Sign_Route204_3, MSGBOX_NPC
 end
SI_W_T_Resident_250::
 .string "Guardo a primeira Poké\nBall. Ainda lembro como\pminha mão tremia. Esta é a\nRota 205. Ouvi passos nas\pfolhas e fiquei quieto. Um\nStarly pousou no meu\pombro!$"
SI_W_T_Resident_250_En::
 .string "I keep my first Poke Ball.\nI still remember my\pshaking hand. This is\nRoute 205. I stayed still\pat rustling leaves. A\nStarly landed on my\pshoulder!$"
SI_W_T_ResidentAfter_250::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_250_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_250::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_250_After
 msgbox SI_W_T_Resident_250, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_250_After:
 msgbox SI_W_T_ResidentAfter_250, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_251::
 .string "Levo chocolate quente\nextra. Sempre aparece um\pviajante que precisa. Esta\né a Rota 205. A estrada é\plonga. Prefiro conversar\ncom meus parceiros a medir\psó a distância.$"
SI_W_T_Resident_251_En::
 .string "I pack extra hot\nchocolate. A traveler\palways needs some. This is\nRoute 205. The road is\plong. I talk to my\npartners instead of just\pcounting miles.$"
SI_W_T_ResidentAfter_251::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_251_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_251::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_251_After
 msgbox SI_W_T_Resident_251, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_251_After:
 msgbox SI_W_T_ResidentAfter_251, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_252::
 .string "Cuido das ferramentas\nantes de sair. Meu\pparceiro conta comigo.\nEsta é a Rota 205. Ouvi\ppassos nas folhas e fiquei\nquieto. Um Starly pousou\pno meu ombro!$"
SI_W_T_Resident_252_En::
 .string "I check my tools before\nleaving. My partner relies\pon me. This is Route 205.\nI stayed still at rustling\pleaves. A Starly landed on\nmy shoulder!$"
SI_W_T_ResidentAfter_252::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_252_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_252::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_252_After
 msgbox SI_W_T_Resident_252, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_252_After:
 msgbox SI_W_T_ResidentAfter_252, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_253::
 .string "Pescar exige esperar.\nAprendi mais com a água do\pque com pressa. Esta é a\nRota 205. A estrada é\plonga. Prefiro conversar\ncom meus parceiros a medir\psó a distância.$"
SI_W_T_Resident_253_En::
 .string "Fishing takes patience.\nWater taught me more than\prushing. This is Route\n205. The road is long. I\ptalk to my partners\ninstead of just counting\pmiles.$"
SI_W_T_ResidentAfter_253::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_253_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_253::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_253_After
 msgbox SI_W_T_Resident_253, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_253_After:
 msgbox SI_W_T_ResidentAfter_253, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_254::
 .string "Marquei o caminho para\nquem vem depois. Uma\ptrilha boa se compartilha.\nEsta é a Rota 205. Quem\pluta aprende; quem escuta\ntambém. Não ignore os\pmoradores pelo caminho.$"
SI_W_T_Resident_254_En::
 .string "I marked the path for the\nnext traveler. A good\ptrail is shared. This is\nRoute 205. Fighting\pteaches; listening does\ntoo. Do not ignore people\palong the way.$"
SI_W_T_ResidentAfter_254::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_254_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_254::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_254_After
 msgbox SI_W_T_Resident_254, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_254_After:
 msgbox SI_W_T_ResidentAfter_254, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_255::
 .string "Anoto também os erros. Um\nresultado bonito não vale\pse estiver errado. Esta é\na Rota 205. Se a\ptempestade vier, procuro\nabrigo para os Pokémon\pprimeiro.$"
SI_W_T_Resident_255_En::
 .string "I record mistakes too. A\npretty result is worthless\pif it is wrong. This is\nRoute 205. If a storm\pcomes, I find shelter for\nthe Pokemon first.$"
SI_W_T_ResidentAfter_255::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_255_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_255::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_255_After
 msgbox SI_W_T_Resident_255, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_255_After:
 msgbox SI_W_T_ResidentAfter_255, MSGBOX_DEFAULT
 release
 end
SI_W_T_Sign_Route205_North_0::
 .string "Esta é a Rota 205. Ouvi\npassos nas folhas e fiquei\pquieto. Um Starly pousou\nno meu ombro!$"
SI_W_T_Sign_Route205_North_0_En::
 .string "This is Route 205. I\nstayed still at rustling\pleaves. A Starly landed on\nmy shoulder!$"
SI_W_Sign_Route205_North_0::
 msgbox SI_W_T_Sign_Route205_North_0, MSGBOX_NPC
 end
SI_W_T_Sign_Route205_North_1::
 .string "Esta é a Rota 205. A\nestrada é longa. Prefiro\pconversar com meus\nparceiros a medir só a\pdistância.$"
SI_W_T_Sign_Route205_North_1_En::
 .string "This is Route 205. The\nroad is long. I talk to my\ppartners instead of just\ncounting miles.$"
SI_W_Sign_Route205_North_1::
 msgbox SI_W_T_Sign_Route205_North_1, MSGBOX_NPC
 end
SI_W_T_Sign_Route205_North_2::
 .string "Esta é a Rota 205. Quem\nluta aprende; quem escuta\ptambém. Não ignore os\nmoradores pelo caminho.$"
SI_W_T_Sign_Route205_North_2_En::
 .string "This is Route 205.\nFighting teaches;\plistening does too. Do not\nignore people along the\pway.$"
SI_W_Sign_Route205_North_2::
 msgbox SI_W_T_Sign_Route205_North_2, MSGBOX_NPC
 end
SI_W_T_Resident_256::
 .string "Meu Kricketune acompanha a\nmelodia. A gente erra\pjunto e tenta de novo.\nEsta é a Rota 205. Ouvi\ppassos nas folhas e fiquei\nquieto. Um Starly pousou\pno meu ombro!$"
SI_W_T_Resident_256_En::
 .string "My Kricketune follows the\nmelody. We miss together\pand try again. This is\nRoute 205. I stayed still\pat rustling leaves. A\nStarly landed on my\pshoulder!$"
SI_W_T_ResidentAfter_256::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_256_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_256::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_256_After
 msgbox SI_W_T_Resident_256, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_256_After:
 msgbox SI_W_T_ResidentAfter_256, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_257::
 .string "Treino uma piada nova por\ndia. Meu Mime Jr. é meu\pcrítico mais sincero. Esta\né a Rota 205. A estrada é\plonga. Prefiro conversar\ncom meus parceiros a medir\psó a distância.$"
SI_W_T_Resident_257_En::
 .string "I practice a new joke\ndaily. My Mime Jr. is my\pmost honest critic. This\nis Route 205. The road is\plong. I talk to my\npartners instead of just\pcounting miles.$"
SI_W_T_ResidentAfter_257::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_257_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_257::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_257_After
 msgbox SI_W_T_Resident_257, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_257_After:
 msgbox SI_W_T_ResidentAfter_257, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_258::
 .string "Hoje consegui ler um mapa\nsem ajuda. Amanhã vou\pdesenhar meu próprio\ncaminho. Esta é a Rota\p205. Quem luta aprende;\nquem escuta também. Não\pignore os moradores pelo\ncaminho.$"
SI_W_T_Resident_258_En::
 .string "Today I read a map alone.\nTomorrow I will draw my\pown path. This is Route\n205. Fighting teaches;\plistening does too. Do not\nignore people along the\pway.$"
SI_W_T_ResidentAfter_258::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_258_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_258::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_258_After
 msgbox SI_W_T_Resident_258, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_258_After:
 msgbox SI_W_T_ResidentAfter_258, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_259::
 .string "Um parceiro cansado merece\ndescanso. Vitória nenhuma\ppaga confiança perdida.\nEsta é a Rota 205. Se a\ptempestade vier, procuro\nabrigo para os Pokémon\pprimeiro.$"
SI_W_T_Resident_259_En::
 .string "A tired partner deserves\nrest. No win pays for lost\ptrust. This is Route 205.\nIf a storm comes, I find\pshelter for the Pokemon\nfirst.$"
SI_W_T_ResidentAfter_259::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_259_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_259::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_259_After
 msgbox SI_W_T_Resident_259, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_259_After:
 msgbox SI_W_T_ResidentAfter_259, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_260::
 .string "Meu pai me ensinou a\nreconhecer os passos de\pcada Pokémon do pasto.\nEsta é a Rota 205. Ouvi\ppassos nas folhas e fiquei\nquieto. Um Starly pousou\pno meu ombro!$"
SI_W_T_Resident_260_En::
 .string "Dad taught me to recognize\nevery Pokemon by its\pfootsteps. This is Route\n205. I stayed still at\prustling leaves. A Starly\nlanded on my shoulder!$"
SI_W_T_ResidentAfter_260::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_260_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_260::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_260_After
 msgbox SI_W_T_Resident_260, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_260_After:
 msgbox SI_W_T_ResidentAfter_260, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_261::
 .string "Meu Ponyta corre ao meu\nlado, sem rédea. A escolha\pdele importa para mim.\nEsta é a Rota 205. A\pestrada é longa. Prefiro\nconversar com meus\pparceiros a medir só a\ndistância.$"
SI_W_T_Resident_261_En::
 .string "My Ponyta runs by my side\nwithout reins. His choice\pmatters to me. This is\nRoute 205. The road is\plong. I talk to my\npartners instead of just\pcounting miles.$"
SI_W_T_ResidentAfter_261::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_261_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_261::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_261_After
 msgbox SI_W_T_Resident_261, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_261_After:
 msgbox SI_W_T_ResidentAfter_261, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_262::
 .string "Guardo a primeira Poké\nBall. Ainda lembro como\pminha mão tremia. Esta é a\nRota 205. Quem luta\paprende; quem escuta\ntambém. Não ignore os\pmoradores pelo caminho.$"
SI_W_T_Resident_262_En::
 .string "I keep my first Poke Ball.\nI still remember my\pshaking hand. This is\nRoute 205. Fighting\pteaches; listening does\ntoo. Do not ignore people\palong the way.$"
SI_W_T_ResidentAfter_262::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_262_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_262::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_262_After
 msgbox SI_W_T_Resident_262, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_262_After:
 msgbox SI_W_T_ResidentAfter_262, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_263::
 .string "Levo chocolate quente\nextra. Sempre aparece um\pviajante que precisa. Esta\né a Rota 205. Se a\ptempestade vier, procuro\nabrigo para os Pokémon\pprimeiro.$"
SI_W_T_Resident_263_En::
 .string "I pack extra hot\nchocolate. A traveler\palways needs some. This is\nRoute 205. If a storm\pcomes, I find shelter for\nthe Pokemon first.$"
SI_W_T_ResidentAfter_263::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_263_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_263::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_263_After
 msgbox SI_W_T_Resident_263, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_263_After:
 msgbox SI_W_T_ResidentAfter_263, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_264::
 .string "Cuido das ferramentas\nantes de sair. Meu\pparceiro conta comigo.\nEsta é a Rota 205. Ouvi\ppassos nas folhas e fiquei\nquieto. Um Starly pousou\pno meu ombro!$"
SI_W_T_Resident_264_En::
 .string "I check my tools before\nleaving. My partner relies\pon me. This is Route 205.\nI stayed still at rustling\pleaves. A Starly landed on\nmy shoulder!$"
SI_W_T_ResidentAfter_264::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_264_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_264::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_264_After
 msgbox SI_W_T_Resident_264, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_264_After:
 msgbox SI_W_T_ResidentAfter_264, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_265::
 .string "Pescar exige esperar.\nAprendi mais com a água do\pque com pressa. Esta é a\nRota 205. A estrada é\plonga. Prefiro conversar\ncom meus parceiros a medir\psó a distância.$"
SI_W_T_Resident_265_En::
 .string "Fishing takes patience.\nWater taught me more than\prushing. This is Route\n205. The road is long. I\ptalk to my partners\ninstead of just counting\pmiles.$"
SI_W_T_ResidentAfter_265::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_265_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_265::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_265_After
 msgbox SI_W_T_Resident_265, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_265_After:
 msgbox SI_W_T_ResidentAfter_265, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_266::
 .string "Marquei o caminho para\nquem vem depois. Uma\ptrilha boa se compartilha.\nEsta é a Rota 205. Quem\pluta aprende; quem escuta\ntambém. Não ignore os\pmoradores pelo caminho.$"
SI_W_T_Resident_266_En::
 .string "I marked the path for the\nnext traveler. A good\ptrail is shared. This is\nRoute 205. Fighting\pteaches; listening does\ntoo. Do not ignore people\palong the way.$"
SI_W_T_ResidentAfter_266::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_266_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_266::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_266_After
 msgbox SI_W_T_Resident_266, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_266_After:
 msgbox SI_W_T_ResidentAfter_266, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_267::
 .string "Anoto também os erros. Um\nresultado bonito não vale\pse estiver errado. Esta é\na Rota 205. Se a\ptempestade vier, procuro\nabrigo para os Pokémon\pprimeiro.$"
SI_W_T_Resident_267_En::
 .string "I record mistakes too. A\npretty result is worthless\pif it is wrong. This is\nRoute 205. If a storm\pcomes, I find shelter for\nthe Pokemon first.$"
SI_W_T_ResidentAfter_267::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_267_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_267::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_267_After
 msgbox SI_W_T_Resident_267, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_267_After:
 msgbox SI_W_T_ResidentAfter_267, MSGBOX_DEFAULT
 release
 end
SI_W_T_Sign_Route205_South_0::
 .string "Esta é a Rota 205. Ouvi\npassos nas folhas e fiquei\pquieto. Um Starly pousou\nno meu ombro!$"
SI_W_T_Sign_Route205_South_0_En::
 .string "This is Route 205. I\nstayed still at rustling\pleaves. A Starly landed on\nmy shoulder!$"
SI_W_Sign_Route205_South_0::
 msgbox SI_W_T_Sign_Route205_South_0, MSGBOX_NPC
 end
SI_W_T_Sign_Route205_South_1::
 .string "Esta é a Rota 205. A\nestrada é longa. Prefiro\pconversar com meus\nparceiros a medir só a\pdistância.$"
SI_W_T_Sign_Route205_South_1_En::
 .string "This is Route 205. The\nroad is long. I talk to my\ppartners instead of just\ncounting miles.$"
SI_W_Sign_Route205_South_1::
 msgbox SI_W_T_Sign_Route205_South_1, MSGBOX_NPC
 end
SI_W_T_Sign_Route205_South_2::
 .string "Esta é a Rota 205. Quem\nluta aprende; quem escuta\ptambém. Não ignore os\nmoradores pelo caminho.$"
SI_W_T_Sign_Route205_South_2_En::
 .string "This is Route 205.\nFighting teaches;\plistening does too. Do not\nignore people along the\pway.$"
SI_W_Sign_Route205_South_2::
 msgbox SI_W_T_Sign_Route205_South_2, MSGBOX_NPC
 end
SI_W_T_Sign_Route205_South_3::
 .string "Esta é a Rota 205. Se a\ntempestade vier, procuro\pabrigo para os Pokémon\nprimeiro.$"
SI_W_T_Sign_Route205_South_3_En::
 .string "This is Route 205. If a\nstorm comes, I find\pshelter for the Pokemon\nfirst.$"
SI_W_Sign_Route205_South_3::
 msgbox SI_W_T_Sign_Route205_South_3, MSGBOX_NPC
 end
SI_W_T_Sign_Route205_South_4::
 .string "Esta é a Rota 205. Ouvi\npassos nas folhas e fiquei\pquieto. Um Starly pousou\nno meu ombro!$"
SI_W_T_Sign_Route205_South_4_En::
 .string "This is Route 205. I\nstayed still at rustling\pleaves. A Starly landed on\nmy shoulder!$"
SI_W_Sign_Route205_South_4::
 msgbox SI_W_T_Sign_Route205_South_4, MSGBOX_NPC
 end
SI_W_T_Resident_268::
 .string "Meu Kricketune acompanha a\nmelodia. A gente erra\pjunto e tenta de novo.\nNeste lugar aprendi a\pouvir meu parceiro. Cada\nviagem deixa uma lembrança\pdiferente.$"
SI_W_T_Resident_268_En::
 .string "My Kricketune follows the\nmelody. We miss together\pand try again. Here I\nlearned to listen to my\ppartner. Every journey\nleaves a different memory.$"
SI_W_T_ResidentAfter_268::
 .string "Vamos fazer uma festa\npequena. Cada pessoa traz\palgo; ninguém precisa\npagar para entrar.$"
SI_W_T_ResidentAfter_268_En::
 .string "We are having a small\nparty. Everyone brings\psomething; nobody pays to\njoin.$"
SI_W_Resident_268::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_268_After
 msgbox SI_W_T_Resident_268, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_268_After:
 msgbox SI_W_T_ResidentAfter_268, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_269::
 .string "Treino uma piada nova por\ndia. Meu Mime Jr. é meu\pcrítico mais sincero. Uma\nBuneary invadiu o\plaboratório e levou as\netiquetas! Rowan fingiu\pque fazia parte da\npesquisa.$"
SI_W_T_Resident_269_En::
 .string "I practice a new joke\ndaily. My Mime Jr. is my\pmost honest critic. A\nBuneary stole the lab\plabels! Rowan pretended it\nwas part of his research.$"
SI_W_T_ResidentAfter_269::
 .string "Vamos fazer uma festa\npequena. Cada pessoa traz\palgo; ninguém precisa\npagar para entrar.$"
SI_W_T_ResidentAfter_269_En::
 .string "We are having a small\nparty. Everyone brings\psomething; nobody pays to\njoin.$"
SI_W_Resident_269::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_269_After
 msgbox SI_W_T_Resident_269, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_269_After:
 msgbox SI_W_T_ResidentAfter_269, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_270::
 .string "Hoje consegui ler um mapa\nsem ajuda. Amanhã vou\pdesenhar meu próprio\ncaminho. Recolho algas da\ppraia. Hoje todas\napontavam para o lago,\pcontra a corrente.$"
SI_W_T_Resident_270_En::
 .string "Today I read a map alone.\nTomorrow I will draw my\pown path. I collect\nseaweed. Today it pointed\pto the lake against the\ncurrent.$"
SI_W_T_ResidentAfter_270::
 .string "Vi vocês ajudando na\ncrise. Quero que meu filho\pcresça sabendo que alguém\nse importou.$"
SI_W_T_ResidentAfter_270_En::
 .string "I saw you help in the\ncrisis. I want my son to\pknow someone cared.$"
SI_W_Resident_270::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_270_After
 msgbox SI_W_T_Resident_270, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_270_After:
 msgbox SI_W_T_ResidentAfter_270, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_271::
 .string "Um parceiro cansado merece\ndescanso. Vitória nenhuma\ppaga confiança perdida.\nTem um jovem na Rota 201\pque ajuda a treinar. Ele\nsó dá doces com\pAnti-Grinding ligado.$"
SI_W_T_Resident_271_En::
 .string "A tired partner deserves\nrest. No win pays for lost\ptrust. A youngster on\nRoute 201 helps training.\pHis candy needs\nAnti-Grinding enabled.$"
SI_W_T_ResidentAfter_271::
 .string "O ar voltou a ter cheiro\nde chuva. Eu nem percebia\po quanto sentia falta.$"
SI_W_T_ResidentAfter_271_En::
 .string "The air smells like rain\nagain. I had not realized\phow much I missed it.$"
SI_W_Resident_271::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_271_After
 msgbox SI_W_T_Resident_271, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_271_After:
 msgbox SI_W_T_ResidentAfter_271, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_272::
 .string "Meu pai me ensinou a\nreconhecer os passos de\pcada Pokémon do pasto. Uma\nBuneary invadiu o\plaboratório e levou as\netiquetas! Rowan fingiu\pque fazia parte da\npesquisa.$"
SI_W_T_Resident_272_En::
 .string "Dad taught me to recognize\nevery Pokemon by its\pfootsteps. A Buneary stole\nthe lab labels! Rowan\ppretended it was part of\nhis research.$"
SI_W_T_ResidentAfter_272::
 .string "Vamos fazer uma festa\npequena. Cada pessoa traz\palgo; ninguém precisa\npagar para entrar.$"
SI_W_T_ResidentAfter_272_En::
 .string "We are having a small\nparty. Everyone brings\psomething; nobody pays to\njoin.$"
SI_W_Resident_272::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_272_After
 msgbox SI_W_T_Resident_272, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_272_After:
 msgbox SI_W_T_ResidentAfter_272, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_273::
 .string "Meu Ponyta corre ao meu\nlado, sem rédea. A escolha\pdele importa para mim.\nRecolho algas da praia.\pHoje todas apontavam para\no lago, contra a corrente.$"
SI_W_T_Resident_273_En::
 .string "My Ponyta runs by my side\nwithout reins. His choice\pmatters to me. I collect\nseaweed. Today it pointed\pto the lake against the\ncurrent.$"
SI_W_T_ResidentAfter_273::
 .string "Vi vocês ajudando na\ncrise. Quero que meu filho\pcresça sabendo que alguém\nse importou.$"
SI_W_T_ResidentAfter_273_En::
 .string "I saw you help in the\ncrisis. I want my son to\pknow someone cared.$"
SI_W_Resident_273::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_273_After
 msgbox SI_W_T_Resident_273, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_273_After:
 msgbox SI_W_T_ResidentAfter_273, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_274::
 .string "Guardo a primeira Poké\nBall. Ainda lembro como\pminha mão tremia. Tem um\njovem na Rota 201 que\pajuda a treinar. Ele só dá\ndoces com Anti-Grinding\pligado.$"
SI_W_T_Resident_274_En::
 .string "I keep my first Poke Ball.\nI still remember my\pshaking hand. A youngster\non Route 201 helps\ptraining. His candy needs\nAnti-Grinding enabled.$"
SI_W_T_ResidentAfter_274::
 .string "O ar voltou a ter cheiro\nde chuva. Eu nem percebia\po quanto sentia falta.$"
SI_W_T_ResidentAfter_274_En::
 .string "The air smells like rain\nagain. I had not realized\phow much I missed it.$"
SI_W_Resident_274::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_274_After
 msgbox SI_W_T_Resident_274, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_274_After:
 msgbox SI_W_T_ResidentAfter_274, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_275::
 .string "Levo chocolate quente\nextra. Sempre aparece um\pviajante que precisa. Uma\nBuneary invadiu o\plaboratório e levou as\netiquetas! Rowan fingiu\pque fazia parte da\npesquisa.$"
SI_W_T_Resident_275_En::
 .string "I pack extra hot\nchocolate. A traveler\palways needs some. A\nBuneary stole the lab\plabels! Rowan pretended it\nwas part of his research.$"
SI_W_T_ResidentAfter_275::
 .string "Vamos fazer uma festa\npequena. Cada pessoa traz\palgo; ninguém precisa\npagar para entrar.$"
SI_W_T_ResidentAfter_275_En::
 .string "We are having a small\nparty. Everyone brings\psomething; nobody pays to\njoin.$"
SI_W_Resident_275::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_275_After
 msgbox SI_W_T_Resident_275, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_275_After:
 msgbox SI_W_T_ResidentAfter_275, MSGBOX_DEFAULT
 release
 end
SI_W_T_Sign_SandgemTown_0::
 .string "Uma Buneary invadiu o\nlaboratório e levou as\petiquetas! Rowan fingiu\nque fazia parte da\ppesquisa.$"
SI_W_T_Sign_SandgemTown_0_En::
 .string "A Buneary stole the lab\nlabels! Rowan pretended it\pwas part of his research.$"
SI_W_Sign_SandgemTown_0::
 msgbox SI_W_T_Sign_SandgemTown_0, MSGBOX_NPC
 end
SI_W_T_Sign_SandgemTown_1::
 .string "Recolho algas da praia.\nHoje todas apontavam para\po lago, contra a corrente.$"
SI_W_T_Sign_SandgemTown_1_En::
 .string "I collect seaweed. Today\nit pointed to the lake\pagainst the current.$"
SI_W_Sign_SandgemTown_1::
 msgbox SI_W_T_Sign_SandgemTown_1, MSGBOX_NPC
 end
SI_W_T_Sign_SandgemTown_2::
 .string "Tem um jovem na Rota 201\nque ajuda a treinar. Ele\psó dá doces com\nAnti-Grinding ligado.$"
SI_W_T_Sign_SandgemTown_2_En::
 .string "A youngster on Route 201\nhelps training. His candy\pneeds Anti-Grinding\nenabled.$"
SI_W_Sign_SandgemTown_2::
 msgbox SI_W_T_Sign_SandgemTown_2, MSGBOX_NPC
 end
SI_W_T_Sign_SandgemTown_3::
 .string "Uma Buneary invadiu o\nlaboratório e levou as\petiquetas! Rowan fingiu\nque fazia parte da\ppesquisa.$"
SI_W_T_Sign_SandgemTown_3_En::
 .string "A Buneary stole the lab\nlabels! Rowan pretended it\pwas part of his research.$"
SI_W_Sign_SandgemTown_3::
 msgbox SI_W_T_Sign_SandgemTown_3, MSGBOX_NPC
 end
SI_W_T_Sign_SandgemTown_4::
 .string "Recolho algas da praia.\nHoje todas apontavam para\po lago, contra a corrente.$"
SI_W_T_Sign_SandgemTown_4_En::
 .string "I collect seaweed. Today\nit pointed to the lake\pagainst the current.$"
SI_W_Sign_SandgemTown_4::
 msgbox SI_W_T_Sign_SandgemTown_4, MSGBOX_NPC
 end
SI_W_T_Sign_SandgemTown_5::
 .string "Tem um jovem na Rota 201\nque ajuda a treinar. Ele\psó dá doces com\nAnti-Grinding ligado.$"
SI_W_T_Sign_SandgemTown_5_En::
 .string "A youngster on Route 201\nhelps training. His candy\pneeds Anti-Grinding\nenabled.$"
SI_W_Sign_SandgemTown_5::
 msgbox SI_W_T_Sign_SandgemTown_5, MSGBOX_NPC
 end
SI_W_T_Resident_276::
 .string "Cuido das ferramentas\nantes de sair. Meu\pparceiro conta comigo. Uma\nBuneary invadiu o\plaboratório e levou as\netiquetas! Rowan fingiu\pque fazia parte da\npesquisa.$"
SI_W_T_Resident_276_En::
 .string "I check my tools before\nleaving. My partner relies\pon me. A Buneary stole the\nlab labels! Rowan\ppretended it was part of\nhis research.$"
SI_W_T_ResidentAfter_276::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_276_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_276::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_276_After
 msgbox SI_W_T_Resident_276, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_276_After:
 msgbox SI_W_T_ResidentAfter_276, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_277::
 .string "Pescar exige esperar.\nAprendi mais com a água do\pque com pressa. Recolho\nalgas da praia. Hoje todas\papontavam para o lago,\ncontra a corrente.$"
SI_W_T_Resident_277_En::
 .string "Fishing takes patience.\nWater taught me more than\prushing. I collect\nseaweed. Today it pointed\pto the lake against the\ncurrent.$"
SI_W_T_ResidentAfter_277::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_277_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_277::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_277_After
 msgbox SI_W_T_Resident_277, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_277_After:
 msgbox SI_W_T_ResidentAfter_277, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_278::
 .string "Marquei o caminho para\nquem vem depois. Uma\ptrilha boa se compartilha.\nRecolho algas da praia.\pHoje todas apontavam para\no lago, contra a corrente.$"
SI_W_T_Resident_278_En::
 .string "I marked the path for the\nnext traveler. A good\ptrail is shared. I collect\nseaweed. Today it pointed\pto the lake against the\ncurrent.$"
SI_W_T_ResidentAfter_278::
 .string "O ar voltou a ter cheiro\nde chuva. Eu nem percebia\po quanto sentia falta.$"
SI_W_T_ResidentAfter_278_En::
 .string "The air smells like rain\nagain. I had not realized\phow much I missed it.$"
SI_W_Resident_278::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_278_After
 msgbox SI_W_T_Resident_278, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_278_After:
 msgbox SI_W_T_ResidentAfter_278, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_279::
 .string "Anoto também os erros. Um\nresultado bonito não vale\pse estiver errado. Tem um\njovem na Rota 201 que\pajuda a treinar. Ele só dá\ndoces com Anti-Grinding\pligado.$"
SI_W_T_Resident_279_En::
 .string "I record mistakes too. A\npretty result is worthless\pif it is wrong. A\nyoungster on Route 201\phelps training. His candy\nneeds Anti-Grinding\penabled.$"
SI_W_T_ResidentAfter_279::
 .string "Vamos fazer uma festa\npequena. Cada pessoa traz\palgo; ninguém precisa\npagar para entrar.$"
SI_W_T_ResidentAfter_279_En::
 .string "We are having a small\nparty. Everyone brings\psomething; nobody pays to\njoin.$"
SI_W_Resident_279::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_279_After
 msgbox SI_W_T_Resident_279, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_279_After:
 msgbox SI_W_T_ResidentAfter_279, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_280::
 .string "Meu Kricketune acompanha a\nmelodia. A gente erra\pjunto e tenta de novo.\nRecolho algas da praia.\pHoje todas apontavam para\no lago, contra a corrente.$"
SI_W_T_Resident_280_En::
 .string "My Kricketune follows the\nmelody. We miss together\pand try again. I collect\nseaweed. Today it pointed\pto the lake against the\ncurrent.$"
SI_W_T_ResidentAfter_280::
 .string "Vamos fazer uma festa\npequena. Cada pessoa traz\palgo; ninguém precisa\npagar para entrar.$"
SI_W_T_ResidentAfter_280_En::
 .string "We are having a small\nparty. Everyone brings\psomething; nobody pays to\njoin.$"
SI_W_Resident_280::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_280_After
 msgbox SI_W_T_Resident_280, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_280_After:
 msgbox SI_W_T_ResidentAfter_280, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_281::
 .string "Treino uma piada nova por\ndia. Meu Mime Jr. é meu\pcrítico mais sincero. Tem\num jovem na Rota 201 que\pajuda a treinar. Ele só dá\ndoces com Anti-Grinding\pligado.$"
SI_W_T_Resident_281_En::
 .string "I practice a new joke\ndaily. My Mime Jr. is my\pmost honest critic. A\nyoungster on Route 201\phelps training. His candy\nneeds Anti-Grinding\penabled.$"
SI_W_T_ResidentAfter_281::
 .string "Vi vocês ajudando na\ncrise. Quero que meu filho\pcresça sabendo que alguém\nse importou.$"
SI_W_T_ResidentAfter_281_En::
 .string "I saw you help in the\ncrisis. I want my son to\pknow someone cared.$"
SI_W_Resident_281::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_281_After
 msgbox SI_W_T_Resident_281, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_281_After:
 msgbox SI_W_T_ResidentAfter_281, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_282::
 .string "Hoje consegui ler um mapa\nsem ajuda. Amanhã vou\pdesenhar meu próprio\ncaminho. Uma Buneary\pinvadiu o laboratório e\nlevou as etiquetas! Rowan\pfingiu que fazia parte da\npesquisa.$"
SI_W_T_Resident_282_En::
 .string "Today I read a map alone.\nTomorrow I will draw my\pown path. A Buneary stole\nthe lab labels! Rowan\ppretended it was part of\nhis research.$"
SI_W_T_ResidentAfter_282::
 .string "O ar voltou a ter cheiro\nde chuva. Eu nem percebia\po quanto sentia falta.$"
SI_W_T_ResidentAfter_282_En::
 .string "The air smells like rain\nagain. I had not realized\phow much I missed it.$"
SI_W_Resident_282::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_282_After
 msgbox SI_W_T_Resident_282, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_282_After:
 msgbox SI_W_T_ResidentAfter_282, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_283::
 .string "Um parceiro cansado merece\ndescanso. Vitória nenhuma\ppaga confiança perdida.\nUma Buneary invadiu o\plaboratório e levou as\netiquetas! Rowan fingiu\pque fazia parte da\npesquisa.$"
SI_W_T_Resident_283_En::
 .string "A tired partner deserves\nrest. No win pays for lost\ptrust. A Buneary stole the\nlab labels! Rowan\ppretended it was part of\nhis research.$"
SI_W_T_ResidentAfter_283::
 .string "Vi vocês ajudando na\ncrise. Quero que meu filho\pcresça sabendo que alguém\nse importou.$"
SI_W_T_ResidentAfter_283_En::
 .string "I saw you help in the\ncrisis. I want my son to\pknow someone cared.$"
SI_W_Resident_283::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_283_After
 msgbox SI_W_T_Resident_283, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_283_After:
 msgbox SI_W_T_ResidentAfter_283, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_284::
 .string "Meu pai me ensinou a\nreconhecer os passos de\pcada Pokémon do pasto. Uma\nBuneary invadiu o\plaboratório e levou as\netiquetas! Rowan fingiu\pque fazia parte da\npesquisa.$"
SI_W_T_Resident_284_En::
 .string "Dad taught me to recognize\nevery Pokemon by its\pfootsteps. A Buneary stole\nthe lab labels! Rowan\ppretended it was part of\nhis research.$"
SI_W_T_ResidentAfter_284::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_284_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_284::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_284_After
 msgbox SI_W_T_Resident_284, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_284_After:
 msgbox SI_W_T_ResidentAfter_284, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_285::
 .string "Meu Ponyta corre ao meu\nlado, sem rédea. A escolha\pdele importa para mim.\nRecolho algas da praia.\pHoje todas apontavam para\no lago, contra a corrente.$"
SI_W_T_Resident_285_En::
 .string "My Ponyta runs by my side\nwithout reins. His choice\pmatters to me. I collect\nseaweed. Today it pointed\pto the lake against the\ncurrent.$"
SI_W_T_ResidentAfter_285::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_285_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_285::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_285_After
 msgbox SI_W_T_Resident_285, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_285_After:
 msgbox SI_W_T_ResidentAfter_285, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_286::
 .string "Guardo a primeira Poké\nBall. Ainda lembro como\pminha mão tremia. Barry\nveio do Lago Acuity\pcalado. Foi a primeira vez\nque o vi sem correr.$"
SI_W_T_Resident_286_En::
 .string "I keep my first Poke Ball.\nI still remember my\pshaking hand. Barry came\nfrom Lake Acuity in\psilence. It was the first\ntime I saw him stop\prunning.$"
SI_W_T_ResidentAfter_286::
 .string "Vamos fazer uma festa\npequena. Cada pessoa traz\palgo; ninguém precisa\npagar para entrar.$"
SI_W_T_ResidentAfter_286_En::
 .string "We are having a small\nparty. Everyone brings\psomething; nobody pays to\njoin.$"
SI_W_Resident_286::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_286_After
 msgbox SI_W_T_Resident_286, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_286_After:
 msgbox SI_W_T_ResidentAfter_286, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_287::
 .string "Levo chocolate quente\nextra. Sempre aparece um\pviajante que precisa. As\nletras das ruínas mudaram\pde lugar no meu desenho.\nNão me diga que desenhei\perrado!$"
SI_W_T_Resident_287_En::
 .string "I pack extra hot\nchocolate. A traveler\palways needs some. The\nruin letters moved in my\pdrawing. Do not tell me I\ndrew it wrong!$"
SI_W_T_ResidentAfter_287::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_287_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_287::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_287_After
 msgbox SI_W_T_Resident_287, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_287_After:
 msgbox SI_W_T_ResidentAfter_287, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_288::
 .string "Cuido das ferramentas\nantes de sair. Meu\pparceiro conta comigo. O\nfarol guia barcos, mas\phoje eu vi uma luz vindo\ndo mar para ele.$"
SI_W_T_Resident_288_En::
 .string "I check my tools before\nleaving. My partner relies\pon me. The lighthouse\nguides boats. Today a\plight came from the sea\ntoward it.$"
SI_W_T_ResidentAfter_288::
 .string "Vi vocês ajudando na\ncrise. Quero que meu filho\pcresça sabendo que alguém\nse importou.$"
SI_W_T_ResidentAfter_288_En::
 .string "I saw you help in the\ncrisis. I want my son to\pknow someone cared.$"
SI_W_Resident_288::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_288_After
 msgbox SI_W_T_Resident_288, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_288_After:
 msgbox SI_W_T_ResidentAfter_288, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_289::
 .string "Pescar exige esperar.\nAprendi mais com a água do\pque com pressa. Neste\nlugar aprendi a ouvir meu\pparceiro. Cada viagem\ndeixa uma lembrança\pdiferente.$"
SI_W_T_Resident_289_En::
 .string "Fishing takes patience.\nWater taught me more than\prushing. Here I learned to\nlisten to my partner.\pEvery journey leaves a\ndifferent memory.$"
SI_W_T_ResidentAfter_289::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_289_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_289::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_289_After
 msgbox SI_W_T_Resident_289, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_289_After:
 msgbox SI_W_T_ResidentAfter_289, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_290::
 .string "Marquei o caminho para\nquem vem depois. Uma\ptrilha boa se compartilha.\nMamãe disse para deixar as\pbotas na porta. Voltei com\nlama até no cabelo!$"
SI_W_T_Resident_290_En::
 .string "I marked the path for the\nnext traveler. A good\ptrail is shared. Mom told\nme to leave my boots\poutside. Even my hair came\nback muddy!$"
SI_W_T_ResidentAfter_290::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_290_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_290::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_290_After
 msgbox SI_W_T_Resident_290, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_290_After:
 msgbox SI_W_T_ResidentAfter_290, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_291::
 .string "Anoto também os erros. Um\nresultado bonito não vale\pse estiver errado. Barry\nsaiu sem terminar o café.\pAposto que esqueceu alguma\ncoisa de novo.$"
SI_W_T_Resident_291_En::
 .string "I record mistakes too. A\npretty result is worthless\pif it is wrong. Barry left\nwithout finishing\pbreakfast. I bet he forgot\nsomething again.$"
SI_W_T_ResidentAfter_291::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_291_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_291::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_291_After
 msgbox SI_W_T_Resident_291, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_291_After:
 msgbox SI_W_T_ResidentAfter_291, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_292::
 .string "Meu Kricketune acompanha a\nmelodia. A gente erra\pjunto e tenta de novo. Meu\navô conta que o lago\pguarda sentimentos. Vou\nescrever os meus antes de\pviajar.$"
SI_W_T_Resident_292_En::
 .string "My Kricketune follows the\nmelody. We miss together\pand try again. Grandpa\nsays the lake keeps\pfeelings. I will write\nmine before leaving.$"
SI_W_T_ResidentAfter_292::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_292_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_292::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_292_After
 msgbox SI_W_T_Resident_292, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_292_After:
 msgbox SI_W_T_ResidentAfter_292, MSGBOX_DEFAULT
 release
 end
SI_W_T_Sign_TwinleafTown_0::
 .string "Mamãe disse para deixar as\nbotas na porta. Voltei com\plama até no cabelo!$"
SI_W_T_Sign_TwinleafTown_0_En::
 .string "Mom told me to leave my\nboots outside. Even my\phair came back muddy!$"
SI_W_Sign_TwinleafTown_0::
 msgbox SI_W_T_Sign_TwinleafTown_0, MSGBOX_NPC
 end
SI_W_T_Resident_293::
 .string "Treino uma piada nova por\ndia. Meu Mime Jr. é meu\pcrítico mais sincero.\nMamãe disse para deixar as\pbotas na porta. Voltei com\nlama até no cabelo!$"
SI_W_T_Resident_293_En::
 .string "I practice a new joke\ndaily. My Mime Jr. is my\pmost honest critic. Mom\ntold me to leave my boots\poutside. Even my hair came\nback muddy!$"
SI_W_T_ResidentAfter_293::
 .string "Vamos fazer uma festa\npequena. Cada pessoa traz\palgo; ninguém precisa\npagar para entrar.$"
SI_W_T_ResidentAfter_293_En::
 .string "We are having a small\nparty. Everyone brings\psomething; nobody pays to\njoin.$"
SI_W_Resident_293::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_293_After
 msgbox SI_W_T_Resident_293, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_293_After:
 msgbox SI_W_T_ResidentAfter_293, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_294::
 .string "Hoje consegui ler um mapa\nsem ajuda. Amanhã vou\pdesenhar meu próprio\ncaminho. Barry saiu sem\pterminar o café. Aposto\nque esqueceu alguma coisa\pde novo.$"
SI_W_T_Resident_294_En::
 .string "Today I read a map alone.\nTomorrow I will draw my\pown path. Barry left\nwithout finishing\pbreakfast. I bet he forgot\nsomething again.$"
SI_W_T_ResidentAfter_294::
 .string "Vi vocês ajudando na\ncrise. Quero que meu filho\pcresça sabendo que alguém\nse importou.$"
SI_W_T_ResidentAfter_294_En::
 .string "I saw you help in the\ncrisis. I want my son to\pknow someone cared.$"
SI_W_Resident_294::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_294_After
 msgbox SI_W_T_Resident_294, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_294_After:
 msgbox SI_W_T_ResidentAfter_294, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_295::
 .string "Um parceiro cansado merece\ndescanso. Vitória nenhuma\ppaga confiança perdida.\nMamãe disse para deixar as\pbotas na porta. Voltei com\nlama até no cabelo!$"
SI_W_T_Resident_295_En::
 .string "A tired partner deserves\nrest. No win pays for lost\ptrust. Mom told me to\nleave my boots outside.\pEven my hair came back\nmuddy!$"
SI_W_T_ResidentAfter_295::
 .string "Vi vocês ajudando na\ncrise. Quero que meu filho\pcresça sabendo que alguém\nse importou.$"
SI_W_T_ResidentAfter_295_En::
 .string "I saw you help in the\ncrisis. I want my son to\pknow someone cared.$"
SI_W_Resident_295::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_295_After
 msgbox SI_W_T_Resident_295, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_295_After:
 msgbox SI_W_T_ResidentAfter_295, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_296::
 .string "Meu pai me ensinou a\nreconhecer os passos de\pcada Pokémon do pasto.\nMamãe disse para deixar as\pbotas na porta. Voltei com\nlama até no cabelo!$"
SI_W_T_Resident_296_En::
 .string "Dad taught me to recognize\nevery Pokemon by its\pfootsteps. Mom told me to\nleave my boots outside.\pEven my hair came back\nmuddy!$"
SI_W_T_ResidentAfter_296::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_296_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_296::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_296_After
 msgbox SI_W_T_Resident_296, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_296_After:
 msgbox SI_W_T_ResidentAfter_296, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_297::
 .string "Meu Ponyta corre ao meu\nlado, sem rédea. A escolha\pdele importa para mim.\nBarry saiu sem terminar o\pcafé. Aposto que esqueceu\nalguma coisa de novo.$"
SI_W_T_Resident_297_En::
 .string "My Ponyta runs by my side\nwithout reins. His choice\pmatters to me. Barry left\nwithout finishing\pbreakfast. I bet he forgot\nsomething again.$"
SI_W_T_ResidentAfter_297::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_297_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_297::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_297_After
 msgbox SI_W_T_Resident_297, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_297_After:
 msgbox SI_W_T_ResidentAfter_297, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_298::
 .string "Guardo a primeira Poké\nBall. Ainda lembro como\pminha mão tremia. Mamãe\ndisse para deixar as botas\pna porta. Voltei com lama\naté no cabelo!$"
SI_W_T_Resident_298_En::
 .string "I keep my first Poke Ball.\nI still remember my\pshaking hand. Mom told me\nto leave my boots outside.\pEven my hair came back\nmuddy!$"
SI_W_T_ResidentAfter_298::
 .string "Giratina não precisava ser\napagado. Também há lugar\ppara quem vive na sombra.$"
SI_W_T_ResidentAfter_298_En::
 .string "Giratina did not need\nerasing. There is room for\pthose who live in shadow.$"
SI_W_Resident_298::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_298_After
 msgbox SI_W_T_Resident_298, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_298_After:
 msgbox SI_W_T_ResidentAfter_298, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_299::
 .string "Levo chocolate quente\nextra. Sempre aparece um\pviajante que precisa.\nNeste lugar aprendi a\pouvir meu parceiro. Cada\nviagem deixa uma lembrança\pdiferente.$"
SI_W_T_Resident_299_En::
 .string "I pack extra hot\nchocolate. A traveler\palways needs some. Here I\nlearned to listen to my\ppartner. Every journey\nleaves a different memory.$"
SI_W_T_ResidentAfter_299::
 .string "Vamos fazer uma festa\npequena. Cada pessoa traz\palgo; ninguém precisa\npagar para entrar.$"
SI_W_T_ResidentAfter_299_En::
 .string "We are having a small\nparty. Everyone brings\psomething; nobody pays to\njoin.$"
SI_W_Resident_299::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_299_After
 msgbox SI_W_T_Resident_299, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_299_After:
 msgbox SI_W_T_ResidentAfter_299, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_300::
 .string "Cuido das ferramentas\nantes de sair. Meu\pparceiro conta comigo.\nNeste lugar aprendi a\pouvir meu parceiro. Cada\nviagem deixa uma lembrança\pdiferente.$"
SI_W_T_Resident_300_En::
 .string "I check my tools before\nleaving. My partner relies\pon me. Here I learned to\nlisten to my partner.\pEvery journey leaves a\ndifferent memory.$"
SI_W_T_ResidentAfter_300::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_300_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_300::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_300_After
 msgbox SI_W_T_Resident_300, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_300_After:
 msgbox SI_W_T_ResidentAfter_300, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_301::
 .string "Pescar exige esperar.\nAprendi mais com a água do\pque com pressa. Neste\nlugar aprendi a ouvir meu\pparceiro. Cada viagem\ndeixa uma lembrança\pdiferente.$"
SI_W_T_Resident_301_En::
 .string "Fishing takes patience.\nWater taught me more than\prushing. Here I learned to\nlisten to my partner.\pEvery journey leaves a\ndifferent memory.$"
SI_W_T_ResidentAfter_301::
 .string "Vi vocês ajudando na\ncrise. Quero que meu filho\pcresça sabendo que alguém\nse importou.$"
SI_W_T_ResidentAfter_301_En::
 .string "I saw you help in the\ncrisis. I want my son to\pknow someone cared.$"
SI_W_Resident_301::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_301_After
 msgbox SI_W_T_Resident_301, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_301_After:
 msgbox SI_W_T_ResidentAfter_301, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_302::
 .string "Marquei o caminho para\nquem vem depois. Uma\ptrilha boa se compartilha.\nNeste lugar aprendi a\pouvir meu parceiro. Cada\nviagem deixa uma lembrança\pdiferente.$"
SI_W_T_Resident_302_En::
 .string "I marked the path for the\nnext traveler. A good\ptrail is shared. Here I\nlearned to listen to my\ppartner. Every journey\nleaves a different memory.$"
SI_W_T_ResidentAfter_302::
 .string "O ar voltou a ter cheiro\nde chuva. Eu nem percebia\po quanto sentia falta.$"
SI_W_T_ResidentAfter_302_En::
 .string "The air smells like rain\nagain. I had not realized\phow much I missed it.$"
SI_W_Resident_302::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_302_After
 msgbox SI_W_T_Resident_302, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_302_After:
 msgbox SI_W_T_ResidentAfter_302, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_303::
 .string "Anoto também os erros. Um\nresultado bonito não vale\pse estiver errado. Neste\nlugar aprendi a ouvir meu\pparceiro. Cada viagem\ndeixa uma lembrança\pdiferente.$"
SI_W_T_Resident_303_En::
 .string "I record mistakes too. A\npretty result is worthless\pif it is wrong. Here I\nlearned to listen to my\ppartner. Every journey\nleaves a different memory.$"
SI_W_T_ResidentAfter_303::
 .string "Vamos fazer uma festa\npequena. Cada pessoa traz\palgo; ninguém precisa\npagar para entrar.$"
SI_W_T_ResidentAfter_303_En::
 .string "We are having a small\nparty. Everyone brings\psomething; nobody pays to\njoin.$"
SI_W_Resident_303::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_303_After
 msgbox SI_W_T_Resident_303, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_303_After:
 msgbox SI_W_T_ResidentAfter_303, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_304::
 .string "Meu Kricketune acompanha a\nmelodia. A gente erra\pjunto e tenta de novo.\nNeste lugar aprendi a\pouvir meu parceiro. Cada\nviagem deixa uma lembrança\pdiferente.$"
SI_W_T_Resident_304_En::
 .string "My Kricketune follows the\nmelody. We miss together\pand try again. Here I\nlearned to listen to my\ppartner. Every journey\nleaves a different memory.$"
SI_W_T_ResidentAfter_304::
 .string "Vi vocês ajudando na\ncrise. Quero que meu filho\pcresça sabendo que alguém\nse importou.$"
SI_W_T_ResidentAfter_304_En::
 .string "I saw you help in the\ncrisis. I want my son to\pknow someone cared.$"
SI_W_Resident_304::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_304_After
 msgbox SI_W_T_Resident_304, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_304_After:
 msgbox SI_W_T_ResidentAfter_304, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_305::
 .string "Treino uma piada nova por\ndia. Meu Mime Jr. é meu\pcrítico mais sincero.\nNeste lugar aprendi a\pouvir meu parceiro. Cada\nviagem deixa uma lembrança\pdiferente.$"
SI_W_T_Resident_305_En::
 .string "I practice a new joke\ndaily. My Mime Jr. is my\pmost honest critic. Here I\nlearned to listen to my\ppartner. Every journey\nleaves a different memory.$"
SI_W_T_ResidentAfter_305::
 .string "O ar voltou a ter cheiro\nde chuva. Eu nem percebia\po quanto sentia falta.$"
SI_W_T_ResidentAfter_305_En::
 .string "The air smells like rain\nagain. I had not realized\phow much I missed it.$"
SI_W_Resident_305::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_305_After
 msgbox SI_W_T_Resident_305, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_305_After:
 msgbox SI_W_T_ResidentAfter_305, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_306::
 .string "Hoje consegui ler um mapa\nsem ajuda. Amanhã vou\pdesenhar meu próprio\ncaminho. Neste lugar\paprendi a ouvir meu\nparceiro. Cada viagem\pdeixa uma lembrança\ndiferente.$"
SI_W_T_Resident_306_En::
 .string "Today I read a map alone.\nTomorrow I will draw my\pown path. Here I learned\nto listen to my partner.\pEvery journey leaves a\ndifferent memory.$"
SI_W_T_ResidentAfter_306::
 .string "Os relógios concordam\noutra vez. Hoje minha\púnica pressa é chegar para\no jantar.$"
SI_W_T_ResidentAfter_306_En::
 .string "Clocks agree again. Today\nI only rush to get home\pfor dinner.$"
SI_W_Resident_306::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_306_After
 msgbox SI_W_T_Resident_306, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_306_After:
 msgbox SI_W_T_ResidentAfter_306, MSGBOX_DEFAULT
 release
 end
SI_W_T_Resident_307::
 .string "Um parceiro cansado merece\ndescanso. Vitória nenhuma\ppaga confiança perdida.\nNeste lugar aprendi a\pouvir meu parceiro. Cada\nviagem deixa uma lembrança\pdiferente.$"
SI_W_T_Resident_307_En::
 .string "A tired partner deserves\nrest. No win pays for lost\ptrust. Here I learned to\nlisten to my partner.\pEvery journey leaves a\ndifferent memory.$"
SI_W_T_ResidentAfter_307::
 .string "A Galáctica deixou\nestragos. A reconstrução\pcomeça com vizinhos\ntrabalhando juntos.$"
SI_W_T_ResidentAfter_307_En::
 .string "Galactic left damage.\nRebuilding starts with\pneighbors working\ntogether.$"
SI_W_Resident_307::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_307_After
 msgbox SI_W_T_Resident_307, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_307_After:
 msgbox SI_W_T_ResidentAfter_307, MSGBOX_DEFAULT
 release
 end
SI_W_T_Sign_ValleyWindworks_0::
 .string "Neste lugar aprendi a\nouvir meu parceiro. Cada\pviagem deixa uma lembrança\ndiferente.$"
SI_W_T_Sign_ValleyWindworks_0_En::
 .string "Here I learned to listen\nto my partner. Every\pjourney leaves a different\nmemory.$"
SI_W_Sign_ValleyWindworks_0::
 msgbox SI_W_T_Sign_ValleyWindworks_0, MSGBOX_NPC
 end
SI_W_T_Resident_308::
 .string "Meu pai me ensinou a\nreconhecer os passos de\pcada Pokémon do pasto.\nMaylene corre descalça\ppela cidade. Eu me canso\nsó de olhar!$"
SI_W_T_Resident_308_En::
 .string "Dad taught me to recognize\nevery Pokemon by its\pfootsteps. Maylene runs\nbarefoot through town.\pJust watching makes me\ntired!$"
SI_W_T_ResidentAfter_308::
 .string "O ar voltou a ter cheiro\nde chuva. Eu nem percebia\po quanto sentia falta.$"
SI_W_T_ResidentAfter_308_En::
 .string "The air smells like rain\nagain. I had not realized\phow much I missed it.$"
SI_W_Resident_308::
 lock
 faceplayer
 goto_if_ge VAR_SI_STAGE, 23, SI_W_Resident_308_After
 msgbox SI_W_T_Resident_308, MSGBOX_DEFAULT
 release
 end
SI_W_Resident_308_After:
 msgbox SI_W_T_ResidentAfter_308, MSGBOX_DEFAULT
 release
 end
SI_W_T_Sign_VerityLakefront_0::
 .string "A água guarda lembranças.\nO coletor da Galáctica\pparece arrancar algo dela.$"
SI_W_T_Sign_VerityLakefront_0_En::
 .string "The water holds memories.\nGalactic collectors seem\pto tear something out.$"
SI_W_Sign_VerityLakefront_0::
 msgbox SI_W_T_Sign_VerityLakefront_0, MSGBOX_NPC
 end
SI_W_T_TrainerIntro0::
 .string "Estou treinando para não\ntravar diante da Liga. Me\pajuda com uma batalha?$"
SI_W_T_TrainerIntro0_En::
 .string "I train so I will not\nfreeze at the League. Help\pme with a battle?$"
SI_W_T_TrainerDefeat0::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat0_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter0::
 .string "Vou anotar essa batalha no\nmeu caderno. Caligo\pcomprou minério em nome da\nGaláctica. Quando\pperguntei pelo recibo, ele\ndesapareceu.$"
SI_W_T_TrainerAfter0_En::
 .string "I will write this battle\nin my notebook. Caligo\pbought ore for Galactic.\nWhen I asked for a\preceipt, he disappeared.$"
SI_W_Trainer_0::
 trainerbattle_single TRAINER_SI_JONATHON, SI_W_T_TrainerIntro0, SI_W_T_TrainerDefeat0
 msgbox SI_W_T_TrainerAfter0, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro1::
 .string "Meu parceiro inventou uma\nestratégia. Vamos\pdescobrir se funciona!$"
SI_W_T_TrainerIntro1_En::
 .string "My partner invented a\nstrategy. Let us see if it\pworks!$"
SI_W_T_TrainerDefeat1::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat1_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter1::
 .string "Vou anotar essa batalha no\nmeu caderno. Roark conhece\pcada turno da mina. Ontem\ncobriu um colega para ele\pver o nascimento da filha.$"
SI_W_T_TrainerAfter1_En::
 .string "I will write this battle\nin my notebook. Roark\pknows every mine shift.\nYesterday he covered for a\pnew father.$"
SI_W_Trainer_1::
 trainerbattle_single TRAINER_SI_DARIUS, SI_W_T_TrainerIntro1, SI_W_T_TrainerDefeat1
 msgbox SI_W_T_TrainerAfter1, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro2::
 .string "Prometi ao meu irmão que\nmelhoraria hoje. Quero\penfrentar você.$"
SI_W_T_TrainerIntro2_En::
 .string "I promised my brother I\nwould improve today. I\pwant to face you.$"
SI_W_T_TrainerDefeat2::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat2_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter2::
 .string "Vou anotar essa batalha no\nmeu caderno. Neste lugar\paprendi a ouvir meu\nparceiro. Cada viagem\pdeixa uma lembrança\ndiferente.$"
SI_W_T_TrainerAfter2_En::
 .string "I will write this battle\nin my notebook. Here I\plearned to listen to my\npartner. Every journey\pleaves a different memory.$"
SI_W_Trainer_2::
 trainerbattle_single TRAINER_SI_ROUTE0, SI_W_T_TrainerIntro2, SI_W_T_TrainerDefeat2
 msgbox SI_W_T_TrainerAfter2, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro3::
 .string "A trilha ficou tensa. Uma\nbatalha honesta ajuda a\precuperar a coragem.$"
SI_W_T_TrainerIntro3_En::
 .string "The trail feels tense. An\nhonest battle restores\pcourage.$"
SI_W_T_TrainerDefeat3::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat3_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter3::
 .string "Vou anotar essa batalha no\nmeu caderno. Neste lugar\paprendi a ouvir meu\nparceiro. Cada viagem\pdeixa uma lembrança\ndiferente.$"
SI_W_T_TrainerAfter3_En::
 .string "I will write this battle\nin my notebook. Here I\plearned to listen to my\npartner. Every journey\pleaves a different memory.$"
SI_W_Trainer_3::
 trainerbattle_single TRAINER_SI_ROUTE1, SI_W_T_TrainerIntro3, SI_W_T_TrainerDefeat3
 msgbox SI_W_T_TrainerAfter3, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro4::
 .string "Sem atalhos: vou crescer\njunto com meus Pokémon.\pVamos lutar!$"
SI_W_T_TrainerIntro4_En::
 .string "No shortcuts: I will grow\nwith my Pokemon. Let us\pbattle!$"
SI_W_T_TrainerDefeat4::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat4_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter4::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p202. Ouvi passos nas\nfolhas e fiquei quieto. Um\pStarly pousou no meu\nombro!$"
SI_W_T_TrainerAfter4_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 202. I stayed still\nat rustling leaves. A\pStarly landed on my\nshoulder!$"
SI_W_Trainer_4::
 trainerbattle_single TRAINER_SI_ROUTE2, SI_W_T_TrainerIntro4, SI_W_T_TrainerDefeat4
 msgbox SI_W_T_TrainerAfter4, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro5::
 .string "Estou treinando para não\ntravar diante da Liga. Me\pajuda com uma batalha?$"
SI_W_T_TrainerIntro5_En::
 .string "I train so I will not\nfreeze at the League. Help\pme with a battle?$"
SI_W_T_TrainerDefeat5::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat5_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter5::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p202. A estrada é longa.\nPrefiro conversar com meus\pparceiros a medir só a\ndistância.$"
SI_W_T_TrainerAfter5_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 202. The road is\nlong. I talk to my\ppartners instead of just\ncounting miles.$"
SI_W_Trainer_5::
 trainerbattle_single TRAINER_SI_ROUTE3, SI_W_T_TrainerIntro5, SI_W_T_TrainerDefeat5
 msgbox SI_W_T_TrainerAfter5, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro6::
 .string "Meu parceiro inventou uma\nestratégia. Vamos\pdescobrir se funciona!$"
SI_W_T_TrainerIntro6_En::
 .string "My partner invented a\nstrategy. Let us see if it\pworks!$"
SI_W_T_TrainerDefeat6::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat6_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter6::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p202. Quem luta aprende;\nquem escuta também. Não\pignore os moradores pelo\ncaminho.$"
SI_W_T_TrainerAfter6_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 202. Fighting\nteaches; listening does\ptoo. Do not ignore people\nalong the way.$"
SI_W_Trainer_6::
 trainerbattle_single TRAINER_SI_ROUTE4, SI_W_T_TrainerIntro6, SI_W_T_TrainerDefeat6
 msgbox SI_W_T_TrainerAfter6, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro7::
 .string "Prometi ao meu irmão que\nmelhoraria hoje. Quero\penfrentar você.$"
SI_W_T_TrainerIntro7_En::
 .string "I promised my brother I\nwould improve today. I\pwant to face you.$"
SI_W_T_TrainerDefeat7::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat7_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter7::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p202. Se a tempestade vier,\nprocuro abrigo para os\pPokémon primeiro.$"
SI_W_T_TrainerAfter7_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 202. If a storm\ncomes, I find shelter for\pthe Pokemon first.$"
SI_W_Trainer_7::
 trainerbattle_single TRAINER_SI_ROUTE5, SI_W_T_TrainerIntro7, SI_W_T_TrainerDefeat7
 msgbox SI_W_T_TrainerAfter7, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro8::
 .string "A trilha ficou tensa. Uma\nbatalha honesta ajuda a\precuperar a coragem.$"
SI_W_T_TrainerIntro8_En::
 .string "The trail feels tense. An\nhonest battle restores\pcourage.$"
SI_W_T_TrainerDefeat8::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat8_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter8::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p202. Ouvi passos nas\nfolhas e fiquei quieto. Um\pStarly pousou no meu\nombro!$"
SI_W_T_TrainerAfter8_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 202. I stayed still\nat rustling leaves. A\pStarly landed on my\nshoulder!$"
SI_W_Trainer_8::
 trainerbattle_single TRAINER_SI_ROUTE6, SI_W_T_TrainerIntro8, SI_W_T_TrainerDefeat8
 msgbox SI_W_T_TrainerAfter8, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro9::
 .string "Sem atalhos: vou crescer\njunto com meus Pokémon.\pVamos lutar!$"
SI_W_T_TrainerIntro9_En::
 .string "No shortcuts: I will grow\nwith my Pokemon. Let us\pbattle!$"
SI_W_T_TrainerDefeat9::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat9_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter9::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p203. A estrada é longa.\nPrefiro conversar com meus\pparceiros a medir só a\ndistância.$"
SI_W_T_TrainerAfter9_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 203. The road is\nlong. I talk to my\ppartners instead of just\ncounting miles.$"
SI_W_Trainer_9::
 trainerbattle_single TRAINER_SI_ROUTE7, SI_W_T_TrainerIntro9, SI_W_T_TrainerDefeat9
 msgbox SI_W_T_TrainerAfter9, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro10::
 .string "Estou treinando para não\ntravar diante da Liga. Me\pajuda com uma batalha?$"
SI_W_T_TrainerIntro10_En::
 .string "I train so I will not\nfreeze at the League. Help\pme with a battle?$"
SI_W_T_TrainerDefeat10::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat10_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter10::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p203. Quem luta aprende;\nquem escuta também. Não\pignore os moradores pelo\ncaminho.$"
SI_W_T_TrainerAfter10_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 203. Fighting\nteaches; listening does\ptoo. Do not ignore people\nalong the way.$"
SI_W_Trainer_10::
 trainerbattle_single TRAINER_SI_FIELD0, SI_W_T_TrainerIntro10, SI_W_T_TrainerDefeat10
 msgbox SI_W_T_TrainerAfter10, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro11::
 .string "Meu parceiro inventou uma\nestratégia. Vamos\pdescobrir se funciona!$"
SI_W_T_TrainerIntro11_En::
 .string "My partner invented a\nstrategy. Let us see if it\pworks!$"
SI_W_T_TrainerDefeat11::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat11_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter11::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p203. Se a tempestade vier,\nprocuro abrigo para os\pPokémon primeiro.$"
SI_W_T_TrainerAfter11_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 203. If a storm\ncomes, I find shelter for\pthe Pokemon first.$"
SI_W_Trainer_11::
 trainerbattle_single TRAINER_SI_FIELD1, SI_W_T_TrainerIntro11, SI_W_T_TrainerDefeat11
 msgbox SI_W_T_TrainerAfter11, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro12::
 .string "Prometi ao meu irmão que\nmelhoraria hoje. Quero\penfrentar você.$"
SI_W_T_TrainerIntro12_En::
 .string "I promised my brother I\nwould improve today. I\pwant to face you.$"
SI_W_T_TrainerDefeat12::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat12_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter12::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p203. Ouvi passos nas\nfolhas e fiquei quieto. Um\pStarly pousou no meu\nombro!$"
SI_W_T_TrainerAfter12_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 203. I stayed still\nat rustling leaves. A\pStarly landed on my\nshoulder!$"
SI_W_Trainer_12::
 trainerbattle_single TRAINER_SI_FIELD2, SI_W_T_TrainerIntro12, SI_W_T_TrainerDefeat12
 msgbox SI_W_T_TrainerAfter12, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro13::
 .string "A trilha ficou tensa. Uma\nbatalha honesta ajuda a\precuperar a coragem.$"
SI_W_T_TrainerIntro13_En::
 .string "The trail feels tense. An\nhonest battle restores\pcourage.$"
SI_W_T_TrainerDefeat13::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat13_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter13::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p203. A estrada é longa.\nPrefiro conversar com meus\pparceiros a medir só a\ndistância.$"
SI_W_T_TrainerAfter13_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 203. The road is\nlong. I talk to my\ppartners instead of just\ncounting miles.$"
SI_W_Trainer_13::
 trainerbattle_single TRAINER_SI_FIELD3, SI_W_T_TrainerIntro13, SI_W_T_TrainerDefeat13
 msgbox SI_W_T_TrainerAfter13, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro14::
 .string "Sem atalhos: vou crescer\njunto com meus Pokémon.\pVamos lutar!$"
SI_W_T_TrainerIntro14_En::
 .string "No shortcuts: I will grow\nwith my Pokemon. Let us\pbattle!$"
SI_W_T_TrainerDefeat14::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat14_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter14::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p203. Quem luta aprende;\nquem escuta também. Não\pignore os moradores pelo\ncaminho.$"
SI_W_T_TrainerAfter14_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 203. Fighting\nteaches; listening does\ptoo. Do not ignore people\nalong the way.$"
SI_W_Trainer_14::
 trainerbattle_single TRAINER_SI_FIELD4, SI_W_T_TrainerIntro14, SI_W_T_TrainerDefeat14
 msgbox SI_W_T_TrainerAfter14, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro15::
 .string "Estou treinando para não\ntravar diante da Liga. Me\pajuda com uma batalha?$"
SI_W_T_TrainerIntro15_En::
 .string "I train so I will not\nfreeze at the League. Help\pme with a battle?$"
SI_W_T_TrainerDefeat15::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat15_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter15::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p204. Se a tempestade vier,\nprocuro abrigo para os\pPokémon primeiro.$"
SI_W_T_TrainerAfter15_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 204. If a storm\ncomes, I find shelter for\pthe Pokemon first.$"
SI_W_Trainer_15::
 trainerbattle_single TRAINER_SI_FIELD5, SI_W_T_TrainerIntro15, SI_W_T_TrainerDefeat15
 msgbox SI_W_T_TrainerAfter15, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro16::
 .string "Meu parceiro inventou uma\nestratégia. Vamos\pdescobrir se funciona!$"
SI_W_T_TrainerIntro16_En::
 .string "My partner invented a\nstrategy. Let us see if it\pworks!$"
SI_W_T_TrainerDefeat16::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat16_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter16::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p205. Ouvi passos nas\nfolhas e fiquei quieto. Um\pStarly pousou no meu\nombro!$"
SI_W_T_TrainerAfter16_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 205. I stayed still\nat rustling leaves. A\pStarly landed on my\nshoulder!$"
SI_W_Trainer_16::
 trainerbattle_single TRAINER_SI_FIELD6, SI_W_T_TrainerIntro16, SI_W_T_TrainerDefeat16
 msgbox SI_W_T_TrainerAfter16, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro17::
 .string "Prometi ao meu irmão que\nmelhoraria hoje. Quero\penfrentar você.$"
SI_W_T_TrainerIntro17_En::
 .string "I promised my brother I\nwould improve today. I\pwant to face you.$"
SI_W_T_TrainerDefeat17::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat17_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter17::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p205. A estrada é longa.\nPrefiro conversar com meus\pparceiros a medir só a\ndistância.$"
SI_W_T_TrainerAfter17_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 205. The road is\nlong. I talk to my\ppartners instead of just\ncounting miles.$"
SI_W_Trainer_17::
 trainerbattle_single TRAINER_SI_FIELD7, SI_W_T_TrainerIntro17, SI_W_T_TrainerDefeat17
 msgbox SI_W_T_TrainerAfter17, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro18::
 .string "A trilha ficou tensa. Uma\nbatalha honesta ajuda a\precuperar a coragem.$"
SI_W_T_TrainerIntro18_En::
 .string "The trail feels tense. An\nhonest battle restores\pcourage.$"
SI_W_T_TrainerDefeat18::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat18_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter18::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p206. Quem luta aprende;\nquem escuta também. Não\pignore os moradores pelo\ncaminho.$"
SI_W_T_TrainerAfter18_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 206. Fighting\nteaches; listening does\ptoo. Do not ignore people\nalong the way.$"
SI_W_Trainer_18::
 trainerbattle_single TRAINER_SI_FIELD8, SI_W_T_TrainerIntro18, SI_W_T_TrainerDefeat18
 msgbox SI_W_T_TrainerAfter18, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro19::
 .string "Sem atalhos: vou crescer\njunto com meus Pokémon.\pVamos lutar!$"
SI_W_T_TrainerIntro19_En::
 .string "No shortcuts: I will grow\nwith my Pokemon. Let us\pbattle!$"
SI_W_T_TrainerDefeat19::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat19_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter19::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p206. Se a tempestade vier,\nprocuro abrigo para os\pPokémon primeiro.$"
SI_W_T_TrainerAfter19_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 206. If a storm\ncomes, I find shelter for\pthe Pokemon first.$"
SI_W_Trainer_19::
 trainerbattle_single TRAINER_SI_FIELD9, SI_W_T_TrainerIntro19, SI_W_T_TrainerDefeat19
 msgbox SI_W_T_TrainerAfter19, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro20::
 .string "Estou treinando para não\ntravar diante da Liga. Me\pajuda com uma batalha?$"
SI_W_T_TrainerIntro20_En::
 .string "I train so I will not\nfreeze at the League. Help\pme with a battle?$"
SI_W_T_TrainerDefeat20::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat20_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter20::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p207. Ouvi passos nas\nfolhas e fiquei quieto. Um\pStarly pousou no meu\nombro!$"
SI_W_T_TrainerAfter20_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 207. I stayed still\nat rustling leaves. A\pStarly landed on my\nshoulder!$"
SI_W_Trainer_20::
 trainerbattle_single TRAINER_SI_FIELD10, SI_W_T_TrainerIntro20, SI_W_T_TrainerDefeat20
 msgbox SI_W_T_TrainerAfter20, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro21::
 .string "Meu parceiro inventou uma\nestratégia. Vamos\pdescobrir se funciona!$"
SI_W_T_TrainerIntro21_En::
 .string "My partner invented a\nstrategy. Let us see if it\pworks!$"
SI_W_T_TrainerDefeat21::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat21_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter21::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p208. A estrada é longa.\nPrefiro conversar com meus\pparceiros a medir só a\ndistância.$"
SI_W_T_TrainerAfter21_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 208. The road is\nlong. I talk to my\ppartners instead of just\ncounting miles.$"
SI_W_Trainer_21::
 trainerbattle_single TRAINER_SI_FIELD11, SI_W_T_TrainerIntro21, SI_W_T_TrainerDefeat21
 msgbox SI_W_T_TrainerAfter21, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro22::
 .string "Prometi ao meu irmão que\nmelhoraria hoje. Quero\penfrentar você.$"
SI_W_T_TrainerIntro22_En::
 .string "I promised my brother I\nwould improve today. I\pwant to face you.$"
SI_W_T_TrainerDefeat22::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat22_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter22::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p209. Quem luta aprende;\nquem escuta também. Não\pignore os moradores pelo\ncaminho.$"
SI_W_T_TrainerAfter22_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 209. Fighting\nteaches; listening does\ptoo. Do not ignore people\nalong the way.$"
SI_W_Trainer_22::
 trainerbattle_single TRAINER_SI_FIELD12, SI_W_T_TrainerIntro22, SI_W_T_TrainerDefeat22
 msgbox SI_W_T_TrainerAfter22, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro23::
 .string "A trilha ficou tensa. Uma\nbatalha honesta ajuda a\precuperar a coragem.$"
SI_W_T_TrainerIntro23_En::
 .string "The trail feels tense. An\nhonest battle restores\pcourage.$"
SI_W_T_TrainerDefeat23::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat23_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter23::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p210. Se a tempestade vier,\nprocuro abrigo para os\pPokémon primeiro.$"
SI_W_T_TrainerAfter23_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 210. If a storm\ncomes, I find shelter for\pthe Pokemon first.$"
SI_W_Trainer_23::
 trainerbattle_single TRAINER_SI_FIELD13, SI_W_T_TrainerIntro23, SI_W_T_TrainerDefeat23
 msgbox SI_W_T_TrainerAfter23, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro24::
 .string "Sem atalhos: vou crescer\njunto com meus Pokémon.\pVamos lutar!$"
SI_W_T_TrainerIntro24_En::
 .string "No shortcuts: I will grow\nwith my Pokemon. Let us\pbattle!$"
SI_W_T_TrainerDefeat24::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat24_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter24::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p210. Ouvi passos nas\nfolhas e fiquei quieto. Um\pStarly pousou no meu\nombro!$"
SI_W_T_TrainerAfter24_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 210. I stayed still\nat rustling leaves. A\pStarly landed on my\nshoulder!$"
SI_W_Trainer_24::
 trainerbattle_single TRAINER_SI_FIELD14, SI_W_T_TrainerIntro24, SI_W_T_TrainerDefeat24
 msgbox SI_W_T_TrainerAfter24, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro25::
 .string "Estou treinando para não\ntravar diante da Liga. Me\pajuda com uma batalha?$"
SI_W_T_TrainerIntro25_En::
 .string "I train so I will not\nfreeze at the League. Help\pme with a battle?$"
SI_W_T_TrainerDefeat25::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat25_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter25::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p211. A estrada é longa.\nPrefiro conversar com meus\pparceiros a medir só a\ndistância.$"
SI_W_T_TrainerAfter25_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 211. The road is\nlong. I talk to my\ppartners instead of just\ncounting miles.$"
SI_W_Trainer_25::
 trainerbattle_single TRAINER_SI_FIELD15, SI_W_T_TrainerIntro25, SI_W_T_TrainerDefeat25
 msgbox SI_W_T_TrainerAfter25, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro26::
 .string "Meu parceiro inventou uma\nestratégia. Vamos\pdescobrir se funciona!$"
SI_W_T_TrainerIntro26_En::
 .string "My partner invented a\nstrategy. Let us see if it\pworks!$"
SI_W_T_TrainerDefeat26::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat26_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter26::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p211. Quem luta aprende;\nquem escuta também. Não\pignore os moradores pelo\ncaminho.$"
SI_W_T_TrainerAfter26_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 211. Fighting\nteaches; listening does\ptoo. Do not ignore people\nalong the way.$"
SI_W_Trainer_26::
 trainerbattle_single TRAINER_SI_FIELD16, SI_W_T_TrainerIntro26, SI_W_T_TrainerDefeat26
 msgbox SI_W_T_TrainerAfter26, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro27::
 .string "Prometi ao meu irmão que\nmelhoraria hoje. Quero\penfrentar você.$"
SI_W_T_TrainerIntro27_En::
 .string "I promised my brother I\nwould improve today. I\pwant to face you.$"
SI_W_T_TrainerDefeat27::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat27_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter27::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p212. Se a tempestade vier,\nprocuro abrigo para os\pPokémon primeiro.$"
SI_W_T_TrainerAfter27_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 212. If a storm\ncomes, I find shelter for\pthe Pokemon first.$"
SI_W_Trainer_27::
 trainerbattle_single TRAINER_SI_FIELD17, SI_W_T_TrainerIntro27, SI_W_T_TrainerDefeat27
 msgbox SI_W_T_TrainerAfter27, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro28::
 .string "A trilha ficou tensa. Uma\nbatalha honesta ajuda a\precuperar a coragem.$"
SI_W_T_TrainerIntro28_En::
 .string "The trail feels tense. An\nhonest battle restores\pcourage.$"
SI_W_T_TrainerDefeat28::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat28_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter28::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p212. Ouvi passos nas\nfolhas e fiquei quieto. Um\pStarly pousou no meu\nombro!$"
SI_W_T_TrainerAfter28_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 212. I stayed still\nat rustling leaves. A\pStarly landed on my\nshoulder!$"
SI_W_Trainer_28::
 trainerbattle_single TRAINER_SI_FIELD18, SI_W_T_TrainerIntro28, SI_W_T_TrainerDefeat28
 msgbox SI_W_T_TrainerAfter28, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro29::
 .string "Sem atalhos: vou crescer\njunto com meus Pokémon.\pVamos lutar!$"
SI_W_T_TrainerIntro29_En::
 .string "No shortcuts: I will grow\nwith my Pokemon. Let us\pbattle!$"
SI_W_T_TrainerDefeat29::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat29_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter29::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p213. A estrada é longa.\nPrefiro conversar com meus\pparceiros a medir só a\ndistância.$"
SI_W_T_TrainerAfter29_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 213. The road is\nlong. I talk to my\ppartners instead of just\ncounting miles.$"
SI_W_Trainer_29::
 trainerbattle_single TRAINER_SI_FIELD19, SI_W_T_TrainerIntro29, SI_W_T_TrainerDefeat29
 msgbox SI_W_T_TrainerAfter29, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro30::
 .string "Estou treinando para não\ntravar diante da Liga. Me\pajuda com uma batalha?$"
SI_W_T_TrainerIntro30_En::
 .string "I train so I will not\nfreeze at the League. Help\pme with a battle?$"
SI_W_T_TrainerDefeat30::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat30_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter30::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p214. Quem luta aprende;\nquem escuta também. Não\pignore os moradores pelo\ncaminho.$"
SI_W_T_TrainerAfter30_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 214. Fighting\nteaches; listening does\ptoo. Do not ignore people\nalong the way.$"
SI_W_Trainer_30::
 trainerbattle_single TRAINER_SI_FIELD20, SI_W_T_TrainerIntro30, SI_W_T_TrainerDefeat30
 msgbox SI_W_T_TrainerAfter30, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro31::
 .string "Meu parceiro inventou uma\nestratégia. Vamos\pdescobrir se funciona!$"
SI_W_T_TrainerIntro31_En::
 .string "My partner invented a\nstrategy. Let us see if it\pworks!$"
SI_W_T_TrainerDefeat31::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat31_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter31::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p215. Se a tempestade vier,\nprocuro abrigo para os\pPokémon primeiro.$"
SI_W_T_TrainerAfter31_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 215. If a storm\ncomes, I find shelter for\pthe Pokemon first.$"
SI_W_Trainer_31::
 trainerbattle_single TRAINER_SI_FIELD21, SI_W_T_TrainerIntro31, SI_W_T_TrainerDefeat31
 msgbox SI_W_T_TrainerAfter31, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro32::
 .string "Prometi ao meu irmão que\nmelhoraria hoje. Quero\penfrentar você.$"
SI_W_T_TrainerIntro32_En::
 .string "I promised my brother I\nwould improve today. I\pwant to face you.$"
SI_W_T_TrainerDefeat32::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat32_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter32::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p216. Ouvi passos nas\nfolhas e fiquei quieto. Um\pStarly pousou no meu\nombro!$"
SI_W_T_TrainerAfter32_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 216. I stayed still\nat rustling leaves. A\pStarly landed on my\nshoulder!$"
SI_W_Trainer_32::
 trainerbattle_single TRAINER_SI_FIELD22, SI_W_T_TrainerIntro32, SI_W_T_TrainerDefeat32
 msgbox SI_W_T_TrainerAfter32, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro33::
 .string "A trilha ficou tensa. Uma\nbatalha honesta ajuda a\precuperar a coragem.$"
SI_W_T_TrainerIntro33_En::
 .string "The trail feels tense. An\nhonest battle restores\pcourage.$"
SI_W_T_TrainerDefeat33::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat33_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter33::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p217. A estrada é longa.\nPrefiro conversar com meus\pparceiros a medir só a\ndistância.$"
SI_W_T_TrainerAfter33_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 217. The road is\nlong. I talk to my\ppartners instead of just\ncounting miles.$"
SI_W_Trainer_33::
 trainerbattle_single TRAINER_SI_FIELD23, SI_W_T_TrainerIntro33, SI_W_T_TrainerDefeat33
 msgbox SI_W_T_TrainerAfter33, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro34::
 .string "Sem atalhos: vou crescer\njunto com meus Pokémon.\pVamos lutar!$"
SI_W_T_TrainerIntro34_En::
 .string "No shortcuts: I will grow\nwith my Pokemon. Let us\pbattle!$"
SI_W_T_TrainerDefeat34::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat34_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter34::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p218. Quem luta aprende;\nquem escuta também. Não\pignore os moradores pelo\ncaminho.$"
SI_W_T_TrainerAfter34_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 218. Fighting\nteaches; listening does\ptoo. Do not ignore people\nalong the way.$"
SI_W_Trainer_34::
 trainerbattle_single TRAINER_SI_FIELD24, SI_W_T_TrainerIntro34, SI_W_T_TrainerDefeat34
 msgbox SI_W_T_TrainerAfter34, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro35::
 .string "Estou treinando para não\ntravar diante da Liga. Me\pajuda com uma batalha?$"
SI_W_T_TrainerIntro35_En::
 .string "I train so I will not\nfreeze at the League. Help\pme with a battle?$"
SI_W_T_TrainerDefeat35::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat35_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter35::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p219. Se a tempestade vier,\nprocuro abrigo para os\pPokémon primeiro.$"
SI_W_T_TrainerAfter35_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 219. If a storm\ncomes, I find shelter for\pthe Pokemon first.$"
SI_W_Trainer_35::
 trainerbattle_single TRAINER_SI_FIELD25, SI_W_T_TrainerIntro35, SI_W_T_TrainerDefeat35
 msgbox SI_W_T_TrainerAfter35, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro36::
 .string "Meu parceiro inventou uma\nestratégia. Vamos\pdescobrir se funciona!$"
SI_W_T_TrainerIntro36_En::
 .string "My partner invented a\nstrategy. Let us see if it\pworks!$"
SI_W_T_TrainerDefeat36::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat36_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter36::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p220. Ouvi passos nas\nfolhas e fiquei quieto. Um\pStarly pousou no meu\nombro!$"
SI_W_T_TrainerAfter36_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 220. I stayed still\nat rustling leaves. A\pStarly landed on my\nshoulder!$"
SI_W_Trainer_36::
 trainerbattle_single TRAINER_SI_FIELD26, SI_W_T_TrainerIntro36, SI_W_T_TrainerDefeat36
 msgbox SI_W_T_TrainerAfter36, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro37::
 .string "Prometi ao meu irmão que\nmelhoraria hoje. Quero\penfrentar você.$"
SI_W_T_TrainerIntro37_En::
 .string "I promised my brother I\nwould improve today. I\pwant to face you.$"
SI_W_T_TrainerDefeat37::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat37_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter37::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p221. A estrada é longa.\nPrefiro conversar com meus\pparceiros a medir só a\ndistância.$"
SI_W_T_TrainerAfter37_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 221. The road is\nlong. I talk to my\ppartners instead of just\ncounting miles.$"
SI_W_Trainer_37::
 trainerbattle_single TRAINER_SI_FIELD27, SI_W_T_TrainerIntro37, SI_W_T_TrainerDefeat37
 msgbox SI_W_T_TrainerAfter37, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro38::
 .string "A trilha ficou tensa. Uma\nbatalha honesta ajuda a\precuperar a coragem.$"
SI_W_T_TrainerIntro38_En::
 .string "The trail feels tense. An\nhonest battle restores\pcourage.$"
SI_W_T_TrainerDefeat38::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat38_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter38::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p222. Quem luta aprende;\nquem escuta também. Não\pignore os moradores pelo\ncaminho.$"
SI_W_T_TrainerAfter38_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 222. Fighting\nteaches; listening does\ptoo. Do not ignore people\nalong the way.$"
SI_W_Trainer_38::
 trainerbattle_single TRAINER_SI_FIELD28, SI_W_T_TrainerIntro38, SI_W_T_TrainerDefeat38
 msgbox SI_W_T_TrainerAfter38, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro39::
 .string "Sem atalhos: vou crescer\njunto com meus Pokémon.\pVamos lutar!$"
SI_W_T_TrainerIntro39_En::
 .string "No shortcuts: I will grow\nwith my Pokemon. Let us\pbattle!$"
SI_W_T_TrainerDefeat39::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat39_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter39::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p223. Se a tempestade vier,\nprocuro abrigo para os\pPokémon primeiro.$"
SI_W_T_TrainerAfter39_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 223. If a storm\ncomes, I find shelter for\pthe Pokemon first.$"
SI_W_Trainer_39::
 trainerbattle_single TRAINER_SI_FIELD29, SI_W_T_TrainerIntro39, SI_W_T_TrainerDefeat39
 msgbox SI_W_T_TrainerAfter39, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro40::
 .string "Estou treinando para não\ntravar diante da Liga. Me\pajuda com uma batalha?$"
SI_W_T_TrainerIntro40_En::
 .string "I train so I will not\nfreeze at the League. Help\pme with a battle?$"
SI_W_T_TrainerDefeat40::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat40_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter40::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p224. Ouvi passos nas\nfolhas e fiquei quieto. Um\pStarly pousou no meu\nombro!$"
SI_W_T_TrainerAfter40_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 224. I stayed still\nat rustling leaves. A\pStarly landed on my\nshoulder!$"
SI_W_Trainer_40::
 trainerbattle_single TRAINER_SI_FIELD30, SI_W_T_TrainerIntro40, SI_W_T_TrainerDefeat40
 msgbox SI_W_T_TrainerAfter40, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro41::
 .string "Meu parceiro inventou uma\nestratégia. Vamos\pdescobrir se funciona!$"
SI_W_T_TrainerIntro41_En::
 .string "My partner invented a\nstrategy. Let us see if it\pworks!$"
SI_W_T_TrainerDefeat41::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat41_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter41::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p225. A estrada é longa.\nPrefiro conversar com meus\pparceiros a medir só a\ndistância.$"
SI_W_T_TrainerAfter41_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 225. The road is\nlong. I talk to my\ppartners instead of just\ncounting miles.$"
SI_W_Trainer_41::
 trainerbattle_single TRAINER_SI_FIELD31, SI_W_T_TrainerIntro41, SI_W_T_TrainerDefeat41
 msgbox SI_W_T_TrainerAfter41, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro42::
 .string "Prometi ao meu irmão que\nmelhoraria hoje. Quero\penfrentar você.$"
SI_W_T_TrainerIntro42_En::
 .string "I promised my brother I\nwould improve today. I\pwant to face you.$"
SI_W_T_TrainerDefeat42::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat42_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter42::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p226. Quem luta aprende;\nquem escuta também. Não\pignore os moradores pelo\ncaminho.$"
SI_W_T_TrainerAfter42_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 226. Fighting\nteaches; listening does\ptoo. Do not ignore people\nalong the way.$"
SI_W_Trainer_42::
 trainerbattle_single TRAINER_SI_WORLD42, SI_W_T_TrainerIntro42, SI_W_T_TrainerDefeat42
 msgbox SI_W_T_TrainerAfter42, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro43::
 .string "A trilha ficou tensa. Uma\nbatalha honesta ajuda a\precuperar a coragem.$"
SI_W_T_TrainerIntro43_En::
 .string "The trail feels tense. An\nhonest battle restores\pcourage.$"
SI_W_T_TrainerDefeat43::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat43_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter43::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p227. Se a tempestade vier,\nprocuro abrigo para os\pPokémon primeiro.$"
SI_W_T_TrainerAfter43_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 227. If a storm\ncomes, I find shelter for\pthe Pokemon first.$"
SI_W_Trainer_43::
 trainerbattle_single TRAINER_SI_WORLD43, SI_W_T_TrainerIntro43, SI_W_T_TrainerDefeat43
 msgbox SI_W_T_TrainerAfter43, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro44::
 .string "Sem atalhos: vou crescer\njunto com meus Pokémon.\pVamos lutar!$"
SI_W_T_TrainerIntro44_En::
 .string "No shortcuts: I will grow\nwith my Pokemon. Let us\pbattle!$"
SI_W_T_TrainerDefeat44::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat44_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter44::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p228. Ouvi passos nas\nfolhas e fiquei quieto. Um\pStarly pousou no meu\nombro!$"
SI_W_T_TrainerAfter44_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 228. I stayed still\nat rustling leaves. A\pStarly landed on my\nshoulder!$"
SI_W_Trainer_44::
 trainerbattle_single TRAINER_SI_WORLD44, SI_W_T_TrainerIntro44, SI_W_T_TrainerDefeat44
 msgbox SI_W_T_TrainerAfter44, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro45::
 .string "Estou treinando para não\ntravar diante da Liga. Me\pajuda com uma batalha?$"
SI_W_T_TrainerIntro45_En::
 .string "I train so I will not\nfreeze at the League. Help\pme with a battle?$"
SI_W_T_TrainerDefeat45::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat45_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter45::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p229. A estrada é longa.\nPrefiro conversar com meus\pparceiros a medir só a\ndistância.$"
SI_W_T_TrainerAfter45_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 229. The road is\nlong. I talk to my\ppartners instead of just\ncounting miles.$"
SI_W_Trainer_45::
 trainerbattle_single TRAINER_SI_WORLD45, SI_W_T_TrainerIntro45, SI_W_T_TrainerDefeat45
 msgbox SI_W_T_TrainerAfter45, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro46::
 .string "Meu parceiro inventou uma\nestratégia. Vamos\pdescobrir se funciona!$"
SI_W_T_TrainerIntro46_En::
 .string "My partner invented a\nstrategy. Let us see if it\pworks!$"
SI_W_T_TrainerDefeat46::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat46_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter46::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p230. Quem luta aprende;\nquem escuta também. Não\pignore os moradores pelo\ncaminho.$"
SI_W_T_TrainerAfter46_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 230. Fighting\nteaches; listening does\ptoo. Do not ignore people\nalong the way.$"
SI_W_Trainer_46::
 trainerbattle_single TRAINER_SI_WORLD46, SI_W_T_TrainerIntro46, SI_W_T_TrainerDefeat46
 msgbox SI_W_T_TrainerAfter46, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro47::
 .string "Prometi ao meu irmão que\nmelhoraria hoje. Quero\penfrentar você.$"
SI_W_T_TrainerIntro47_En::
 .string "I promised my brother I\nwould improve today. I\pwant to face you.$"
SI_W_T_TrainerDefeat47::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat47_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter47::
 .string "Vou anotar essa batalha no\nmeu caderno. Riley guarda\pum ovo de Riolu. Ele só o\nentrega quando Rowan\pconclui a pesquisa da\nbiblioteca.$"
SI_W_T_TrainerAfter47_En::
 .string "I will write this battle\nin my notebook. Riley\pkeeps a Riolu egg. He will\noffer it after Rowan\pfinishes the library\nresearch.$"
SI_W_Trainer_47::
 trainerbattle_single TRAINER_SI_WORLD47, SI_W_T_TrainerIntro47, SI_W_T_TrainerDefeat47
 msgbox SI_W_T_TrainerAfter47, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro48::
 .string "A trilha ficou tensa. Uma\nbatalha honesta ajuda a\precuperar a coragem.$"
SI_W_T_TrainerIntro48_En::
 .string "The trail feels tense. An\nhonest battle restores\pcourage.$"
SI_W_T_TrainerDefeat48::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat48_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter48::
 .string "Vou anotar essa batalha no\nmeu caderno. A biblioteca\precebeu páginas sem tinta.\nA escrita reaparece perto\pdos cristais.$"
SI_W_T_TrainerAfter48_En::
 .string "I will write this battle\nin my notebook. The\plibrary received blank\npages. Writing returns\pnear the crystals.$"
SI_W_Trainer_48::
 trainerbattle_single TRAINER_SI_WORLD48, SI_W_T_TrainerIntro48, SI_W_T_TrainerDefeat48
 msgbox SI_W_T_TrainerAfter48, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro49::
 .string "Sem atalhos: vou crescer\njunto com meus Pokémon.\pVamos lutar!$"
SI_W_T_TrainerIntro49_En::
 .string "No shortcuts: I will grow\nwith my Pokemon. Let us\pbattle!$"
SI_W_T_TrainerDefeat49::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat49_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter49::
 .string "Vou anotar essa batalha no\nmeu caderno. Gardenia\pconversa com as plantas.\nRi dela até meu Budew\pflorescer ouvindo sua voz.$"
SI_W_T_TrainerAfter49_En::
 .string "I will write this battle\nin my notebook. Gardenia\ptalks to plants. I laughed\nuntil my Budew bloomed at\pher voice.$"
SI_W_Trainer_49::
 trainerbattle_single TRAINER_SI_WORLD49, SI_W_T_TrainerIntro49, SI_W_T_TrainerDefeat49
 msgbox SI_W_T_TrainerAfter49, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro50::
 .string "Estou treinando para não\ntravar diante da Liga. Me\pajuda com uma batalha?$"
SI_W_T_TrainerIntro50_En::
 .string "I train so I will not\nfreeze at the League. Help\pme with a battle?$"
SI_W_T_TrainerDefeat50::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat50_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter50::
 .string "Vou anotar essa batalha no\nmeu caderno. Cheryl\pprocura um Budew saudável\nna floresta. Ela entende\pde amizade melhor que\nqualquer aparelho.$"
SI_W_T_TrainerAfter50_En::
 .string "I will write this battle\nin my notebook. Cheryl\pwants to see a healthy\nBudew in the forest. She\pknows friendship better\nthan any device.$"
SI_W_Trainer_50::
 trainerbattle_single TRAINER_SI_WORLD50, SI_W_T_TrainerIntro50, SI_W_T_TrainerDefeat50
 msgbox SI_W_T_TrainerAfter50, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro51::
 .string "Meu parceiro inventou uma\nestratégia. Vamos\pdescobrir se funciona!$"
SI_W_T_TrainerIntro51_En::
 .string "My partner invented a\nstrategy. Let us see if it\pworks!$"
SI_W_T_TrainerDefeat51::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat51_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter51::
 .string "Vou anotar essa batalha no\nmeu caderno. As árvores\pparecem guardar vozes\nantigas. Cheryl nos ajuda\pa cuidar delas.$"
SI_W_T_TrainerAfter51_En::
 .string "I will write this battle\nin my notebook. The trees\pkeep ancient voices.\nCheryl helps us care for\pthem.$"
SI_W_Trainer_51::
 trainerbattle_single TRAINER_SI_WORLD51, SI_W_T_TrainerIntro51, SI_W_T_TrainerDefeat51
 msgbox SI_W_T_TrainerAfter51, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro52::
 .string "Prometi ao meu irmão que\nmelhoraria hoje. Quero\penfrentar você.$"
SI_W_T_TrainerIntro52_En::
 .string "I promised my brother I\nwould improve today. I\pwant to face you.$"
SI_W_T_TrainerDefeat52::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat52_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter52::
 .string "Vou anotar essa batalha no\nmeu caderno. As árvores\pparecem guardar vozes\nantigas. Cheryl nos ajuda\pa cuidar delas.$"
SI_W_T_TrainerAfter52_En::
 .string "I will write this battle\nin my notebook. The trees\pkeep ancient voices.\nCheryl helps us care for\pthem.$"
SI_W_Trainer_52::
 trainerbattle_single TRAINER_SI_WORLD52, SI_W_T_TrainerIntro52, SI_W_T_TrainerDefeat52
 msgbox SI_W_T_TrainerAfter52, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro53::
 .string "A trilha ficou tensa. Uma\nbatalha honesta ajuda a\precuperar a coragem.$"
SI_W_T_TrainerIntro53_En::
 .string "The trail feels tense. An\nhonest battle restores\pcourage.$"
SI_W_T_TrainerDefeat53::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat53_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter53::
 .string "Vou anotar essa batalha no\nmeu caderno. O músico da\ppraça troca experiências\nde palco por uma surpresa\ppara quem tem a insígnia\nlocal.$"
SI_W_T_TrainerAfter53_En::
 .string "I will write this battle\nin my notebook. The plaza\pmusician has a surprise\nfor trainers with the\plocal badge.$"
SI_W_Trainer_53::
 trainerbattle_single TRAINER_SI_WORLD53, SI_W_T_TrainerIntro53, SI_W_T_TrainerDefeat53
 msgbox SI_W_T_TrainerAfter53, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro54::
 .string "Sem atalhos: vou crescer\njunto com meus Pokémon.\pVamos lutar!$"
SI_W_T_TrainerIntro54_En::
 .string "No shortcuts: I will grow\nwith my Pokemon. Let us\pbattle!$"
SI_W_T_TrainerDefeat54::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat54_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter54::
 .string "Vou anotar essa batalha no\nmeu caderno. Ensaiamos\pmesmo com a luz piscando.\nFantina disse que coragem\ptambém merece aplausos.$"
SI_W_T_TrainerAfter54_En::
 .string "I will write this battle\nin my notebook. We\prehearsed through\nflickering lights. Fantina\psaid courage deserves\napplause too.$"
SI_W_Trainer_54::
 trainerbattle_single TRAINER_SI_WORLD54, SI_W_T_TrainerIntro54, SI_W_T_TrainerDefeat54
 msgbox SI_W_T_TrainerAfter54, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro55::
 .string "Estou treinando para não\ntravar diante da Liga. Me\pajuda com uma batalha?$"
SI_W_T_TrainerIntro55_En::
 .string "I train so I will not\nfreeze at the League. Help\pme with a battle?$"
SI_W_T_TrainerDefeat55::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat55_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter55::
 .string "Vou anotar essa batalha no\nmeu caderno. As nuvens\pgiram sobre o cume. Não\ncaminhe sozinho se o sinal\pmudar.$"
SI_W_T_TrainerAfter55_En::
 .string "I will write this battle\nin my notebook. Clouds\pswirl over the summit. Do\nnot walk alone when the\psignal changes.$"
SI_W_Trainer_55::
 trainerbattle_single TRAINER_SI_WORLD55, SI_W_T_TrainerIntro55, SI_W_T_TrainerDefeat55
 msgbox SI_W_T_TrainerAfter55, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro56::
 .string "Meu parceiro inventou uma\nestratégia. Vamos\pdescobrir se funciona!$"
SI_W_T_TrainerIntro56_En::
 .string "My partner invented a\nstrategy. Let us see if it\pworks!$"
SI_W_T_TrainerDefeat56::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat56_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter56::
 .string "Vou anotar essa batalha no\nmeu caderno. As nuvens\pgiram sobre o cume. Não\ncaminhe sozinho se o sinal\pmudar.$"
SI_W_T_TrainerAfter56_En::
 .string "I will write this battle\nin my notebook. Clouds\pswirl over the summit. Do\nnot walk alone when the\psignal changes.$"
SI_W_Trainer_56::
 trainerbattle_single TRAINER_SI_WORLD56, SI_W_T_TrainerIntro56, SI_W_T_TrainerDefeat56
 msgbox SI_W_T_TrainerAfter56, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro57::
 .string "Prometi ao meu irmão que\nmelhoraria hoje. Quero\penfrentar você.$"
SI_W_T_TrainerIntro57_En::
 .string "I promised my brother I\nwould improve today. I\pwant to face you.$"
SI_W_T_TrainerDefeat57::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat57_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter57::
 .string "Vou anotar essa batalha no\nmeu caderno. As nuvens\pgiram sobre o cume. Não\ncaminhe sozinho se o sinal\pmudar.$"
SI_W_T_TrainerAfter57_En::
 .string "I will write this battle\nin my notebook. Clouds\pswirl over the summit. Do\nnot walk alone when the\psignal changes.$"
SI_W_Trainer_57::
 trainerbattle_single TRAINER_SI_WORLD57, SI_W_T_TrainerIntro57, SI_W_T_TrainerDefeat57
 msgbox SI_W_T_TrainerAfter57, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro58::
 .string "A trilha ficou tensa. Uma\nbatalha honesta ajuda a\precuperar a coragem.$"
SI_W_T_TrainerIntro58_En::
 .string "The trail feels tense. An\nhonest battle restores\pcourage.$"
SI_W_T_TrainerDefeat58::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat58_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter58::
 .string "Vou anotar essa batalha no\nmeu caderno. As nuvens\pgiram sobre o cume. Não\ncaminhe sozinho se o sinal\pmudar.$"
SI_W_T_TrainerAfter58_En::
 .string "I will write this battle\nin my notebook. Clouds\pswirl over the summit. Do\nnot walk alone when the\psignal changes.$"
SI_W_Trainer_58::
 trainerbattle_single TRAINER_SI_WORLD58, SI_W_T_TrainerIntro58, SI_W_T_TrainerDefeat58
 msgbox SI_W_T_TrainerAfter58, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro59::
 .string "Sem atalhos: vou crescer\njunto com meus Pokémon.\pVamos lutar!$"
SI_W_T_TrainerIntro59_En::
 .string "No shortcuts: I will grow\nwith my Pokemon. Let us\pbattle!$"
SI_W_T_TrainerDefeat59::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat59_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter59::
 .string "Vou anotar essa batalha no\nmeu caderno. Meu Croagunk\pescolheu meu guarda-chuva\ncomo casa. Ando molhado,\pele anda feliz.$"
SI_W_T_TrainerAfter59_En::
 .string "I will write this battle\nin my notebook. My\pCroagunk lives under my\numbrella. I get wet; he\pstays happy.$"
SI_W_Trainer_59::
 trainerbattle_single TRAINER_SI_WORLD59, SI_W_T_TrainerIntro59, SI_W_T_TrainerDefeat59
 msgbox SI_W_T_TrainerAfter59, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro60::
 .string "Estou treinando para não\ntravar diante da Liga. Me\pajuda com uma batalha?$"
SI_W_T_TrainerIntro60_En::
 .string "I train so I will not\nfreeze at the League. Help\pme with a battle?$"
SI_W_T_TrainerDefeat60::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat60_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter60::
 .string "Vou anotar essa batalha no\nmeu caderno. Wake ajudou a\perguer a barragem. O grito\ndele venceu o barulho de\ptrês máquinas.$"
SI_W_T_TrainerAfter60_En::
 .string "I will write this battle\nin my notebook. Wake\phelped raise the dam. His\nshout beat three machines.$"
SI_W_Trainer_60::
 trainerbattle_single TRAINER_SI_WORLD60, SI_W_T_TrainerIntro60, SI_W_T_TrainerDefeat60
 msgbox SI_W_T_TrainerAfter60, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro61::
 .string "Meu parceiro inventou uma\nestratégia. Vamos\pdescobrir se funciona!$"
SI_W_T_TrainerIntro61_En::
 .string "My partner invented a\nstrategy. Let us see if it\pworks!$"
SI_W_T_TrainerDefeat61::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat61_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter61::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p201. A estrada é longa.\nPrefiro conversar com meus\pparceiros a medir só a\ndistância.$"
SI_W_T_TrainerAfter61_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 201. The road is\nlong. I talk to my\ppartners instead of just\ncounting miles.$"
SI_W_Trainer_61::
 trainerbattle_single TRAINER_SI_WORLD61, SI_W_T_TrainerIntro61, SI_W_T_TrainerDefeat61
 msgbox SI_W_T_TrainerAfter61, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro62::
 .string "Prometi ao meu irmão que\nmelhoraria hoje. Quero\penfrentar você.$"
SI_W_T_TrainerIntro62_En::
 .string "I promised my brother I\nwould improve today. I\pwant to face you.$"
SI_W_T_TrainerDefeat62::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat62_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter62::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p201. Quem luta aprende;\nquem escuta também. Não\pignore os moradores pelo\ncaminho.$"
SI_W_T_TrainerAfter62_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 201. Fighting\nteaches; listening does\ptoo. Do not ignore people\nalong the way.$"
SI_W_Trainer_62::
 trainerbattle_single TRAINER_SI_WORLD62, SI_W_T_TrainerIntro62, SI_W_T_TrainerDefeat62
 msgbox SI_W_T_TrainerAfter62, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro63::
 .string "A trilha ficou tensa. Uma\nbatalha honesta ajuda a\precuperar a coragem.$"
SI_W_T_TrainerIntro63_En::
 .string "The trail feels tense. An\nhonest battle restores\pcourage.$"
SI_W_T_TrainerDefeat63::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat63_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter63::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p204. Se a tempestade vier,\nprocuro abrigo para os\pPokémon primeiro.$"
SI_W_T_TrainerAfter63_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 204. If a storm\ncomes, I find shelter for\pthe Pokemon first.$"
SI_W_Trainer_63::
 trainerbattle_single TRAINER_SI_WORLD63, SI_W_T_TrainerIntro63, SI_W_T_TrainerDefeat63
 msgbox SI_W_T_TrainerAfter63, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro64::
 .string "Sem atalhos: vou crescer\njunto com meus Pokémon.\pVamos lutar!$"
SI_W_T_TrainerIntro64_En::
 .string "No shortcuts: I will grow\nwith my Pokemon. Let us\pbattle!$"
SI_W_T_TrainerDefeat64::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat64_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter64::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p205. Ouvi passos nas\nfolhas e fiquei quieto. Um\pStarly pousou no meu\nombro!$"
SI_W_T_TrainerAfter64_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 205. I stayed still\nat rustling leaves. A\pStarly landed on my\nshoulder!$"
SI_W_Trainer_64::
 trainerbattle_single TRAINER_SI_WORLD64, SI_W_T_TrainerIntro64, SI_W_T_TrainerDefeat64
 msgbox SI_W_T_TrainerAfter64, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro65::
 .string "Estou treinando para não\ntravar diante da Liga. Me\pajuda com uma batalha?$"
SI_W_T_TrainerIntro65_En::
 .string "I train so I will not\nfreeze at the League. Help\pme with a battle?$"
SI_W_T_TrainerDefeat65::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat65_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter65::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p205. A estrada é longa.\nPrefiro conversar com meus\pparceiros a medir só a\ndistância.$"
SI_W_T_TrainerAfter65_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 205. The road is\nlong. I talk to my\ppartners instead of just\ncounting miles.$"
SI_W_Trainer_65::
 trainerbattle_single TRAINER_SI_WORLD65, SI_W_T_TrainerIntro65, SI_W_T_TrainerDefeat65
 msgbox SI_W_T_TrainerAfter65, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro66::
 .string "Meu parceiro inventou uma\nestratégia. Vamos\pdescobrir se funciona!$"
SI_W_T_TrainerIntro66_En::
 .string "My partner invented a\nstrategy. Let us see if it\pworks!$"
SI_W_T_TrainerDefeat66::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat66_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter66::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p206. Quem luta aprende;\nquem escuta também. Não\pignore os moradores pelo\ncaminho.$"
SI_W_T_TrainerAfter66_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 206. Fighting\nteaches; listening does\ptoo. Do not ignore people\nalong the way.$"
SI_W_Trainer_66::
 trainerbattle_single TRAINER_SI_WORLD66, SI_W_T_TrainerIntro66, SI_W_T_TrainerDefeat66
 msgbox SI_W_T_TrainerAfter66, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro67::
 .string "Prometi ao meu irmão que\nmelhoraria hoje. Quero\penfrentar você.$"
SI_W_T_TrainerIntro67_En::
 .string "I promised my brother I\nwould improve today. I\pwant to face you.$"
SI_W_T_TrainerDefeat67::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat67_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter67::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p206. Se a tempestade vier,\nprocuro abrigo para os\pPokémon primeiro.$"
SI_W_T_TrainerAfter67_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 206. If a storm\ncomes, I find shelter for\pthe Pokemon first.$"
SI_W_Trainer_67::
 trainerbattle_single TRAINER_SI_WORLD67, SI_W_T_TrainerIntro67, SI_W_T_TrainerDefeat67
 msgbox SI_W_T_TrainerAfter67, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro68::
 .string "A trilha ficou tensa. Uma\nbatalha honesta ajuda a\precuperar a coragem.$"
SI_W_T_TrainerIntro68_En::
 .string "The trail feels tense. An\nhonest battle restores\pcourage.$"
SI_W_T_TrainerDefeat68::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat68_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter68::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p206. Ouvi passos nas\nfolhas e fiquei quieto. Um\pStarly pousou no meu\nombro!$"
SI_W_T_TrainerAfter68_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 206. I stayed still\nat rustling leaves. A\pStarly landed on my\nshoulder!$"
SI_W_Trainer_68::
 trainerbattle_single TRAINER_SI_WORLD68, SI_W_T_TrainerIntro68, SI_W_T_TrainerDefeat68
 msgbox SI_W_T_TrainerAfter68, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro69::
 .string "Sem atalhos: vou crescer\njunto com meus Pokémon.\pVamos lutar!$"
SI_W_T_TrainerIntro69_En::
 .string "No shortcuts: I will grow\nwith my Pokemon. Let us\pbattle!$"
SI_W_T_TrainerDefeat69::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat69_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter69::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p206. A estrada é longa.\nPrefiro conversar com meus\pparceiros a medir só a\ndistância.$"
SI_W_T_TrainerAfter69_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 206. The road is\nlong. I talk to my\ppartners instead of just\ncounting miles.$"
SI_W_Trainer_69::
 trainerbattle_single TRAINER_SI_WORLD69, SI_W_T_TrainerIntro69, SI_W_T_TrainerDefeat69
 msgbox SI_W_T_TrainerAfter69, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro70::
 .string "Estou treinando para não\ntravar diante da Liga. Me\pajuda com uma batalha?$"
SI_W_T_TrainerIntro70_En::
 .string "I train so I will not\nfreeze at the League. Help\pme with a battle?$"
SI_W_T_TrainerDefeat70::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat70_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter70::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p207. Quem luta aprende;\nquem escuta também. Não\pignore os moradores pelo\ncaminho.$"
SI_W_T_TrainerAfter70_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 207. Fighting\nteaches; listening does\ptoo. Do not ignore people\nalong the way.$"
SI_W_Trainer_70::
 trainerbattle_single TRAINER_SI_WORLD70, SI_W_T_TrainerIntro70, SI_W_T_TrainerDefeat70
 msgbox SI_W_T_TrainerAfter70, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro71::
 .string "Meu parceiro inventou uma\nestratégia. Vamos\pdescobrir se funciona!$"
SI_W_T_TrainerIntro71_En::
 .string "My partner invented a\nstrategy. Let us see if it\pworks!$"
SI_W_T_TrainerDefeat71::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat71_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter71::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p208. Se a tempestade vier,\nprocuro abrigo para os\pPokémon primeiro.$"
SI_W_T_TrainerAfter71_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 208. If a storm\ncomes, I find shelter for\pthe Pokemon first.$"
SI_W_Trainer_71::
 trainerbattle_single TRAINER_SI_WORLD71, SI_W_T_TrainerIntro71, SI_W_T_TrainerDefeat71
 msgbox SI_W_T_TrainerAfter71, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro72::
 .string "Prometi ao meu irmão que\nmelhoraria hoje. Quero\penfrentar você.$"
SI_W_T_TrainerIntro72_En::
 .string "I promised my brother I\nwould improve today. I\pwant to face you.$"
SI_W_T_TrainerDefeat72::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat72_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter72::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p209. Ouvi passos nas\nfolhas e fiquei quieto. Um\pStarly pousou no meu\nombro!$"
SI_W_T_TrainerAfter72_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 209. I stayed still\nat rustling leaves. A\pStarly landed on my\nshoulder!$"
SI_W_Trainer_72::
 trainerbattle_single TRAINER_SI_WORLD72, SI_W_T_TrainerIntro72, SI_W_T_TrainerDefeat72
 msgbox SI_W_T_TrainerAfter72, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro73::
 .string "A trilha ficou tensa. Uma\nbatalha honesta ajuda a\precuperar a coragem.$"
SI_W_T_TrainerIntro73_En::
 .string "The trail feels tense. An\nhonest battle restores\pcourage.$"
SI_W_T_TrainerDefeat73::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat73_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter73::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p210. A estrada é longa.\nPrefiro conversar com meus\pparceiros a medir só a\ndistância.$"
SI_W_T_TrainerAfter73_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 210. The road is\nlong. I talk to my\ppartners instead of just\ncounting miles.$"
SI_W_Trainer_73::
 trainerbattle_single TRAINER_SI_WORLD73, SI_W_T_TrainerIntro73, SI_W_T_TrainerDefeat73
 msgbox SI_W_T_TrainerAfter73, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro74::
 .string "Sem atalhos: vou crescer\njunto com meus Pokémon.\pVamos lutar!$"
SI_W_T_TrainerIntro74_En::
 .string "No shortcuts: I will grow\nwith my Pokemon. Let us\pbattle!$"
SI_W_T_TrainerDefeat74::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat74_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter74::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p210. Quem luta aprende;\nquem escuta também. Não\pignore os moradores pelo\ncaminho.$"
SI_W_T_TrainerAfter74_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 210. Fighting\nteaches; listening does\ptoo. Do not ignore people\nalong the way.$"
SI_W_Trainer_74::
 trainerbattle_single TRAINER_SI_WORLD74, SI_W_T_TrainerIntro74, SI_W_T_TrainerDefeat74
 msgbox SI_W_T_TrainerAfter74, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro75::
 .string "Estou treinando para não\ntravar diante da Liga. Me\pajuda com uma batalha?$"
SI_W_T_TrainerIntro75_En::
 .string "I train so I will not\nfreeze at the League. Help\pme with a battle?$"
SI_W_T_TrainerDefeat75::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat75_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter75::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p211. Se a tempestade vier,\nprocuro abrigo para os\pPokémon primeiro.$"
SI_W_T_TrainerAfter75_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 211. If a storm\ncomes, I find shelter for\pthe Pokemon first.$"
SI_W_Trainer_75::
 trainerbattle_single TRAINER_SI_WORLD75, SI_W_T_TrainerIntro75, SI_W_T_TrainerDefeat75
 msgbox SI_W_T_TrainerAfter75, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro76::
 .string "Meu parceiro inventou uma\nestratégia. Vamos\pdescobrir se funciona!$"
SI_W_T_TrainerIntro76_En::
 .string "My partner invented a\nstrategy. Let us see if it\pworks!$"
SI_W_T_TrainerDefeat76::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat76_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter76::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p211. Ouvi passos nas\nfolhas e fiquei quieto. Um\pStarly pousou no meu\nombro!$"
SI_W_T_TrainerAfter76_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 211. I stayed still\nat rustling leaves. A\pStarly landed on my\nshoulder!$"
SI_W_Trainer_76::
 trainerbattle_single TRAINER_SI_WORLD76, SI_W_T_TrainerIntro76, SI_W_T_TrainerDefeat76
 msgbox SI_W_T_TrainerAfter76, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro77::
 .string "Prometi ao meu irmão que\nmelhoraria hoje. Quero\penfrentar você.$"
SI_W_T_TrainerIntro77_En::
 .string "I promised my brother I\nwould improve today. I\pwant to face you.$"
SI_W_T_TrainerDefeat77::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat77_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter77::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p212. A estrada é longa.\nPrefiro conversar com meus\pparceiros a medir só a\ndistância.$"
SI_W_T_TrainerAfter77_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 212. The road is\nlong. I talk to my\ppartners instead of just\ncounting miles.$"
SI_W_Trainer_77::
 trainerbattle_single TRAINER_SI_WORLD77, SI_W_T_TrainerIntro77, SI_W_T_TrainerDefeat77
 msgbox SI_W_T_TrainerAfter77, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro78::
 .string "A trilha ficou tensa. Uma\nbatalha honesta ajuda a\precuperar a coragem.$"
SI_W_T_TrainerIntro78_En::
 .string "The trail feels tense. An\nhonest battle restores\pcourage.$"
SI_W_T_TrainerDefeat78::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat78_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter78::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p212. Quem luta aprende;\nquem escuta também. Não\pignore os moradores pelo\ncaminho.$"
SI_W_T_TrainerAfter78_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 212. Fighting\nteaches; listening does\ptoo. Do not ignore people\nalong the way.$"
SI_W_Trainer_78::
 trainerbattle_single TRAINER_SI_WORLD78, SI_W_T_TrainerIntro78, SI_W_T_TrainerDefeat78
 msgbox SI_W_T_TrainerAfter78, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro79::
 .string "Sem atalhos: vou crescer\njunto com meus Pokémon.\pVamos lutar!$"
SI_W_T_TrainerIntro79_En::
 .string "No shortcuts: I will grow\nwith my Pokemon. Let us\pbattle!$"
SI_W_T_TrainerDefeat79::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat79_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter79::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p213. Se a tempestade vier,\nprocuro abrigo para os\pPokémon primeiro.$"
SI_W_T_TrainerAfter79_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 213. If a storm\ncomes, I find shelter for\pthe Pokemon first.$"
SI_W_Trainer_79::
 trainerbattle_single TRAINER_SI_WORLD79, SI_W_T_TrainerIntro79, SI_W_T_TrainerDefeat79
 msgbox SI_W_T_TrainerAfter79, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro80::
 .string "Estou treinando para não\ntravar diante da Liga. Me\pajuda com uma batalha?$"
SI_W_T_TrainerIntro80_En::
 .string "I train so I will not\nfreeze at the League. Help\pme with a battle?$"
SI_W_T_TrainerDefeat80::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat80_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter80::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p214. Ouvi passos nas\nfolhas e fiquei quieto. Um\pStarly pousou no meu\nombro!$"
SI_W_T_TrainerAfter80_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 214. I stayed still\nat rustling leaves. A\pStarly landed on my\nshoulder!$"
SI_W_Trainer_80::
 trainerbattle_single TRAINER_SI_WORLD80, SI_W_T_TrainerIntro80, SI_W_T_TrainerDefeat80
 msgbox SI_W_T_TrainerAfter80, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro81::
 .string "Meu parceiro inventou uma\nestratégia. Vamos\pdescobrir se funciona!$"
SI_W_T_TrainerIntro81_En::
 .string "My partner invented a\nstrategy. Let us see if it\pworks!$"
SI_W_T_TrainerDefeat81::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat81_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter81::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p215. A estrada é longa.\nPrefiro conversar com meus\pparceiros a medir só a\ndistância.$"
SI_W_T_TrainerAfter81_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 215. The road is\nlong. I talk to my\ppartners instead of just\ncounting miles.$"
SI_W_Trainer_81::
 trainerbattle_single TRAINER_SI_WORLD81, SI_W_T_TrainerIntro81, SI_W_T_TrainerDefeat81
 msgbox SI_W_T_TrainerAfter81, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro82::
 .string "Prometi ao meu irmão que\nmelhoraria hoje. Quero\penfrentar você.$"
SI_W_T_TrainerIntro82_En::
 .string "I promised my brother I\nwould improve today. I\pwant to face you.$"
SI_W_T_TrainerDefeat82::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat82_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter82::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p216. Quem luta aprende;\nquem escuta também. Não\pignore os moradores pelo\ncaminho.$"
SI_W_T_TrainerAfter82_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 216. Fighting\nteaches; listening does\ptoo. Do not ignore people\nalong the way.$"
SI_W_Trainer_82::
 trainerbattle_single TRAINER_SI_WORLD82, SI_W_T_TrainerIntro82, SI_W_T_TrainerDefeat82
 msgbox SI_W_T_TrainerAfter82, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro83::
 .string "A trilha ficou tensa. Uma\nbatalha honesta ajuda a\precuperar a coragem.$"
SI_W_T_TrainerIntro83_En::
 .string "The trail feels tense. An\nhonest battle restores\pcourage.$"
SI_W_T_TrainerDefeat83::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat83_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter83::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p217. Se a tempestade vier,\nprocuro abrigo para os\pPokémon primeiro.$"
SI_W_T_TrainerAfter83_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 217. If a storm\ncomes, I find shelter for\pthe Pokemon first.$"
SI_W_Trainer_83::
 trainerbattle_single TRAINER_SI_WORLD83, SI_W_T_TrainerIntro83, SI_W_T_TrainerDefeat83
 msgbox SI_W_T_TrainerAfter83, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro84::
 .string "Sem atalhos: vou crescer\njunto com meus Pokémon.\pVamos lutar!$"
SI_W_T_TrainerIntro84_En::
 .string "No shortcuts: I will grow\nwith my Pokemon. Let us\pbattle!$"
SI_W_T_TrainerDefeat84::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat84_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter84::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p218. Ouvi passos nas\nfolhas e fiquei quieto. Um\pStarly pousou no meu\nombro!$"
SI_W_T_TrainerAfter84_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 218. I stayed still\nat rustling leaves. A\pStarly landed on my\nshoulder!$"
SI_W_Trainer_84::
 trainerbattle_single TRAINER_SI_WORLD84, SI_W_T_TrainerIntro84, SI_W_T_TrainerDefeat84
 msgbox SI_W_T_TrainerAfter84, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro85::
 .string "Estou treinando para não\ntravar diante da Liga. Me\pajuda com uma batalha?$"
SI_W_T_TrainerIntro85_En::
 .string "I train so I will not\nfreeze at the League. Help\pme with a battle?$"
SI_W_T_TrainerDefeat85::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat85_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter85::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p218. A estrada é longa.\nPrefiro conversar com meus\pparceiros a medir só a\ndistância.$"
SI_W_T_TrainerAfter85_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 218. The road is\nlong. I talk to my\ppartners instead of just\ncounting miles.$"
SI_W_Trainer_85::
 trainerbattle_single TRAINER_SI_WORLD85, SI_W_T_TrainerIntro85, SI_W_T_TrainerDefeat85
 msgbox SI_W_T_TrainerAfter85, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro86::
 .string "Meu parceiro inventou uma\nestratégia. Vamos\pdescobrir se funciona!$"
SI_W_T_TrainerIntro86_En::
 .string "My partner invented a\nstrategy. Let us see if it\pworks!$"
SI_W_T_TrainerDefeat86::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat86_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter86::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p218. Quem luta aprende;\nquem escuta também. Não\pignore os moradores pelo\ncaminho.$"
SI_W_T_TrainerAfter86_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 218. Fighting\nteaches; listening does\ptoo. Do not ignore people\nalong the way.$"
SI_W_Trainer_86::
 trainerbattle_single TRAINER_SI_WORLD86, SI_W_T_TrainerIntro86, SI_W_T_TrainerDefeat86
 msgbox SI_W_T_TrainerAfter86, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro87::
 .string "Prometi ao meu irmão que\nmelhoraria hoje. Quero\penfrentar você.$"
SI_W_T_TrainerIntro87_En::
 .string "I promised my brother I\nwould improve today. I\pwant to face you.$"
SI_W_T_TrainerDefeat87::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat87_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter87::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p218. Se a tempestade vier,\nprocuro abrigo para os\pPokémon primeiro.$"
SI_W_T_TrainerAfter87_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 218. If a storm\ncomes, I find shelter for\pthe Pokemon first.$"
SI_W_Trainer_87::
 trainerbattle_single TRAINER_SI_WORLD87, SI_W_T_TrainerIntro87, SI_W_T_TrainerDefeat87
 msgbox SI_W_T_TrainerAfter87, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro88::
 .string "A trilha ficou tensa. Uma\nbatalha honesta ajuda a\precuperar a coragem.$"
SI_W_T_TrainerIntro88_En::
 .string "The trail feels tense. An\nhonest battle restores\pcourage.$"
SI_W_T_TrainerDefeat88::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat88_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter88::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p218. Ouvi passos nas\nfolhas e fiquei quieto. Um\pStarly pousou no meu\nombro!$"
SI_W_T_TrainerAfter88_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 218. I stayed still\nat rustling leaves. A\pStarly landed on my\nshoulder!$"
SI_W_Trainer_88::
 trainerbattle_single TRAINER_SI_WORLD88, SI_W_T_TrainerIntro88, SI_W_T_TrainerDefeat88
 msgbox SI_W_T_TrainerAfter88, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro89::
 .string "Sem atalhos: vou crescer\njunto com meus Pokémon.\pVamos lutar!$"
SI_W_T_TrainerIntro89_En::
 .string "No shortcuts: I will grow\nwith my Pokemon. Let us\pbattle!$"
SI_W_T_TrainerDefeat89::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat89_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter89::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p219. A estrada é longa.\nPrefiro conversar com meus\pparceiros a medir só a\ndistância.$"
SI_W_T_TrainerAfter89_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 219. The road is\nlong. I talk to my\ppartners instead of just\ncounting miles.$"
SI_W_Trainer_89::
 trainerbattle_single TRAINER_SI_WORLD89, SI_W_T_TrainerIntro89, SI_W_T_TrainerDefeat89
 msgbox SI_W_T_TrainerAfter89, MSGBOX_AUTOCLOSE
 end
SI_W_T_TrainerIntro90::
 .string "Estou treinando para não\ntravar diante da Liga. Me\pajuda com uma batalha?$"
SI_W_T_TrainerIntro90_En::
 .string "I train so I will not\nfreeze at the League. Help\pme with a battle?$"
SI_W_T_TrainerDefeat90::
 .string "Errei, mas já entendi o\nque tentar na próxima!$"
SI_W_T_TrainerDefeat90_En::
 .string "I missed it, but now I\nknow what to try next!$"
SI_W_T_TrainerAfter90::
 .string "Vou anotar essa batalha no\nmeu caderno. Esta é a Rota\p220. Quem luta aprende;\nquem escuta também. Não\pignore os moradores pelo\ncaminho.$"
SI_W_T_TrainerAfter90_En::
 .string "I will write this battle\nin my notebook. This is\pRoute 220. Fighting\nteaches; listening does\ptoo. Do not ignore people\nalong the way.$"
SI_W_Trainer_90::
 trainerbattle_single TRAINER_SI_WORLD90, SI_W_T_TrainerIntro90, SI_W_T_TrainerDefeat90
 msgbox SI_W_T_TrainerAfter90, MSGBOX_AUTOCLOSE
 end
SI_W_T_BarryIntro0::
 .string "Quero chegar primeiro em\ntudo! Mas antes preciso\psaber se nossos parceiros\nestão prontos. Vamos\pbatalhar?$"
SI_W_T_BarryIntro0_En::
 .string "I want to be first at\neverything! First, let us\psee if our partners are\nready. Shall we battle?$"
SI_W_T_BarryDefeat0::
 .string "Foi incrível! Vou cuidar\nmelhor de cada decisão.$"
SI_W_T_BarryDefeat0_En::
 .string "That was amazing! I will\ntake more care with each\pdecision.$"
SI_W_T_BarryDone0::
 .string "Não vou abandonar ninguém\npor causa de uma derrota.\pPode contar comigo.$"
SI_W_T_BarryDone0_En::
 .string "I will not abandon anyone\nover a defeat. You can\pcount on me.$"
SI_W_T_BarryWait0::
 .string "Estou preparando minha\nequipe. Siga sua missão;\pdepois a gente batalha!$"
SI_W_T_BarryWait0_En::
 .string "I am preparing my team.\nFollow your mission; we\pcan battle later!$"
SI_W_T_BarryIntro1::
 .string "Corri atrás da Galáctica\nsem pensar. Você fez\pmelhor: ouviu as pessoas.\nQuero aprender com você.\pVamos batalhar?$"
SI_W_T_BarryIntro1_En::
 .string "I rushed after Galactic\nwithout thinking. You\plistened to people. I want\nto learn from you. Shall\pwe battle?$"
SI_W_T_BarryDefeat1::
 .string "Foi incrível! Vou cuidar\nmelhor de cada decisão.$"
SI_W_T_BarryDefeat1_En::
 .string "That was amazing! I will\ntake more care with each\pdecision.$"
SI_W_T_BarryDone1::
 .string "Não vou abandonar ninguém\npor causa de uma derrota.\pPode contar comigo.$"
SI_W_T_BarryDone1_En::
 .string "I will not abandon anyone\nover a defeat. You can\pcount on me.$"
SI_W_T_BarryWait1::
 .string "Estou preparando minha\nequipe. Siga sua missão;\pdepois a gente batalha!$"
SI_W_T_BarryWait1_En::
 .string "I am preparing my team.\nFollow your mission; we\pcan battle later!$"
SI_W_Barry1::
 lock
 faceplayer
 goto_if_lt VAR_SI_STAGE, 10, SI_W_Barry1_Wait
 goto_if_defeated TRAINER_SI_BARRY1_1, SI_W_Barry1_Done
 msgbox SI_W_T_BarryIntro1, MSGBOX_YESNO
 goto_if_eq VAR_RESULT, FALSE, SI_W_Barry1_Exit
 special HealPlayerParty
 callnative SiInferStarter
 goto_if_eq VAR_SI_STARTER, 2, SI_W_Barry1_B
 goto_if_eq VAR_SI_STARTER, 3, SI_W_Barry1_C
 trainerbattle_single TRAINER_SI_BARRY1_1, SI_W_T_BarryIntro1, SI_W_T_BarryDefeat1
 goto SI_W_Barry1_Done
SI_W_Barry1_B:
 trainerbattle_single TRAINER_SI_BARRY1_2, SI_W_T_BarryIntro1, SI_W_T_BarryDefeat1
 goto SI_W_Barry1_Done
SI_W_Barry1_C:
 trainerbattle_single TRAINER_SI_BARRY1_3, SI_W_T_BarryIntro1, SI_W_T_BarryDefeat1
SI_W_Barry1_Done:
 special HealPlayerParty
 msgbox SI_W_T_BarryDone1, MSGBOX_DEFAULT
 goto SI_W_Barry1_Exit
SI_W_Barry1_Wait:
 msgbox SI_W_T_BarryWait1, MSGBOX_DEFAULT
SI_W_Barry1_Exit:
 release
 end
SI_W_T_BarryIntro2::
 .string "Papai só fala da Liga. Eu\nqueria uma vitória para\pmostrar a ele. Hoje quero\nmerecer a confiança do meu\ptime. Vamos batalhar?$"
SI_W_T_BarryIntro2_En::
 .string "Dad only talks about the\nLeague. I wanted a win to\pshow him. Today I want to\nearn my team trust. Shall\pwe battle?$"
SI_W_T_BarryDefeat2::
 .string "Foi incrível! Vou cuidar\nmelhor de cada decisão.$"
SI_W_T_BarryDefeat2_En::
 .string "That was amazing! I will\ntake more care with each\pdecision.$"
SI_W_T_BarryDone2::
 .string "Não vou abandonar ninguém\npor causa de uma derrota.\pPode contar comigo.$"
SI_W_T_BarryDone2_En::
 .string "I will not abandon anyone\nover a defeat. You can\pcount on me.$"
SI_W_T_BarryWait2::
 .string "Estou preparando minha\nequipe. Siga sua missão;\pdepois a gente batalha!$"
SI_W_T_BarryWait2_En::
 .string "I am preparing my team.\nFollow your mission; we\pcan battle later!$"
SI_W_Barry2::
 lock
 faceplayer
 goto_if_lt VAR_SI_STAGE, 15, SI_W_Barry2_Wait
 goto_if_defeated TRAINER_SI_BARRY2_1, SI_W_Barry2_Done
 msgbox SI_W_T_BarryIntro2, MSGBOX_YESNO
 goto_if_eq VAR_RESULT, FALSE, SI_W_Barry2_Exit
 special HealPlayerParty
 callnative SiInferStarter
 goto_if_eq VAR_SI_STARTER, 2, SI_W_Barry2_B
 goto_if_eq VAR_SI_STARTER, 3, SI_W_Barry2_C
 trainerbattle_single TRAINER_SI_BARRY2_1, SI_W_T_BarryIntro2, SI_W_T_BarryDefeat2
 goto SI_W_Barry2_Done
SI_W_Barry2_B:
 trainerbattle_single TRAINER_SI_BARRY2_2, SI_W_T_BarryIntro2, SI_W_T_BarryDefeat2
 goto SI_W_Barry2_Done
SI_W_Barry2_C:
 trainerbattle_single TRAINER_SI_BARRY2_3, SI_W_T_BarryIntro2, SI_W_T_BarryDefeat2
SI_W_Barry2_Done:
 special HealPlayerParty
 msgbox SI_W_T_BarryDone2, MSGBOX_DEFAULT
 goto SI_W_Barry2_Exit
SI_W_Barry2_Wait:
 msgbox SI_W_T_BarryWait2, MSGBOX_DEFAULT
SI_W_Barry2_Exit:
 release
 end
SI_W_T_BarryIntro3::
 .string "Falhei no lago. Não vou\nfingir que está tudo bem.\pVamos treinar e voltar\nmais fortes, juntos. Vamos\pbatalhar?$"
SI_W_T_BarryIntro3_En::
 .string "I failed at the lake. I\nwill not pretend I am\pfine. Let us train and\nreturn stronger together.\pShall we battle?$"
SI_W_T_BarryDefeat3::
 .string "Foi incrível! Vou cuidar\nmelhor de cada decisão.$"
SI_W_T_BarryDefeat3_En::
 .string "That was amazing! I will\ntake more care with each\pdecision.$"
SI_W_T_BarryDone3::
 .string "Não vou abandonar ninguém\npor causa de uma derrota.\pPode contar comigo.$"
SI_W_T_BarryDone3_En::
 .string "I will not abandon anyone\nover a defeat. You can\pcount on me.$"
SI_W_T_BarryWait3::
 .string "Estou preparando minha\nequipe. Siga sua missão;\pdepois a gente batalha!$"
SI_W_T_BarryWait3_En::
 .string "I am preparing my team.\nFollow your mission; we\pcan battle later!$"
SI_W_Barry3::
 lock
 faceplayer
 goto_if_lt VAR_SI_STAGE, 18, SI_W_Barry3_Wait
 goto_if_defeated TRAINER_SI_BARRY3_1, SI_W_Barry3_Done
 msgbox SI_W_T_BarryIntro3, MSGBOX_YESNO
 goto_if_eq VAR_RESULT, FALSE, SI_W_Barry3_Exit
 special HealPlayerParty
 callnative SiInferStarter
 goto_if_eq VAR_SI_STARTER, 2, SI_W_Barry3_B
 goto_if_eq VAR_SI_STARTER, 3, SI_W_Barry3_C
 trainerbattle_single TRAINER_SI_BARRY3_1, SI_W_T_BarryIntro3, SI_W_T_BarryDefeat3
 goto SI_W_Barry3_Done
SI_W_Barry3_B:
 trainerbattle_single TRAINER_SI_BARRY3_2, SI_W_T_BarryIntro3, SI_W_T_BarryDefeat3
 goto SI_W_Barry3_Done
SI_W_Barry3_C:
 trainerbattle_single TRAINER_SI_BARRY3_3, SI_W_T_BarryIntro3, SI_W_T_BarryDefeat3
SI_W_Barry3_Done:
 special HealPlayerParty
 msgbox SI_W_T_BarryDone3, MSGBOX_DEFAULT
 goto SI_W_Barry3_Exit
SI_W_Barry3_Wait:
 msgbox SI_W_T_BarryWait3, MSGBOX_DEFAULT
SI_W_Barry3_Exit:
 release
 end
SI_W_T_BarryIntro4::
 .string "Desta vez vou esperar\nvocê. Antes da Liga, uma\púltima batalha entre\namigos? Vamos batalhar?$"
SI_W_T_BarryIntro4_En::
 .string "This time I will wait for\nyou. One last battle\pbetween friends before the\nLeague? Shall we battle?$"
SI_W_T_BarryDefeat4::
 .string "Foi incrível! Vou cuidar\nmelhor de cada decisão.$"
SI_W_T_BarryDefeat4_En::
 .string "That was amazing! I will\ntake more care with each\pdecision.$"
SI_W_T_BarryDone4::
 .string "Não vou abandonar ninguém\npor causa de uma derrota.\pPode contar comigo.$"
SI_W_T_BarryDone4_En::
 .string "I will not abandon anyone\nover a defeat. You can\pcount on me.$"
SI_W_T_BarryWait4::
 .string "Estou preparando minha\nequipe. Siga sua missão;\pdepois a gente batalha!$"
SI_W_T_BarryWait4_En::
 .string "I am preparing my team.\nFollow your mission; we\pcan battle later!$"
SI_W_Barry4::
 lock
 faceplayer
 goto_if_lt VAR_SI_STAGE, 24, SI_W_Barry4_Wait
 goto_if_defeated TRAINER_SI_BARRY4_1, SI_W_Barry4_Done
 msgbox SI_W_T_BarryIntro4, MSGBOX_YESNO
 goto_if_eq VAR_RESULT, FALSE, SI_W_Barry4_Exit
 special HealPlayerParty
 callnative SiInferStarter
 goto_if_eq VAR_SI_STARTER, 2, SI_W_Barry4_B
 goto_if_eq VAR_SI_STARTER, 3, SI_W_Barry4_C
 trainerbattle_single TRAINER_SI_BARRY4_1, SI_W_T_BarryIntro4, SI_W_T_BarryDefeat4
 goto SI_W_Barry4_Done
SI_W_Barry4_B:
 trainerbattle_single TRAINER_SI_BARRY4_2, SI_W_T_BarryIntro4, SI_W_T_BarryDefeat4
 goto SI_W_Barry4_Done
SI_W_Barry4_C:
 trainerbattle_single TRAINER_SI_BARRY4_3, SI_W_T_BarryIntro4, SI_W_T_BarryDefeat4
SI_W_Barry4_Done:
 special HealPlayerParty
 msgbox SI_W_T_BarryDone4, MSGBOX_DEFAULT
 goto SI_W_Barry4_Exit
SI_W_Barry4_Wait:
 msgbox SI_W_T_BarryWait4, MSGBOX_DEFAULT
SI_W_Barry4_Exit:
 release
 end
SI_W_T_BarryIntro5::
 .string "Agora ajudo quem está\ncomeçando. Ser forte\ptambém é ensinar. Mas\nainda quero te desafiar!\pVamos batalhar?$"
SI_W_T_BarryIntro5_En::
 .string "Now I help beginners.\nStrength also means\pteaching. I still want to\nchallenge you! Shall we\pbattle?$"
SI_W_T_BarryDefeat5::
 .string "Foi incrível! Vou cuidar\nmelhor de cada decisão.$"
SI_W_T_BarryDefeat5_En::
 .string "That was amazing! I will\ntake more care with each\pdecision.$"
SI_W_T_BarryDone5::
 .string "Não vou abandonar ninguém\npor causa de uma derrota.\pPode contar comigo.$"
SI_W_T_BarryDone5_En::
 .string "I will not abandon anyone\nover a defeat. You can\pcount on me.$"
SI_W_T_BarryWait5::
 .string "Estou preparando minha\nequipe. Siga sua missão;\pdepois a gente batalha!$"
SI_W_T_BarryWait5_En::
 .string "I am preparing my team.\nFollow your mission; we\pcan battle later!$"
SI_W_Barry5::
 lock
 faceplayer
 goto_if_lt VAR_SI_STAGE, 29, SI_W_Barry5_Wait
 goto_if_defeated TRAINER_SI_BARRY5_1, SI_W_Barry5_Done
 msgbox SI_W_T_BarryIntro5, MSGBOX_YESNO
 goto_if_eq VAR_RESULT, FALSE, SI_W_Barry5_Exit
 special HealPlayerParty
 callnative SiInferStarter
 goto_if_eq VAR_SI_STARTER, 2, SI_W_Barry5_B
 goto_if_eq VAR_SI_STARTER, 3, SI_W_Barry5_C
 trainerbattle_single TRAINER_SI_BARRY5_1, SI_W_T_BarryIntro5, SI_W_T_BarryDefeat5
 goto SI_W_Barry5_Done
SI_W_Barry5_B:
 trainerbattle_single TRAINER_SI_BARRY5_2, SI_W_T_BarryIntro5, SI_W_T_BarryDefeat5
 goto SI_W_Barry5_Done
SI_W_Barry5_C:
 trainerbattle_single TRAINER_SI_BARRY5_3, SI_W_T_BarryIntro5, SI_W_T_BarryDefeat5
SI_W_Barry5_Done:
 special HealPlayerParty
 msgbox SI_W_T_BarryDone5, MSGBOX_DEFAULT
 goto SI_W_Barry5_Exit
SI_W_Barry5_Wait:
 msgbox SI_W_T_BarryWait5, MSGBOX_DEFAULT
SI_W_Barry5_Exit:
 release
 end
SI_W_T_BarrySupport0::
 .string "Você vai ouvir que sou\napressado. É verdade! Mas\peu volto por um amigo. A\ngente se vê na Rota 203.$"
SI_W_T_BarrySupport0_En::
 .string "They will say I rush.\nTrue! But I return for a\pfriend. See you on Route\n203.$"
SI_W_BarrySupport0::
 lock
 faceplayer
 special HealPlayerParty
 msgbox SI_W_T_BarrySupport0, MSGBOX_DEFAULT
 release
 end
SI_W_T_BarrySupport1::
 .string "A Galáctica não vai tocar\nno lago da nossa infância.\pVocê investiga; eu cuido\ndos Pokémon feridos.$"
SI_W_T_BarrySupport1_En::
 .string "Galactic will not touch\nour childhood lake. You\pinvestigate; I care for\nhurt Pokemon.$"
SI_W_BarrySupport1::
 lock
 faceplayer
 special HealPlayerParty
 msgbox SI_W_T_BarrySupport1, MSGBOX_DEFAULT
 release
 end
SI_W_T_BarrySupport2::
 .string "Eles tiraram a água e\ndeixaram os Pokémon. Eu\pseguro a recuperação; vá\natrás de Saturn!$"
SI_W_T_BarrySupport2_En::
 .string "They drained the water and\nleft the Pokemon. I help\pthe recovery; go after\nSaturn!$"
SI_W_BarrySupport2::
 lock
 faceplayer
 special HealPlayerParty
 msgbox SI_W_T_BarrySupport2, MSGBOX_DEFAULT
 release
 end
SI_W_T_BarrySupport3::
 .string "Desta vez não vou correr\nna frente. Vou ficar aqui\pe garantir que todos\nconsigam voltar.$"
SI_W_T_BarrySupport3_En::
 .string "This time I will not rush\nahead. I will stay and\pmake sure everyone can\nreturn.$"
SI_W_BarrySupport3::
 lock
 faceplayer
 special HealPlayerParty
 msgbox SI_W_T_BarrySupport3, MSGBOX_DEFAULT
 release
 end
SI_W_T_QuestOffer0::
 .string "Budew aprende a confiar\nantes de florescer. Mostre\pum Budew da sua equipe e\neu ajudo vocês com um\ppresente.$"
SI_W_T_QuestOffer0_En::
 .string "Budew learns trust before\nblooming. Show me one from\pyour party for a gift.$"
SI_W_T_QuestDone0::
 .string "Obrigado por voltar! Quero\nacompanhar o que vocês vão\pdescobrir.$"
SI_W_T_QuestDone0_En::
 .string "Thanks for returning! I\nwant to hear what you\pdiscover.$"
SI_W_T_QuestMissing0::
 .string "Volte depois de cumprir\nesse pedido. Seu parceiro\pprecisa estar na equipe.$"
SI_W_T_QuestMissing0_En::
 .string "Return after meeting the\nrequest. The partner must\pbe in your party.$"
SI_W_T_BagFull0::
 .string "Sua mochila está cheia.\nVou guardar o presente até\pvocê poder levar.$"
SI_W_T_BagFull0_En::
 .string "Your bag is full. I will\nkeep the gift until you\phave space.$"
SI_W_Quest0::
 lock
 faceplayer
 goto_if_set FLAG_SI_WORLD_QUEST0, SI_W_Quest0_Done
 msgbox SI_W_T_QuestOffer0, MSGBOX_DEFAULT
 goto_if_lt VAR_SI_STAGE, 0, SI_W_Quest0_Missing
 callnative SiCheckBudew
 goto_if_eq VAR_RESULT, FALSE, SI_W_Quest0_Missing
 giveitem ITEM_SOOTHE_BELL, 1
 goto_if_eq VAR_RESULT, FALSE, SI_W_Quest0_Full
 setflag FLAG_SI_WORLD_QUEST0
 callnative SiPrismRecharge
SI_W_Quest0_Done:
 msgbox SI_W_T_QuestDone0, MSGBOX_DEFAULT
 goto SI_W_Quest0_Exit
SI_W_Quest0_Missing:
 msgbox SI_W_T_QuestMissing0, MSGBOX_DEFAULT
 goto SI_W_Quest0_Exit
SI_W_Quest0_Full:
 msgbox SI_W_T_BagFull0, MSGBOX_DEFAULT
SI_W_Quest0_Exit:
 release
 end
SI_W_T_QuestOffer1::
 .string "Estou desenhando as aves\nde Sinnoh. Posso observar\pum Starly da sua equipe?$"
SI_W_T_QuestOffer1_En::
 .string "I draw Sinnoh birds. May I\nsee a Starly from your\pparty?$"
SI_W_T_QuestDone1::
 .string "Obrigado por voltar! Quero\nacompanhar o que vocês vão\pdescobrir.$"
SI_W_T_QuestDone1_En::
 .string "Thanks for returning! I\nwant to hear what you\pdiscover.$"
SI_W_T_QuestMissing1::
 .string "Volte depois de cumprir\nesse pedido. Seu parceiro\pprecisa estar na equipe.$"
SI_W_T_QuestMissing1_En::
 .string "Return after meeting the\nrequest. The partner must\pbe in your party.$"
SI_W_T_BagFull1::
 .string "Sua mochila está cheia.\nVou guardar o presente até\pvocê poder levar.$"
SI_W_T_BagFull1_En::
 .string "Your bag is full. I will\nkeep the gift until you\phave space.$"
SI_W_Quest1::
 lock
 faceplayer
 goto_if_set FLAG_SI_WORLD_QUEST1, SI_W_Quest1_Done
 msgbox SI_W_T_QuestOffer1, MSGBOX_DEFAULT
 goto_if_lt VAR_SI_STAGE, 0, SI_W_Quest1_Missing
 callnative SiCheckStarly
 goto_if_eq VAR_RESULT, FALSE, SI_W_Quest1_Missing
 giveitem ITEM_QUICK_BALL, 5
 goto_if_eq VAR_RESULT, FALSE, SI_W_Quest1_Full
 setflag FLAG_SI_WORLD_QUEST1
SI_W_Quest1_Done:
 msgbox SI_W_T_QuestDone1, MSGBOX_DEFAULT
 goto SI_W_Quest1_Exit
SI_W_Quest1_Missing:
 msgbox SI_W_T_QuestMissing1, MSGBOX_DEFAULT
 goto SI_W_Quest1_Exit
SI_W_Quest1_Full:
 msgbox SI_W_T_BagFull1, MSGBOX_DEFAULT
SI_W_Quest1_Exit:
 release
 end
SI_W_T_QuestOffer2::
 .string "Ganhei esta vara quando\ncomecei. Quero que você\pdescubra a calma de pescar\ntambém.$"
SI_W_T_QuestOffer2_En::
 .string "I got this rod as a\nbeginner. I want you to\pdiscover fishing too.$"
SI_W_T_QuestDone2::
 .string "Obrigado por voltar! Quero\nacompanhar o que vocês vão\pdescobrir.$"
SI_W_T_QuestDone2_En::
 .string "Thanks for returning! I\nwant to hear what you\pdiscover.$"
SI_W_T_QuestMissing2::
 .string "Volte depois de cumprir\nesse pedido. Seu parceiro\pprecisa estar na equipe.$"
SI_W_T_QuestMissing2_En::
 .string "Return after meeting the\nrequest. The partner must\pbe in your party.$"
SI_W_T_BagFull2::
 .string "Sua mochila está cheia.\nVou guardar o presente até\pvocê poder levar.$"
SI_W_T_BagFull2_En::
 .string "Your bag is full. I will\nkeep the gift until you\phave space.$"
SI_W_Quest2::
 lock
 faceplayer
 goto_if_set FLAG_SI_WORLD_QUEST2, SI_W_Quest2_Done
 msgbox SI_W_T_QuestOffer2, MSGBOX_DEFAULT
 goto_if_lt VAR_SI_STAGE, 1, SI_W_Quest2_Missing
 giveitem ITEM_OLD_ROD, 1
 goto_if_eq VAR_RESULT, FALSE, SI_W_Quest2_Full
 setflag FLAG_SI_WORLD_QUEST2
SI_W_Quest2_Done:
 msgbox SI_W_T_QuestDone2, MSGBOX_DEFAULT
 goto SI_W_Quest2_Exit
SI_W_Quest2_Missing:
 msgbox SI_W_T_QuestMissing2, MSGBOX_DEFAULT
 goto SI_W_Quest2_Exit
SI_W_Quest2_Full:
 msgbox SI_W_T_BagFull2, MSGBOX_DEFAULT
SI_W_Quest2_Exit:
 release
 end
SI_W_T_QuestOffer3::
 .string "Depois da insígnia de\nFantina, deixo um presente\ppara a sua próxima viagem.$"
SI_W_T_QuestOffer3_En::
 .string "After Fantina badge, I\nhave a gift for your next\pjourney.$"
SI_W_T_QuestDone3::
 .string "Obrigado por voltar! Quero\nacompanhar o que vocês vão\pdescobrir.$"
SI_W_T_QuestDone3_En::
 .string "Thanks for returning! I\nwant to hear what you\pdiscover.$"
SI_W_T_QuestMissing3::
 .string "Volte depois de cumprir\nesse pedido. Seu parceiro\pprecisa estar na equipe.$"
SI_W_T_QuestMissing3_En::
 .string "Return after meeting the\nrequest. The partner must\pbe in your party.$"
SI_W_T_BagFull3::
 .string "Sua mochila está cheia.\nVou guardar o presente até\pvocê poder levar.$"
SI_W_T_BagFull3_En::
 .string "Your bag is full. I will\nkeep the gift until you\phave space.$"
SI_W_Quest3::
 lock
 faceplayer
 goto_if_set FLAG_SI_WORLD_QUEST3, SI_W_Quest3_Done
 msgbox SI_W_T_QuestOffer3, MSGBOX_DEFAULT
 goto_if_lt VAR_SI_STAGE, 11, SI_W_Quest3_Missing
 giveitem ITEM_DUSK_BALL, 5
 goto_if_eq VAR_RESULT, FALSE, SI_W_Quest3_Full
 setflag FLAG_SI_WORLD_QUEST3
SI_W_Quest3_Done:
 msgbox SI_W_T_QuestDone3, MSGBOX_DEFAULT
 goto SI_W_Quest3_Exit
SI_W_Quest3_Missing:
 msgbox SI_W_T_QuestMissing3, MSGBOX_DEFAULT
 goto SI_W_Quest3_Exit
SI_W_Quest3_Full:
 msgbox SI_W_T_BagFull3, MSGBOX_DEFAULT
SI_W_Quest3_Exit:
 release
 end
SI_W_T_RileyOffer::
 .string "Este ovo de Riolu sente a\nenergia dos lagos. Depois\pda pesquisa na biblioteca,\nquero que viaje com você.\pDeixe um espaço na equipe.$"
SI_W_T_RileyOffer_En::
 .string "This Riolu egg senses lake\nenergy. After the library\presearch, I want it to\ntravel with you. Leave a\pparty slot.$"
SI_W_T_RileyDone::
 .string "Riolu vai conhecer o mundo\npelos seus olhos. Cuide\pbem dessa confiança.$"
SI_W_T_RileyDone_En::
 .string "Riolu will see the world\nthrough your eyes. Care\pfor that trust.$"
SI_W_RileyEgg::
 lock
 faceplayer
 goto_if_set FLAG_SI_RILEY_EGG, SI_W_RileyEgg_Done
 msgbox SI_W_T_RileyOffer, MSGBOX_DEFAULT
 goto_if_lt VAR_SI_STAGE, 17, SI_W_RileyEgg_Exit
 getpartysize
 goto_if_ge VAR_RESULT, 6, SI_W_RileyEgg_Exit
 giveegg SPECIES_RIOLU
 setflag FLAG_SI_RILEY_EGG
SI_W_RileyEgg_Done:
 msgbox SI_W_T_RileyDone, MSGBOX_DEFAULT
SI_W_RileyEgg_Exit:
 release
 end
SI_W_Pickup0::
 finditem ITEM_POTION
 end
SI_W_Pickup1::
 finditem ITEM_ANTIDOTE
 end
SI_W_Pickup2::
 finditem ITEM_POKE_BALL
 end
SI_W_Pickup3::
 finditem ITEM_PARALYZE_HEAL
 end
SI_W_Pickup4::
 finditem ITEM_SUPER_POTION
 end
SI_W_Pickup5::
 finditem ITEM_ETHER
 end
SI_W_Pickup6::
 finditem ITEM_GREAT_BALL
 end
SI_W_T_PrismRowan::
 .string "O Prisma dos Lagos\nresponde à sua estratégia.\pMesprit ajuda contra um\nalvo com status. Azelf\pdesperta depois do Lago\nValor; Uxie depois de\pAcuity. Cada captura\nreforçada usa uma carga.\pVença um treinador novo\npara recuperar uma. Abra\pMISSAO e use L ou R para\najustar.$"
SI_W_T_PrismRowan_En::
 .string "The Lake Prism responds to\nstrategy. Mesprit helps\pagainst a target with\nstatus. Azelf wakes after\pLake Valor; Uxie after\nAcuity. Each boosted throw\puses one charge. Win\nagainst a new trainer to\precover one. Open MISSION\nand press L or R to\padjust.$"
SI_W_T_RowanPhase0::
 .string "Os lagos voltaram a\nrespirar. Você mostrou que\ptempo, espaço e sombra\npodem coexistir. Agora\pleve essa experiência até\na Liga.$"
SI_W_T_RowanPhase0_En::
 .string "The lakes breathe again.\nYou showed time, space and\pshadow can coexist. Take\nthat experience to the\pLeague.$"
SI_W_RowanPhase0::
 msgbox SI_W_T_RowanPhase0, MSGBOX_DEFAULT
 release
 end
SI_W_T_RowanPhase1::
 .string "Barry voltou de Acuity\nmudado. Não meço coragem\ppela vitória. Procure os\nguardiões e cuide de quem\pficou para trás.$"
SI_W_T_RowanPhase1_En::
 .string "Barry returned changed\nfrom Acuity. I do not\pmeasure courage in wins.\nSeek the guardians and\pcare for those left\nbehind.$"
SI_W_RowanPhase1::
 msgbox SI_W_T_RowanPhase1, MSGBOX_DEFAULT
 release
 end
SI_W_T_RowanPhase2::
 .string "A energia de Azelf acordou\noutro modo do Prisma. A\pcrise de Valor revelou o\nque a Galáctica está\proubando dos lagos.$"
SI_W_T_RowanPhase2_En::
 .string "Azelf awakened another\nPrism mode. The Valor\pcrisis revealed what\nGalactic steals from the\plakes.$"
SI_W_RowanPhase2::
 msgbox SI_W_T_RowanPhase2, MSGBOX_DEFAULT
 release
 end
SI_W_T_RowanPhase3::
 .string "Roark confirmou o\ncondutor. O próximo\pcoletor está nas turbinas.\nAs pessoas de Floaroma\pdependem da água que passa\nali.$"
SI_W_T_RowanPhase3_En::
 .string "Roark confirmed the\nconductor. The next\pcollector is at the\nturbines. Floaroma people\pdepend on that water.$"
SI_W_RowanPhase3::
 msgbox SI_W_T_RowanPhase3, MSGBOX_DEFAULT
 release
 end
