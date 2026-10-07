@ Hoenn Expansion: complete eight-badge campaign and epilogue.
HE_Thermal::
	lock
	faceplayer
	goto_if_unset FLAG_BADGE03_GET, HE_CampaignTooEarly
	goto_if_set FLAG_HE_THERMAL_SAFE, HE_CampaignRelayDone
	goto_if_defeated TRAINER_HE_THERMAL, HE_Thermal_BattleDone
	msgbox HE_Thermal_Intro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_HE_THERMAL, HE_CampaignEnemyDefeat
HE_Thermal_BattleDone:
	msgbox HE_Thermal_After, MSGBOX_DEFAULT
	closemessage
	multichoice 8, 5, MULTI_HE_PRIORITY, FALSE
	goto_if_eq VAR_RESULT, MULTI_B_PRESSED, HE_PuzzleExit
	goto_if_eq VAR_RESULT, 2, HE_PuzzleExit
	copyvar VAR_0x8009, VAR_RESULT
	msgbox HE_Thermal_Pattern, MSGBOX_DEFAULT
	closemessage
	multichoice 15, 5, MULTI_HE_SIGNAL, FALSE
	goto_if_eq VAR_RESULT, MULTI_B_PRESSED, HE_PuzzleExit
	goto_if_eq VAR_RESULT, 3, HE_PuzzleExit
	goto_if_ne VAR_RESULT, 1, HE_PuzzleWrong
	playse SE_SWITCH
	msgbox HE_CampaignNextPulse, MSGBOX_DEFAULT
	closemessage
	multichoice 15, 5, MULTI_HE_SIGNAL, FALSE
	goto_if_eq VAR_RESULT, MULTI_B_PRESSED, HE_PuzzleExit
	goto_if_eq VAR_RESULT, 3, HE_PuzzleExit
	goto_if_ne VAR_RESULT, 2, HE_PuzzleWrong
	playse SE_SWITCH
	msgbox HE_CampaignNextPulse, MSGBOX_DEFAULT
	closemessage
	multichoice 15, 5, MULTI_HE_SIGNAL, FALSE
	goto_if_eq VAR_RESULT, MULTI_B_PRESSED, HE_PuzzleExit
	goto_if_eq VAR_RESULT, 3, HE_PuzzleExit
	goto_if_ne VAR_RESULT, 0, HE_PuzzleWrong
	playse SE_SWITCH
	setflag FLAG_HE_THERMAL_SAFE
	call HE_Shake
	playse SE_UNLOCK
	call_if_eq VAR_0x8009, 0, HE_CampaignRescue
	call_if_eq VAR_0x8009, 1, HE_CampaignEnergy
	msgbox HE_Thermal_Done, MSGBOX_DEFAULT
	release
	end
HE_Thermal_Intro:
	.string "ORION: A Liga oferece\nmedalhas. Eu ofereço água\plimpa. Tudo que quero são os\nPokémon da população.\pEste meteorito alimenta a\nantena. Um nome bonito não\pmuda quem segura a torneira.$"
HE_Thermal_After:
	.string "ORION fugiu, mas deixou o\npulso térmico ativo.\pFLANNERY: O hospital precisa\nda reserva da rede. As\pfamílias precisam de\ntransporte. Qual ajuda vem\pprimeiro?$"
HE_Thermal_Done:
	.string "O transmissor térmico parou.\nEquipes locais assumiram os\pabrigos.\pFLANNERY: Não escolhemos\nquem merece ajuda. Só quem\pconseguimos alcançar\nprimeiro. Agora posso testar\psua equipe.$"
HE_Thermal_Pattern:
	.string "DECODIFICADOR\pRepita os três pulsos: B - C\n- A. B fecha o painel sem\pperder itens.$"
HE_ArrivalThermal::
	lockall
	setvar VAR_HE_SCENE, 1
	playse SE_PIN
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	call HE_Shake
	msgbox HE_ArrivalThermal_Text, MSGBOX_DEFAULT
	releaseall
	end
HE_ArrivalThermal_Text:
	.string "RÁDIO: A cinza chegou aos\nreservatórios!\pFLANNERY: Os idosos não\nconseguem sair. O\ptransmissor térmico fica na\npraça. Não vou abandonar a\pcidade por uma batalha.$"
HE_NeedThermal::
	lockall
	msgbox HE_NeedThermal_Text, MSGBOX_DEFAULT
	releaseall
	end
HE_NeedThermal_Text:
	.string "A cidade precisa da nossa\najuda antes do desafio.\pProcure o transmissor e o\npolicial da resistência em\pLavaridge.$"
HE_Supply::
	lock
	faceplayer
	goto_if_unset FLAG_BADGE04_GET, HE_CampaignTooEarly
	goto_if_set FLAG_HE_SUPPLY_SAFE, HE_CampaignRelayDone
	goto_if_defeated TRAINER_HE_SUPPLY, HE_Supply_BattleDone
	msgbox HE_Supply_Intro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_HE_SUPPLY, HE_CampaignEnemyDefeat
HE_Supply_BattleDone:
	msgbox HE_Supply_After, MSGBOX_DEFAULT
	closemessage
	multichoice 8, 5, MULTI_HE_PRIORITY, FALSE
	goto_if_eq VAR_RESULT, MULTI_B_PRESSED, HE_PuzzleExit
	goto_if_eq VAR_RESULT, 2, HE_PuzzleExit
	copyvar VAR_0x8009, VAR_RESULT
	msgbox HE_Supply_Pattern, MSGBOX_DEFAULT
	closemessage
	multichoice 15, 5, MULTI_HE_SIGNAL, FALSE
	goto_if_eq VAR_RESULT, MULTI_B_PRESSED, HE_PuzzleExit
	goto_if_eq VAR_RESULT, 3, HE_PuzzleExit
	goto_if_ne VAR_RESULT, 2, HE_PuzzleWrong
	playse SE_SWITCH
	msgbox HE_CampaignNextPulse, MSGBOX_DEFAULT
	closemessage
	multichoice 15, 5, MULTI_HE_SIGNAL, FALSE
	goto_if_eq VAR_RESULT, MULTI_B_PRESSED, HE_PuzzleExit
	goto_if_eq VAR_RESULT, 3, HE_PuzzleExit
	goto_if_ne VAR_RESULT, 0, HE_PuzzleWrong
	playse SE_SWITCH
	msgbox HE_CampaignNextPulse, MSGBOX_DEFAULT
	closemessage
	multichoice 15, 5, MULTI_HE_SIGNAL, FALSE
	goto_if_eq VAR_RESULT, MULTI_B_PRESSED, HE_PuzzleExit
	goto_if_eq VAR_RESULT, 3, HE_PuzzleExit
	goto_if_ne VAR_RESULT, 1, HE_PuzzleWrong
	playse SE_SWITCH
	setflag FLAG_HE_SUPPLY_SAFE
	call HE_Shake
	playse SE_UNLOCK
	call_if_eq VAR_0x8009, 0, HE_CampaignRescue
	call_if_eq VAR_0x8009, 1, HE_CampaignEnergy
	msgbox HE_Supply_Done, MSGBOX_DEFAULT
	release
	end
HE_Supply_Intro:
	.string "ROCKET: Esses contratos são\nlegais. Quer rasgar todos?\pEntão vai ter que responder\npela distribuição de comida.$"
HE_Supply_After:
	.string "Você recuperou a lista dos\nreféns.\pNORMAN: O comboio pode levar\nremédios ou remover as\pfamílias ameaçadas. Vou\norganizar a segunda viagem.\pEscolha a primeira.$"
HE_Supply_Done:
	.string "Os contratos foram\ndestruídos e o armazém foi\preaberto.\pNORMAN: Ser responsável não\né obedecer ao mais forte. É\presponder por quem depende\nde você. Tenho orgulho de\pver isso na sua jornada.$"
HE_Supply_Pattern:
	.string "DECODIFICADOR\pRepita os três pulsos: C - A\n- B. B fecha o painel sem\pperder itens.$"
HE_ArrivalSupply::
	lockall
	setvar VAR_HE_SCENE, 2
	playse SE_PIN
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	call HE_Shake
	msgbox HE_ArrivalSupply_Text, MSGBOX_DEFAULT
	releaseall
	end
HE_ArrivalSupply_Text:
	.string "NORMAN: Pessoas chegaram de\nLavaridge. O armazém de\palimentos virou uma prisão.\pA Rocket registrou famílias\ncomo dívidas. Temem perder o\pabrigo se recusarem entregar\nseus Pokémon.$"
HE_NeedSupply::
	lockall
	msgbox HE_NeedSupply_Text, MSGBOX_DEFAULT
	releaseall
	end
HE_NeedSupply_Text:
	.string "A cidade precisa da nossa\najuda antes do desafio.\pProcure o transmissor e o\npolicial da resistência em\pPetalburg.$"
HE_Forest::
	lock
	faceplayer
	goto_if_unset FLAG_BADGE05_GET, HE_CampaignTooEarly
	goto_if_set FLAG_HE_FOREST_SAFE, HE_CampaignRelayDone
	goto_if_defeated TRAINER_HE_FOREST, HE_Forest_BattleDone
	msgbox HE_Forest_Intro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_HE_FOREST, HE_CampaignEnemyDefeat
HE_Forest_BattleDone:
	msgbox HE_Forest_After, MSGBOX_DEFAULT
	closemessage
	multichoice 8, 5, MULTI_HE_PRIORITY, FALSE
	goto_if_eq VAR_RESULT, MULTI_B_PRESSED, HE_PuzzleExit
	goto_if_eq VAR_RESULT, 2, HE_PuzzleExit
	copyvar VAR_0x8009, VAR_RESULT
	msgbox HE_Forest_Pattern, MSGBOX_DEFAULT
	closemessage
	multichoice 15, 5, MULTI_HE_SIGNAL, FALSE
	goto_if_eq VAR_RESULT, MULTI_B_PRESSED, HE_PuzzleExit
	goto_if_eq VAR_RESULT, 3, HE_PuzzleExit
	goto_if_ne VAR_RESULT, 0, HE_PuzzleWrong
	playse SE_SWITCH
	msgbox HE_CampaignNextPulse, MSGBOX_DEFAULT
	closemessage
	multichoice 15, 5, MULTI_HE_SIGNAL, FALSE
	goto_if_eq VAR_RESULT, MULTI_B_PRESSED, HE_PuzzleExit
	goto_if_eq VAR_RESULT, 3, HE_PuzzleExit
	goto_if_ne VAR_RESULT, 2, HE_PuzzleWrong
	playse SE_SWITCH
	msgbox HE_CampaignNextPulse, MSGBOX_DEFAULT
	closemessage
	multichoice 15, 5, MULTI_HE_SIGNAL, FALSE
	goto_if_eq VAR_RESULT, MULTI_B_PRESSED, HE_PuzzleExit
	goto_if_eq VAR_RESULT, 3, HE_PuzzleExit
	goto_if_ne VAR_RESULT, 1, HE_PuzzleWrong
	playse SE_SWITCH
	setflag FLAG_HE_FOREST_SAFE
	call HE_Shake
	playse SE_UNLOCK
	call_if_eq VAR_0x8009, 0, HE_CampaignRescue
	call_if_eq VAR_0x8009, 1, HE_CampaignEnergy
	msgbox HE_Forest_Done, MSGBOX_DEFAULT
	release
	end
HE_Forest_Intro:
	.string "VESPER: Você corta antenas,\neu compro silêncio. Amanhã\peles vão agradecer pela\nordem.\pNão posso permitir que esse\ntécnico fale. Minha operação\pdepende de parecer um\nresgate.$"
HE_Forest_After:
	.string "O depoimento foi\ntransmitido. Os abrigos\pdescobriram a extorsão.\pWINONA: Há Pokémon presos\nnos galhos e energia para o\pInstituto. Precisamos das\nduas coisas, mas o primeiro\penvio é seu.$"
HE_Forest_Done:
	.string "Os pulsos cessaram. A\nfloresta volta a receber\pbandos de várias regiões.\pWINONA: Vamos levar o\ndepoimento a Mossdeep. O\psistema orbital é a última\npeça da Rocket.$"
HE_Forest_Pattern:
	.string "DECODIFICADOR\pRepita os três pulsos: A - C\n- B. B fecha o painel sem\pperder itens.$"
HE_ArrivalForest::
	lockall
	setvar VAR_HE_SCENE, 3
	playse SE_PIN
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	call HE_Shake
	msgbox HE_ArrivalForest_Text, MSGBOX_DEFAULT
	releaseall
	end
HE_ArrivalForest_Text:
	.string "WINONA: Não é uma\ntempestade. Os pássaros\pfogem dos pulsos do\nInstituto.\pUm técnico desertou da\nRocket e trouxe as\pfrequências. Temos uma\nchance de libertar a rota de\pmigração.$"
HE_NeedForest::
	lockall
	msgbox HE_NeedForest_Text, MSGBOX_DEFAULT
	releaseall
	end
HE_NeedForest_Text:
	.string "A cidade precisa da nossa\najuda antes do desafio.\pProcure o transmissor e o\npolicial da resistência em\pFortree.$"
HE_Orbit::
	lock
	faceplayer
	goto_if_unset FLAG_BADGE06_GET, HE_CampaignTooEarly
	goto_if_set FLAG_HE_ORBIT_SAFE, HE_CampaignRelayDone
	goto_if_defeated TRAINER_HE_ORBIT, HE_Orbit_BattleDone
	msgbox HE_Orbit_Intro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_HE_ORBIT, HE_CampaignEnemyDefeat
HE_Orbit_BattleDone:
	msgbox HE_Orbit_After, MSGBOX_DEFAULT
	closemessage
	multichoice 8, 5, MULTI_HE_PRIORITY, FALSE
	goto_if_eq VAR_RESULT, MULTI_B_PRESSED, HE_PuzzleExit
	goto_if_eq VAR_RESULT, 2, HE_PuzzleExit
	copyvar VAR_0x8009, VAR_RESULT
	msgbox HE_Orbit_Pattern, MSGBOX_DEFAULT
	closemessage
	multichoice 15, 5, MULTI_HE_SIGNAL, FALSE
	goto_if_eq VAR_RESULT, MULTI_B_PRESSED, HE_PuzzleExit
	goto_if_eq VAR_RESULT, 3, HE_PuzzleExit
	goto_if_ne VAR_RESULT, 2, HE_PuzzleWrong
	playse SE_SWITCH
	msgbox HE_CampaignNextPulse, MSGBOX_DEFAULT
	closemessage
	multichoice 15, 5, MULTI_HE_SIGNAL, FALSE
	goto_if_eq VAR_RESULT, MULTI_B_PRESSED, HE_PuzzleExit
	goto_if_eq VAR_RESULT, 3, HE_PuzzleExit
	goto_if_ne VAR_RESULT, 1, HE_PuzzleWrong
	playse SE_SWITCH
	msgbox HE_CampaignNextPulse, MSGBOX_DEFAULT
	closemessage
	multichoice 15, 5, MULTI_HE_SIGNAL, FALSE
	goto_if_eq VAR_RESULT, MULTI_B_PRESSED, HE_PuzzleExit
	goto_if_eq VAR_RESULT, 3, HE_PuzzleExit
	goto_if_ne VAR_RESULT, 0, HE_PuzzleWrong
	playse SE_SWITCH
	setflag FLAG_HE_ORBIT_SAFE
	call HE_Shake
	playse SE_UNLOCK
	call_if_eq VAR_0x8009, 0, HE_CampaignRescue
	call_if_eq VAR_0x8009, 1, HE_CampaignEnergy
	msgbox HE_Orbit_Done, MSGBOX_DEFAULT
	release
	end
HE_Orbit_Intro:
	.string "ORION: Depois do lançamento,\nnenhum abrigo recebe energia\psem minha autorização.\pA crise nos deu soldados.\nSeu diário não vai deter um\psatélite.$"
HE_Orbit_After:
	.string "Os códigos de lançamento\nforam copiados para a Liga.\pSTEVEN: O telescópio também\ndetectou uma perturbação sob\po mar. Podemos enviar ajuda\nàs ilhas ou estabilizar as\pcomunicações primeiro.$"
HE_Orbit_Done:
	.string "O sinal orbital foi isolado.\nO centro espacial consegue\pavisar as ilhas.\pSTEVEN: Vesper levou o\núltimo núcleo ao fundo do\pmar. Se despertar as fontes\nantigas, nenhuma antena\pconseguirá conter o\ndesastre.$"
HE_Orbit_Pattern:
	.string "DECODIFICADOR\pRepita os três pulsos: C - B\n- A. B fecha o painel sem\pperder itens.$"
HE_ArrivalOrbit::
	lockall
	setvar VAR_HE_SCENE, 4
	playse SE_PIN
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	call HE_Shake
	msgbox HE_ArrivalOrbit_Text, MSGBOX_DEFAULT
	releaseall
	end
HE_ArrivalOrbit_Text:
	.string "STEVEN: Roubaram os códigos\nde emergência do centro\pespacial.\pA Rocket pretende enviar um\ncomando para toda a rede\pDevon. Um único pulso pode\ndesligar a região inteira.$"
HE_NeedOrbit::
	lockall
	msgbox HE_NeedOrbit_Text, MSGBOX_DEFAULT
	releaseall
	end
HE_NeedOrbit_Text:
	.string "A cidade precisa da nossa\najuda antes do desafio.\pProcure o transmissor e o\npolicial da resistência em\pMossdeep.$"
HE_Ocean::
	lock
	faceplayer
	goto_if_unset FLAG_BADGE07_GET, HE_CampaignTooEarly
	goto_if_set FLAG_HE_OCEAN_SAFE, HE_CampaignRelayDone
	goto_if_defeated TRAINER_HE_OCEAN, HE_Ocean_BattleDone
	msgbox HE_Ocean_Intro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_HE_OCEAN, HE_CampaignEnemyDefeat
HE_Ocean_BattleDone:
	msgbox HE_Ocean_After, MSGBOX_DEFAULT
	closemessage
	multichoice 8, 5, MULTI_HE_PRIORITY, FALSE
	goto_if_eq VAR_RESULT, MULTI_B_PRESSED, HE_PuzzleExit
	goto_if_eq VAR_RESULT, 2, HE_PuzzleExit
	copyvar VAR_0x8009, VAR_RESULT
	msgbox HE_Ocean_Pattern, MSGBOX_DEFAULT
	closemessage
	multichoice 15, 5, MULTI_HE_SIGNAL, FALSE
	goto_if_eq VAR_RESULT, MULTI_B_PRESSED, HE_PuzzleExit
	goto_if_eq VAR_RESULT, 3, HE_PuzzleExit
	goto_if_ne VAR_RESULT, 1, HE_PuzzleWrong
	playse SE_SWITCH
	msgbox HE_CampaignNextPulse, MSGBOX_DEFAULT
	closemessage
	multichoice 15, 5, MULTI_HE_SIGNAL, FALSE
	goto_if_eq VAR_RESULT, MULTI_B_PRESSED, HE_PuzzleExit
	goto_if_eq VAR_RESULT, 3, HE_PuzzleExit
	goto_if_ne VAR_RESULT, 0, HE_PuzzleWrong
	playse SE_SWITCH
	msgbox HE_CampaignNextPulse, MSGBOX_DEFAULT
	closemessage
	multichoice 15, 5, MULTI_HE_SIGNAL, FALSE
	goto_if_eq VAR_RESULT, MULTI_B_PRESSED, HE_PuzzleExit
	goto_if_eq VAR_RESULT, 3, HE_PuzzleExit
	goto_if_ne VAR_RESULT, 2, HE_PuzzleWrong
	playse SE_SWITCH
	setflag FLAG_HE_OCEAN_SAFE
	call HE_Shake
	playse SE_UNLOCK
	call_if_eq VAR_0x8009, 0, HE_CampaignRescue
	call_if_eq VAR_0x8009, 1, HE_CampaignEnergy
	msgbox HE_Ocean_Done, MSGBOX_DEFAULT
	release
	end
HE_Ocean_Intro:
	.string "VESPER: Eu queria uma região\ndependente, não uma região\pmorta.\pOrion enviou energia além do\nlimite. Se entregar o\pnúcleo, Giovanni vai me\nabandonar aqui. Não me peça\ppara confiar na Liga agora.$"
HE_Ocean_After:
	.string "VESPER: O núcleo aceita uma\nsequência de três pulsos.\pUse o decodificador.\pWALLACE: A evacuação segue\npelo lago. Nossos técnicos\precuperam a rede. Defina a\nprioridade do último\pcomboio.$"
HE_Ocean_Done:
	.string "O núcleo oceânico foi\ndesligado. A recuperação\painda depende de acalmar os\nlendários.\pVESPER: Giovanni já tem a\ncópia dos códigos. Ele\pespera na central da Liga.\nLeve meus registros. Não\pdeixem que ele recomece.$"
HE_Ocean_Pattern:
	.string "DECODIFICADOR\pRepita os três pulsos: B - A\n- C. B fecha o painel sem\pperder itens.$"
HE_ArrivalOcean::
	lockall
	setvar VAR_HE_SCENE, 5
	playse SE_PIN
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	call HE_Shake
	msgbox HE_ArrivalOcean_Text, MSGBOX_DEFAULT
	releaseall
	end
HE_ArrivalOcean_Text:
	.string "WALLACE: A cidade virou\nabrigo para quem perdeu a\pcosta.\pVesper não domina o mar. Ela\nsó retirou os freios.\pPrecisamos de Rayquaza e do\ndesligamento do núcleo; uma\pbatalha sozinha não resolve.$"
HE_NeedOcean::
	lockall
	msgbox HE_NeedOcean_Text, MSGBOX_DEFAULT
	releaseall
	end
HE_NeedOcean_Text:
	.string "A cidade precisa da nossa\najuda antes do desafio.\pProcure o transmissor e o\npolicial da resistência em\pSootopolis.$"
HE_CampaignRescue::
	setflag FLAG_HE_RESCUE_FIRST
	addvar VAR_HE_RESCUES, 1
	msgbox HE_RescueReport, MSGBOX_DEFAULT
	giveitem ITEM_SUPER_POTION, 3
	return
HE_CampaignEnergy::
	msgbox HE_EnergyReport, MSGBOX_DEFAULT
	giveitem ITEM_ETHER, 2
	return
HE_CampaignRelayDone::
	msgbox HE_RelayDoneReport, MSGBOX_DEFAULT
	release
	end
HE_CampaignTooEarly::
	msgbox HE_TooEarlyReport, MSGBOX_DEFAULT
	release
	end
HE_CampaignLiaison::
	lock
	faceplayer
	msgbox HE_LiaisonText, MSGBOX_DEFAULT
	release
	end
HE_RescueReport:
	.string "O primeiro comboio resgatou\nfamílias e Pokémon presos.\pA equipe médica deixou\nsuprimentos para sua\pjornada. O segundo comboio\nvai cuidar da rede.$"
HE_EnergyReport:
	.string "O primeiro comboio restaurou\nenergia para bombas de água\pe hospitais.\pOs técnicos deixaram\nsuprimentos. O segundo\pcomboio vai retirar as\nfamílias.$"
HE_RelayDoneReport:
	.string "A resistência cuida deste\ntransmissor. Os dois\pcomboios chegaram.\pA batalha seguinte está no\nseu diário MISSAO.$"
HE_TooEarlyReport:
	.string "Ainda não temos autorização\npara mexer nesta rede.\pConfira a missão atual no\nmenu. Os líderes vão\ppreparar a próxima operação.$"
HE_LiaisonText:
	.string "As caixas vermelhas são os\ntransmissores tomados pela\pRocket. Examine a caixa para\niniciar a operação.\pO decodificador usa A, B e\nC. Errar ou sair não consome\pitens.\pEscolher Resgate prioriza\npessoas e rende poções.\pEnergia prioriza os\nhospitais e rende éteres. O\psegundo comboio completa a\noutra tarefa.$"
HE_CampaignNextPulse:
	.string "Pulso aceito. Repita o\npróximo sinal.$"
HE_CampaignEnemyDefeat:
	.string "Não podemos segurar a\ncentral!$"
HE_FinalCentral::
	lock
	faceplayer
	goto_if_unset FLAG_BADGE08_GET, HE_CampaignTooEarly
	goto_if_set FLAG_HE_FINAL_ROCKET, HE_CampaignRelayDone
	goto_if_defeated TRAINER_HE_GIOVANNI, HE_FinalCentral_Win
	msgbox HE_GiovanniIntro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_HE_GIOVANNI, HE_GiovanniDefeat
HE_FinalCentral_Win:
	setflag FLAG_HE_FINAL_ROCKET
	call HE_Shake
	msgbox HE_FinalCentralReport, MSGBOX_DEFAULT
	release
	end
HE_NeedFinalCentral::
	lockall
	msgbox HE_FinalCentralNeeded, MSGBOX_DEFAULT
	releaseall
	end
HE_LeagueEpilogue::
	setflag FLAG_HE_CAMPAIGN_COMPLETE
	buffernumberstring STR_VAR_1, VAR_HE_RESCUES
	msgbox HE_EpilogueText, MSGBOX_DEFAULT
	return
HE_GiovanniIntro:
	.string "GIOVANNI: Vesper entregou\nregistros. Orion perdeu a\pórbita. E você trouxe a\npopulação de volta para a\pLiga.\pMas a região continua\nquebrada. Quem vai pagar\ppela reconstrução?\pEu possuo a cópia dos\ncódigos Devon. Enquanto esta\pcentral existir, cada cidade\ndepende da minha assinatura.\pSe quer um futuro sem a\nRocket, prove que consegue\pdefendê-lo.$"
HE_GiovanniDefeat:
	.string "A confiança deles... não\nestava à venda.$"
HE_FinalCentralReport:
	.string "BIRCH, pelo rádio: A cópia\nfoi apagada. A Liga recebeu\pos registros dos abrigos e\nlibertou os reféns.\pGIOVANNI: Não posso negociar\ncom uma região que escolheu\pse levantar.\pO comandante foi detido.\nVesper vai depor. Orion\presponde pelo ataque ao\ncentro espacial.\pWALLACE: Venha à Liga. Seu\ndesafio agora é conquistar\pum título em uma Hoenn\nlivre.$"
HE_FinalCentralNeeded:
	.string "WALLACE: A Rocket ainda\nguarda a cópia da rede nesta\pcidade.\pDesligue a caixa vermelha\nperto do policial antes de\pdesafiar a Liga. Giovanni\nestá lá.$"
HE_EpilogueText:
	.string "DIAS DEPOIS...\pAs luzes dos hospitais\nvoltaram. As rotas\preabriram. Os Pokémon\nregressaram às florestas.\pVocê priorizou o resgate em\n{STR_VAR_1} operações. A\presistência completou todos\nos outros comboios.\pBIRCH: A Pokédex não\nregistra só espécies.\pRegistra quem voltou a ter\num lar.\pNORMAN: Hoenn ainda tem\nferidas. A diferença é que\pagora ninguém precisa\ncarregar isso sozinho.\pSENHOR LARANJA: Sua jornada\nnão acabou, campeão. Temos\puma região para explorar!\pOPERAÇAO ECLIPSE ENCERRADA.\nA campanha terminou;\pcontinue capturando e\nexplorando Hoenn.$"
