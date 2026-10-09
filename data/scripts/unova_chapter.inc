UN_Gate_NuvemaTown::
 goto_if_ge VAR_UN_STAGE, 2, UN_End
 lockall
 msgbox UN_T_Gate, MSGBOX_DEFAULT
 applymovement OBJ_EVENT_ID_PLAYER, UN_MoveDown
 waitmovement 0
 releaseall
 end
UN_Gate_AccumulaTown::
 goto_if_ge VAR_UN_STAGE, 3, UN_End
 lockall
 msgbox UN_T_Gate, MSGBOX_DEFAULT
 applymovement OBJ_EVENT_ID_PLAYER, UN_MoveDown
 waitmovement 0
 releaseall
 end
UN_Gate_Route2::
 goto_if_ge VAR_UN_STAGE, 4, UN_End
 lockall
 msgbox UN_T_Gate, MSGBOX_DEFAULT
 applymovement OBJ_EVENT_ID_PLAYER, UN_MoveDown
 waitmovement 0
 releaseall
 end
UN_Gate_StriatonCity::
 goto_if_ge VAR_UN_STAGE, 8, UN_End
 lockall
 msgbox UN_T_Gate, MSGBOX_DEFAULT
 applymovement OBJ_EVENT_ID_PLAYER, UN_MoveDown
 waitmovement 0
 releaseall
 end
UN_Gate_Route3::
 goto_if_ge VAR_UN_STAGE, 9, UN_End
 lockall
 msgbox UN_T_Gate, MSGBOX_DEFAULT
 applymovement OBJ_EVENT_ID_PLAYER, UN_MoveDown
 waitmovement 0
 releaseall
 end
UN_Gate_NacreneCity::
 goto_if_ge VAR_UN_STAGE, 12, UN_End
 lockall
 msgbox UN_T_Gate, MSGBOX_DEFAULT
 applymovement OBJ_EVENT_ID_PLAYER, UN_MoveDown
 waitmovement 0
 releaseall
 end
UN_Gate_PinwheelInner::
 goto_if_ge VAR_UN_STAGE, 13, UN_End
 lockall
 msgbox UN_T_Gate, MSGBOX_DEFAULT
 applymovement OBJ_EVENT_ID_PLAYER, UN_MoveDown
 waitmovement 0
 releaseall
 end
UN_End::
 end
UN_NotYet::
 msgbox UN_T_NotYet, MSGBOX_DEFAULT
 releaseall
 end
UN_Done::
 msgbox UN_T_Done, MSGBOX_DEFAULT
 releaseall
 end
UN_MoveDown::
 walk_down
 step_end
UN_MoveLeft::
 walk_left
 walk_left
 step_end
UN_MoveRight::
 walk_right
 walk_right
 step_end
UN_Prologue::
 lockall
 msgbox UN_T_Prologue, MSGBOX_DEFAULT
 msgbox UN_T_Starter, MSGBOX_DEFAULT
 multichoice 0, 0, MULTI_UN_STARTER, TRUE
 copyvar VAR_UN_STARTER, VAR_RESULT
 addvar VAR_UN_STARTER, 1
 goto_if_eq VAR_RESULT, 0, UN_Starter0
 goto_if_eq VAR_RESULT, 1, UN_Starter1
 goto_if_eq VAR_RESULT, 2, UN_Starter2
UN_Starter0:
 givemon SPECIES_SNIVY, 5, ITEM_NONE
 goto UN_StarterReady
UN_Starter1:
 givemon SPECIES_TEPIG, 5, ITEM_NONE
 goto UN_StarterReady
UN_Starter2:
 givemon SPECIES_OSHAWOTT, 5, ITEM_NONE
 goto UN_StarterReady
UN_StarterReady:
 setflag FLAG_SYS_POKEMON_GET
 msgbox UN_T_FirstBattle, MSGBOX_DEFAULT
 goto_if_eq VAR_UN_STARTER, 1, UN_First0
 goto_if_eq VAR_UN_STARTER, 2, UN_First1
 goto_if_eq VAR_UN_STARTER, 3, UN_First2
UN_First0:
 trainerbattle_scripted TRAINER_UN_BIANCA0_2, UN_T_FirstBattle, UN_T_Done, UN_First0_Second
 goto UN_First0_Second
UN_First0_Second::
 special HealPlayerParty
 trainerbattle_scripted TRAINER_UN_CHEREN0_3, UN_T_FirstBattle, UN_T_Done, UN_FirstWon
 goto UN_FirstWon
UN_First1:
 trainerbattle_scripted TRAINER_UN_BIANCA0_3, UN_T_FirstBattle, UN_T_Done, UN_First1_Second
 goto UN_First1_Second
UN_First1_Second::
 special HealPlayerParty
 trainerbattle_scripted TRAINER_UN_CHEREN0_1, UN_T_FirstBattle, UN_T_Done, UN_FirstWon
 goto UN_FirstWon
UN_First2:
 trainerbattle_scripted TRAINER_UN_BIANCA0_1, UN_T_FirstBattle, UN_T_Done, UN_First2_Second
 goto UN_First2_Second
UN_First2_Second::
 special HealPlayerParty
 trainerbattle_scripted TRAINER_UN_CHEREN0_2, UN_T_FirstBattle, UN_T_Done, UN_FirstWon
 goto UN_FirstWon
UN_FirstWon::
 special HealPlayerParty
 setvar VAR_UN_STAGE, 1
 msgbox UN_T_FriendsLeave, MSGBOX_DEFAULT
 releaseall
 end
UN_FriendBianca::
 lock
 faceplayer
 msgbox UN_T_UN_FriendBianca, MSGBOX_DEFAULT
 release
 end

UN_FriendCheren::
 lock
 faceplayer
 msgbox UN_T_UN_FriendCheren, MSGBOX_DEFAULT
 release
 end

UN_Juniper::
 lock
 faceplayer
 goto_if_lt VAR_UN_STAGE, 1, UN_NotYet
 goto_if_gt VAR_UN_STAGE, 1, UN_Done
 msgbox UN_T_Juniper, MSGBOX_DEFAULT
 setflag FLAG_SYS_POKEDEX_GET
 giveitem ITEM_POKE_BALL, 20
 giveitem ITEM_POTION, 5
 setvar VAR_UN_STAGE, 2
 release
 end
UN_AccumulaScene::
 lockall
 faceplayer
 goto_if_lt VAR_UN_STAGE, 2, UN_NotYet
 goto_if_gt VAR_UN_STAGE, 2, UN_Done
 trainerbattle_single TRAINER_UN_N_ACCUMULA, UN_T_UN_AccumulaScene_Intro, UN_T_UN_AccumulaScene_Defeat, UN_AccumulaScene_Win, NO_MUSIC
 goto UN_AccumulaScene_Win
UN_AccumulaScene_Win::
 setvar VAR_UN_STAGE, 3
 msgbox UN_T_UN_AccumulaScene_After, MSGBOX_DEFAULT
 releaseall
 end
UN_PlazaCitizen::
 lock
 faceplayer
 msgbox UN_T_UN_PlazaCitizen, MSGBOX_DEFAULT
 release
 end

UN_BiancaRoute1::
 lockall
 faceplayer
 goto_if_lt VAR_UN_STAGE, 3, UN_NotYet
 goto_if_gt VAR_UN_STAGE, 3, UN_Done
 trainerbattle_single TRAINER_UN_BIANCA1_1, UN_T_UN_BiancaRoute1_Intro, UN_T_UN_BiancaRoute1_Defeat, UN_BiancaRoute1_Win, NO_MUSIC
 goto UN_BiancaRoute1_Win
UN_BiancaRoute1_Win::
 setvar VAR_UN_STAGE, 4
 msgbox UN_T_UN_BiancaRoute1_After, MSGBOX_DEFAULT
 releaseall
 end
UN_BiancaRoute2::
 lockall
 faceplayer
 goto_if_lt VAR_UN_STAGE, 3, UN_NotYet
 goto_if_gt VAR_UN_STAGE, 3, UN_Done
 trainerbattle_single TRAINER_UN_BIANCA1_2, UN_T_UN_BiancaRoute2_Intro, UN_T_UN_BiancaRoute2_Defeat, UN_BiancaRoute2_Win, NO_MUSIC
 goto UN_BiancaRoute2_Win
UN_BiancaRoute2_Win::
 setvar VAR_UN_STAGE, 4
 msgbox UN_T_UN_BiancaRoute2_After, MSGBOX_DEFAULT
 releaseall
 end
UN_BiancaRoute3::
 lockall
 faceplayer
 goto_if_lt VAR_UN_STAGE, 3, UN_NotYet
 goto_if_gt VAR_UN_STAGE, 3, UN_Done
 trainerbattle_single TRAINER_UN_BIANCA1_3, UN_T_UN_BiancaRoute3_Intro, UN_T_UN_BiancaRoute3_Defeat, UN_BiancaRoute3_Win, NO_MUSIC
 goto UN_BiancaRoute3_Win
UN_BiancaRoute3_Win::
 setvar VAR_UN_STAGE, 4
 msgbox UN_T_UN_BiancaRoute3_After, MSGBOX_DEFAULT
 releaseall
 end
UN_BiancaRoute::
 goto_if_eq VAR_UN_STARTER, 1, UN_BiancaRoute2
 goto_if_eq VAR_UN_STARTER, 2, UN_BiancaRoute3
 goto UN_BiancaRoute1
UN_CherenSchool1::
 lockall
 faceplayer
 goto_if_lt VAR_UN_STAGE, 4, UN_NotYet
 goto_if_gt VAR_UN_STAGE, 4, UN_Done
 trainerbattle_single TRAINER_UN_CHEREN1_1, UN_T_UN_CherenSchool1_Intro, UN_T_UN_CherenSchool1_Defeat, UN_CherenSchool1_Win, NO_MUSIC
 goto UN_CherenSchool1_Win
UN_CherenSchool1_Win::
 setvar VAR_UN_STAGE, 5
 msgbox UN_T_UN_CherenSchool1_After, MSGBOX_DEFAULT
 releaseall
 end
UN_CherenSchool2::
 lockall
 faceplayer
 goto_if_lt VAR_UN_STAGE, 4, UN_NotYet
 goto_if_gt VAR_UN_STAGE, 4, UN_Done
 trainerbattle_single TRAINER_UN_CHEREN1_2, UN_T_UN_CherenSchool2_Intro, UN_T_UN_CherenSchool2_Defeat, UN_CherenSchool2_Win, NO_MUSIC
 goto UN_CherenSchool2_Win
UN_CherenSchool2_Win::
 setvar VAR_UN_STAGE, 5
 msgbox UN_T_UN_CherenSchool2_After, MSGBOX_DEFAULT
 releaseall
 end
UN_CherenSchool3::
 lockall
 faceplayer
 goto_if_lt VAR_UN_STAGE, 4, UN_NotYet
 goto_if_gt VAR_UN_STAGE, 4, UN_Done
 trainerbattle_single TRAINER_UN_CHEREN1_3, UN_T_UN_CherenSchool3_Intro, UN_T_UN_CherenSchool3_Defeat, UN_CherenSchool3_Win, NO_MUSIC
 goto UN_CherenSchool3_Win
UN_CherenSchool3_Win::
 setvar VAR_UN_STAGE, 5
 msgbox UN_T_UN_CherenSchool3_After, MSGBOX_DEFAULT
 releaseall
 end
UN_CherenSchool::
 goto_if_eq VAR_UN_STARTER, 1, UN_CherenSchool3
 goto_if_eq VAR_UN_STARTER, 2, UN_CherenSchool1
 goto UN_CherenSchool2
UN_CHILI::
 lockall
 faceplayer
 goto_if_lt VAR_UN_STAGE, 5, UN_NotYet
 goto_if_gt VAR_UN_STAGE, 5, UN_Done
 trainerbattle_single TRAINER_UN_CHILI, UN_T_UN_CHILI_Intro, UN_T_UN_CHILI_Defeat, UN_CHILI_Win, NO_MUSIC
 goto UN_CHILI_Win
UN_CHILI_Win::
 setvar VAR_UN_STAGE, 6
 setvar VAR_UN_BADGES, 1
 setflag FLAG_BADGE01_GET
 call Common_EventScript_PlayGymBadgeFanfare
 giveitem ITEM_TM_BULK_UP
 msgbox UN_T_UN_CHILI_After, MSGBOX_DEFAULT
 releaseall
 end
UN_CRESS::
 lockall
 faceplayer
 goto_if_lt VAR_UN_STAGE, 5, UN_NotYet
 goto_if_gt VAR_UN_STAGE, 5, UN_Done
 trainerbattle_single TRAINER_UN_CRESS, UN_T_UN_CRESS_Intro, UN_T_UN_CRESS_Defeat, UN_CRESS_Win, NO_MUSIC
 goto UN_CRESS_Win
UN_CRESS_Win::
 setvar VAR_UN_STAGE, 6
 setvar VAR_UN_BADGES, 1
 setflag FLAG_BADGE01_GET
 call Common_EventScript_PlayGymBadgeFanfare
 giveitem ITEM_TM_BULK_UP
 msgbox UN_T_UN_CRESS_After, MSGBOX_DEFAULT
 releaseall
 end
UN_CILAN::
 lockall
 faceplayer
 goto_if_lt VAR_UN_STAGE, 5, UN_NotYet
 goto_if_gt VAR_UN_STAGE, 5, UN_Done
 trainerbattle_single TRAINER_UN_CILAN, UN_T_UN_CILAN_Intro, UN_T_UN_CILAN_Defeat, UN_CILAN_Win, NO_MUSIC
 goto UN_CILAN_Win
UN_CILAN_Win::
 setvar VAR_UN_STAGE, 6
 setvar VAR_UN_BADGES, 1
 setflag FLAG_BADGE01_GET
 call Common_EventScript_PlayGymBadgeFanfare
 giveitem ITEM_TM_BULK_UP
 msgbox UN_T_UN_CILAN_After, MSGBOX_DEFAULT
 releaseall
 end
UN_StriatonLeader::
 goto_if_eq VAR_UN_STARTER, 1, UN_CHILI
 goto_if_eq VAR_UN_STARTER, 2, UN_CRESS
 goto UN_CILAN
UN_DreamyardPlasma::
 lockall
 faceplayer
 goto_if_lt VAR_UN_STAGE, 6, UN_NotYet
 goto_if_gt VAR_UN_STAGE, 6, UN_Done
 trainerbattle_single TRAINER_UN_DREAMYARD, UN_T_UN_DreamyardPlasma_Intro, UN_T_UN_DreamyardPlasma_Defeat, UN_DreamyardPlasma_Win, NO_MUSIC
 goto UN_DreamyardPlasma_Win
UN_DreamyardPlasma_Win::
 setvar VAR_UN_STAGE, 7
 msgbox UN_T_UN_DreamyardPlasma_After, MSGBOX_DEFAULT
 releaseall
 end
UN_Munna::
 lock
 faceplayer
 msgbox UN_T_UN_Munna, MSGBOX_DEFAULT
 release
 end

UN_Fennel::
 lock
 faceplayer
 goto_if_lt VAR_UN_STAGE, 7, UN_NotYet
 goto_if_gt VAR_UN_STAGE, 7, UN_Done
 msgbox UN_T_Fennel, MSGBOX_DEFAULT
 setflag FLAG_UN_CGEAR
 setvar VAR_UN_RESONANCE, 3
 setvar VAR_UN_STAGE, 8
 release
 end
UN_SignalAssistant::
 lock
 faceplayer
 msgbox UN_T_UN_SignalAssistant, MSGBOX_DEFAULT
 release
 end

UN_WellspringPlasma::
 lockall
 faceplayer
 goto_if_lt VAR_UN_STAGE, 8, UN_NotYet
 goto_if_gt VAR_UN_STAGE, 8, UN_Done
 trainerbattle_single TRAINER_UN_WELLSPRING, UN_T_UN_WellspringPlasma_Intro, UN_T_UN_WellspringPlasma_Defeat, UN_WellspringPlasma_Win, NO_MUSIC
 goto UN_WellspringPlasma_Win
UN_WellspringPlasma_Win::
 setvar VAR_UN_STAGE, 9
 msgbox UN_T_UN_WellspringPlasma_After, MSGBOX_DEFAULT
 releaseall
 end
UN_MissingChild::
 lock
 faceplayer
 goto_if_ge VAR_UN_STAGE, 17, UN_MissingChild_After
 msgbox UN_T_UN_MissingChild, MSGBOX_DEFAULT
 release
 end
UN_MissingChild_After:
 msgbox UN_T_UN_MissingChild_After, MSGBOX_DEFAULT
 release
 end
UN_NNacrene::
 lockall
 faceplayer
 goto_if_lt VAR_UN_STAGE, 9, UN_NotYet
 goto_if_gt VAR_UN_STAGE, 9, UN_Done
 trainerbattle_single TRAINER_UN_N_NACRENE, UN_T_UN_NNacrene_Intro, UN_T_UN_NNacrene_Defeat, UN_NNacrene_Win, NO_MUSIC
 goto UN_NNacrene_Win
UN_NNacrene_Win::
 setvar VAR_UN_STAGE, 10
 msgbox UN_T_UN_NNacrene_After, MSGBOX_DEFAULT
 releaseall
 end
UN_Lenora::
 lockall
 faceplayer
 goto_if_lt VAR_UN_STAGE, 10, UN_NotYet
 goto_if_gt VAR_UN_STAGE, 10, UN_Done
 trainerbattle_single TRAINER_UN_LENORA, UN_T_UN_Lenora_Intro, UN_T_UN_Lenora_Defeat, UN_Lenora_Win, NO_MUSIC
 goto UN_Lenora_Win
UN_Lenora_Win::
 setvar VAR_UN_STAGE, 11
 setvar VAR_UN_BADGES, 2
 setflag FLAG_BADGE02_GET
 call Common_EventScript_PlayGymBadgeFanfare
 giveitem ITEM_TM_RETURN
 msgbox UN_T_UN_Lenora_After, MSGBOX_DEFAULT
 releaseall
 end
UN_MuseumTheft::
 lockall
 playse SE_DOOR
 applymovement 2, UN_MoveRight
 waitmovement 0
 msgbox UN_T_Theft, MSGBOX_DEFAULT
 setvar VAR_UN_MEMORY, 1
 setvar VAR_UN_STAGE, 12
 releaseall
 end
UN_BurghForest::
 lock
 faceplayer
 msgbox UN_T_UN_BurghForest, MSGBOX_DEFAULT
 release
 end

UN_PinwheelPlasma::
 lockall
 faceplayer
 goto_if_lt VAR_UN_STAGE, 12, UN_NotYet
 goto_if_gt VAR_UN_STAGE, 12, UN_Done
 trainerbattle_single TRAINER_UN_PINWHEEL, UN_T_UN_PinwheelPlasma_Intro, UN_T_UN_PinwheelPlasma_Defeat, UN_PinwheelPlasma_Win, NO_MUSIC
 goto UN_PinwheelPlasma_Win
UN_PinwheelPlasma_Win::
 setvar VAR_UN_STAGE, 13
 setvar VAR_UN_MEMORY, 2
 msgbox UN_T_UN_PinwheelPlasma_After, MSGBOX_DEFAULT
 releaseall
 end
UN_CasteliaEntry::
 lockall
 msgbox UN_T_CasteliaEntry, MSGBOX_DEFAULT
 setvar VAR_UN_STAGE, 14
 releaseall
 end
UN_CasteliaPlasma::
 lockall
 faceplayer
 goto_if_lt VAR_UN_STAGE, 14, UN_NotYet
 goto_if_gt VAR_UN_STAGE, 14, UN_Done
 trainerbattle_single TRAINER_UN_CASTELIA, UN_T_UN_CasteliaPlasma_Intro, UN_T_UN_CasteliaPlasma_Defeat, UN_CasteliaPlasma_Win, NO_MUSIC
 goto UN_CasteliaPlasma_Win
UN_CasteliaPlasma_Win::
 setvar VAR_UN_STAGE, 15
 setvar VAR_UN_MEMORY, 3
 msgbox UN_T_UN_CasteliaPlasma_After, MSGBOX_DEFAULT
 releaseall
 end
UN_NPort::
 lock
 faceplayer
 msgbox UN_T_UN_NPort, MSGBOX_DEFAULT
 release
 end

UN_Burgh::
 lockall
 faceplayer
 goto_if_lt VAR_UN_STAGE, 15, UN_NotYet
 goto_if_gt VAR_UN_STAGE, 15, UN_Done
 trainerbattle_single TRAINER_UN_BURGH, UN_T_UN_Burgh_Intro, UN_T_UN_Burgh_Defeat, UN_Burgh_Win, NO_MUSIC
 goto UN_Burgh_Win
UN_Burgh_Win::
 setvar VAR_UN_STAGE, 16
 setvar VAR_UN_BADGES, 3
 setflag FLAG_BADGE03_GET
 call Common_EventScript_PlayGymBadgeFanfare
 giveitem ITEM_TM_AERIAL_ACE
 msgbox UN_T_UN_Burgh_After, MSGBOX_DEFAULT
 releaseall
 end
UN_DragonVision::
 lockall
 showmonpic SPECIES_RESHIRAM, 7, 1
 playmoncry SPECIES_RESHIRAM, CRY_MODE_NORMAL
 msgbox UN_T_Vision1, MSGBOX_DEFAULT
 waitmoncry
 hidemonpic
 showmonpic SPECIES_ZEKROM, 7, 1
 playmoncry SPECIES_ZEKROM, CRY_MODE_NORMAL
 msgbox UN_T_Vision2, MSGBOX_DEFAULT
 waitmoncry
 hidemonpic
 showmonpic SPECIES_KYUREM, 7, 1
 playmoncry SPECIES_KYUREM, CRY_MODE_NORMAL
 msgbox UN_T_Vision3, MSGBOX_DEFAULT
 waitmoncry
 hidemonpic
 setvar VAR_UN_STAGE, 17
 setflag FLAG_UN_CASTELIA_DONE
 msgbox UN_T_ChapterEnd, MSGBOX_DEFAULT
 releaseall
 end
UN_VisionTrigger::
 goto_if_ne VAR_UN_STAGE, 16, UN_End
 goto UN_DragonVision
UN_Route4Closed::
 lock
 faceplayer
 msgbox UN_T_UN_Route4Closed, MSGBOX_DEFAULT
 release
 end

UN_NorthBoundary::
 goto_if_ge VAR_UN_STAGE, 17, UN_End
 lockall
 msgbox UN_T_UN_Route4Closed, MSGBOX_DEFAULT
 applymovement OBJ_EVENT_ID_PLAYER, UN_MoveDown
 waitmovement 0
 releaseall
 end
UN_Route4Gate::
 goto_if_ge VAR_UN_STAGE, 18, UN_End
 lockall
 msgbox UN_T_Route4Gate, MSGBOX_DEFAULT
 applymovement OBJ_EVENT_ID_PLAYER, UN_MoveDown
 waitmovement 0
 releaseall
 end
UN_Route4Ranger::
 lock
 faceplayer
 goto_if_ne VAR_UN_STAGE, 17, UN_Route4Ranger_After
 msgbox UN_T_Route4Ranger, MSGBOX_DEFAULT
 setvar VAR_UN_STAGE, 18
 release
 end
UN_Route4Ranger_After:
 msgbox UN_T_Route4Ranger_After, MSGBOX_DEFAULT
 release
 end
UN_Route4Traveler::
 lock
 faceplayer
 msgbox UN_T_Route4Traveler, MSGBOX_DEFAULT
 release
 end
UN_NimbasaArrival::
 lock
 faceplayer
 goto_if_ne VAR_UN_STAGE, 18, UN_NimbasaArrival_After
 msgbox UN_T_NimbasaArrival, MSGBOX_DEFAULT
 setvar VAR_UN_STAGE, 19
 release
 end
UN_NimbasaArrival_After:
 msgbox UN_T_NimbasaArrival_After, MSGBOX_DEFAULT
 release
 end
UN_NimbasaMusician::
 lock
 faceplayer
 msgbox UN_T_NimbasaMusician, MSGBOX_DEFAULT
 release
 end
UN_Heal::
 lock
 faceplayer
 special HealPlayerParty
 callnative UnHeal
 playfanfare MUS_HEAL
 waitfanfare
 msgbox UN_T_Heal, MSGBOX_DEFAULT
 release
 end
UN_Mart::
 lock
 faceplayer
 pokemart UN_MartItems
 release
 end
 .align 2
UN_MartItems:
 .2byte ITEM_POKE_BALL, ITEM_GREAT_BALL, ITEM_POTION, ITEM_SUPER_POTION, ITEM_ANTIDOTE, ITEM_PARALYZE_HEAL, ITEM_ESCAPE_ROPE, ITEM_REPEL, ITEM_NONE
UN_Coach::
 lock
 faceplayer
 goto_if_unset FLAG_HE_ANTI_GRINDING, UN_CoachOff
 msgbox UN_T_Coach, MSGBOX_DEFAULT
 callnative SiCoachFillCandy
 callnative SiCoachMaxIvs
 release
 end
UN_CoachOff:
 msgbox UN_T_CoachOff, MSGBOX_DEFAULT
 release
 end
UN_Mother::
 lock
 faceplayer
 special HealPlayerParty
 msgbox UN_T_Mother, MSGBOX_DEFAULT
 release
 end
UN_Resident0::
 lock
 faceplayer
 goto_if_ge VAR_UN_STAGE, 17, UN_Resident0_After
 msgbox UN_T_UN_Resident0, MSGBOX_DEFAULT
 release
 end
UN_Resident0_After:
 msgbox UN_T_UN_Resident0_After, MSGBOX_DEFAULT
 release
 end
UN_Resident1::
 lock
 faceplayer
 goto_if_ge VAR_UN_STAGE, 17, UN_Resident1_After
 msgbox UN_T_UN_Resident1, MSGBOX_DEFAULT
 release
 end
UN_Resident1_After:
 msgbox UN_T_UN_Resident1_After, MSGBOX_DEFAULT
 release
 end
UN_Resident2::
 lock
 faceplayer
 goto_if_ge VAR_UN_STAGE, 17, UN_Resident2_After
 msgbox UN_T_UN_Resident2, MSGBOX_DEFAULT
 release
 end
UN_Resident2_After:
 msgbox UN_T_UN_Resident2_After, MSGBOX_DEFAULT
 release
 end
UN_Resident3::
 lock
 faceplayer
 goto_if_ge VAR_UN_STAGE, 17, UN_Resident3_After
 msgbox UN_T_UN_Resident3, MSGBOX_DEFAULT
 release
 end
UN_Resident3_After:
 msgbox UN_T_UN_Resident3_After, MSGBOX_DEFAULT
 release
 end
UN_Resident4::
 lock
 faceplayer
 goto_if_ge VAR_UN_STAGE, 17, UN_Resident4_After
 msgbox UN_T_UN_Resident4, MSGBOX_DEFAULT
 release
 end
UN_Resident4_After:
 msgbox UN_T_UN_Resident4_After, MSGBOX_DEFAULT
 release
 end
UN_Resident5::
 lock
 faceplayer
 goto_if_ge VAR_UN_STAGE, 17, UN_Resident5_After
 msgbox UN_T_UN_Resident5, MSGBOX_DEFAULT
 release
 end
UN_Resident5_After:
 msgbox UN_T_UN_Resident5_After, MSGBOX_DEFAULT
 release
 end
UN_Resident6::
 lock
 faceplayer
 goto_if_ge VAR_UN_STAGE, 17, UN_Resident6_After
 msgbox UN_T_UN_Resident6, MSGBOX_DEFAULT
 release
 end
UN_Resident6_After:
 msgbox UN_T_UN_Resident6_After, MSGBOX_DEFAULT
 release
 end
UN_Resident7::
 lock
 faceplayer
 goto_if_ge VAR_UN_STAGE, 17, UN_Resident7_After
 msgbox UN_T_UN_Resident7, MSGBOX_DEFAULT
 release
 end
UN_Resident7_After:
 msgbox UN_T_UN_Resident7_After, MSGBOX_DEFAULT
 release
 end
UN_Resident8::
 lock
 faceplayer
 goto_if_ge VAR_UN_STAGE, 17, UN_Resident8_After
 msgbox UN_T_UN_Resident8, MSGBOX_DEFAULT
 release
 end
UN_Resident8_After:
 msgbox UN_T_UN_Resident8_After, MSGBOX_DEFAULT
 release
 end
UN_Resident9::
 lock
 faceplayer
 goto_if_ge VAR_UN_STAGE, 17, UN_Resident9_After
 msgbox UN_T_UN_Resident9, MSGBOX_DEFAULT
 release
 end
UN_Resident9_After:
 msgbox UN_T_UN_Resident9_After, MSGBOX_DEFAULT
 release
 end
UN_Resident10::
 lock
 faceplayer
 goto_if_ge VAR_UN_STAGE, 17, UN_Resident10_After
 msgbox UN_T_UN_Resident10, MSGBOX_DEFAULT
 release
 end
UN_Resident10_After:
 msgbox UN_T_UN_Resident10_After, MSGBOX_DEFAULT
 release
 end
UN_Resident11::
 lock
 faceplayer
 goto_if_ge VAR_UN_STAGE, 17, UN_Resident11_After
 msgbox UN_T_UN_Resident11, MSGBOX_DEFAULT
 release
 end
UN_Resident11_After:
 msgbox UN_T_UN_Resident11_After, MSGBOX_DEFAULT
 release
 end
UN_Resident12::
 lock
 faceplayer
 goto_if_ge VAR_UN_STAGE, 17, UN_Resident12_After
 msgbox UN_T_UN_Resident12, MSGBOX_DEFAULT
 release
 end
UN_Resident12_After:
 msgbox UN_T_UN_Resident12_After, MSGBOX_DEFAULT
 release
 end
UN_Resident13::
 lock
 faceplayer
 goto_if_ge VAR_UN_STAGE, 17, UN_Resident13_After
 msgbox UN_T_UN_Resident13, MSGBOX_DEFAULT
 release
 end
UN_Resident13_After:
 msgbox UN_T_UN_Resident13_After, MSGBOX_DEFAULT
 release
 end
UN_Resident14::
 lock
 faceplayer
 goto_if_ge VAR_UN_STAGE, 17, UN_Resident14_After
 msgbox UN_T_UN_Resident14, MSGBOX_DEFAULT
 release
 end
UN_Resident14_After:
 msgbox UN_T_UN_Resident14_After, MSGBOX_DEFAULT
 release
 end
UN_Resident15::
 lock
 faceplayer
 goto_if_ge VAR_UN_STAGE, 17, UN_Resident15_After
 msgbox UN_T_UN_Resident15, MSGBOX_DEFAULT
 release
 end
UN_Resident15_After:
 msgbox UN_T_UN_Resident15_After, MSGBOX_DEFAULT
 release
 end
UN_Resident16::
 lock
 faceplayer
 goto_if_ge VAR_UN_STAGE, 17, UN_Resident16_After
 msgbox UN_T_UN_Resident16, MSGBOX_DEFAULT
 release
 end
UN_Resident16_After:
 msgbox UN_T_UN_Resident16_After, MSGBOX_DEFAULT
 release
 end
UN_Resident17::
 lock
 faceplayer
 goto_if_ge VAR_UN_STAGE, 17, UN_Resident17_After
 msgbox UN_T_UN_Resident17, MSGBOX_DEFAULT
 release
 end
UN_Resident17_After:
 msgbox UN_T_UN_Resident17_After, MSGBOX_DEFAULT
 release
 end
UN_Resident18::
 lock
 faceplayer
 msgbox UN_T_UN_Resident18, MSGBOX_DEFAULT
 release
 end

UN_Resident19::
 lock
 faceplayer
 msgbox UN_T_UN_Resident19, MSGBOX_DEFAULT
 release
 end

UN_Resident20::
 lock
 faceplayer
 msgbox UN_T_UN_Resident20, MSGBOX_DEFAULT
 release
 end

UN_Resident21::
 lock
 faceplayer
 msgbox UN_T_UN_Resident21, MSGBOX_DEFAULT
 release
 end

UN_Resident22::
 lock
 faceplayer
 msgbox UN_T_UN_Resident22, MSGBOX_DEFAULT
 release
 end

UN_Resident23::
 lock
 faceplayer
 msgbox UN_T_UN_Resident23, MSGBOX_DEFAULT
 release
 end

UN_Resident24::
 lock
 faceplayer
 msgbox UN_T_UN_Resident24, MSGBOX_DEFAULT
 release
 end

UN_Resident25::
 lock
 faceplayer
 msgbox UN_T_UN_Resident25, MSGBOX_DEFAULT
 release
 end

UN_Resident26::
 lock
 faceplayer
 msgbox UN_T_UN_Resident26, MSGBOX_DEFAULT
 release
 end

UN_Resident27::
 lock
 faceplayer
 msgbox UN_T_UN_Resident27, MSGBOX_DEFAULT
 release
 end

UN_Resident28::
 lock
 faceplayer
 msgbox UN_T_UN_Resident28, MSGBOX_DEFAULT
 release
 end

UN_Resident29::
 lock
 faceplayer
 msgbox UN_T_UN_Resident29, MSGBOX_DEFAULT
 release
 end

UN_Resident30::
 lock
 faceplayer
 msgbox UN_T_UN_Resident30, MSGBOX_DEFAULT
 release
 end

UN_Resident31::
 lock
 faceplayer
 msgbox UN_T_UN_Resident31, MSGBOX_DEFAULT
 release
 end

UN_Resident32::
 lock
 faceplayer
 msgbox UN_T_UN_Resident32, MSGBOX_DEFAULT
 release
 end

UN_Resident33::
 lock
 faceplayer
 msgbox UN_T_UN_Resident33, MSGBOX_DEFAULT
 release
 end

UN_Resident34::
 lock
 faceplayer
 msgbox UN_T_UN_Resident34, MSGBOX_DEFAULT
 release
 end

UN_Resident35::
 lock
 faceplayer
 msgbox UN_T_UN_Resident35, MSGBOX_DEFAULT
 release
 end

UN_Resident36::
 lock
 faceplayer
 msgbox UN_T_UN_Resident36, MSGBOX_DEFAULT
 release
 end

UN_Resident37::
 lock
 faceplayer
 msgbox UN_T_UN_Resident37, MSGBOX_DEFAULT
 release
 end

UN_Resident38::
 lock
 faceplayer
 msgbox UN_T_UN_Resident38, MSGBOX_DEFAULT
 release
 end

UN_Resident39::
 lock
 faceplayer
 msgbox UN_T_UN_Resident39, MSGBOX_DEFAULT
 release
 end

UN_Resident40::
 lock
 faceplayer
 msgbox UN_T_UN_Resident40, MSGBOX_DEFAULT
 release
 end

UN_Resident41::
 lock
 faceplayer
 msgbox UN_T_UN_Resident41, MSGBOX_DEFAULT
 release
 end

UN_Resident42::
 lock
 faceplayer
 msgbox UN_T_UN_Resident42, MSGBOX_DEFAULT
 release
 end

UN_Resident43::
 lock
 faceplayer
 msgbox UN_T_UN_Resident43, MSGBOX_DEFAULT
 release
 end

UN_Resident44::
 lock
 faceplayer
 msgbox UN_T_UN_Resident44, MSGBOX_DEFAULT
 release
 end

UN_Resident45::
 lock
 faceplayer
 msgbox UN_T_UN_Resident45, MSGBOX_DEFAULT
 release
 end

UN_Resident46::
 lock
 faceplayer
 msgbox UN_T_UN_Resident46, MSGBOX_DEFAULT
 release
 end

UN_Resident47::
 lock
 faceplayer
 msgbox UN_T_UN_Resident47, MSGBOX_DEFAULT
 release
 end

UN_Resident48::
 lock
 faceplayer
 msgbox UN_T_UN_Resident48, MSGBOX_DEFAULT
 release
 end

UN_Field0::
 trainerbattle_single TRAINER_UN_FIELD0, UN_T_UN_Field0_Intro, UN_T_UN_Field0_Defeat
 msgbox UN_T_UN_Field0_After, MSGBOX_DEFAULT
 end
UN_Field1::
 trainerbattle_single TRAINER_UN_FIELD1, UN_T_UN_Field1_Intro, UN_T_UN_Field1_Defeat
 msgbox UN_T_UN_Field1_After, MSGBOX_DEFAULT
 end
UN_Field2::
 trainerbattle_single TRAINER_UN_FIELD2, UN_T_UN_Field2_Intro, UN_T_UN_Field2_Defeat
 msgbox UN_T_UN_Field2_After, MSGBOX_DEFAULT
 end
UN_Field3::
 trainerbattle_single TRAINER_UN_FIELD3, UN_T_UN_Field3_Intro, UN_T_UN_Field3_Defeat
 msgbox UN_T_UN_Field3_After, MSGBOX_DEFAULT
 end
UN_Field4::
 trainerbattle_single TRAINER_UN_FIELD4, UN_T_UN_Field4_Intro, UN_T_UN_Field4_Defeat
 msgbox UN_T_UN_Field4_After, MSGBOX_DEFAULT
 end
UN_Field5::
 trainerbattle_single TRAINER_UN_FIELD5, UN_T_UN_Field5_Intro, UN_T_UN_Field5_Defeat
 msgbox UN_T_UN_Field5_After, MSGBOX_DEFAULT
 end
UN_Field6::
 trainerbattle_single TRAINER_UN_FIELD6, UN_T_UN_Field6_Intro, UN_T_UN_Field6_Defeat
 msgbox UN_T_UN_Field6_After, MSGBOX_DEFAULT
 end
UN_Field7::
 trainerbattle_single TRAINER_UN_FIELD7, UN_T_UN_Field7_Intro, UN_T_UN_Field7_Defeat
 msgbox UN_T_UN_Field7_After, MSGBOX_DEFAULT
 end
UN_Field8::
 trainerbattle_single TRAINER_UN_FIELD8, UN_T_UN_Field8_Intro, UN_T_UN_Field8_Defeat
 msgbox UN_T_UN_Field8_After, MSGBOX_DEFAULT
 end
UN_Field9::
 trainerbattle_single TRAINER_UN_FIELD9, UN_T_UN_Field9_Intro, UN_T_UN_Field9_Defeat
 msgbox UN_T_UN_Field9_After, MSGBOX_DEFAULT
 end
UN_Field10::
 trainerbattle_single TRAINER_UN_FIELD10, UN_T_UN_Field10_Intro, UN_T_UN_Field10_Defeat
 msgbox UN_T_UN_Field10_After, MSGBOX_DEFAULT
 end
UN_Field11::
 trainerbattle_single TRAINER_UN_FIELD11, UN_T_UN_Field11_Intro, UN_T_UN_Field11_Defeat
 msgbox UN_T_UN_Field11_After, MSGBOX_DEFAULT
 end
UN_Field12::
 trainerbattle_single TRAINER_UN_FIELD12, UN_T_UN_Field12_Intro, UN_T_UN_Field12_Defeat
 msgbox UN_T_UN_Field12_After, MSGBOX_DEFAULT
 end
UN_Field13::
 trainerbattle_single TRAINER_UN_FIELD13, UN_T_UN_Field13_Intro, UN_T_UN_Field13_Defeat
 msgbox UN_T_UN_Field13_After, MSGBOX_DEFAULT
 end
UN_Field14::
 trainerbattle_single TRAINER_UN_FIELD14, UN_T_UN_Field14_Intro, UN_T_UN_Field14_Defeat
 msgbox UN_T_UN_Field14_After, MSGBOX_DEFAULT
 end
UN_Field15::
 trainerbattle_single TRAINER_UN_FIELD15, UN_T_UN_Field15_Intro, UN_T_UN_Field15_Defeat
 msgbox UN_T_UN_Field15_After, MSGBOX_DEFAULT
 end
UN_Field16::
 trainerbattle_single TRAINER_UN_FIELD16, UN_T_UN_Field16_Intro, UN_T_UN_Field16_Defeat
 msgbox UN_T_UN_Field16_After, MSGBOX_DEFAULT
 end
UN_Field17::
 trainerbattle_single TRAINER_UN_FIELD17, UN_T_UN_Field17_Intro, UN_T_UN_Field17_Defeat
 msgbox UN_T_UN_Field17_After, MSGBOX_DEFAULT
 end
UN_Field18::
 trainerbattle_single TRAINER_UN_FIELD18, UN_T_UN_Field18_Intro, UN_T_UN_Field18_Defeat
 msgbox UN_T_UN_Field18_After, MSGBOX_DEFAULT
 end
UN_Field19::
 trainerbattle_single TRAINER_UN_FIELD19, UN_T_UN_Field19_Intro, UN_T_UN_Field19_Defeat
 msgbox UN_T_UN_Field19_After, MSGBOX_DEFAULT
 end
UN_Field20::
 trainerbattle_single TRAINER_UN_FIELD20, UN_T_UN_Field20_Intro, UN_T_UN_Field20_Defeat
 msgbox UN_T_UN_Field20_After, MSGBOX_DEFAULT
 end
UN_Field21::
 trainerbattle_single TRAINER_UN_FIELD21, UN_T_UN_Field21_Intro, UN_T_UN_Field21_Defeat
 msgbox UN_T_UN_Field21_After, MSGBOX_DEFAULT
 end
UN_Field22::
 trainerbattle_single TRAINER_UN_FIELD22, UN_T_UN_Field22_Intro, UN_T_UN_Field22_Defeat
 msgbox UN_T_UN_Field22_After, MSGBOX_DEFAULT
 end
UN_Field23::
 trainerbattle_single TRAINER_UN_FIELD23, UN_T_UN_Field23_Intro, UN_T_UN_Field23_Defeat
 msgbox UN_T_UN_Field23_After, MSGBOX_DEFAULT
 end
UN_Field24::
 trainerbattle_single TRAINER_UN_FIELD24, UN_T_UN_Field24_Intro, UN_T_UN_Field24_Defeat
 msgbox UN_T_UN_Field24_After, MSGBOX_DEFAULT
 end
UN_Field25::
 trainerbattle_single TRAINER_UN_FIELD25, UN_T_UN_Field25_Intro, UN_T_UN_Field25_Defeat
 msgbox UN_T_UN_Field25_After, MSGBOX_DEFAULT
 end
UN_Field26::
 trainerbattle_single TRAINER_UN_FIELD26, UN_T_UN_Field26_Intro, UN_T_UN_Field26_Defeat
 msgbox UN_T_UN_Field26_After, MSGBOX_DEFAULT
 end
UN_Field27::
 trainerbattle_single TRAINER_UN_FIELD27, UN_T_UN_Field27_Intro, UN_T_UN_Field27_Defeat
 msgbox UN_T_UN_Field27_After, MSGBOX_DEFAULT
 end
UN_Field28::
 trainerbattle_single TRAINER_UN_FIELD28, UN_T_UN_Field28_Intro, UN_T_UN_Field28_Defeat
 msgbox UN_T_UN_Field28_After, MSGBOX_DEFAULT
 end
UN_Field29::
 trainerbattle_single TRAINER_UN_FIELD29, UN_T_UN_Field29_Intro, UN_T_UN_Field29_Defeat
 msgbox UN_T_UN_Field29_After, MSGBOX_DEFAULT
 end
UN_Field30::
 trainerbattle_single TRAINER_UN_FIELD30, UN_T_UN_Field30_Intro, UN_T_UN_Field30_Defeat
 msgbox UN_T_UN_Field30_After, MSGBOX_DEFAULT
 end
UN_Field31::
 trainerbattle_single TRAINER_UN_FIELD31, UN_T_UN_Field31_Intro, UN_T_UN_Field31_Defeat
 msgbox UN_T_UN_Field31_After, MSGBOX_DEFAULT
 end
UN_Field32::
 trainerbattle_single TRAINER_UN_FIELD32, UN_T_UN_Field32_Intro, UN_T_UN_Field32_Defeat
 msgbox UN_T_UN_Field32_After, MSGBOX_DEFAULT
 end
UN_Field33::
 trainerbattle_single TRAINER_UN_FIELD33, UN_T_UN_Field33_Intro, UN_T_UN_Field33_Defeat
 msgbox UN_T_UN_Field33_After, MSGBOX_DEFAULT
 end
UN_Field34::
 trainerbattle_single TRAINER_UN_FIELD34, UN_T_UN_Field34_Intro, UN_T_UN_Field34_Defeat
 msgbox UN_T_UN_Field34_After, MSGBOX_DEFAULT
 end
UN_Field35::
 trainerbattle_single TRAINER_UN_FIELD35, UN_T_UN_Field35_Intro, UN_T_UN_Field35_Defeat
 msgbox UN_T_UN_Field35_After, MSGBOX_DEFAULT
 end
UN_Field36::
 trainerbattle_single TRAINER_UN_FIELD36, UN_T_UN_Field36_Intro, UN_T_UN_Field36_Defeat
 msgbox UN_T_UN_Field36_After, MSGBOX_DEFAULT
 end
UN_Field37::
 trainerbattle_single TRAINER_UN_FIELD37, UN_T_UN_Field37_Intro, UN_T_UN_Field37_Defeat
 msgbox UN_T_UN_Field37_After, MSGBOX_DEFAULT
 end
UN_Field38::
 trainerbattle_single TRAINER_UN_FIELD38, UN_T_UN_Field38_Intro, UN_T_UN_Field38_Defeat
 msgbox UN_T_UN_Field38_After, MSGBOX_DEFAULT
 end
UN_T_Gate::
 .string "Seus amigos ainda precisam\nde voce. Abra Missoes para\pver o destino atual.$"
UN_T_Gate_En::
 .string "Your friends still need\nyou. Open Missions to see\pyour current destination.$"
UN_T_NotYet::
 .string "Precisamos preparar o\nproximo passo. Seu C-Gear\pmostra a missao atual.$"
UN_T_NotYet_En::
 .string "We must prepare the next\nstep. Your C-Gear shows\pthe current mission.$"
UN_T_Done::
 .string "Seguimos juntos, um passo\nde cada vez. Mesmo a\pverdade pode mudar quando\nescutamos.$"
UN_T_Done_En::
 .string "We keep going together,\none step at a time. Even\ptruth can change when we\nlisten.$"
UN_T_Prologue::
 .string "Bianca: Juniper mandou\ntres parceiros! Cheren ja\pleu cada pagina do manual.\nEu so quero conhecer o\pmeu! Escolha primeiro,\n{PLAYER}.$"
UN_T_Prologue_En::
 .string "Bianca: Juniper sent three\npartners! Cheren read\pevery manual page. I just\nwant to meet mine! You\pchoose first, {PLAYER}.$"
UN_T_Starter::
 .string "Snivy, Tepig ou Oshawott?\nEsse parceiro vai viver\pesta historia ao seu lado.$"
UN_T_Starter_En::
 .string "Snivy, Tepig or Oshawott?\nThis partner will live\pthis story with you.$"
UN_T_FirstBattle::
 .string "Cheren: Um parceiro nao e\num premio. Vamos descobrir\pjuntos como batalhar!$"
UN_T_FirstBattle_En::
 .string "Cheren: A partner is not a\nprize. Let us learn how to\pbattle together!$"
UN_T_FriendsLeave::
 .string "Bianca: Meu quarto virou\numa bagunca! Cheren: A\pgente limpa depois. A\nProfessora Juniper nos\pespera no laboratorio. Sua\nmae preparou os tenis de\pcorrida.$"
UN_T_FriendsLeave_En::
 .string "Bianca: We made such a\nmess! Cheren: We will\pclean it later. Professor\nJuniper is waiting in her\plab. Your mom prepared\nyour running shoes.$"
UN_T_UN_FriendBianca::
 .string "Bianca: Eu me perco ate na\nminha cidade. Mas meu\pparceiro sempre encontra\num jeito de me trazer de\pvolta.$"
UN_T_UN_FriendBianca_En::
 .string "Bianca: I get lost even in\nmy own town. My partner\palways finds a way to\nbring me back.$"
UN_T_UN_FriendCheren::
 .string "Cheren: Ser forte e uma\nmeta. Entender para que\pusar essa forca ainda e\numa pergunta.$"
UN_T_UN_FriendCheren_En::
 .string "Cheren: Getting strong is\na goal. What to use that\pstrength for is still a\nquestion.$"
UN_T_Juniper::
 .string "Juniper: Nao quero uma\nlista de capturas. Quero\pas historias que voces vao\nviver. Tome a Pokedex e\pestas Poke Balls. A Rota 1\nmuda com as estacoes;\pobserve suas cores.$"
UN_T_Juniper_En::
 .string "Juniper: I do not want a\ncapture list. I want the\pstories you will live.\nTake this Pokedex and\pthese Poke Balls. Route 1\nchanges with the seasons;\pwatch its colors.$"
UN_T_UN_AccumulaScene_Intro::
 .string "Ghetsis: A liberdade exige\nseparar pessoas e Pokemon!\pN: Espere. Seu parceiro\nquer me dizer algo. Uma\pbatalha pode revelar o que\npalavras escondem.$"
UN_T_UN_AccumulaScene_Intro_En::
 .string "Ghetsis: Freedom demands\nseparating people and\pPokemon! N: Wait. Your\npartner wants to tell me\psomething. A battle can\nreveal what words hide.$"
UN_T_UN_AccumulaScene_Defeat::
 .string "Meu parceiro confiou em\nmim. Agora preciso ouvir\pmelhor.$"
UN_T_UN_AccumulaScene_Defeat_En::
 .string "My partner trusted me. I\nneed to listen better.$"
UN_T_UN_AccumulaScene_After::
 .string "N: Eu ouvi confianca... e\num ruido, como gelo\pquebrando dentro de um\nsino. Por que tres vozes\prespondem a voce?$"
UN_T_UN_AccumulaScene_After_En::
 .string "N: I heard trust... and a\nnoise, like ice breaking\pinside a bell. Why do\nthree voices answer you?$"
UN_T_UN_PlazaCitizen::
 .string "O discurso de Ghetsis\nparece bonito. Entao por\pque os Pokemon dos guardas\nse afastam dele?$"
UN_T_UN_PlazaCitizen_En::
 .string "Ghetsis gives a beautiful\nspeech. Why do his guards\pPokemon shy away from him?$"
UN_T_UN_BiancaRoute1_Intro::
 .string "Bianca: Meu pai quer que\neu volte. Eu quero\pdescobrir quem posso ser!\nVamos batalhar antes de\pStriaton?$"
UN_T_UN_BiancaRoute1_Intro_En::
 .string "Bianca: Dad wants me home.\nI want to discover who I\pcan be! A battle before\nStriaton?$"
UN_T_UN_BiancaRoute1_Defeat::
 .string "Meu parceiro confiou em\nmim. Agora preciso ouvir\pmelhor.$"
UN_T_UN_BiancaRoute1_Defeat_En::
 .string "My partner trusted me. I\nneed to listen better.$"
UN_T_UN_BiancaRoute1_After::
 .string "Bianca: Perder nao\nsignifica desistir. Vou\pmostrar a ele que meu\nparceiro cuida de mim\ptambem.$"
UN_T_UN_BiancaRoute1_After_En::
 .string "Bianca: Losing does not\nmean quitting. I will show\phim my partner also takes\ncare of me.$"
UN_T_UN_BiancaRoute2_Intro::
 .string "Bianca: Meu pai quer que\neu volte. Eu quero\pdescobrir quem posso ser!\nVamos batalhar antes de\pStriaton?$"
UN_T_UN_BiancaRoute2_Intro_En::
 .string "Bianca: Dad wants me home.\nI want to discover who I\pcan be! A battle before\nStriaton?$"
UN_T_UN_BiancaRoute2_Defeat::
 .string "Meu parceiro confiou em\nmim. Agora preciso ouvir\pmelhor.$"
UN_T_UN_BiancaRoute2_Defeat_En::
 .string "My partner trusted me. I\nneed to listen better.$"
UN_T_UN_BiancaRoute2_After::
 .string "Bianca: Perder nao\nsignifica desistir. Vou\pmostrar a ele que meu\nparceiro cuida de mim\ptambem.$"
UN_T_UN_BiancaRoute2_After_En::
 .string "Bianca: Losing does not\nmean quitting. I will show\phim my partner also takes\ncare of me.$"
UN_T_UN_BiancaRoute3_Intro::
 .string "Bianca: Meu pai quer que\neu volte. Eu quero\pdescobrir quem posso ser!\nVamos batalhar antes de\pStriaton?$"
UN_T_UN_BiancaRoute3_Intro_En::
 .string "Bianca: Dad wants me home.\nI want to discover who I\pcan be! A battle before\nStriaton?$"
UN_T_UN_BiancaRoute3_Defeat::
 .string "Meu parceiro confiou em\nmim. Agora preciso ouvir\pmelhor.$"
UN_T_UN_BiancaRoute3_Defeat_En::
 .string "My partner trusted me. I\nneed to listen better.$"
UN_T_UN_BiancaRoute3_After::
 .string "Bianca: Perder nao\nsignifica desistir. Vou\pmostrar a ele que meu\nparceiro cuida de mim\ptambem.$"
UN_T_UN_BiancaRoute3_After_En::
 .string "Bianca: Losing does not\nmean quitting. I will show\phim my partner also takes\ncare of me.$"
UN_T_UN_CherenSchool1_Intro::
 .string "Cheren: Aprendi as\nvantagens de tipo. Agora\pquero testar meu\nraciocinio, nao so o meu\pPokemon.$"
UN_T_UN_CherenSchool1_Intro_En::
 .string "Cheren: I learned type\nadvantages. Now I want to\ptest my thinking, not just\nmy Pokemon.$"
UN_T_UN_CherenSchool1_Defeat::
 .string "Meu parceiro confiou em\nmim. Agora preciso ouvir\pmelhor.$"
UN_T_UN_CherenSchool1_Defeat_En::
 .string "My partner trusted me. I\nneed to listen better.$"
UN_T_UN_CherenSchool1_After::
 .string "Cheren: Os tres irmaos do\nrestaurante lideram o\pginasio. Eles escolhem o\ntipo que desafia seu\pparceiro.$"
UN_T_UN_CherenSchool1_After_En::
 .string "Cheren: The three\nrestaurant brothers lead\pthe Gym. They choose the\ntype that challenges your\ppartner.$"
UN_T_UN_CherenSchool2_Intro::
 .string "Cheren: Aprendi as\nvantagens de tipo. Agora\pquero testar meu\nraciocinio, nao so o meu\pPokemon.$"
UN_T_UN_CherenSchool2_Intro_En::
 .string "Cheren: I learned type\nadvantages. Now I want to\ptest my thinking, not just\nmy Pokemon.$"
UN_T_UN_CherenSchool2_Defeat::
 .string "Meu parceiro confiou em\nmim. Agora preciso ouvir\pmelhor.$"
UN_T_UN_CherenSchool2_Defeat_En::
 .string "My partner trusted me. I\nneed to listen better.$"
UN_T_UN_CherenSchool2_After::
 .string "Cheren: Os tres irmaos do\nrestaurante lideram o\pginasio. Eles escolhem o\ntipo que desafia seu\pparceiro.$"
UN_T_UN_CherenSchool2_After_En::
 .string "Cheren: The three\nrestaurant brothers lead\pthe Gym. They choose the\ntype that challenges your\ppartner.$"
UN_T_UN_CherenSchool3_Intro::
 .string "Cheren: Aprendi as\nvantagens de tipo. Agora\pquero testar meu\nraciocinio, nao so o meu\pPokemon.$"
UN_T_UN_CherenSchool3_Intro_En::
 .string "Cheren: I learned type\nadvantages. Now I want to\ptest my thinking, not just\nmy Pokemon.$"
UN_T_UN_CherenSchool3_Defeat::
 .string "Meu parceiro confiou em\nmim. Agora preciso ouvir\pmelhor.$"
UN_T_UN_CherenSchool3_Defeat_En::
 .string "My partner trusted me. I\nneed to listen better.$"
UN_T_UN_CherenSchool3_After::
 .string "Cheren: Os tres irmaos do\nrestaurante lideram o\pginasio. Eles escolhem o\ntipo que desafia seu\pparceiro.$"
UN_T_UN_CherenSchool3_After_En::
 .string "Cheren: The three\nrestaurant brothers lead\pthe Gym. They choose the\ntype that challenges your\ppartner.$"
UN_T_UN_CHILI_Intro::
 .string "Bem-vindo ao restaurante!\nPreparar uma batalha\ptambem exige equilibrio.\nMostre como cuida do seu\pparceiro.$"
UN_T_UN_CHILI_Intro_En::
 .string "Welcome to our restaurant!\nPreparing a battle also\ptakes balance. Show how\nyou care for your partner.$"
UN_T_UN_CHILI_Defeat::
 .string "Meu parceiro confiou em\nmim. Agora preciso ouvir\pmelhor.$"
UN_T_UN_CHILI_Defeat_En::
 .string "My partner trusted me. I\nneed to listen better.$"
UN_T_UN_CHILI_After::
 .string "A Trio Badge e sua! Fennel\ninvestigou um sinal de\psonhos no Dreamyard.\nBianca foi ver o que\phouve.$"
UN_T_UN_CHILI_After_En::
 .string "The Trio Badge is yours!\nFennel found a dream\psignal in the Dreamyard.\nBianca went to\pinvestigate.$"
UN_T_UN_CRESS_Intro::
 .string "Bem-vindo ao restaurante!\nPreparar uma batalha\ptambem exige equilibrio.\nMostre como cuida do seu\pparceiro.$"
UN_T_UN_CRESS_Intro_En::
 .string "Welcome to our restaurant!\nPreparing a battle also\ptakes balance. Show how\nyou care for your partner.$"
UN_T_UN_CRESS_Defeat::
 .string "Meu parceiro confiou em\nmim. Agora preciso ouvir\pmelhor.$"
UN_T_UN_CRESS_Defeat_En::
 .string "My partner trusted me. I\nneed to listen better.$"
UN_T_UN_CRESS_After::
 .string "A Trio Badge e sua! Fennel\ninvestigou um sinal de\psonhos no Dreamyard.\nBianca foi ver o que\phouve.$"
UN_T_UN_CRESS_After_En::
 .string "The Trio Badge is yours!\nFennel found a dream\psignal in the Dreamyard.\nBianca went to\pinvestigate.$"
UN_T_UN_CILAN_Intro::
 .string "Bem-vindo ao restaurante!\nPreparar uma batalha\ptambem exige equilibrio.\nMostre como cuida do seu\pparceiro.$"
UN_T_UN_CILAN_Intro_En::
 .string "Welcome to our restaurant!\nPreparing a battle also\ptakes balance. Show how\nyou care for your partner.$"
UN_T_UN_CILAN_Defeat::
 .string "Meu parceiro confiou em\nmim. Agora preciso ouvir\pmelhor.$"
UN_T_UN_CILAN_Defeat_En::
 .string "My partner trusted me. I\nneed to listen better.$"
UN_T_UN_CILAN_After::
 .string "A Trio Badge e sua! Fennel\ninvestigou um sinal de\psonhos no Dreamyard.\nBianca foi ver o que\phouve.$"
UN_T_UN_CILAN_After_En::
 .string "The Trio Badge is yours!\nFennel found a dream\psignal in the Dreamyard.\nBianca went to\pinvestigate.$"
UN_T_UN_DreamyardPlasma_Intro::
 .string "Plasma: A fumaca de Munna\nrevela desejos. Nosso\paparelho vai extrair a\nlembranca de um dragao que\pnem existe mais! Bianca:\nIsso esta machucando\pMunna!$"
UN_T_UN_DreamyardPlasma_Intro_En::
 .string "Plasma: Munna smoke\nreveals wishes. Our device\pwill extract the memory of\na dragon that no longer\pexists! Bianca: That is\nhurting Munna!$"
UN_T_UN_DreamyardPlasma_Defeat::
 .string "Meu parceiro confiou em\nmim. Agora preciso ouvir\pmelhor.$"
UN_T_UN_DreamyardPlasma_Defeat_En::
 .string "My partner trusted me. I\nneed to listen better.$"
UN_T_UN_DreamyardPlasma_After::
 .string "Fennel: A fumaca mostrou\nfogo, raios e um vazio\pcongelado. Leve Munna para\no meu laboratorio. Vamos\pouvir o sonho sem forcar\nninguem.$"
UN_T_UN_DreamyardPlasma_After_En::
 .string "Fennel: The smoke showed\nfire, lightning and a\pfrozen void. Bring Munna\nto my lab. We will hear\pthe dream without forcing\nanyone.$"
UN_T_UN_Munna::
 .string "Munna dorme em paz. Na\nfumaca, voce distingue um\pvulto com tres brilhos\ndiferentes.$"
UN_T_UN_Munna_En::
 .string "Munna sleeps peacefully.\nIn its smoke you see a\pshape with three different\nlights.$"
UN_T_Fennel::
 .string "Fennel: Este C-Gear escuta\necos dos sonhos. Com pouca\pvida e depois de dois\nturnos, um sinal harmonico\preforca sua captura. Sao\ntres cargas, recarregadas\pno Centro. Nao controla o\nPokemon: ajuda voces a se\pentenderem.$"
UN_T_Fennel_En::
 .string "Fennel: This C-Gear hears\ndream echoes. At low HP\pafter two turns, a\nharmonic signal\pstrengthens a catch. It\nhas three charges,\prefilled at a Center. It\ndoes not control Pokemon:\pit helps you understand\neach other.$"
UN_T_UN_SignalAssistant::
 .string "Tres frequencias aparecem\njuntas: verdade, ideais\pe... silencio. Fennel se\nrecusa a dar nome a algo\pque ainda nao entende.$"
UN_T_UN_SignalAssistant_En::
 .string "Three frequencies appear\ntogether: truth, ideals\pand... silence. Fennel\nrefuses to name something\pshe does not understand\nyet.$"
UN_T_UN_WellspringPlasma_Intro::
 .string "Cheren: A menina perdeu\nseu Pokemon para esses\phomens. Plasma: Estamos\nlibertando! Cheren: Ela\ppediu para voce tirar o\nparceiro dela?$"
UN_T_UN_WellspringPlasma_Intro_En::
 .string "Cheren: These people took\na girls Pokemon. Plasma:\pWe are liberating it!\nCheren: Did she ask you to\ptake her partner?$"
UN_T_UN_WellspringPlasma_Defeat::
 .string "Meu parceiro confiou em\nmim. Agora preciso ouvir\pmelhor.$"
UN_T_UN_WellspringPlasma_Defeat_En::
 .string "My partner trusted me. I\nneed to listen better.$"
UN_T_UN_WellspringPlasma_After::
 .string "Cheren: A menina e seu\nPokemon correram um para o\poutro. Esta e a resposta\nque Ghetsis nao quis\pouvir. Lenora, em Nacrene,\npode explicar o simbolo do\paparelho.$"
UN_T_UN_WellspringPlasma_After_En::
 .string "Cheren: The girl and her\nPokemon ran to each other.\pThat is the answer Ghetsis\nrefused to hear. Lenora in\pNacrene can explain the\ndevice symbol.$"
UN_T_UN_MissingChild::
 .string "Eles levaram meu Pokemon!\nEu nao queria ser mais\pforte. So queria continuar\nandando com ele.$"
UN_T_UN_MissingChild_En::
 .string "They took my Pokemon! I\ndid not want to be\pstronger. I just wanted to\nkeep walking with it.$"
UN_T_UN_MissingChild_After::
 .string "Meu parceiro voltou! Ele\nescolheu ficar comigo. Vou\plevar flores para Cheren e\npara voce.$"
UN_T_UN_MissingChild_After_En::
 .string "My partner is back! It\nchose to stay. I will\pbring flowers for Cheren\nand you.$"
UN_T_UN_NNacrene_Intro::
 .string "N: O museu guarda ossos.\nSeus sonhos guardam algo\pvivo. Se um dragao nasceu\nde duas ideias, o que\paconteceu com a parte que\nnenhuma delas quis?$"
UN_T_UN_NNacrene_Intro_En::
 .string "N: The museum keeps bones.\nYour dreams keep something\palive. If a dragon split\ninto two ideas, what\phappened to the part\nneither wanted?$"
UN_T_UN_NNacrene_Defeat::
 .string "Meu parceiro confiou em\nmim. Agora preciso ouvir\pmelhor.$"
UN_T_UN_NNacrene_Defeat_En::
 .string "My partner trusted me. I\nneed to listen better.$"
UN_T_UN_NNacrene_After::
 .string "N: Kyurem. Foi esse o nome\nque ouvi no silencio.\pGhetsis quer reconstruir\num mundo perfeito. Por que\po seu parceiro teme essa\nperfeicao?$"
UN_T_UN_NNacrene_After_En::
 .string "N: Kyurem. That is the\nname I heard in the\psilence. Ghetsis wants to\nrebuild a perfect world.\pWhy does your partner fear\nthat perfection?$"
UN_T_UN_Lenora_Intro::
 .string "Lenora: O simbolo esta\nnuma placa antiga. Mas\ppesquisa e batalha exigem\na mesma coisa: perceber\pdetalhes!$"
UN_T_UN_Lenora_Intro_En::
 .string "Lenora: The symbol is on\nan ancient tablet.\pResearch and battle\nrequire the same thing:\pnotice the details!$"
UN_T_UN_Lenora_Defeat::
 .string "Meu parceiro confiou em\nmim. Agora preciso ouvir\pmelhor.$"
UN_T_UN_Lenora_Defeat_En::
 .string "My partner trusted me. I\nneed to listen better.$"
UN_T_UN_Lenora_After::
 .string "Lenora: Tome a Basic\nBadge. Agora vamos\pexaminar a placa...\nEspere! O alarme do museu!$"
UN_T_UN_Lenora_After_En::
 .string "Lenora: Take the Basic\nBadge. Now let us study\pthe tablet... Wait! The\nmuseum alarm!$"
UN_T_Theft::
 .string "Plasma: A placa do Dragao\nOriginal pertence ao\pfuturo! Lenora: Voces\nfalam de liberdade e\proubam nossa memoria?\nBurgh: Seguiram para\pPinwheel Forest. Eu\nprotejo a saida; voce\psegue o rastro.$"
UN_T_Theft_En::
 .string "Plasma: The Original\nDragon tablet belongs to\pthe future! Lenora: You\npreach freedom and steal\pour memory? Burgh: They\nran to Pinwheel Forest. I\pwill guard the exit;\nfollow their trail.$"
UN_T_UN_BurghForest::
 .string "Burgh: Uma floresta nao e\num labirinto para quem\psabe olhar. As folhas\nquebradas mostram o\pcaminho que Plasma tentou\nesconder.$"
UN_T_UN_BurghForest_En::
 .string "Burgh: A forest is no maze\nif you know how to look.\pBroken leaves show the\npath Plasma tried to hide.$"
UN_T_UN_PinwheelPlasma_Intro::
 .string "Plasma: Fogo, raio e gelo\nvao voltar a ser um! Nao\pprecisamos dos humanos que\nestragaram o primeiro\pmundo.$"
UN_T_UN_PinwheelPlasma_Intro_En::
 .string "Plasma: Fire, lightning\nand ice will be one again!\pWe do not need the humans\nwho ruined the first\pworld.$"
UN_T_UN_PinwheelPlasma_Defeat::
 .string "Meu parceiro confiou em\nmim. Agora preciso ouvir\pmelhor.$"
UN_T_UN_PinwheelPlasma_Defeat_En::
 .string "My partner trusted me. I\nneed to listen better.$"
UN_T_UN_PinwheelPlasma_After::
 .string "Burgh: Lenora recuperou a\nplaca. Mas falta um\pfragmento, enviado de\nbarco a Castelia. Vamos\pcruzar Skyarrow. A cidade\nja esta sentindo o frio\pdesse sonho.$"
UN_T_UN_PinwheelPlasma_After_En::
 .string "Burgh: Lenora has her\ntablet back. A fragment\pwas shipped to Castelia.\nLet us cross Skyarrow. The\pcity already feels the\ncold of that dream.$"
UN_T_CasteliaEntry::
 .string "Bianca: Roubaram Munna na\nfrente de todo mundo! Iris\pfoi atras deles. Burgh: O\nfragmento atrai sonhos de\pPokemon para um deposito.\nEntre na casa perto do\pcais. Eu vou impedir o\nbarco de partir.$"
UN_T_CasteliaEntry_En::
 .string "Bianca: They stole Munna\nin plain sight! Iris went\pafter them. Burgh: The\nfragment draws Pokemon\pdreams into a depot. Enter\nthe house by the docks. I\pwill stop their boat.$"
UN_T_UN_CasteliaPlasma_Intro::
 .string "Plasma: Ghetsis vai unir\nReshiram, Zekrom e o vazio\pde Kyurem! N: Eu pedi que\nescutassem os Pokemon, nao\pque transformassem seus\nsonhos em correntes!$"
UN_T_UN_CasteliaPlasma_Intro_En::
 .string "Plasma: Ghetsis will unite\nReshiram, Zekrom and\pKyurem emptiness! N: I\nasked you to hear Pokemon,\pnot turn their dreams into\nchains!$"
UN_T_UN_CasteliaPlasma_Defeat::
 .string "Meu parceiro confiou em\nmim. Agora preciso ouvir\pmelhor.$"
UN_T_UN_CasteliaPlasma_Defeat_En::
 .string "My partner trusted me. I\nneed to listen better.$"
UN_T_UN_CasteliaPlasma_After::
 .string "N: A verdade sem escolha\nvira ordem. Ideais sem\pescuta viram prisao. O\nfragmento respondeu a\pvoce... nao a Ghetsis.\nBurgh: Munna esta livre.\pQuando estiver pronto, meu\nginasio o espera.$"
UN_T_UN_CasteliaPlasma_After_En::
 .string "N: Truth without choice\nbecomes an order. Ideals\pwithout listening become a\nprison. The fragment\panswered you... not\nGhetsis. Burgh: Munna is\pfree. My Gym awaits when\nyou are ready.$"
UN_T_UN_NPort::
 .string "N: Ainda nao sei se posso\nconfiar em voce. Mas posso\pconfiar no que seu\nparceiro sentiu. Isso\pbasta por enquanto.$"
UN_T_UN_NPort_En::
 .string "N: I do not know if I can\ntrust you yet. I can trust\pwhat your partner felt.\nThat is enough for now.$"
UN_T_UN_Burgh_Intro::
 .string "Burgh: A cidade recuperou\nsuas cores. Agora deixe\pseu parceiro pintar esta\nbatalha!$"
UN_T_UN_Burgh_Intro_En::
 .string "Burgh: The city has its\ncolors back. Now let your\ppartner paint this battle!$"
UN_T_UN_Burgh_Defeat::
 .string "Meu parceiro confiou em\nmim. Agora preciso ouvir\pmelhor.$"
UN_T_UN_Burgh_Defeat_En::
 .string "My partner trusted me. I\nneed to listen better.$"
UN_T_UN_Burgh_After::
 .string "Burgh: A Insect Badge e\nsua. Leve o fragmento ao\pcais. Fennel ouviu tres\nchamadas na mesma\pfrequencia. Seus amigos\nestao esperando.$"
UN_T_UN_Burgh_After_En::
 .string "Burgh: The Insect Badge is\nyours. Bring the fragment\pto the docks. Fennel heard\nthree calls on the same\pfrequency. Your friends\nare waiting.$"
UN_T_Vision1::
 .string "O fragmento aquece. Uma\nasa branca cobre o ceu dos\pseus sonhos. Reshiram nao\nprocura um dono: procura\puma verdade.$"
UN_T_Vision1_En::
 .string "The fragment warms. A\nwhite wing fills your\pdream sky. Reshiram does\nnot seek an owner: it\pseeks a truth.$"
UN_T_Vision2::
 .string "Um raio abre o horizonte.\nZekrom responde a um ideal\pque ainda nao recebeu\nnome. As duas vozes chamam\puma terceira.$"
UN_T_Vision2_En::
 .string "Lightning opens the\nhorizon. Zekrom answers an\pideal not yet named. Both\nvoices call a third.$"
UN_T_Vision3::
 .string "O cais congela por um\ninstante. Kyurem aparece\pentre as duas luzes. No\nreflexo, tres sombras\pformam um unico dragao...\ne entao se separam.$"
UN_T_Vision3_En::
 .string "The dock freezes for an\ninstant. Kyurem appears\pbetween both lights. In\nthe reflection, three\pshadows form one dragon...\nthen separate.$"
UN_T_ChapterEnd::
 .string "Juniper, pelo C-Gear: O\nDragao Original nao pode\pnascer de uma ordem.\nPrecisamos saber por que\pele se dividiu. Bianca:\nDesta vez vamos juntos!\pCheren: A proxima resposta\nesta alem de Castelia.\pCAPITULO 1 CONCLUIDO.\nContinue explorando Unova;\pa jornada dos tres dragoes\ncontinua no proximo\pcapitulo.$"
UN_T_ChapterEnd_En::
 .string "Juniper, on C-Gear: The\nOriginal Dragon cannot be\pborn from an order. We\nmust learn why it split.\pBianca: This time we go\ntogether! Cheren: The next\panswer lies beyond\nCastelia. CHAPTER 1\pCOMPLETE. Keep exploring\nUnova; the three-dragon\pjourney continues in the\nnext chapter.$"
UN_T_UN_Route4Closed::
 .string "A investigacao segue para\no norte no proximo\pcapitulo. Castelia ainda\ntem treinadores, presentes\pe sonhos para descobrir.$"
UN_T_UN_Route4Closed_En::
 .string "The investigation heads\nnorth in the next chapter.\pCastelia still has\ntrainers, gifts and dreams\pto discover.$"
UN_T_Heal::
 .string "Bem-vindo! Seus Pokemon\nmerecem descanso. O sinal\pde sonhos tambem foi\nrecarregado.$"
UN_T_Heal_En::
 .string "Welcome! Your Pokemon\ndeserve a rest. Your dream\psignal was recharged too.$"
UN_T_Coach::
 .string "Youngster: Com\nAnti-Grinding ligado,\pposso completar 999 Rare\nCandy e maximizar os IVs\pda equipe. O limite de\nnivel continua valendo.$"
UN_T_Coach_En::
 .string "Youngster: With\nAnti-Grinding enabled I\pcan refill 999 Rare Candy\nand maximize party IVs.\pYour level limit still\napplies.$"
UN_T_CoachOff::
 .string "Ative Anti-Grinding em\nAjustes se quiser usar meu\ptreino. Sua jornada\ncontinua igual.$"
UN_T_CoachOff_En::
 .string "Enable Anti-Grinding in\nSettings to use my\ptraining. Your journey\ncontinues as usual.$"
UN_T_Mother::
 .string "Voce pode voltar para\ndescansar quando quiser.\pTer um lugar para voltar\ntambem ajuda a seguir em\pfrente.$"
UN_T_Mother_En::
 .string "Come back to rest whenever\nyou want. Having a place\pto return to helps you\nkeep going.$"
UN_T_UN_Resident0::
 .string "Meu Lillipup segue a\nmochila, nao a mim. Acho\pque ele descobriu onde\nescondi os biscoitos.$"
UN_T_UN_Resident0_En::
 .string "My Lillipup follows my\nbag, not me. I think it\pfound my biscuits.$"
UN_T_UN_Resident0_After::
 .string "A cidade recuperou o\nritmo. Seu parceiro parece\preconhecer cada rua por\nonde voces passaram.$"
UN_T_UN_Resident0_After_En::
 .string "The town found its rhythm\nagain. Your partner seems\pto remember every street\nyou crossed.$"
UN_T_UN_Resident1::
 .string "Juniper anotou a data da\nprimeira flor da vila. Eu\panotei a primeira risada\nda minha filha. As duas\psao pesquisa.$"
UN_T_UN_Resident1_En::
 .string "Juniper noted our first\nflower. I noted my\pdaughters first laugh.\nBoth are research.$"
UN_T_UN_Resident1_After::
 .string "A cidade recuperou o\nritmo. Seu parceiro parece\preconhecer cada rua por\nonde voces passaram.$"
UN_T_UN_Resident1_After_En::
 .string "The town found its rhythm\nagain. Your partner seems\pto remember every street\nyou crossed.$"
UN_T_UN_Resident2::
 .string "Bianca quase saiu de\npijama. Cheren fez uma\plista para ela; esqueceu o\nproprio mapa.$"
UN_T_UN_Resident2_En::
 .string "Bianca almost left in\npajamas. Cheren made her a\plist and forgot his own\nmap.$"
UN_T_UN_Resident2_After::
 .string "A cidade recuperou o\nritmo. Seu parceiro parece\preconhecer cada rua por\nonde voces passaram.$"
UN_T_UN_Resident2_After_En::
 .string "The town found its rhythm\nagain. Your partner seems\pto remember every street\nyou crossed.$"
UN_T_UN_Resident3::
 .string "Dois musicos tocam na\nvaranda. Meu trabalho e\pabrir as janelas para a\ncidade ouvir.$"
UN_T_UN_Resident3_En::
 .string "Two musicians play on a\nbalcony. My job is opening\pwindows so the town can\nhear.$"
UN_T_UN_Resident3_After::
 .string "A cidade recuperou o\nritmo. Seu parceiro parece\preconhecer cada rua por\nonde voces passaram.$"
UN_T_UN_Resident3_After_En::
 .string "The town found its rhythm\nagain. Your partner seems\pto remember every street\nyou crossed.$"
UN_T_UN_Resident4::
 .string "Quase entreguei meu\nPokemon depois do\pdiscurso. Ele segurou\nminha manga. Decidi ouvir\ptambem.$"
UN_T_UN_Resident4_En::
 .string "I almost gave up my\nPokemon after that speech.\pIt held my sleeve. I\ndecided to listen too.$"
UN_T_UN_Resident4_After::
 .string "A cidade recuperou o\nritmo. Seu parceiro parece\preconhecer cada rua por\nonde voces passaram.$"
UN_T_UN_Resident4_After_En::
 .string "The town found its rhythm\nagain. Your partner seems\pto remember every street\nyou crossed.$"
UN_T_UN_Resident5::
 .string "Quando as estacoes mudam,\na praça muda de cheiro.\pHoje sinto chuva chegando.$"
UN_T_UN_Resident5_En::
 .string "The plaza smells different\neach season. Today I can\psmell rain coming.$"
UN_T_UN_Resident5_After::
 .string "A cidade recuperou o\nritmo. Seu parceiro parece\preconhecer cada rua por\nonde voces passaram.$"
UN_T_UN_Resident5_After_En::
 .string "The town found its rhythm\nagain. Your partner seems\pto remember every street\nyou crossed.$"
UN_T_UN_Resident6::
 .string "Cilan serve cha, Chili\nesquenta a comida, Cress\pconfere a agua. Juntos,\nnunca queimam a chaleira.\pQuase nunca.$"
UN_T_UN_Resident6_En::
 .string "Cilan serves tea, Chili\nheats food, Cress checks\pwater. Together they never\nburn a kettle. Almost\pnever.$"
UN_T_UN_Resident6_After::
 .string "A cidade recuperou o\nritmo. Seu parceiro parece\preconhecer cada rua por\nonde voces passaram.$"
UN_T_UN_Resident6_After_En::
 .string "The town found its rhythm\nagain. Your partner seems\pto remember every street\nyou crossed.$"
UN_T_UN_Resident7::
 .string "Fennel cochilou na reuniao\ne acordou com a resposta\pde uma equacao. Ninguem\nsabe se foi sorte.$"
UN_T_UN_Resident7_En::
 .string "Fennel fell asleep in a\nmeeting and woke up with\pan equation answer. Nobody\nknows if it was luck.$"
UN_T_UN_Resident7_After::
 .string "A cidade recuperou o\nritmo. Seu parceiro parece\preconhecer cada rua por\nonde voces passaram.$"
UN_T_UN_Resident7_After_En::
 .string "The town found its rhythm\nagain. Your partner seems\pto remember every street\nyou crossed.$"
UN_T_UN_Resident8::
 .string "Meu filho estuda na\nescola. Ele ensinou o\pprofessor a pedir\ndesculpas ao proprio\pPokemon.$"
UN_T_UN_Resident8_En::
 .string "My son studies at the\nschool. He taught his\pteacher to apologize to\nhis Pokemon.$"
UN_T_UN_Resident8_After::
 .string "A cidade recuperou o\nritmo. Seu parceiro parece\preconhecer cada rua por\nonde voces passaram.$"
UN_T_UN_Resident8_After_En::
 .string "The town found its rhythm\nagain. Your partner seems\pto remember every street\nyou crossed.$"
UN_T_UN_Resident9::
 .string "Transformamos armazens em\natelies. O cheiro da\pmadeira ficou; agora ele\nse mistura com tinta.$"
UN_T_UN_Resident9_En::
 .string "We turned warehouses into\nstudios. The wood smell\pstayed, now mixed with\npaint.$"
UN_T_UN_Resident9_After::
 .string "A cidade recuperou o\nritmo. Seu parceiro parece\preconhecer cada rua por\nonde voces passaram.$"
UN_T_UN_Resident9_After_En::
 .string "The town found its rhythm\nagain. Your partner seems\pto remember every street\nyou crossed.$"
UN_T_UN_Resident10::
 .string "Lenora reconhece um osso\npelo formato. Eu reconheço\pa voz dela no museu\ninteiro.$"
UN_T_UN_Resident10_En::
 .string "Lenora knows a bone by\nshape. I know her voice\panywhere in the museum.$"
UN_T_UN_Resident10_After::
 .string "A cidade recuperou o\nritmo. Seu parceiro parece\preconhecer cada rua por\nonde voces passaram.$"
UN_T_UN_Resident10_After_En::
 .string "The town found its rhythm\nagain. Your partner seems\pto remember every street\nyou crossed.$"
UN_T_UN_Resident11::
 .string "Meu Timburr ajudou a\nreconstruir esta parede.\pNao quero que ninguem\nchame isso de uma vida sem\pescolha.$"
UN_T_UN_Resident11_En::
 .string "My Timburr rebuilt this\nwall. I will not let\panyone call that a life\nwithout choice.$"
UN_T_UN_Resident11_After::
 .string "A cidade recuperou o\nritmo. Seu parceiro parece\preconhecer cada rua por\nonde voces passaram.$"
UN_T_UN_Resident11_After_En::
 .string "The town found its rhythm\nagain. Your partner seems\pto remember every street\nyou crossed.$"
UN_T_UN_Resident12::
 .string "Este porto nunca dorme.\nQuando o barco atrasa, meu\pWingull e o primeiro a\nreclamar.$"
UN_T_UN_Resident12_En::
 .string "This port never sleeps.\nWhen a boat is late, my\pWingull complains first.$"
UN_T_UN_Resident12_After::
 .string "A cidade recuperou o\nritmo. Seu parceiro parece\preconhecer cada rua por\nonde voces passaram.$"
UN_T_UN_Resident12_After_En::
 .string "The town found its rhythm\nagain. Your partner seems\pto remember every street\nyou crossed.$"
UN_T_UN_Resident13::
 .string "Quero pintar o frio que\ntomou o cais. Burgh disse\pque primeiro preciso\naprender a pintar\psilencio.$"
UN_T_UN_Resident13_En::
 .string "I want to paint the cold\nat the dock. Burgh said I\pfirst need to paint\nsilence.$"
UN_T_UN_Resident13_After::
 .string "A cidade recuperou o\nritmo. Seu parceiro parece\preconhecer cada rua por\nonde voces passaram.$"
UN_T_UN_Resident13_After_En::
 .string "The town found its rhythm\nagain. Your partner seems\pto remember every street\nyou crossed.$"
UN_T_UN_Resident14::
 .string "Bianca pediu ajuda para\nprocurar Munna. Todos\ppararam por um minuto.\nTalvez uma cidade grande\ptambém saiba escutar.$"
UN_T_UN_Resident14_En::
 .string "Bianca asked for help\nfinding Munna. Everyone\pstopped for a minute.\nMaybe a big city can\plisten too.$"
UN_T_UN_Resident14_After::
 .string "A cidade recuperou o\nritmo. Seu parceiro parece\preconhecer cada rua por\nonde voces passaram.$"
UN_T_UN_Resident14_After_En::
 .string "The town found its rhythm\nagain. Your partner seems\pto remember every street\nyou crossed.$"
UN_T_UN_Resident15::
 .string "Meu escritorio fica no\nsexto andar. Subo de\pescada; meu Pokemon\ninsiste que elevador nao\pconta como treino.$"
UN_T_UN_Resident15_En::
 .string "My office is on the sixth\nfloor. I take the stairs;\pmy Pokemon says elevators\ndo not count as training.$"
UN_T_UN_Resident15_After::
 .string "A cidade recuperou o\nritmo. Seu parceiro parece\preconhecer cada rua por\nonde voces passaram.$"
UN_T_UN_Resident15_After_En::
 .string "The town found its rhythm\nagain. Your partner seems\pto remember every street\nyou crossed.$"
UN_T_UN_Resident16::
 .string "O artista do atelie troca\nhistorias por retratos. A\pminha ficou torta, mas eu\ngostei.$"
UN_T_UN_Resident16_En::
 .string "The studio artist trades\nstories for portraits.\pMine was crooked, but I\nliked it.$"
UN_T_UN_Resident16_After::
 .string "A cidade recuperou o\nritmo. Seu parceiro parece\preconhecer cada rua por\nonde voces passaram.$"
UN_T_UN_Resident16_After_En::
 .string "The town found its rhythm\nagain. Your partner seems\pto remember every street\nyou crossed.$"
UN_T_UN_Resident17::
 .string "Vi N andando sozinho. Um\nPidove o seguia, sem uma\pPoke Ball sequer.$"
UN_T_UN_Resident17_En::
 .string "I saw N walking alone. A\nPidove followed him\pwithout any Poke Ball.$"
UN_T_UN_Resident17_After::
 .string "A cidade recuperou o\nritmo. Seu parceiro parece\preconhecer cada rua por\nonde voces passaram.$"
UN_T_UN_Resident17_After_En::
 .string "The town found its rhythm\nagain. Your partner seems\pto remember every street\nyou crossed.$"
UN_T_UN_Resident18::
 .string "Escrevo o nome de cada\nparceiro num caderno.\pNenhum deles e apenas um\nnumero.$"
UN_T_UN_Resident18_En::
 .string "I write every partners\nname in a notebook. None\pis just a number.$"
UN_T_UN_Resident19::
 .string "Se meu Pokemon pudesse\nescolher o jantar,\pcomeriamos somente frutas.\nEu tento negociar.$"
UN_T_UN_Resident19_En::
 .string "If my Pokemon chose\ndinner, we would only eat\pberries. I try to\nnegotiate.$"
UN_T_UN_Resident20::
 .string "Minha filha desenha os\nlugares que sonha visitar.\pHoje desenhou voce\nchegando aqui.$"
UN_T_UN_Resident20_En::
 .string "My daughter draws places\nshe dreams of visiting.\pToday she drew you\narriving here.$"
UN_T_UN_Resident21::
 .string "Escrevo o nome de cada\nparceiro num caderno.\pNenhum deles e apenas um\nnumero.$"
UN_T_UN_Resident21_En::
 .string "I write every partners\nname in a notebook. None\pis just a number.$"
UN_T_UN_Resident22::
 .string "Se meu Pokemon pudesse\nescolher o jantar,\pcomeriamos somente frutas.\nEu tento negociar.$"
UN_T_UN_Resident22_En::
 .string "If my Pokemon chose\ndinner, we would only eat\pberries. I try to\nnegotiate.$"
UN_T_UN_Resident23::
 .string "Minha filha desenha os\nlugares que sonha visitar.\pHoje desenhou voce\nchegando aqui.$"
UN_T_UN_Resident23_En::
 .string "My daughter draws places\nshe dreams of visiting.\pToday she drew you\narriving here.$"
UN_T_UN_Resident24::
 .string "Escrevo o nome de cada\nparceiro num caderno.\pNenhum deles e apenas um\nnumero.$"
UN_T_UN_Resident24_En::
 .string "I write every partners\nname in a notebook. None\pis just a number.$"
UN_T_UN_Resident25::
 .string "Se meu Pokemon pudesse\nescolher o jantar,\pcomeriamos somente frutas.\nEu tento negociar.$"
UN_T_UN_Resident25_En::
 .string "If my Pokemon chose\ndinner, we would only eat\pberries. I try to\nnegotiate.$"
UN_T_UN_Resident26::
 .string "Minha filha desenha os\nlugares que sonha visitar.\pHoje desenhou voce\nchegando aqui.$"
UN_T_UN_Resident26_En::
 .string "My daughter draws places\nshe dreams of visiting.\pToday she drew you\narriving here.$"
UN_T_UN_Resident27::
 .string "Escrevo o nome de cada\nparceiro num caderno.\pNenhum deles e apenas um\nnumero.$"
UN_T_UN_Resident27_En::
 .string "I write every partners\nname in a notebook. None\pis just a number.$"
UN_T_UN_Resident28::
 .string "Se meu Pokemon pudesse\nescolher o jantar,\pcomeriamos somente frutas.\nEu tento negociar.$"
UN_T_UN_Resident28_En::
 .string "If my Pokemon chose\ndinner, we would only eat\pberries. I try to\nnegotiate.$"
UN_T_UN_Resident29::
 .string "Minha filha desenha os\nlugares que sonha visitar.\pHoje desenhou voce\nchegando aqui.$"
UN_T_UN_Resident29_En::
 .string "My daughter draws places\nshe dreams of visiting.\pToday she drew you\narriving here.$"
UN_T_UN_Resident30::
 .string "Escrevo o nome de cada\nparceiro num caderno.\pNenhum deles e apenas um\nnumero.$"
UN_T_UN_Resident30_En::
 .string "I write every partners\nname in a notebook. None\pis just a number.$"
UN_T_UN_Resident31::
 .string "Se meu Pokemon pudesse\nescolher o jantar,\pcomeriamos somente frutas.\nEu tento negociar.$"
UN_T_UN_Resident31_En::
 .string "If my Pokemon chose\ndinner, we would only eat\pberries. I try to\nnegotiate.$"
UN_T_UN_Resident32::
 .string "Minha filha desenha os\nlugares que sonha visitar.\pHoje desenhou voce\nchegando aqui.$"
UN_T_UN_Resident32_En::
 .string "My daughter draws places\nshe dreams of visiting.\pToday she drew you\narriving here.$"
UN_T_UN_Resident33::
 .string "Escrevo o nome de cada\nparceiro num caderno.\pNenhum deles e apenas um\nnumero.$"
UN_T_UN_Resident33_En::
 .string "I write every partners\nname in a notebook. None\pis just a number.$"
UN_T_UN_Resident34::
 .string "Se meu Pokemon pudesse\nescolher o jantar,\pcomeriamos somente frutas.\nEu tento negociar.$"
UN_T_UN_Resident34_En::
 .string "If my Pokemon chose\ndinner, we would only eat\pberries. I try to\nnegotiate.$"
UN_T_UN_Resident35::
 .string "Recolho lixo depois das\nbatalhas. Poke Balls\pquebradas nao viram\nsementes so porque caem na\pgrama.$"
UN_T_UN_Resident35_En::
 .string "I collect litter after\nbattles. Broken Poke Balls\pdo not become seeds\nbecause they land in\pgrass.$"
UN_T_UN_Resident36::
 .string "A sombra da ponte muda com\no sol. Meu parceiro acha\pque e um Pokemon gigante\npassando por cima.$"
UN_T_UN_Resident36_En::
 .string "The bridge shadow changes\nwith sunlight. My partner\pthinks it is a giant\nPokemon passing overhead.$"
UN_T_UN_Resident37::
 .string "A sombra da ponte muda com\no sol. Meu parceiro acha\pque e um Pokemon gigante\npassando por cima.$"
UN_T_UN_Resident37_En::
 .string "The bridge shadow changes\nwith sunlight. My partner\pthinks it is a giant\nPokemon passing overhead.$"
UN_T_UN_Resident38::
 .string "Ouco os passos antes de\nver o treinador. Quem\pcorre com cuidado ainda\npercebe o canto dos\pPokemon.$"
UN_T_UN_Resident38_En::
 .string "I hear footsteps before\nseeing trainers. Running\pcarefully still lets you\nhear Pokemon sing.$"
UN_T_UN_Resident39::
 .string "Ouco os passos antes de\nver o treinador. Quem\pcorre com cuidado ainda\npercebe o canto dos\pPokemon.$"
UN_T_UN_Resident39_En::
 .string "I hear footsteps before\nseeing trainers. Running\pcarefully still lets you\nhear Pokemon sing.$"
UN_T_UN_Resident40::
 .string "Recolho lixo depois das\nbatalhas. Poke Balls\pquebradas nao viram\nsementes so porque caem na\pgrama.$"
UN_T_UN_Resident40_En::
 .string "I collect litter after\nbattles. Broken Poke Balls\pdo not become seeds\nbecause they land in\pgrass.$"
UN_T_UN_Resident41::
 .string "Recolho lixo depois das\nbatalhas. Poke Balls\pquebradas nao viram\nsementes so porque caem na\pgrama.$"
UN_T_UN_Resident41_En::
 .string "I collect litter after\nbattles. Broken Poke Balls\pdo not become seeds\nbecause they land in\pgrass.$"
UN_T_UN_Resident42::
 .string "A sombra da ponte muda com\no sol. Meu parceiro acha\pque e um Pokemon gigante\npassando por cima.$"
UN_T_UN_Resident42_En::
 .string "The bridge shadow changes\nwith sunlight. My partner\pthinks it is a giant\nPokemon passing overhead.$"
UN_T_UN_Resident43::
 .string "A sombra da ponte muda com\no sol. Meu parceiro acha\pque e um Pokemon gigante\npassando por cima.$"
UN_T_UN_Resident43_En::
 .string "The bridge shadow changes\nwith sunlight. My partner\pthinks it is a giant\nPokemon passing overhead.$"
UN_T_UN_Resident44::
 .string "Ouco os passos antes de\nver o treinador. Quem\pcorre com cuidado ainda\npercebe o canto dos\pPokemon.$"
UN_T_UN_Resident44_En::
 .string "I hear footsteps before\nseeing trainers. Running\pcarefully still lets you\nhear Pokemon sing.$"
UN_T_UN_Resident45::
 .string "Ouco os passos antes de\nver o treinador. Quem\pcorre com cuidado ainda\npercebe o canto dos\pPokemon.$"
UN_T_UN_Resident45_En::
 .string "I hear footsteps before\nseeing trainers. Running\pcarefully still lets you\nhear Pokemon sing.$"
UN_T_UN_Resident46::
 .string "Recolho lixo depois das\nbatalhas. Poke Balls\pquebradas nao viram\nsementes so porque caem na\pgrama.$"
UN_T_UN_Resident46_En::
 .string "I collect litter after\nbattles. Broken Poke Balls\pdo not become seeds\nbecause they land in\pgrass.$"
UN_T_UN_Resident47::
 .string "Recolho lixo depois das\nbatalhas. Poke Balls\pquebradas nao viram\nsementes so porque caem na\pgrama.$"
UN_T_UN_Resident47_En::
 .string "I collect litter after\nbattles. Broken Poke Balls\pdo not become seeds\nbecause they land in\pgrass.$"
UN_T_UN_Resident48::
 .string "A sombra da ponte muda com\no sol. Meu parceiro acha\pque e um Pokemon gigante\npassando por cima.$"
UN_T_UN_Resident48_En::
 .string "The bridge shadow changes\nwith sunlight. My partner\pthinks it is a giant\nPokemon passing overhead.$"
UN_T_UN_Field0_Intro::
 .string "Vamos testar um passo\nnovo?$"
UN_T_UN_Field0_Intro_En::
 .string "I met my partner on this\nroute. Today you will meet\pboth of us!$"
UN_T_UN_Field0_Defeat::
 .string "Vamos treinar sem esquecer\nde brincar.$"
UN_T_UN_Field0_Defeat_En::
 .string "We will train without\nforgetting to play.$"
UN_T_UN_Field0_After::
 .string "Uma derrota tambem pode\nvirar uma boa historia.$"
UN_T_UN_Field0_After_En::
 .string "A defeat can also become a\ngood story.$"
UN_T_UN_Field1_Intro::
 .string "Conheci meu parceiro nesta\nrota. Hoje voce vai\pconhecer nos dois!$"
UN_T_UN_Field1_Intro_En::
 .string "I met my partner on this\nroute. Today you will meet\pboth of us!$"
UN_T_UN_Field1_Defeat::
 .string "Vamos treinar sem esquecer\nde brincar.$"
UN_T_UN_Field1_Defeat_En::
 .string "We will train without\nforgetting to play.$"
UN_T_UN_Field1_After::
 .string "Uma derrota tambem pode\nvirar uma boa historia.$"
UN_T_UN_Field1_After_En::
 .string "A defeat can also become a\ngood story.$"
UN_T_UN_Field2_Intro::
 .string "Conheci meu parceiro nesta\nrota. Hoje voce vai\pconhecer nos dois!$"
UN_T_UN_Field2_Intro_En::
 .string "I met my partner on this\nroute. Today you will meet\pboth of us!$"
UN_T_UN_Field2_Defeat::
 .string "Vamos treinar sem esquecer\nde brincar.$"
UN_T_UN_Field2_Defeat_En::
 .string "We will train without\nforgetting to play.$"
UN_T_UN_Field2_After::
 .string "Uma derrota tambem pode\nvirar uma boa historia.$"
UN_T_UN_Field2_After_En::
 .string "A defeat can also become a\ngood story.$"
UN_T_UN_Field3_Intro::
 .string "Vamos testar um passo\nnovo?$"
UN_T_UN_Field3_Intro_En::
 .string "I met my partner on this\nroute. Today you will meet\pboth of us!$"
UN_T_UN_Field3_Defeat::
 .string "Vamos treinar sem esquecer\nde brincar.$"
UN_T_UN_Field3_Defeat_En::
 .string "We will train without\nforgetting to play.$"
UN_T_UN_Field3_After::
 .string "Uma derrota tambem pode\nvirar uma boa historia.$"
UN_T_UN_Field3_After_En::
 .string "A defeat can also become a\ngood story.$"
UN_T_UN_Field4_Intro::
 .string "Conheci meu parceiro nesta\nrota. Hoje voce vai\pconhecer nos dois!$"
UN_T_UN_Field4_Intro_En::
 .string "I met my partner on this\nroute. Today you will meet\pboth of us!$"
UN_T_UN_Field4_Defeat::
 .string "Vamos treinar sem esquecer\nde brincar.$"
UN_T_UN_Field4_Defeat_En::
 .string "We will train without\nforgetting to play.$"
UN_T_UN_Field4_After::
 .string "Uma derrota tambem pode\nvirar uma boa historia.$"
UN_T_UN_Field4_After_En::
 .string "A defeat can also become a\ngood story.$"
UN_T_UN_Field5_Intro::
 .string "Conheci meu parceiro nesta\nrota. Hoje voce vai\pconhecer nos dois!$"
UN_T_UN_Field5_Intro_En::
 .string "I met my partner on this\nroute. Today you will meet\pboth of us!$"
UN_T_UN_Field5_Defeat::
 .string "Vamos treinar sem esquecer\nde brincar.$"
UN_T_UN_Field5_Defeat_En::
 .string "We will train without\nforgetting to play.$"
UN_T_UN_Field5_After::
 .string "Uma derrota tambem pode\nvirar uma boa historia.$"
UN_T_UN_Field5_After_En::
 .string "A defeat can also become a\ngood story.$"
UN_T_UN_Field6_Intro::
 .string "Vamos testar um passo\nnovo?$"
UN_T_UN_Field6_Intro_En::
 .string "I met my partner on this\nroute. Today you will meet\pboth of us!$"
UN_T_UN_Field6_Defeat::
 .string "Vamos treinar sem esquecer\nde brincar.$"
UN_T_UN_Field6_Defeat_En::
 .string "We will train without\nforgetting to play.$"
UN_T_UN_Field6_After::
 .string "Uma derrota tambem pode\nvirar uma boa historia.$"
UN_T_UN_Field6_After_En::
 .string "A defeat can also become a\ngood story.$"
UN_T_UN_Field7_Intro::
 .string "Conheci meu parceiro nesta\nrota. Hoje voce vai\pconhecer nos dois!$"
UN_T_UN_Field7_Intro_En::
 .string "I met my partner on this\nroute. Today you will meet\pboth of us!$"
UN_T_UN_Field7_Defeat::
 .string "Vamos treinar sem esquecer\nde brincar.$"
UN_T_UN_Field7_Defeat_En::
 .string "We will train without\nforgetting to play.$"
UN_T_UN_Field7_After::
 .string "Uma derrota tambem pode\nvirar uma boa historia.$"
UN_T_UN_Field7_After_En::
 .string "A defeat can also become a\ngood story.$"
UN_T_UN_Field8_Intro::
 .string "Conheci meu parceiro nesta\nrota. Hoje voce vai\pconhecer nos dois!$"
UN_T_UN_Field8_Intro_En::
 .string "I met my partner on this\nroute. Today you will meet\pboth of us!$"
UN_T_UN_Field8_Defeat::
 .string "Vamos treinar sem esquecer\nde brincar.$"
UN_T_UN_Field8_Defeat_En::
 .string "We will train without\nforgetting to play.$"
UN_T_UN_Field8_After::
 .string "Uma derrota tambem pode\nvirar uma boa historia.$"
UN_T_UN_Field8_After_En::
 .string "A defeat can also become a\ngood story.$"
UN_T_UN_Field9_Intro::
 .string "Vamos testar um passo\nnovo?$"
UN_T_UN_Field9_Intro_En::
 .string "I met my partner on this\nroute. Today you will meet\pboth of us!$"
UN_T_UN_Field9_Defeat::
 .string "Vamos treinar sem esquecer\nde brincar.$"
UN_T_UN_Field9_Defeat_En::
 .string "We will train without\nforgetting to play.$"
UN_T_UN_Field9_After::
 .string "Uma derrota tambem pode\nvirar uma boa historia.$"
UN_T_UN_Field9_After_En::
 .string "A defeat can also become a\ngood story.$"
UN_T_UN_Field10_Intro::
 .string "Conheci meu parceiro nesta\nrota. Hoje voce vai\pconhecer nos dois!$"
UN_T_UN_Field10_Intro_En::
 .string "I met my partner on this\nroute. Today you will meet\pboth of us!$"
UN_T_UN_Field10_Defeat::
 .string "Vamos treinar sem esquecer\nde brincar.$"
UN_T_UN_Field10_Defeat_En::
 .string "We will train without\nforgetting to play.$"
UN_T_UN_Field10_After::
 .string "Uma derrota tambem pode\nvirar uma boa historia.$"
UN_T_UN_Field10_After_En::
 .string "A defeat can also become a\ngood story.$"
UN_T_UN_Field11_Intro::
 .string "Conheci meu parceiro nesta\nrota. Hoje voce vai\pconhecer nos dois!$"
UN_T_UN_Field11_Intro_En::
 .string "I met my partner on this\nroute. Today you will meet\pboth of us!$"
UN_T_UN_Field11_Defeat::
 .string "Vamos treinar sem esquecer\nde brincar.$"
UN_T_UN_Field11_Defeat_En::
 .string "We will train without\nforgetting to play.$"
UN_T_UN_Field11_After::
 .string "Uma derrota tambem pode\nvirar uma boa historia.$"
UN_T_UN_Field11_After_En::
 .string "A defeat can also become a\ngood story.$"
UN_T_UN_Field12_Intro::
 .string "Vamos testar um passo\nnovo?$"
UN_T_UN_Field12_Intro_En::
 .string "I met my partner on this\nroute. Today you will meet\pboth of us!$"
UN_T_UN_Field12_Defeat::
 .string "Vamos treinar sem esquecer\nde brincar.$"
UN_T_UN_Field12_Defeat_En::
 .string "We will train without\nforgetting to play.$"
UN_T_UN_Field12_After::
 .string "Uma derrota tambem pode\nvirar uma boa historia.$"
UN_T_UN_Field12_After_En::
 .string "A defeat can also become a\ngood story.$"
UN_T_UN_Field13_Intro::
 .string "Conheci meu parceiro nesta\nrota. Hoje voce vai\pconhecer nos dois!$"
UN_T_UN_Field13_Intro_En::
 .string "I met my partner on this\nroute. Today you will meet\pboth of us!$"
UN_T_UN_Field13_Defeat::
 .string "Vamos treinar sem esquecer\nde brincar.$"
UN_T_UN_Field13_Defeat_En::
 .string "We will train without\nforgetting to play.$"
UN_T_UN_Field13_After::
 .string "Uma derrota tambem pode\nvirar uma boa historia.$"
UN_T_UN_Field13_After_En::
 .string "A defeat can also become a\ngood story.$"
UN_T_UN_Field14_Intro::
 .string "Conheci meu parceiro nesta\nrota. Hoje voce vai\pconhecer nos dois!$"
UN_T_UN_Field14_Intro_En::
 .string "I met my partner on this\nroute. Today you will meet\pboth of us!$"
UN_T_UN_Field14_Defeat::
 .string "Vamos treinar sem esquecer\nde brincar.$"
UN_T_UN_Field14_Defeat_En::
 .string "We will train without\nforgetting to play.$"
UN_T_UN_Field14_After::
 .string "Uma derrota tambem pode\nvirar uma boa historia.$"
UN_T_UN_Field14_After_En::
 .string "A defeat can also become a\ngood story.$"
UN_T_UN_Field15_Intro::
 .string "Vamos testar um passo\nnovo?$"
UN_T_UN_Field15_Intro_En::
 .string "I met my partner on this\nroute. Today you will meet\pboth of us!$"
UN_T_UN_Field15_Defeat::
 .string "Vamos treinar sem esquecer\nde brincar.$"
UN_T_UN_Field15_Defeat_En::
 .string "We will train without\nforgetting to play.$"
UN_T_UN_Field15_After::
 .string "Uma derrota tambem pode\nvirar uma boa historia.$"
UN_T_UN_Field15_After_En::
 .string "A defeat can also become a\ngood story.$"
UN_T_UN_Field16_Intro::
 .string "Conheci meu parceiro nesta\nrota. Hoje voce vai\pconhecer nos dois!$"
UN_T_UN_Field16_Intro_En::
 .string "I met my partner on this\nroute. Today you will meet\pboth of us!$"
UN_T_UN_Field16_Defeat::
 .string "Vamos treinar sem esquecer\nde brincar.$"
UN_T_UN_Field16_Defeat_En::
 .string "We will train without\nforgetting to play.$"
UN_T_UN_Field16_After::
 .string "Uma derrota tambem pode\nvirar uma boa historia.$"
UN_T_UN_Field16_After_En::
 .string "A defeat can also become a\ngood story.$"
UN_T_UN_Field17_Intro::
 .string "Conheci meu parceiro nesta\nrota. Hoje voce vai\pconhecer nos dois!$"
UN_T_UN_Field17_Intro_En::
 .string "I met my partner on this\nroute. Today you will meet\pboth of us!$"
UN_T_UN_Field17_Defeat::
 .string "Vamos treinar sem esquecer\nde brincar.$"
UN_T_UN_Field17_Defeat_En::
 .string "We will train without\nforgetting to play.$"
UN_T_UN_Field17_After::
 .string "Uma derrota tambem pode\nvirar uma boa historia.$"
UN_T_UN_Field17_After_En::
 .string "A defeat can also become a\ngood story.$"
UN_T_UN_Field18_Intro::
 .string "Vamos testar um passo\nnovo?$"
UN_T_UN_Field18_Intro_En::
 .string "I met my partner on this\nroute. Today you will meet\pboth of us!$"
UN_T_UN_Field18_Defeat::
 .string "Vamos treinar sem esquecer\nde brincar.$"
UN_T_UN_Field18_Defeat_En::
 .string "We will train without\nforgetting to play.$"
UN_T_UN_Field18_After::
 .string "Uma derrota tambem pode\nvirar uma boa historia.$"
UN_T_UN_Field18_After_En::
 .string "A defeat can also become a\ngood story.$"
UN_T_UN_Field19_Intro::
 .string "Conheci meu parceiro nesta\nrota. Hoje voce vai\pconhecer nos dois!$"
UN_T_UN_Field19_Intro_En::
 .string "I met my partner on this\nroute. Today you will meet\pboth of us!$"
UN_T_UN_Field19_Defeat::
 .string "Vamos treinar sem esquecer\nde brincar.$"
UN_T_UN_Field19_Defeat_En::
 .string "We will train without\nforgetting to play.$"
UN_T_UN_Field19_After::
 .string "Uma derrota tambem pode\nvirar uma boa historia.$"
UN_T_UN_Field19_After_En::
 .string "A defeat can also become a\ngood story.$"
UN_T_UN_Field20_Intro::
 .string "Conheci meu parceiro nesta\nrota. Hoje voce vai\pconhecer nos dois!$"
UN_T_UN_Field20_Intro_En::
 .string "I met my partner on this\nroute. Today you will meet\pboth of us!$"
UN_T_UN_Field20_Defeat::
 .string "Vamos treinar sem esquecer\nde brincar.$"
UN_T_UN_Field20_Defeat_En::
 .string "We will train without\nforgetting to play.$"
UN_T_UN_Field20_After::
 .string "Uma derrota tambem pode\nvirar uma boa historia.$"
UN_T_UN_Field20_After_En::
 .string "A defeat can also become a\ngood story.$"
UN_T_UN_Field21_Intro::
 .string "Vamos testar um passo\nnovo?$"
UN_T_UN_Field21_Intro_En::
 .string "I met my partner on this\nroute. Today you will meet\pboth of us!$"
UN_T_UN_Field21_Defeat::
 .string "Vamos treinar sem esquecer\nde brincar.$"
UN_T_UN_Field21_Defeat_En::
 .string "We will train without\nforgetting to play.$"
UN_T_UN_Field21_After::
 .string "Uma derrota tambem pode\nvirar uma boa historia.$"
UN_T_UN_Field21_After_En::
 .string "A defeat can also become a\ngood story.$"
UN_T_UN_Field22_Intro::
 .string "Conheci meu parceiro nesta\nrota. Hoje voce vai\pconhecer nos dois!$"
UN_T_UN_Field22_Intro_En::
 .string "I met my partner on this\nroute. Today you will meet\pboth of us!$"
UN_T_UN_Field22_Defeat::
 .string "Vamos treinar sem esquecer\nde brincar.$"
UN_T_UN_Field22_Defeat_En::
 .string "We will train without\nforgetting to play.$"
UN_T_UN_Field22_After::
 .string "Uma derrota tambem pode\nvirar uma boa historia.$"
UN_T_UN_Field22_After_En::
 .string "A defeat can also become a\ngood story.$"
UN_T_UN_Field23_Intro::
 .string "Conheci meu parceiro nesta\nrota. Hoje voce vai\pconhecer nos dois!$"
UN_T_UN_Field23_Intro_En::
 .string "I met my partner on this\nroute. Today you will meet\pboth of us!$"
UN_T_UN_Field23_Defeat::
 .string "Vamos treinar sem esquecer\nde brincar.$"
UN_T_UN_Field23_Defeat_En::
 .string "We will train without\nforgetting to play.$"
UN_T_UN_Field23_After::
 .string "Uma derrota tambem pode\nvirar uma boa historia.$"
UN_T_UN_Field23_After_En::
 .string "A defeat can also become a\ngood story.$"
UN_T_UN_Field24_Intro::
 .string "Vamos testar um passo\nnovo?$"
UN_T_UN_Field24_Intro_En::
 .string "I met my partner on this\nroute. Today you will meet\pboth of us!$"
UN_T_UN_Field24_Defeat::
 .string "Vamos treinar sem esquecer\nde brincar.$"
UN_T_UN_Field24_Defeat_En::
 .string "We will train without\nforgetting to play.$"
UN_T_UN_Field24_After::
 .string "Uma derrota tambem pode\nvirar uma boa historia.$"
UN_T_UN_Field24_After_En::
 .string "A defeat can also become a\ngood story.$"
UN_T_UN_Field25_Intro::
 .string "Conheci meu parceiro nesta\nrota. Hoje voce vai\pconhecer nos dois!$"
UN_T_UN_Field25_Intro_En::
 .string "I met my partner on this\nroute. Today you will meet\pboth of us!$"
UN_T_UN_Field25_Defeat::
 .string "Vamos treinar sem esquecer\nde brincar.$"
UN_T_UN_Field25_Defeat_En::
 .string "We will train without\nforgetting to play.$"
UN_T_UN_Field25_After::
 .string "Uma derrota tambem pode\nvirar uma boa historia.$"
UN_T_UN_Field25_After_En::
 .string "A defeat can also become a\ngood story.$"
UN_T_UN_Field26_Intro::
 .string "Conheci meu parceiro nesta\nrota. Hoje voce vai\pconhecer nos dois!$"
UN_T_UN_Field26_Intro_En::
 .string "I met my partner on this\nroute. Today you will meet\pboth of us!$"
UN_T_UN_Field26_Defeat::
 .string "Vamos treinar sem esquecer\nde brincar.$"
UN_T_UN_Field26_Defeat_En::
 .string "We will train without\nforgetting to play.$"
UN_T_UN_Field26_After::
 .string "Uma derrota tambem pode\nvirar uma boa historia.$"
UN_T_UN_Field26_After_En::
 .string "A defeat can also become a\ngood story.$"
UN_T_UN_Field27_Intro::
 .string "Vamos testar um passo\nnovo?$"
UN_T_UN_Field27_Intro_En::
 .string "I met my partner on this\nroute. Today you will meet\pboth of us!$"
UN_T_UN_Field27_Defeat::
 .string "Vamos treinar sem esquecer\nde brincar.$"
UN_T_UN_Field27_Defeat_En::
 .string "We will train without\nforgetting to play.$"
UN_T_UN_Field27_After::
 .string "Uma derrota tambem pode\nvirar uma boa historia.$"
UN_T_UN_Field27_After_En::
 .string "A defeat can also become a\ngood story.$"
UN_T_UN_Field28_Intro::
 .string "Conheci meu parceiro nesta\nrota. Hoje voce vai\pconhecer nos dois!$"
UN_T_UN_Field28_Intro_En::
 .string "I met my partner on this\nroute. Today you will meet\pboth of us!$"
UN_T_UN_Field28_Defeat::
 .string "Vamos treinar sem esquecer\nde brincar.$"
UN_T_UN_Field28_Defeat_En::
 .string "We will train without\nforgetting to play.$"
UN_T_UN_Field28_After::
 .string "Uma derrota tambem pode\nvirar uma boa historia.$"
UN_T_UN_Field28_After_En::
 .string "A defeat can also become a\ngood story.$"
UN_T_UN_Field29_Intro::
 .string "Conheci meu parceiro nesta\nrota. Hoje voce vai\pconhecer nos dois!$"
UN_T_UN_Field29_Intro_En::
 .string "I met my partner on this\nroute. Today you will meet\pboth of us!$"
UN_T_UN_Field29_Defeat::
 .string "Vamos treinar sem esquecer\nde brincar.$"
UN_T_UN_Field29_Defeat_En::
 .string "We will train without\nforgetting to play.$"
UN_T_UN_Field29_After::
 .string "Uma derrota tambem pode\nvirar uma boa historia.$"
UN_T_UN_Field29_After_En::
 .string "A defeat can also become a\ngood story.$"
UN_T_UN_Field30_Intro::
 .string "Vamos testar um passo\nnovo?$"
UN_T_UN_Field30_Intro_En::
 .string "I met my partner on this\nroute. Today you will meet\pboth of us!$"
UN_T_UN_Field30_Defeat::
 .string "Vamos treinar sem esquecer\nde brincar.$"
UN_T_UN_Field30_Defeat_En::
 .string "We will train without\nforgetting to play.$"
UN_T_UN_Field30_After::
 .string "Uma derrota tambem pode\nvirar uma boa historia.$"
UN_T_UN_Field30_After_En::
 .string "A defeat can also become a\ngood story.$"
UN_T_UN_Field31_Intro::
 .string "Conheci meu parceiro nesta\nrota. Hoje voce vai\pconhecer nos dois!$"
UN_T_UN_Field31_Intro_En::
 .string "I met my partner on this\nroute. Today you will meet\pboth of us!$"
UN_T_UN_Field31_Defeat::
 .string "Vamos treinar sem esquecer\nde brincar.$"
UN_T_UN_Field31_Defeat_En::
 .string "We will train without\nforgetting to play.$"
UN_T_UN_Field31_After::
 .string "Uma derrota tambem pode\nvirar uma boa historia.$"
UN_T_UN_Field31_After_En::
 .string "A defeat can also become a\ngood story.$"
UN_T_UN_Field32_Intro::
 .string "Conheci meu parceiro nesta\nrota. Hoje voce vai\pconhecer nos dois!$"
UN_T_UN_Field32_Intro_En::
 .string "I met my partner on this\nroute. Today you will meet\pboth of us!$"
UN_T_UN_Field32_Defeat::
 .string "Vamos treinar sem esquecer\nde brincar.$"
UN_T_UN_Field32_Defeat_En::
 .string "We will train without\nforgetting to play.$"
UN_T_UN_Field32_After::
 .string "Uma derrota tambem pode\nvirar uma boa historia.$"
UN_T_UN_Field32_After_En::
 .string "A defeat can also become a\ngood story.$"
UN_T_UN_Field33_Intro::
 .string "Vamos testar um passo\nnovo?$"
UN_T_UN_Field33_Intro_En::
 .string "I met my partner on this\nroute. Today you will meet\pboth of us!$"
UN_T_UN_Field33_Defeat::
 .string "Vamos treinar sem esquecer\nde brincar.$"
UN_T_UN_Field33_Defeat_En::
 .string "We will train without\nforgetting to play.$"
UN_T_UN_Field33_After::
 .string "Uma derrota tambem pode\nvirar uma boa historia.$"
UN_T_UN_Field33_After_En::
 .string "A defeat can also become a\ngood story.$"
UN_T_UN_Field34_Intro::
 .string "Conheci meu parceiro nesta\nrota. Hoje voce vai\pconhecer nos dois!$"
UN_T_UN_Field34_Intro_En::
 .string "I met my partner on this\nroute. Today you will meet\pboth of us!$"
UN_T_UN_Field34_Defeat::
 .string "Vamos treinar sem esquecer\nde brincar.$"
UN_T_UN_Field34_Defeat_En::
 .string "We will train without\nforgetting to play.$"
UN_T_UN_Field34_After::
 .string "Uma derrota tambem pode\nvirar uma boa historia.$"
UN_T_UN_Field34_After_En::
 .string "A defeat can also become a\ngood story.$"
UN_T_UN_Field35_Intro::
 .string "Conheci meu parceiro nesta\nrota. Hoje voce vai\pconhecer nos dois!$"
UN_T_UN_Field35_Intro_En::
 .string "I met my partner on this\nroute. Today you will meet\pboth of us!$"
UN_T_UN_Field35_Defeat::
 .string "Vamos treinar sem esquecer\nde brincar.$"
UN_T_UN_Field35_Defeat_En::
 .string "We will train without\nforgetting to play.$"
UN_T_UN_Field35_After::
 .string "Uma derrota tambem pode\nvirar uma boa historia.$"
UN_T_UN_Field35_After_En::
 .string "A defeat can also become a\ngood story.$"
UN_T_UN_Field36_Intro::
 .string "Vamos testar um passo\nnovo?$"
UN_T_UN_Field36_Intro_En::
 .string "I met my partner on this\nroute. Today you will meet\pboth of us!$"
UN_T_UN_Field36_Defeat::
 .string "Vamos treinar sem esquecer\nde brincar.$"
UN_T_UN_Field36_Defeat_En::
 .string "We will train without\nforgetting to play.$"
UN_T_UN_Field36_After::
 .string "Uma derrota tambem pode\nvirar uma boa historia.$"
UN_T_UN_Field36_After_En::
 .string "A defeat can also become a\ngood story.$"
UN_T_UN_Field37_Intro::
 .string "Conheci meu parceiro nesta\nrota. Hoje voce vai\pconhecer nos dois!$"
UN_T_UN_Field37_Intro_En::
 .string "I met my partner on this\nroute. Today you will meet\pboth of us!$"
UN_T_UN_Field37_Defeat::
 .string "Vamos treinar sem esquecer\nde brincar.$"
UN_T_UN_Field37_Defeat_En::
 .string "We will train without\nforgetting to play.$"
UN_T_UN_Field37_After::
 .string "Uma derrota tambem pode\nvirar uma boa historia.$"
UN_T_UN_Field37_After_En::
 .string "A defeat can also become a\ngood story.$"
UN_T_UN_Field38_Intro::
 .string "Conheci meu parceiro nesta\nrota. Hoje voce vai\pconhecer nos dois!$"
UN_T_UN_Field38_Intro_En::
 .string "I met my partner on this\nroute. Today you will meet\pboth of us!$"
UN_T_UN_Field38_Defeat::
 .string "Vamos treinar sem esquecer\nde brincar.$"
UN_T_UN_Field38_Defeat_En::
 .string "We will train without\nforgetting to play.$"
UN_T_UN_Field38_After::
 .string "Uma derrota tambem pode\nvirar uma boa historia.$"
UN_T_UN_Field38_After_En::
 .string "A defeat can also become a\ngood story.$"

UN_T_Route4Ranger::
 .string "Castelia ficou para tras!\nO caminho para Nimbasa se abre.\pA paisagem ainda esta sendo\nrestaurada. Va com cuidado.$"
UN_T_Route4Ranger_En::
 .string "Castelia is behind us!\nThe road to Nimbasa opens.\pThe landscape is still being\nrestored. Travel carefully.$"
UN_T_Route4Ranger_After::
 .string "Continue ao norte para Nimbasa.$"
UN_T_Route4Ranger_After_En::
 .string "Keep north toward Nimbasa.$"
UN_T_Route4Traveler::
 .string "As dunas da Rota 4 mudam\na cada estacao. Aventura!$"
UN_T_Route4Traveler_En::
 .string "Route 4's dunes shift\nwith every season. Adventure!$"
UN_T_NimbasaArrival::
 .string "Bem-vindo a Nimbasa!\nA cidade voltou a brilhar.\pO Centro Pokemon esta aberto.\nMais desafios virao depois.$"
UN_T_NimbasaArrival_En::
 .string "Welcome to Nimbasa!\nThe city lights shine again.\pThe Pokemon Center is open.\nMore challenges are coming.$"
UN_T_NimbasaArrival_After::
 .string "Explore Nimbasa e salve no\nCentro antes de prosseguir.$"
UN_T_NimbasaArrival_After_En::
 .string "Explore Nimbasa and save at\nthe Center before moving on.$"
UN_T_NimbasaMusician::
 .string "Ouviu? A musica e a alma\nde Nimbasa. Logo teremos mais!$"
UN_T_NimbasaMusician_En::
 .string "Hear that? Music is the heart\nof Nimbasa. More is on the way!$"

UN_T_Route4Gate::
 .string "O guia conhece a travessia.\nFale com ele na Rota 4!$"
UN_T_Route4Gate_En::
 .string "The ranger knows this way.\nTalk to him on Route 4!$"
