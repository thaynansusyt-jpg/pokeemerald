@ Hoenn Expansion 0.7: persistent expeditions and Rainbow Rocket.
HE_TrainingCoach::
	lock
	faceplayer
	goto_if_unset FLAG_HE_ANTI_GRINDING, HE_CoachDisabled
	callnative HeCoachRefill
	goto_if_eq VAR_RESULT, 0, HE_CoachStocked
	giveitem ITEM_RARE_CANDY, 10
	goto_if_eq VAR_RESULT, FALSE, HE_CoachBagFull
	msgbox HE_CoachGift, MSGBOX_DEFAULT
	release
	end
HE_CoachStocked:
	msgbox HE_CoachEnough, MSGBOX_DEFAULT
	release
	end
HE_CoachDisabled:
	msgbox HE_CoachOff, MSGBOX_DEFAULT
	release
	end
HE_CoachGift:
	.string "Sou o treinador de apoio.\nUse estes doces para treinar\psem repetir a mesma rota.\nVolte quando tiver menos\pde dez. O limite rígido\ntambém vale para os doces.$"
HE_CoachEnough:
	.string "Você já tem doces de treino.\nUse-os antes de pedir mais.\pO treino ajuda a recuperar\nníveis; estratégia continua\pdecidindo as batalhas.$"
HE_CoachOff:
	.string "O treino assistido foi\ndesligado nas regras desta\pjornada. Cada aventura pode\nter seu próprio desafio!$"
HE_CoachBagFull:
	msgbox HE_CoachBagFullText, MSGBOX_DEFAULT
	release
	end
HE_CoachBagFullText:
	.string "Não há espaço para os\ndoces. Organize a mochila\pe volte para receber\nseu apoio de treino.$"

HE_QuestBoard::
	lock
	faceplayer
	goto_if_unset FLAG_IS_CHAMPION, HE_QuestEarly
HE_QuestRegion:
	msgbox HE_QuestBoardIntro, MSGBOX_DEFAULT
	closemessage
	multichoice 13, 1, MULTI_HE_GENERATION, FALSE
	goto_if_eq VAR_RESULT, MULTI_B_PRESSED, HE_PostExit
	goto_if_eq VAR_RESULT, 7, HE_PostExit
	copyvar VAR_0x8005, VAR_RESULT
HE_QuestNext:
	callnative HeQuestNext
	goto_if_eq VAR_RESULT, 0, HE_QuestAllDone
HE_QuestPreview:
	msgbox HE_QuestTarget, MSGBOX_DEFAULT
	closemessage
	multichoice 12, 2, MULTI_HE_QUEST, FALSE
	goto_if_eq VAR_RESULT, 0, HE_QuestAccept
	goto_if_eq VAR_RESULT, 1, HE_QuestNext
	goto_if_eq VAR_RESULT, 2, HE_QuestActive
	goto_if_eq VAR_RESULT, 3, HE_QuestRegion
	goto HE_PostExit
HE_QuestAccept:
	msgbox HE_QuestReplace, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, HE_QuestPreview
	callnative HeQuestAccept
	msgbox HE_QuestAccepted, MSGBOX_DEFAULT
	goto HE_PostExit
HE_QuestActive:
	callnative HeQuestDescribeActive
	goto_if_eq VAR_RESULT, 0, HE_QuestNone
	msgbox HE_QuestTarget, MSGBOX_DEFAULT
	goto HE_PostExit
HE_QuestNone:
	msgbox HE_QuestNoActive, MSGBOX_DEFAULT
	goto HE_PostExit
HE_QuestEarly:
	msgbox HE_QuestEarlyText, MSGBOX_DEFAULT
	goto HE_PostExit
HE_QuestAllDone:
	msgbox HE_QuestFinishedRegion, MSGBOX_DEFAULT
	goto HE_QuestRegion
HE_QuestResearch::
	lock
	faceplayer
	callnative HeQuestInvestigate
	goto_if_eq VAR_RESULT, 1, HE_QuestEvidenceMissing
	goto_if_eq VAR_RESULT, 2, HE_QuestEvidenceReady
	goto_if_eq VAR_RESULT, 3, HE_QuestEvidenceNight
	msgbox HE_QuestResearchIntro, MSGBOX_DEFAULT
	goto HE_PostExit
HE_QuestEvidenceMissing:
	msgbox HE_QuestNeedEvidence, MSGBOX_DEFAULT
	goto HE_PostExit
HE_QuestEvidenceReady:
	msgbox HE_QuestResearchReady, MSGBOX_DEFAULT
	goto HE_PostExit
HE_QuestEvidenceNight:
	msgbox HE_QuestResearchNight, MSGBOX_DEFAULT
	goto HE_PostExit
HE_QuestHabitat::
	lock
	faceplayer
	setwildbattle SPECIES_ZIGZAGOON, 1
	callnative HeQuestPrepareEncounter
	goto_if_eq VAR_RESULT, 1, HE_QuestNotResearched
	goto_if_eq VAR_RESULT, 2, HE_QuestWrongTime
	goto_if_eq VAR_RESULT, 3, HE_QuestEncounter
	msgbox HE_QuestBeaconIntro, MSGBOX_DEFAULT
	goto HE_PostExit
HE_QuestNotResearched:
	msgbox HE_QuestNeedResearch, MSGBOX_DEFAULT
	goto HE_PostExit
HE_QuestWrongTime:
	msgbox HE_QuestNeedNight, MSGBOX_DEFAULT
	goto HE_PostExit
HE_QuestEncounter:
	msgbox HE_QuestSignal, MSGBOX_DEFAULT
	closemessage
	playse SE_SWITCH
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_CAUGHT, HE_QuestCaptured
	msgbox HE_QuestRetry, MSGBOX_DEFAULT
	goto HE_PostExit
HE_QuestCaptured:
	callnative HeQuestComplete
	msgbox HE_QuestCapturedText, MSGBOX_DEFAULT
	goto HE_PostExit
HE_PostExit:
	release
	end
HE_QuestBoardIntro:
	.string "O inventário da Rocket tinha\nregistros de outras regiões.\pEscolha uma origem. Vamos\nprocurar cada sobrevivente\psem usar as máquinas deles.$"
HE_QuestTarget:
	.string "Alvo: {STR_VAR_1}.\nÁrea: {STR_VAR_2}.\pAmostra: {STR_VAR_3}.\pFale com nosso pesquisador\nno Centro Pokémon da região\pde origem escolhida.$"
HE_QuestReplace:
	.string "Aceitar esta investigação?\nEla substitui a missão ativa.\pCapturas já concluídas\ncontinuam registradas.$"
HE_QuestAccepted:
	.string "Missão registrada!\pKanto: Rustboro.\nJohto: Dewford.\pHoenn: Slateport.\nSinnoh: Mauville.\pUnova: Lavaridge.\nKalos: Fortree.\pAlola: Mossdeep.\pLeve a amostra ao pesquisador\nno Centro Pokémon indicado.$"
HE_QuestNoActive:
	.string "Nenhuma investigação ativa.\nEscolha um alvo no painel.$"
HE_QuestEarlyText:
	.string "Precisamos reabrir a Liga\nantes das expedições. Volte\pdepois de se tornar campeão.$"
HE_QuestFinishedRegion:
	.string "Todos os alvos desta origem\nforam registrados! Escolha\poutra região no painel.$"
HE_QuestResearchIntro:
	.string "Eu cruzo os sinais da rede\ncom vestígios naturais.\pDepois da Liga, escolha uma\ninvestigação no laboratório\pdo professor Birch.$"
HE_QuestNeedEvidence:
	.string "Investigo {STR_VAR_1}.\pPreciso analisar uma amostra:\n{STR_VAR_3}.\pNão vou consumi-la. Volte\nquando a tiver na mochila.$"
HE_QuestResearchReady:
	.string "O padrão bate com\n{STR_VAR_1}!\pLiberamos a expedição em\n{STR_VAR_2}.\pFale com o pesquisador de\ncampo junto à entrada.$"
HE_QuestResearchNight:
	.string "O sinal de {STR_VAR_1}\nsó aparece à noite.\pLiberamos a expedição em\n{STR_VAR_2}.\pVolte ao habitat entre\n18h e 6h. Usamos o RTC.$"
HE_QuestBeaconIntro:
	.string "Este posto acompanha os\nPokémon que a Rocket\ptransportou à força. Aceite\numa investigação no lab\pdo professor Birch.$"
HE_QuestNeedResearch:
	.string "O alvo está nesta área, mas\nainda falta analisar a\pamostra no Centro Pokémon.\nNão vamos atraí-lo às cegas.$"
HE_QuestNeedNight:
	.string "O sinal só aparece à noite.\nVolte entre 18h e 6h.\pNão precisa ajustar o relógio\ndo quarto: usamos o RTC.$"
HE_QuestSignal:
	.string "O sensor encontrou\n{STR_VAR_1}!\pSe fugir ou derrotá-lo,\nfale comigo para tentar\pnovamente. Boa sorte!$"
HE_QuestRetry:
	.string "O sinal continua ativo.\nPrepare sua equipe e fale\pcomigo quando quiser tentar\nnovamente.$"
HE_QuestCapturedText:
	.string "Captura confirmada!\nInvestigação concluída.\pO laboratório já recebeu\nos dados. Escolha o próximo\palvo no painel.$"

HE_RainbowStart::
	lockall
	faceplayer
	goto_if_unset FLAG_IS_CHAMPION, HE_RainbowEarly
	goto_if_ne VAR_HE_RAINBOW_STAGE, 0, HE_RainbowReport
	fadescreen FADE_TO_BLACK
	delay 24
	playbgm MUS_RG_ROCKET_HIDEOUT, TRUE
	fadescreen FADE_FROM_BLACK
	msgbox HE_RainbowDistress, MSGBOX_DEFAULT
	call HE_Shake
	msgbox HE_RainbowBriefing, MSGBOX_DEFAULT
	setvar VAR_HE_RAINBOW_STAGE, 1
	releaseall
	end
HE_RainbowEarly:
	msgbox HE_RainbowEarlyText, MSGBOX_DEFAULT
	releaseall
	end
HE_RainbowReport:
	goto_if_eq VAR_HE_RAINBOW_STAGE, 1, HE_RainbowHintMeteor
	goto_if_eq VAR_HE_RAINBOW_STAGE, 2, HE_RainbowHintSpace
	goto_if_eq VAR_HE_RAINBOW_STAGE, 3, HE_RainbowHintShip
	goto_if_eq VAR_HE_RAINBOW_STAGE, 4, HE_RainbowHintSky
	msgbox HE_RainbowRestored, MSGBOX_DEFAULT
	releaseall
	end
HE_RainbowHintMeteor:
	msgbox HE_RainbowMeteorHint, MSGBOX_DEFAULT
	releaseall
	end
HE_RainbowHintSpace:
	msgbox HE_RainbowSpaceHint, MSGBOX_DEFAULT
	releaseall
	end
HE_RainbowHintShip:
	msgbox HE_RainbowShipHint, MSGBOX_DEFAULT
	releaseall
	end
HE_RainbowHintSky:
	msgbox HE_RainbowSkyHint, MSGBOX_DEFAULT
	releaseall
	end
HE_RainbowMeteor::
	lockall
	faceplayer
	goto_if_ne VAR_HE_RAINBOW_STAGE, 1, HE_RainbowWait
	playbgm MUS_RG_ROCKET_HIDEOUT, TRUE
	call HE_Shake
	msgbox HE_RainbowScoutIntro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_HE_RR_SCOUT, HE_RainbowDefeat
	msgbox HE_RainbowScoutAfter, MSGBOX_DEFAULT
	setvar VAR_HE_RAINBOW_STAGE, 2
	releaseall
	end
HE_RainbowSpace::
	lockall
	faceplayer
	goto_if_ne VAR_HE_RAINBOW_STAGE, 2, HE_RainbowWait
	fadescreen FADE_TO_BLACK
	delay 24
	fadescreen FADE_FROM_BLACK
	msgbox HE_RainbowVesperIntro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_HE_RR_VESPER, HE_RainbowDefeat
	call HE_Shake
	msgbox HE_RainbowVesperAfter, MSGBOX_DEFAULT
	setvar VAR_HE_RAINBOW_STAGE, 3
	releaseall
	end
HE_RainbowShip::
	lockall
	faceplayer
	goto_if_ge VAR_HE_RAINBOW_STAGE, 4, HE_RainbowRecoverRing
	goto_if_ne VAR_HE_RAINBOW_STAGE, 3, HE_RainbowWait
	msgbox HE_RainbowShipIntro, MSGBOX_DEFAULT
	playse SE_SWITCH
	fadescreen FADE_TO_BLACK
	delay 40
	fadescreen FADE_FROM_BLACK
	msgbox HE_RainbowShipAfter, MSGBOX_DEFAULT
	giveitem ITEM_MEGA_RING
	goto_if_eq VAR_RESULT, FALSE, HE_RainbowRingBagFull
	setvar VAR_HE_RAINBOW_STAGE, 4
	releaseall
	end
HE_RainbowRingBagFull:
	msgbox HE_RainbowRingBagFullText, MSGBOX_DEFAULT
	releaseall
	end
HE_RainbowRingBagFullText:
	.string "Não há espaço para o Mega\nRing. Organize a mochila\pe volte aqui. O resgate\ncontinua registrado.$"
HE_RainbowRecoverRing:
	checkitem ITEM_MEGA_RING
	goto_if_eq VAR_RESULT, TRUE, HE_RainbowWait
	msgbox HE_RainbowRecoverRingText, MSGBOX_DEFAULT
	giveitem ITEM_MEGA_RING
	goto_if_eq VAR_RESULT, FALSE, HE_RainbowRingBagFull
	releaseall
	end
HE_RainbowRecoverRingText:
	.string "ENGENHEIRO: Nosso resgate\njá terminou, mas você não\pestá com o Mega Ring.\nLeve-o para sua jornada.$"
HE_RainbowFinal::
	lockall
	faceplayer
	goto_if_eq VAR_HE_RAINBOW_STAGE, 5, HE_RainbowRayquaza
	goto_if_ge VAR_HE_RAINBOW_STAGE, 6, HE_RainbowDone
	goto_if_ne VAR_HE_RAINBOW_STAGE, 4, HE_RainbowWait
	playbgm MUS_RG_ROCKET_HIDEOUT, TRUE
	call HE_Shake
	msgbox HE_RainbowGiovanniIntro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_HE_RR_GIOVANNI, HE_RainbowDefeat
	setvar VAR_HE_RAINBOW_STAGE, 5
	call HE_Shake
	msgbox HE_RainbowGiovanniAfter, MSGBOX_DEFAULT
HE_RainbowRayquaza:
	msgbox HE_RainbowRayChoice, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, HE_RainbowAllExit
	closemessage
	setwildbattle SPECIES_RAYQUAZA, 80
	callnative HePrepareShinyRayquaza
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, HE_RainbowRayRetry
	setvar VAR_HE_RAINBOW_STAGE, 6
	msgbox HE_RainbowEnding, MSGBOX_DEFAULT
	releaseall
	end
HE_RainbowRayRetry:
	msgbox HE_QuestRetry, MSGBOX_DEFAULT
	releaseall
	end
HE_RainbowDone:
	msgbox HE_RainbowRestored, MSGBOX_DEFAULT
	releaseall
	end
HE_RainbowWait:
	msgbox HE_RainbowWaitText, MSGBOX_DEFAULT
HE_RainbowAllExit:
	releaseall
	end
HE_RainbowEarlyText:
	.string "BIRCH: Primeiro precisamos\nreabrir a Liga. Depois vamos\pinvestigar os registros que\na Rocket deixou para trás.$"
HE_RainbowDistress:
	.string "RÁDIO: Centro espacial\npara Birch... o radar está\ppreso no mesmo segundo!\pUma luz dividiu as nuvens.\nHá uma criatura negra sobre\po Sky Pillar...\pA transmissão desaparece.$"
HE_RainbowBriefing:
	.string "BIRCH: A central de Giovanni\nfoi desligada, mas alguém\pativou uma cópia externa.\pO sinal usa coordenadas que\nnão existem em Hoenn.\pNão vou enviar civis para\na torre sem saber o risco.\pProcure nossa equipe na\nentrada de Meteor Falls.\pSe houver outra passagem,\nprecisamos fechá-la por\pdentro.$"
HE_RainbowMeteorHint:
	.string "BIRCH: Procure nossa equipe\nna entrada de Meteor Falls.\pO novo sinal começa lá.$"
HE_RainbowSpaceHint:
	.string "BIRCH: Vesper foi vista no\nCentro Espacial de Mossdeep.\pO radar pode localizar a\norigem da transmissão.$"
HE_RainbowShipHint:
	.string "BIRCH: Resgate o engenheiro\nno navio abandonado, nas\psalas do primeiro andar.\pEle conhece o controlador\nque prenderam ao Rayquaza.$"
HE_RainbowSkyHint:
	.string "BIRCH: O controlador está\ndesligado. Vá ao topo do\pSky Pillar e interrompa a\nconexão com o outro mundo.$"
HE_RainbowScoutIntro:
	.string "PRISMA: Você venceu a\nRocket deste mundo.\pA Rainbow Rocket escolhe\napenas mundos onde nós\pjá vencemos. Por que acha\nque o seu ficará livre?\pMeteor Falls é a dobradiça\nda porta. Você não passa!$"
HE_RainbowDefeat:
	.string "Esta realidade... resiste!$"
HE_RainbowScoutAfter:
	.string "O terminal mostra a órbita\ndo Sky Pillar. Há um comando\pde controle no Centro\nEspacial de Mossdeep.\pBIRCH: Esse Giovanni não é\no homem que prendemos.\pEle atravessou usando nossa\nrede como âncora.$"
HE_RainbowVesperIntro:
	.string "VESPER: Entreguei meus\nregistros à Liga. E ele\pameaçou apagar nossa Hoenn\nse eu não reparasse a rede.\pPosso deixá-lo passar ou\nconfiar em você de novo.\pMostre que ainda consegue\nparar o que eu construí.$"
HE_RainbowVesperAfter:
	.string "VESPER: Chega. Não vou\nconstruir outra prisão.\pLevaram o engenheiro para\no navio abandonado. Ele\ppode liberar o Rayquaza\nantes que a porta se abra.\pEu mantenho o radar fora\ndo ar. Vá buscá-lo.$"
HE_RainbowShipIntro:
	.string "ENGENHEIRO: A Rainbow Rocket\nusou um anel para forçar\pa Mega Evolução daquele\nRayquaza negro.\pNão é raiva. Ele tenta fugir\ne o controlador devolve\na dor para a própria região.$"
HE_RainbowShipAfter:
	.string "Você e o engenheiro\ninvertem a corrente.\pO anel de controle apaga.\nAo longe, o mar se acalma.\pENGENHEIRO: Agora ele pode\nescolher. Leve este Mega\pRing e liberte a torre.\pPara Mega Evoluir Rayquaza,\nele precisa de Dragon Ascent.$"
HE_RainbowGiovanniIntro:
	.string "GIOVANNI: Em meu mundo,\na resistência acabou.\pNeste, você ensinou uma\nregião inteira a me negar.\pUm Rayquaza negro abriu\na passagem. Sua Mega\pEvolução sustenta minha\núltima âncora.\pSe romper este vínculo,\neu perco o caminho de volta.\pNão vou aceitar essa derrota.$"
HE_RainbowGiovanniAfter:
	.string "O portal se desfaz em\nfaixas de luz. Giovanni\pdesaparece com os últimos\nsoldados da Rainbow Rocket.\pRayquaza pousa livre. Suas\nescamas negras refletem\pas primeiras luzes de Hoenn.\pEle espera sua decisão.$"
HE_RainbowRayChoice:
	.string "O Rayquaza Shiny está livre.\nQuer tentar capturá-lo?\pSe falhar, poderá tentar\nnovamente neste posto.$"
HE_RainbowEnding:
	.string "BIRCH: Não salvamos Hoenn\npara escolher seus donos.\pSalvamos para que cada um\npossa escolher seu futuro.\pVESPER desligou a última\nponte. O engenheiro voltou\pà família. A Rainbow Rocket\nnão tem mais uma âncora.\pSeu Rayquaza conhece\nDragon Ascent. Com o Mega\pRing, pode Mega Evoluir.\pO céu voltou a pertencer\na quem vive sob ele.$"
HE_RainbowRestored:
	.string "As âncoras foram apagadas.\nHoenn está livre da\pRainbow Rocket. As\nexpedições continuam no\plaboratório do professor.$"
HE_RainbowWaitText:
	.string "Ainda não há um sinal ativo\naqui. Consulte Birch no\plaboratório de Littleroot\npara seguir a investigação.$"

HE_BugMilo::
	trainerbattle_single TRAINER_HE_BUG_MILO, HE_BugMiloIntro, HE_BugMiloDefeat
	msgbox HE_BugMiloAfter, MSGBOX_NPC
	end
HE_BugLia::
	trainerbattle_single TRAINER_HE_BUG_LIA, HE_BugLiaIntro, HE_BugLiaDefeat
	msgbox HE_BugLiaAfter, MSGBOX_NPC
	end
HE_BugMiloIntro:
	.string "Eu conto os insetos da rota.\nDepois do apagão, apareceram\pespécies que nunca vi aqui.\nVamos testar meus parceiros!$"
HE_BugMiloDefeat:
	.string "Preciso estudar essas espécies!$"
HE_BugMiloAfter:
	.string "Grubbin veio num comboio\nda Rocket. Dei abrigo a ele\paté reabrirem a rota.\nAgora ele escolheu ficar.$"
HE_BugLiaIntro:
	.string "Os insetos voltaram antes\ndos guardas. São eles que\pme avisam se a mata está\nsegura. Vamos batalhar!$"
HE_BugLiaDefeat:
	.string "Sua equipe não perde o rumo!$"
HE_BugLiaAfter:
	.string "Tenho ajudado os pesquisadores\na contar os sobreviventes.\pQuando a Liga reabrir, a mata\nserá um posto de expedições.$"

HE_PostJournal::
	lockall
	callnative HeQuestDescribeActive
	goto_if_ne VAR_RESULT, 0, HE_QuestActive
	goto_if_eq VAR_HE_RAINBOW_STAGE, 0, HE_PostJournalStart
	goto_if_eq VAR_HE_RAINBOW_STAGE, 5, HE_RainbowHintSky
	goto HE_RainbowReport
HE_PostJournalStart:
	msgbox HE_PostJournalStartText, MSGBOX_DEFAULT
	releaseall
	end
HE_PostJournalStartText:
	.string "BIRCH quer falar com você\nno laboratório de Littleroot.\pAs expedições também começam\nno painel do laboratório.$"
