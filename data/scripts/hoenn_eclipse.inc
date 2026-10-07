HE_Journal::
	goto_if_set FLAG_IS_CHAMPION, HE_PostJournal
	lockall
	goto_if_unset FLAG_SYS_POKEDEX_GET, HE_CampaignGoal0
	goto_if_unset FLAG_HE_ECLIPSE_PROOF, HE_CampaignGoal1
	goto_if_unset FLAG_BADGE01_GET, HE_CampaignGoal2
	goto_if_unset FLAG_HE_SIGNAL_RUSTBORO, HE_CampaignGoal3
	goto_if_unset FLAG_HE_SIGNAL_DEWFORD, HE_CampaignGoal4
	goto_if_unset FLAG_BADGE02_GET, HE_CampaignGoal5
	goto_if_unset FLAG_HE_HARBOR_SAFE, HE_CampaignGoal6
	goto_if_unset FLAG_HE_SIGNAL_MAUVILLE, HE_CampaignGoal7
	goto_if_unset FLAG_BADGE03_GET, HE_CampaignGoal8
	goto_if_unset FLAG_HE_THERMAL_SAFE, HE_CampaignGoal9
	goto_if_unset FLAG_BADGE04_GET, HE_CampaignGoal10
	goto_if_unset FLAG_HE_SUPPLY_SAFE, HE_CampaignGoal11
	goto_if_unset FLAG_BADGE05_GET, HE_CampaignGoal12
	goto_if_unset FLAG_HE_FOREST_SAFE, HE_CampaignGoal13
	goto_if_unset FLAG_BADGE06_GET, HE_CampaignGoal14
	goto_if_unset FLAG_HE_ORBIT_SAFE, HE_CampaignGoal15
	goto_if_unset FLAG_BADGE07_GET, HE_CampaignGoal16
	goto_if_unset FLAG_HE_OCEAN_SAFE, HE_CampaignGoal17
	goto_if_unset FLAG_BADGE08_GET, HE_CampaignGoal18
	goto_if_unset FLAG_HE_FINAL_ROCKET, HE_CampaignGoal19
	goto_if_unset FLAG_HE_CAMPAIGN_COMPLETE, HE_CampaignGoal20
	msgbox HE_CampaignDoneText, MSGBOX_DEFAULT
	releaseall
	end
HE_CampaignGoal0::
	msgbox HE_CampaignGoalText0, MSGBOX_DEFAULT
	releaseall
	end
HE_CampaignGoalText0:
	.string "MISSAO DA RESISTÊNCIA\pObtenha seu inicial e\nencontre o rival na Rota\p103. Depois, volte ao\nlaboratório de Birch.$"
HE_CampaignGoal1::
	msgbox HE_CampaignGoalText1, MSGBOX_DEFAULT
	releaseall
	end
HE_CampaignGoalText1:
	.string "MISSAO DA RESISTÊNCIA\pEncontre o pesquisador na\nfloresta de Petalburg. A\pRocket procura os documentos\nDevon.$"
HE_CampaignGoal2::
	msgbox HE_CampaignGoalText2, MSGBOX_DEFAULT
	releaseall
	end
HE_CampaignGoalText2:
	.string "MISSAO DA RESISTÊNCIA\pLeve as provas a Rustboro e\nenfrente Roxanne.$"
HE_CampaignGoal3::
	msgbox HE_CampaignGoalText3, MSGBOX_DEFAULT
	releaseall
	end
HE_CampaignGoalText3:
	.string "MISSAO DA RESISTÊNCIA\pReceba o decodificador do\npesquisador em Rustboro.\pDesligue o primeiro\ntransmissor.$"
HE_CampaignGoal4::
	msgbox HE_CampaignGoalText4, MSGBOX_DEFAULT
	releaseall
	end
HE_CampaignGoalText4:
	.string "MISSAO DA RESISTÊNCIA\pViaje com Briney para\nDewford e desative o sinal\pna entrada da Granite Cave.$"
HE_CampaignGoal5::
	msgbox HE_CampaignGoalText5, MSGBOX_DEFAULT
	releaseall
	end
HE_CampaignGoalText5:
	.string "MISSAO DA RESISTÊNCIA\pA ilha foi protegida.\nEnfrente Brawly.$"
HE_CampaignGoal6::
	msgbox HE_CampaignGoalText6, MSGBOX_DEFAULT
	releaseall
	end
HE_CampaignGoalText6:
	.string "MISSAO DA RESISTÊNCIA\pProteja Stern no segundo\nandar do museu de Slateport.$"
HE_CampaignGoal7::
	msgbox HE_CampaignGoalText7, MSGBOX_DEFAULT
	releaseall
	end
HE_CampaignGoalText7:
	.string "MISSAO DA RESISTÊNCIA\pStern entregou a chave.\nDesative o transmissor de\pMauville.$"
HE_CampaignGoal8::
	msgbox HE_CampaignGoalText8, MSGBOX_DEFAULT
	releaseall
	end
HE_CampaignGoalText8:
	.string "MISSAO DA RESISTÊNCIA\pA rede de Mauville está\nsegura. Enfrente Wattson.$"
HE_CampaignGoal9::
	msgbox HE_CampaignGoalText9, MSGBOX_DEFAULT
	releaseall
	end
HE_CampaignGoalText9:
	.string "MISSAO DA RESISTÊNCIA\pA cinza e a sede: encontre a\ncaixa vermelha e o policial\pem Lavaridge.$"
HE_CampaignGoal10::
	msgbox HE_CampaignGoalText10, MSGBOX_DEFAULT
	releaseall
	end
HE_CampaignGoalText10:
	.string "MISSAO DA RESISTÊNCIA\pA cidade está protegida.\nEnfrente o líder de\pLavaridge.$"
HE_CampaignGoal11::
	msgbox HE_CampaignGoalText11, MSGBOX_DEFAULT
	releaseall
	end
HE_CampaignGoalText11:
	.string "MISSAO DA RESISTÊNCIA\pO preço do abrigo: encontre\na caixa vermelha e o\ppolicial em Petalburg.$"
HE_CampaignGoal12::
	msgbox HE_CampaignGoalText12, MSGBOX_DEFAULT
	releaseall
	end
HE_CampaignGoalText12:
	.string "MISSAO DA RESISTÊNCIA\pA cidade está protegida.\nEnfrente o líder de\pPetalburg.$"
HE_CampaignGoal13::
	msgbox HE_CampaignGoalText13, MSGBOX_DEFAULT
	releaseall
	end
HE_CampaignGoalText13:
	.string "MISSAO DA RESISTÊNCIA\pA floresta sem canto:\nencontre a caixa vermelha e\po policial em Fortree.$"
HE_CampaignGoal14::
	msgbox HE_CampaignGoalText14, MSGBOX_DEFAULT
	releaseall
	end
HE_CampaignGoalText14:
	.string "MISSAO DA RESISTÊNCIA\pA cidade está protegida.\nEnfrente o líder de Fortree.$"
HE_CampaignGoal15::
	msgbox HE_CampaignGoalText15, MSGBOX_DEFAULT
	releaseall
	end
HE_CampaignGoalText15:
	.string "MISSAO DA RESISTÊNCIA\pA órbita da mentira:\nencontre a caixa vermelha e\po policial em Mossdeep.$"
HE_CampaignGoal16::
	msgbox HE_CampaignGoalText16, MSGBOX_DEFAULT
	releaseall
	end
HE_CampaignGoalText16:
	.string "MISSAO DA RESISTÊNCIA\pA cidade está protegida.\nEnfrente o líder de\pMossdeep.$"
HE_CampaignGoal17::
	msgbox HE_CampaignGoalText17, MSGBOX_DEFAULT
	releaseall
	end
HE_CampaignGoalText17:
	.string "MISSAO DA RESISTÊNCIA\pO mar não obedece: encontre\na caixa vermelha e o\ppolicial em Sootopolis.$"
HE_CampaignGoal18::
	msgbox HE_CampaignGoalText18, MSGBOX_DEFAULT
	releaseall
	end
HE_CampaignGoalText18:
	.string "MISSAO DA RESISTÊNCIA\pA cidade está protegida.\nEnfrente o líder de\pSootopolis.$"
HE_CampaignGoal19::
	msgbox HE_CampaignGoalText19, MSGBOX_DEFAULT
	releaseall
	end
HE_CampaignGoalText19:
	.string "MISSAO DA RESISTÊNCIA\pAs oito insígnias abrem a\núltima operação. Procure a\pcaixa vermelha em Ever\nGrande e enfrente Giovanni.$"
HE_CampaignGoal20::
	msgbox HE_CampaignGoalText20, MSGBOX_DEFAULT
	releaseall
	end
HE_CampaignGoalText20:
	.string "MISSAO DA RESISTÊNCIA\pA Rocket perdeu a rede.\nAtravesse Victory Road e\pconquiste a Liga Pokémon.$"
HE_CampaignDoneText:
	.string "A Operação Eclipse terminou.\nHoenn está livre da Rocket.\pContinue sua pesquisa,\ncapture espécies de outras\pregiões e visite seus\naliados.$"
HE_CountSignal::
	addvar VAR_0x8000, 1
	return
HE_Text_Journal:
	.string "DIÁRIO DA RESISTÊNCIA\pTransmissores desligados:\n{STR_VAR_1}/3.\pObserve os dois pulsos e\nrepita a ordem no painel. B\pfecha o decodificador.$"
HE_GoalRustboro::
	msgbox HE_Text_GoalRustboro, MSGBOX_DEFAULT
	releaseall
	end
HE_Text_GoalRustboro:
	.string "Desligue o transmissor\nperto do ginásio de\pRustboro. Depois procure\nBriney na Rota 104.$"
HE_GoalDewford::
	msgbox HE_Text_GoalDewford, MSGBOX_DEFAULT
	releaseall
	end
HE_Text_GoalDewford:
	.string "O transmissor da ilha fica\nna entrada da Granite Cave,\pao norte de Dewford.$"
HE_GoalBrawly::
	msgbox HE_Text_GoalBrawly, MSGBOX_DEFAULT
	releaseall
	end
HE_Text_GoalBrawly:
	.string "Desafie Brawly. Depois,\nBriney vai levar você ao\pporto de Slateport.$"
HE_GoalHarbor::
	msgbox HE_Text_GoalHarbor, MSGBOX_DEFAULT
	releaseall
	end
HE_Text_GoalHarbor:
	.string "Ajude Stern no segundo\nandar do museu de\pSlateport. A Rocket tomou o\nporto!$"
HE_GoalMauville::
	msgbox HE_Text_GoalMauville, MSGBOX_DEFAULT
	releaseall
	end
HE_Text_GoalMauville:
	.string "Procure o transmissor na\npraça de Mauville. Use a\pchave que Stern entregou.$"
HE_GoalWattson::
	msgbox HE_Text_GoalWattson, MSGBOX_DEFAULT
	releaseall
	end
HE_Text_GoalWattson:
	.string "A rede está segura. Desafie\nWattson e conquiste sua\pterceira insígnia.$"
HE_GoalEnd::
	msgbox HE_Text_GoalEnd, MSGBOX_DEFAULT
	releaseall
	end
HE_Text_GoalEnd:
	.string "Três cidades protegidas!\pA luta continua além de\nMauville. Procure o rádio\pda resistência nas cidades.$"
HE_Researcher::
	lock
	faceplayer
	goto_if_unset FLAG_BADGE01_GET, HE_ResearcherEarly
	goto_if_set FLAG_HE_DECODER, HE_ResearcherAgain
	msgbox HE_Text_Decoder, MSGBOX_DEFAULT
	setflag FLAG_HE_DECODER
	HE_ResearcherAgain:
	msgbox HE_Text_DecoderHow, MSGBOX_DEFAULT
	release
	end
HE_ResearcherEarly::
	msgbox HE_Text_Early, MSGBOX_DEFAULT
	release
	end
HE_Text_Decoder:
	.string "PESQUISADOR: Montei um\ndecodificador com os dados\pda floresta.\pEle lê os pulsos da rede da\nRocket. Você vai cortar o\psinal, cidade por cidade.$"
HE_Text_DecoderHow:
	.string "Abra MISSAO no menu para\nver o objetivo.\pAqui, repita A e depois C.\nErrou? Pode tentar de novo.\pNenhum item é gasto. B ou\nSair fecha o painel.$"
HE_Text_Early:
	.string "Roxanne precisa avaliar sua\nequipe antes de entregarmos\po decodificador.$"
HE_CivilianSupport::
	lock
	faceplayer
	msgbox HE_Text_Medic, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, HE_MedicExit
	closemessage
	fadescreen FADE_TO_BLACK
	playfanfare MUS_HEAL
	special HealPlayerParty
	waitfanfare
	fadescreen FADE_FROM_BLACK
	msgbox HE_Text_Healed, MSGBOX_DEFAULT
	HE_MedicExit:
	release
	end
HE_Text_Medic:
	.string "Sou voluntária da\nresistência. Quer que eu\pcuide dos seus Pokémon?$"
HE_Text_Healed:
	.string "Pronto! Seus parceiros\nestão recuperados. Não\pestamos sozinhos nesta\ncrise.$"
HE_Shake::
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 5
	special ShakeCamera
	waitstate
	return
HE_PuzzleWrong::
	playse SE_FAILURE
	msgbox HE_Text_PuzzleWrong, MSGBOX_DEFAULT
	release
	end
HE_Text_PuzzleWrong:
	.string "Pulso incorreto. O terminal\nreiniciou.\pObserve o padrão e tente\nnovamente.$"
HE_PuzzleDone::
	msgbox HE_Text_PuzzleDone, MSGBOX_DEFAULT
	release
	end
HE_Text_PuzzleDone:
	.string "Transmissor desligado. Não\nhá mais sinal de controle.$"
HE_NoDecoder::
	msgbox HE_Text_NoDecoder, MSGBOX_DEFAULT
	release
	end
HE_Text_NoDecoder:
	.string "Um sinal desconhecido pulsa\nno painel.\pProcure o pesquisador perto\ndo ginásio de Rustboro\pdepois da primeira\ninsígnia.$"
HE_PuzzleExit::
	release
	end
HE_Text_NextPulse:
	.string "Primeiro pulso aceito.\nEscolha o segundo.$"
HE_RelayRustboro::
	lock
	faceplayer
	goto_if_unset FLAG_HE_DECODER, HE_NoDecoder
	goto_if_set FLAG_HE_SIGNAL_RUSTBORO, HE_PuzzleDone
	msgbox HE_Text_PatternRustboro, MSGBOX_DEFAULT
	closemessage
	multichoice 15, 5, MULTI_HE_SIGNAL, FALSE
	goto_if_eq VAR_RESULT, MULTI_B_PRESSED, HE_PuzzleExit
	goto_if_eq VAR_RESULT, 3, HE_PuzzleExit
	goto_if_ne VAR_RESULT, 0, HE_PuzzleWrong
	playse SE_SWITCH
	msgbox HE_Text_NextPulse, MSGBOX_DEFAULT
	closemessage
	multichoice 15, 5, MULTI_HE_SIGNAL, FALSE
	goto_if_eq VAR_RESULT, MULTI_B_PRESSED, HE_PuzzleExit
	goto_if_eq VAR_RESULT, 3, HE_PuzzleExit
	goto_if_ne VAR_RESULT, 2, HE_PuzzleWrong
	playse SE_UNLOCK
	setflag FLAG_HE_SIGNAL_RUSTBORO
	call HE_Shake
	setflag FLAG_DELIVERED_STEVEN_LETTER
	setflag FLAG_DOCK_REJECTED_DEVON_GOODS
	clearflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_CAPTAIN_STERN
	msgbox HE_Text_RelayRustboroOff, MSGBOX_DEFAULT
	release
	end
HE_Text_PatternRustboro:
	.string "DECODIFICADOR\pPadrão: A depois C.\pRepita os dois pulsos para\ncortar o sinal.$"
HE_Text_RelayRustboroOff:
	.string "O transmissor perdeu\nenergia!\pRoxanne liberou a rota\nmarítima. Briney espera na\pcasa da Rota 104.\pO próximo sinal vem de uma\ncaverna em Dewford.$"
HE_RelayDewford::
	lock
	faceplayer
	goto_if_unset FLAG_HE_DECODER, HE_NoDecoder
	goto_if_set FLAG_HE_SIGNAL_DEWFORD, HE_PuzzleDone
	goto_if_defeated TRAINER_BRENDAN_PLACEHOLDER, HE_DewGuardGone
	msgbox HE_Text_CaveGuard, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_BRENDAN_PLACEHOLDER, HE_Text_CaveGuardLose
	HE_DewGuardGone:
	msgbox HE_Text_PatternDewford, MSGBOX_DEFAULT
	closemessage
	multichoice 15, 5, MULTI_HE_SIGNAL, FALSE
	goto_if_eq VAR_RESULT, MULTI_B_PRESSED, HE_PuzzleExit
	goto_if_eq VAR_RESULT, 3, HE_PuzzleExit
	goto_if_ne VAR_RESULT, 1, HE_PuzzleWrong
	playse SE_SWITCH
	msgbox HE_Text_NextPulse, MSGBOX_DEFAULT
	closemessage
	multichoice 15, 5, MULTI_HE_SIGNAL, FALSE
	goto_if_eq VAR_RESULT, MULTI_B_PRESSED, HE_PuzzleExit
	goto_if_eq VAR_RESULT, 3, HE_PuzzleExit
	goto_if_ne VAR_RESULT, 0, HE_PuzzleWrong
	playse SE_UNLOCK
	setflag FLAG_HE_SIGNAL_DEWFORD
	call HE_Shake
	setweather WEATHER_NONE
	doweather
	msgbox HE_Text_RelayDewfordOff, MSGBOX_DEFAULT
	release
	end
HE_Text_PatternDewford:
	.string "DECODIFICADOR\pPadrão: B depois A.\pRepita os dois pulsos para\ncortar o sinal.$"
HE_Text_RelayDewfordOff:
	.string "O ruído parou. Os barcos\npodem navegar de novo!\pBrawly espera no ginásio.\nProtegemos a ilha, mas o\pporto ainda corre perigo.$"
HE_RelayMauville::
	lock
	faceplayer
	goto_if_unset FLAG_HE_DECODER, HE_NoDecoder
	goto_if_set FLAG_HE_SIGNAL_MAUVILLE, HE_PuzzleDone
	goto_if_unset FLAG_HE_HARBOR_SAFE, HE_NeedHarbor
	goto_if_defeated TRAINER_MAY_PLACEHOLDER, HE_MauGuardGone
	msgbox HE_Text_GeneratorVesper, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_MAY_PLACEHOLDER, HE_Text_GeneratorLose
	HE_MauGuardGone:
	msgbox HE_Text_PatternMauville, MSGBOX_DEFAULT
	closemessage
	multichoice 15, 5, MULTI_HE_SIGNAL, FALSE
	goto_if_eq VAR_RESULT, MULTI_B_PRESSED, HE_PuzzleExit
	goto_if_eq VAR_RESULT, 3, HE_PuzzleExit
	goto_if_ne VAR_RESULT, 2, HE_PuzzleWrong
	playse SE_SWITCH
	msgbox HE_Text_NextPulse, MSGBOX_DEFAULT
	closemessage
	multichoice 15, 5, MULTI_HE_SIGNAL, FALSE
	goto_if_eq VAR_RESULT, MULTI_B_PRESSED, HE_PuzzleExit
	goto_if_eq VAR_RESULT, 3, HE_PuzzleExit
	goto_if_ne VAR_RESULT, 1, HE_PuzzleWrong
	playse SE_UNLOCK
	setflag FLAG_HE_SIGNAL_MAUVILLE
	call HE_Shake
	setweather WEATHER_NONE
	doweather
	msgbox HE_Text_RelayMauvilleOff, MSGBOX_DEFAULT
	release
	end
HE_Text_PatternMauville:
	.string "DECODIFICADOR\pPadrão: C depois B.\pRepita os dois pulsos para\ncortar o sinal.$"
HE_Text_RelayMauvilleOff:
	.string "As luzes da cidade\nvoltaram!\pVá ao ginásio. Wattson vai\npreparar a resistência para\pa próxima etapa.$"
HE_Text_CaveGuard:
	.string "ROCKET: Este sinal mantém a\nilha isolada.\pSem barcos, sem ajuda! Não\ntoque nesse painel.$"
HE_Text_CaveGuardLose:
	.string "A ilha vai receber ajuda...$"
HE_Text_GeneratorVesper:
	.string "VÉSPER: Libertou o porto,\nmas trouxe o decodificador\paté mim.\pA rede de Mauville é a\nchave da operação. Vou\ptomar esse aparelho!$"
HE_Text_GeneratorLose:
	.string "A rede rejeitou meu\ncomando?!$"
HE_Text_NeedHarbor:
	.string "Este terminal usa uma chave\ndo porto.\pAjude Stern no museu de\nSlateport para obter a\pfrequência correta.$"
HE_NeedHarbor::
	msgbox HE_Text_NeedHarbor, MSGBOX_DEFAULT
	release
	end

HeRebuild_EventScript_Officer::
    lock
    faceplayer
    msgbox HeRebuild_Text_Officer, MSGBOX_DEFAULT
    release
    end

HeRebuild_Text_Officer:
    .string "A estrada está aberta, mas evite\n"
    .string "os postos com o símbolo R.\p"
    .string "O rádio da polícia está mudo.\n"
    .string "Se encontrar Birch, avise-o.$"
