AquaHideout_1F_MapScripts::
	.byte 0

@ The below two entrance guards give hints about what to do to progress the story
AquaHideout_1F_EventScript_HideoutEntranceGrunt1::
	lock
	faceplayer
	goto_if_set FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT, AquaHideout_1F_EventScript_SlateportHint1
	goto_if_set FLAG_RECEIVED_RED_OR_BLUE_ORB, AquaHideout_1F_EventScript_MagmaHideoutHint1
	msgbox AquaHideout_1F_Text_OurBossIsSnatchingSomething, MSGBOX_DEFAULT
	release
	end

AquaHideout_1F_EventScript_MagmaHideoutHint1::
	msgbox AquaHideout_1F_Text_WhereMightMagmaHideoutBe, MSGBOX_DEFAULT
	release
	end

AquaHideout_1F_EventScript_SlateportHint1::
	msgbox AquaHideout_1F_Text_BossWentToJackASubmarine, MSGBOX_DEFAULT
	release
	end

AquaHideout_1F_EventScript_HideoutEntranceGrunt2::
	lock
	faceplayer
	goto_if_set FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT, AquaHideout_1F_EventScript_SlateportHint2
	goto_if_set FLAG_RECEIVED_RED_OR_BLUE_ORB, AquaHideout_1F_EventScript_MagmaHideoutHint2
	msgbox AquaHideout_1F_Text_BossIsOnRoute122, MSGBOX_DEFAULT
	release
	end

AquaHideout_1F_EventScript_MagmaHideoutHint2::
	msgbox AquaHideout_1F_Text_TeamMagmaAtMtChimney, MSGBOX_DEFAULT
	release
	end

AquaHideout_1F_EventScript_SlateportHint2::
	msgbox AquaHideout_1F_Text_BossIsInSlateportCity, MSGBOX_DEFAULT
	release
	end

AquaHideout_1F_EventScript_Grunt1::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_1, AquaHideout_1F_Text_Grunt1Intro, AquaHideout_1F_Text_Grunt1Defeat, AquaHideout_1F_EventScript_Grunt1Defeated
	msgbox AquaHideout_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end

AquaHideout_1F_EventScript_Grunt1Defeated::
	msgbox AquaHideout_1F_Text_Grunt1PostBattle, MSGBOX_DEFAULT
	release
	end

AquaHideout_1F_Text_OurBossIsSnatchingSomething:
	.string "ROCKET: Vesper não está. O\ntransporte ainda precisa de\puma embarcação. Saia daqui!$"

AquaHideout_1F_Text_WhereMightMagmaHideoutBe:
	.string "ROCKET: Orion trabalha no\nvulcão. Não vou entregar a\plocalização da outra base!$"

AquaHideout_1F_Text_BossWentToJackASubmarine:
	.string "ROCKET: Vesper foi buscar o\nsubmarino em Slateport. A\pcosta pertence à nossa\noperação!$"

AquaHideout_1F_Text_BossIsOnRoute122:
	.string "ROCKET: Vesper seguiu pela\nRota 122 até Mt. Pyre. O\pnúcleo é nosso objetivo.$"

AquaHideout_1F_Text_TeamMagmaAtMtChimney:
	.string "ROCKET: Orion já tem uma\nfonte em Mt. Chimney. Vesper\pnão vai depender dele.$"

AquaHideout_1F_Text_BossIsInSlateportCity:
	.string "ROCKET: Vesper foi a\nSlateport. Não temos ordens\ppara deixar você entrar.$"

AquaHideout_1F_Text_Grunt1Intro:
	.string "Ayiyiyi!\n"
	.string "Suspicious character spotted!$"

AquaHideout_1F_Text_Grunt1Defeat:
	.string "Grrrrr…\n"
	.string "I lost it!$"

AquaHideout_1F_Text_Grunt1PostBattle:
	.string "I took the loss for the TEAM,\n"
	.string "but I did my job…$"

