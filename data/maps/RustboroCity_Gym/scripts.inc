RustboroCity_Gym_MapScripts::
	.byte 0

RustboroCity_Gym_EventScript_Roxanne::
	lock
	faceplayer
	goto_if_unset FLAG_HE_ECLIPSE_PROOF, HE_EventScript_NoProof
	trainerbattle_single TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneIntro, RustboroCity_Gym_Text_RoxanneDefeat, RustboroCity_Gym_EventScript_RoxanneDefeated, NO_MUSIC
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_Gym_EventScript_RoxanneRematch
	goto_if_unset FLAG_RECEIVED_TM_ROCK_TOMB, RustboroCity_Gym_EventScript_GiveRockTomb
	msgbox RustboroCity_Gym_Text_RoxannePostBattle, MSGBOX_DEFAULT
	release
	end

RustboroCity_Gym_EventScript_RoxanneDefeated::
	message RustboroCity_Gym_Text_ReceivedStoneBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox RustboroCity_Gym_Text_StoneBadgeInfoTakeThis, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_RUSTBORO_GYM
	setflag FLAG_BADGE01_GET
	setvar VAR_RUSTBORO_CITY_STATE, 0 @ Keep the original Aqua theft arc disabled
	addvar VAR_PETALBURG_GYM_STATE, 1
	setvar VAR_0x8008, 1
	call Common_EventScript_SetGymTrainers
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
	goto RustboroCity_Gym_EventScript_GiveRockTomb
	end

RustboroCity_Gym_EventScript_GiveRockTomb::
	giveitem ITEM_TM_ROCK_TOMB
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
	msgbox RustboroCity_Gym_Text_ExplainRockTomb, MSGBOX_DEFAULT
	call_if_unset FLAG_HE_ECLIPSE_COMPLETE, HE_EventScript_ChapterEnding
	release
	end

RustboroCity_Gym_EventScript_RoxanneRematch::
	trainerbattle_rematch_double TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxannePreRematch, RustboroCity_Gym_Text_RoxanneRematchDefeat, RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons
	msgbox RustboroCity_Gym_Text_RoxannePostRematch, MSGBOX_AUTOCLOSE
	end

RustboroCity_Gym_EventScript_Josh::
	trainerbattle_single TRAINER_JOSH, RustboroCity_Gym_Text_JoshIntro, RustboroCity_Gym_Text_JoshDefeat
	msgbox RustboroCity_Gym_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
	end

RustboroCity_Gym_EventScript_Tommy::
	trainerbattle_single TRAINER_TOMMY, RustboroCity_Gym_Text_TommyIntro, RustboroCity_Gym_Text_TommyDefeat
	msgbox RustboroCity_Gym_Text_TommyPostBattle, MSGBOX_AUTOCLOSE
	end

RustboroCity_Gym_EventScript_Marc::
	trainerbattle_single TRAINER_MARC, RustboroCity_Gym_Text_MarcIntro, RustboroCity_Gym_Text_MarcDefeat
	msgbox RustboroCity_Gym_Text_MarcPostBattle, MSGBOX_AUTOCLOSE
	end

RustboroCity_Gym_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_GymGuidePostVictory
	msgbox RustboroCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

RustboroCity_Gym_EventScript_GymGuidePostVictory::
	msgbox RustboroCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

RustboroCity_Gym_EventScript_LeftGymStatue::
	lockall
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
	goto RustboroCity_Gym_EventScript_GymStatue
	end

RustboroCity_Gym_EventScript_RightGymStatue::
	lockall
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
	goto RustboroCity_Gym_EventScript_GymStatue
	end

RustboroCity_Gym_EventScript_GymStatueCertified::
	msgbox RustboroCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

RustboroCity_Gym_EventScript_GymStatue::
	msgbox RustboroCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

RustboroCity_Gym_EventScript_RegisterRoxanne::
	lockall
	pokenavcall RustboroCity_Gym_Text_RoxanneRegisterCall
	waitmessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox RustboroCity_Gym_Text_RegisteredRoxanne, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_ROXANNE_MATCH_CALL
	clearflag FLAG_ENABLE_ROXANNE_FIRST_CALL
	releaseall
	end

RustboroCity_Gym_Text_GymGuideAdvice:
	.string "Roxanne transformou o\nginásio em ponto de apoio.\pEla usa Pokémon de Pedra.\nGolpes de Água e Planta são\peficazes.\pPrepare sua equipe.\nConfiança também se\pconstrói treinando!$"

RustboroCity_Gym_Text_GymGuidePostVictory:
	.string "Sua vitória deu esperança\nao abrigo! A primeira\pinsígnia é sua.$"

RustboroCity_Gym_Text_JoshIntro:
	.string "Se quer defender Rustboro,\nmostre sua força!$"

RustboroCity_Gym_Text_JoshDefeat:
	.string "Você está pronto!$"

RustboroCity_Gym_Text_JoshPostBattle:
	.string "Nossos Pokémon ajudam a\nretirar os escombros.$"

RustboroCity_Gym_Text_TommyIntro:
	.string "Roxanne precisa de aliados\npreparados!$"

RustboroCity_Gym_Text_TommyDefeat:
	.string "Que boa equipe!$"

RustboroCity_Gym_Text_TommyPostBattle:
	.string "Roxanne é nossa linha de\ndefesa.$"

RustboroCity_Gym_Text_MarcIntro:
	.string "Vou testar sua equipe. Na\nestrada, não há tempo para\phesitar!$"

RustboroCity_Gym_Text_MarcDefeat:
	.string "Você tem coragem!$"

RustboroCity_Gym_Text_MarcPostBattle:
	.string "Pedra pode ser abrigo, não\nsó arma.$"

RustboroCity_Gym_Text_RoxanneIntro:
	.string "ROXANNE: Birch me falou de\nvocê. O pesquisador chegou\pcom as provas.\pA Rocket ofereceu segurança\nà Devon. Enquanto\pnegociava, instalou os\nsabotadores.\pEstamos numa guerra pelo\nfuturo de Hoenn.\pEu preciso saber se você\nconsegue proteger seus\pPokémon sob pressão.\pEnfrente meu ginásio. Vamos\ntransformar seu medo em\pforça!$"

RustboroCity_Gym_Text_RoxanneDefeat:
	.string "ROXANNE: Mesmo sob pressão,\nvocês confiaram um no\poutro.\pÉ isso que Hoenn precisa.\nReceba sua primeira\pinsígnia!$"

RustboroCity_Gym_Text_ReceivedStoneBadge:
	.string "{PLAYER} recebeu a INSÍGNIA\nDA PEDRA!$"

RustboroCity_Gym_Text_StoneBadgeInfoTakeThis:
	.string "ROXANNE: Esta insígnia\npermite usar CUT fora das\pbatalhas.\pLeve também este golpe para\nsua jornada.$"

RustboroCity_Gym_Text_ExplainRockTomb:
	.string "TM39 ensina ROCK TOMB. Ele\ncausa dano e reduz a\pvelocidade.\pAs TMs desta aventura são\nreutilizáveis. Pode ensinar\po golpe a vários parceiros!$"

RustboroCity_Gym_Text_RoxannePostBattle:
	.string "ROXANNE: A primeira etapa\nterminou. Treine, capture\pPokémon e cuide de sua\nequipe.\pQuando a resistência\npartir, vamos precisar de\pvocê.$"

RustboroCity_Gym_Text_GymStatue:
	.string "GINÁSIO DE RUSTBORO\pLíder: ROXANNE$"

RustboroCity_Gym_Text_GymStatueCertified:
	.string "GINÁSIO DE RUSTBORO\pTreinador reconhecido:\n{PLAYER}$"

RustboroCity_Gym_Text_RoxanneRegisterCall:
	.string "… … … … … …\n"
	.string "… … … … … Beep!\p"
	.string "ROXANNE: Oh, hello, {PLAYER}?\n"
	.string "This is ROXANNE of RUSTBORO CITY.\p"
	.string "I heard from BRAWLY that you're\n"
	.string "moving up through the ranks of\l"
	.string "TRAINERS at an incredible clip.\p"
	.string "Well, I'd rather not think that\n"
	.string "I can't beat you.\p"
	.string "I promise, I will shape up my GYM\n"
	.string "so that you may challenge us again.\p"
	.string "I hope you'll be looking forward to\n"
	.string "that occasion as much as me!\p"
	.string "… … … … … …\n"
	.string "… … … … … Click!$"

RustboroCity_Gym_Text_RegisteredRoxanne:
	.string "Registered GYM LEADER ROXANNE\n"
	.string "in the POKéNAV.$"

RustboroCity_Gym_Text_RoxannePreRematch:
	.string "ROXANNE: I'm so glad to see you again.\n"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
	.string "I'm sure we've both experienced many\n"
	.string "battles since we last met.\p"
	.string "I would like to see how much better\n"
	.string "we've become. Let us battle!$"

RustboroCity_Gym_Text_RoxanneRematchDefeat:
	.string "Grr…\n"
	.string "Again, I have lost…$"

RustboroCity_Gym_Text_RoxannePostRematch:
	.string "ROXANNE: I still have much to learn\n"
	.string "when it comes to battling POKéMON.\p"
	.string "That awareness makes me love battling\n"
	.string "all that much more!$"

RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons:
	.string "ROXANNE: I'm so glad to see you again.\n"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
	.string "I'm sure we've both experienced many\n"
	.string "battles since we last met.\p"
	.string "I would like to see how much better\n"
	.string "we've become…\p"
	.string "Oh, no…\n"
	.string "You only have one POKéMON with you?\p"
	.string "Please return with at least one more\n"
	.string "POKéMON.$"

HE_EventScript_NoProof::
	msgbox HE_Text_NoProof, MSGBOX_DEFAULT
	release
	end

HE_EventScript_ChapterEnding::
	closemessage
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 2
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 5
	special ShakeCamera
	waitstate
	playse SE_PC_ON
	msgbox HE_Text_Radio, MSGBOX_DEFAULT
	msgbox HE_Text_RoxanneResistance, MSGBOX_DEFAULT
	setflag FLAG_HE_ECLIPSE_COMPLETE
	msgbox HE_Text_EndChapter, MSGBOX_DEFAULT
	return

HE_Text_NoProof:
	.string "ROXANNE: Precisamos achar o\npesquisador da Devon.\pProcure na Floresta de\nPetalburg, ao sul.\pDepois volte para nosso\ndesafio!$"

HE_Text_Radio:
	.string "O chão começa a tremer!\p... chiado no rádio ...\pROCKET: Posto Rustboro,\nresponda.\pO teste foi concluído.\nIniciar fase dois.\pO alvo é o coração de Hoenn.\pQuando o guardião do céu\ndescer, será tarde demais.\p... transmissão encerrada ...$"

HE_Text_RoxanneResistance:
	.string "ROXANNE: Guardião do céu...?\nO que eles querem despertar?\pA Devon desligou o aparelho.\nRustboro está segura por ora.\pMas isto foi só o começo.\pVou reunir os líderes. Birch\ne Laranja protegem o sul.\pHoje você conquistou mais\nque uma insígnia.\pVocê nos deu uma chance\nde resistir.$"

HE_Text_EndChapter:
	.string "ROXANNE: O pesquisador\nmontou um decodificador.\pEncontre ele em frente ao\nginásio. Há um transmissor\pna praça.\pCorte o sinal e procure\nBriney. Dewford precisa de\pajuda.\pA resistência começa agora!$"
