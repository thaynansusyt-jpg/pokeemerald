SI_C_MARS::
 lock
 faceplayer
 goto_if_lt VAR_SI_STAGE, 7, SI_C_NotYet
 goto_if_gt VAR_SI_STAGE, 7, SI_C_Done

 trainerbattle_single TRAINER_SI_MARS, SI_C_Text_MARS_Intro, SI_C_Text_MARS_Defeat, SI_C_MARS_Win, NO_MUSIC
 goto SI_C_MARS_Win
SI_C_MARS_Win::

 setvar VAR_SI_STAGE, 8

 msgbox SI_C_Text_MARS_After, MSGBOX_DEFAULT

 releaseall
 end

SI_C_GARDENIA::
 lock
 faceplayer
 goto_if_lt VAR_SI_STAGE, 8, SI_C_NotYet
 goto_if_gt VAR_SI_STAGE, 8, SI_C_Done

 trainerbattle_single TRAINER_SI_GARDENIA, SI_C_Text_GARDENIA_Intro, SI_C_Text_GARDENIA_Defeat, SI_C_GARDENIA_Win, NO_MUSIC
 goto SI_C_GARDENIA_Win
SI_C_GARDENIA_Win::

 setvar VAR_SI_STAGE, 9

 setvar VAR_SI_BADGES, 2
 setflag FLAG_BADGE02_GET
 call Common_EventScript_PlayGymBadgeFanfare

 giveitem ITEM_HM_CUT
 giveitem ITEM_MACH_BIKE

 msgbox SI_C_Text_GARDENIA_After, MSGBOX_DEFAULT

 releaseall
 end

SI_C_JUPITER::
 lock
 faceplayer
 goto_if_lt VAR_SI_STAGE, 9, SI_C_NotYet
 goto_if_gt VAR_SI_STAGE, 9, SI_C_Done

 trainerbattle_single TRAINER_SI_JUPITER, SI_C_Text_JUPITER_Intro, SI_C_Text_JUPITER_Defeat, SI_C_JUPITER_Win, NO_MUSIC
 goto SI_C_JUPITER_Win
SI_C_JUPITER_Win::

 setvar VAR_SI_STAGE, 10

 msgbox SI_C_Text_JUPITER_After, MSGBOX_DEFAULT

 releaseall
 end

SI_C_FANTINA::
 lock
 faceplayer
 goto_if_lt VAR_SI_STAGE, 10, SI_C_NotYet
 goto_if_gt VAR_SI_STAGE, 10, SI_C_Done

 trainerbattle_single TRAINER_SI_FANTINA, SI_C_Text_FANTINA_Intro, SI_C_Text_FANTINA_Defeat, SI_C_FANTINA_Win, NO_MUSIC
 goto SI_C_FANTINA_Win
SI_C_FANTINA_Win::

 setvar VAR_SI_STAGE, 11

 setvar VAR_SI_BADGES, 3
 setflag FLAG_BADGE03_GET
 call Common_EventScript_PlayGymBadgeFanfare

 msgbox SI_C_Text_FANTINA_After, MSGBOX_DEFAULT

 releaseall
 end

SI_C_MAYLENE::
 lock
 faceplayer
 goto_if_lt VAR_SI_STAGE, 11, SI_C_NotYet
 goto_if_gt VAR_SI_STAGE, 11, SI_C_Done

 trainerbattle_single TRAINER_SI_MAYLENE, SI_C_Text_MAYLENE_Intro, SI_C_Text_MAYLENE_Defeat, SI_C_MAYLENE_Win, NO_MUSIC
 goto SI_C_MAYLENE_Win
SI_C_MAYLENE_Win::

 setvar VAR_SI_STAGE, 12

 setvar VAR_SI_BADGES, 4
 setflag FLAG_BADGE04_GET
 call Common_EventScript_PlayGymBadgeFanfare

 msgbox SI_C_Text_MAYLENE_After, MSGBOX_DEFAULT

 releaseall
 end

SI_C_SATURN_VALOR::
 lock
 faceplayer
 goto_if_lt VAR_SI_STAGE, 12, SI_C_NotYet
 goto_if_gt VAR_SI_STAGE, 12, SI_C_Done

 trainerbattle_single TRAINER_SI_SATURN_VALOR, SI_C_Text_SATURN_VALOR_Intro, SI_C_Text_SATURN_VALOR_Defeat, SI_C_SATURN_VALOR_Win, NO_MUSIC
 goto SI_C_SATURN_VALOR_Win
SI_C_SATURN_VALOR_Win::

 setvar VAR_SI_STAGE, 13

 msgbox SI_C_Text_SATURN_VALOR_After, MSGBOX_DEFAULT

 releaseall
 end

SI_C_WAKE::
 lock
 faceplayer
 goto_if_lt VAR_SI_STAGE, 13, SI_C_NotYet
 goto_if_gt VAR_SI_STAGE, 13, SI_C_Done

 trainerbattle_single TRAINER_SI_WAKE, SI_C_Text_WAKE_Intro, SI_C_Text_WAKE_Defeat, SI_C_WAKE_Win, NO_MUSIC
 goto SI_C_WAKE_Win
SI_C_WAKE_Win::

 setvar VAR_SI_STAGE, 14

 setvar VAR_SI_BADGES, 5
 setflag FLAG_BADGE05_GET
 call Common_EventScript_PlayGymBadgeFanfare

 msgbox SI_C_Text_WAKE_After, MSGBOX_DEFAULT

 releaseall
 end

SI_C_BYRON::
 lock
 faceplayer
 goto_if_lt VAR_SI_STAGE, 15, SI_C_NotYet
 goto_if_gt VAR_SI_STAGE, 15, SI_C_Done

 trainerbattle_single TRAINER_SI_BYRON, SI_C_Text_BYRON_Intro, SI_C_Text_BYRON_Defeat, SI_C_BYRON_Win, NO_MUSIC
 goto SI_C_BYRON_Win
SI_C_BYRON_Win::

 setvar VAR_SI_STAGE, 16

 setvar VAR_SI_BADGES, 6
 setflag FLAG_BADGE06_GET
 call Common_EventScript_PlayGymBadgeFanfare

 giveitem ITEM_HM_STRENGTH

 msgbox SI_C_Text_BYRON_After, MSGBOX_DEFAULT

 releaseall
 end

SI_C_SATURN_ACUITY::
 lock
 faceplayer
 goto_if_lt VAR_SI_STAGE, 17, SI_C_NotYet
 goto_if_gt VAR_SI_STAGE, 17, SI_C_Done

 trainerbattle_single TRAINER_SI_SATURN_ACUITY, SI_C_Text_SATURN_ACUITY_Intro, SI_C_Text_SATURN_ACUITY_Defeat, SI_C_SATURN_ACUITY_Win, NO_MUSIC
 goto SI_C_SATURN_ACUITY_Win
SI_C_SATURN_ACUITY_Win::

 setvar VAR_SI_STAGE, 18

 msgbox SI_C_Text_SATURN_ACUITY_After, MSGBOX_DEFAULT

 releaseall
 end

SI_C_CANDICE::
 lock
 faceplayer
 goto_if_lt VAR_SI_STAGE, 18, SI_C_NotYet
 goto_if_gt VAR_SI_STAGE, 18, SI_C_Done

 trainerbattle_single TRAINER_SI_CANDICE, SI_C_Text_CANDICE_Intro, SI_C_Text_CANDICE_Defeat, SI_C_CANDICE_Win, NO_MUSIC
 goto SI_C_CANDICE_Win
SI_C_CANDICE_Win::

 setvar VAR_SI_STAGE, 19

 setvar VAR_SI_BADGES, 7
 setflag FLAG_BADGE07_GET
 call Common_EventScript_PlayGymBadgeFanfare

 msgbox SI_C_Text_CANDICE_After, MSGBOX_DEFAULT

 releaseall
 end

SI_C_CYRUS::
 lock
 faceplayer
 goto_if_lt VAR_SI_STAGE, 19, SI_C_NotYet
 goto_if_gt VAR_SI_STAGE, 19, SI_C_Done

 trainerbattle_single TRAINER_SI_CYRUS, SI_C_Text_CYRUS_Intro, SI_C_Text_CYRUS_Defeat, SI_C_CYRUS_Win, NO_MUSIC
 goto SI_C_CYRUS_Win
SI_C_CYRUS_Win::

 setvar VAR_SI_STAGE, 20

 msgbox SI_C_Text_CYRUS_After, MSGBOX_DEFAULT

 releaseall
 end

SI_C_CYRUS_FINAL::
 lock
 faceplayer
 goto_if_lt VAR_SI_STAGE, 21, SI_C_NotYet
 goto_if_gt VAR_SI_STAGE, 21, SI_C_Done

 trainerbattle_single TRAINER_SI_CYRUS_FINAL, SI_C_Text_CYRUS_FINAL_Intro, SI_C_Text_CYRUS_FINAL_Defeat, SI_C_CYRUS_FINAL_Win, NO_MUSIC
 goto SI_C_CYRUS_FINAL_Win
SI_C_CYRUS_FINAL_Win::

 setvar VAR_SI_STAGE, 22

 msgbox SI_C_Text_CYRUS_FINAL_After, MSGBOX_DEFAULT

 goto SI_C_Restoration

SI_C_VOLKNER::
 lock
 faceplayer
 goto_if_lt VAR_SI_STAGE, 23, SI_C_NotYet
 goto_if_gt VAR_SI_STAGE, 23, SI_C_Done

 trainerbattle_single TRAINER_SI_VOLKNER, SI_C_Text_VOLKNER_Intro, SI_C_Text_VOLKNER_Defeat, SI_C_VOLKNER_Win, NO_MUSIC
 goto SI_C_VOLKNER_Win
SI_C_VOLKNER_Win::

 setvar VAR_SI_STAGE, 24

 setvar VAR_SI_BADGES, 8
 setflag FLAG_BADGE08_GET
 call Common_EventScript_PlayGymBadgeFanfare

 giveitem ITEM_HM_WATERFALL

 msgbox SI_C_Text_VOLKNER_After, MSGBOX_DEFAULT

 releaseall
 end

SI_C_AARON::
 lock
 faceplayer
 goto_if_lt VAR_SI_STAGE, 24, SI_C_NotYet
 goto_if_gt VAR_SI_STAGE, 24, SI_C_Done

 trainerbattle_single TRAINER_SI_AARON, SI_C_Text_AARON_Intro, SI_C_Text_AARON_Defeat, SI_C_AARON_Win, NO_MUSIC
 goto SI_C_AARON_Win
SI_C_AARON_Win::

 setvar VAR_SI_STAGE, 25

 msgbox SI_C_Text_AARON_After, MSGBOX_DEFAULT

 releaseall
 end

SI_C_BERTHA::
 lock
 faceplayer
 goto_if_lt VAR_SI_STAGE, 25, SI_C_NotYet
 goto_if_gt VAR_SI_STAGE, 25, SI_C_Done

 trainerbattle_single TRAINER_SI_BERTHA, SI_C_Text_BERTHA_Intro, SI_C_Text_BERTHA_Defeat, SI_C_BERTHA_Win, NO_MUSIC
 goto SI_C_BERTHA_Win
SI_C_BERTHA_Win::

 setvar VAR_SI_STAGE, 26

 msgbox SI_C_Text_BERTHA_After, MSGBOX_DEFAULT

 releaseall
 end

SI_C_FLINT::
 lock
 faceplayer
 goto_if_lt VAR_SI_STAGE, 26, SI_C_NotYet
 goto_if_gt VAR_SI_STAGE, 26, SI_C_Done

 trainerbattle_single TRAINER_SI_FLINT, SI_C_Text_FLINT_Intro, SI_C_Text_FLINT_Defeat, SI_C_FLINT_Win, NO_MUSIC
 goto SI_C_FLINT_Win
SI_C_FLINT_Win::

 setvar VAR_SI_STAGE, 27

 msgbox SI_C_Text_FLINT_After, MSGBOX_DEFAULT

 releaseall
 end

SI_C_LUCIAN::
 lock
 faceplayer
 goto_if_lt VAR_SI_STAGE, 27, SI_C_NotYet
 goto_if_gt VAR_SI_STAGE, 27, SI_C_Done

 trainerbattle_single TRAINER_SI_LUCIAN, SI_C_Text_LUCIAN_Intro, SI_C_Text_LUCIAN_Defeat, SI_C_LUCIAN_Win, NO_MUSIC
 goto SI_C_LUCIAN_Win
SI_C_LUCIAN_Win::

 setvar VAR_SI_STAGE, 28

 msgbox SI_C_Text_LUCIAN_After, MSGBOX_DEFAULT

 releaseall
 end

SI_C_CYNTHIA::
 lock
 faceplayer
 goto_if_lt VAR_SI_STAGE, 28, SI_C_NotYet
 goto_if_gt VAR_SI_STAGE, 28, SI_C_Done

 trainerbattle_single TRAINER_SI_CYNTHIA, SI_C_Text_CYNTHIA_Intro, SI_C_Text_CYNTHIA_Defeat, SI_C_CYNTHIA_Win, NO_MUSIC
 goto SI_C_CYNTHIA_Win
SI_C_CYNTHIA_Win::

 setvar VAR_SI_STAGE, 29

 msgbox SI_C_Text_CYNTHIA_After, MSGBOX_DEFAULT

 giveitem ITEM_MASTER_BALL

 releaseall
 end

SI_C_NotYet::
 msgbox SI_C_Text_NotYet, MSGBOX_DEFAULT
 releaseall
 end

SI_C_Done::
 msgbox SI_C_Text_Done, MSGBOX_DEFAULT
 releaseall
 end

SI_C_CELESTIC::
 lock
 faceplayer
 goto_if_lt VAR_SI_STAGE, 14, SI_C_NotYet
 goto_if_gt VAR_SI_STAGE, 14, SI_C_Done

 msgbox SI_C_Text_Celestic, MSGBOX_DEFAULT

 giveitem ITEM_HM_SURF
 setvar VAR_SI_STAGE, 15

 releaseall
 end

SI_C_LIBRARY::
 lock
 faceplayer
 goto_if_lt VAR_SI_STAGE, 16, SI_C_NotYet
 goto_if_gt VAR_SI_STAGE, 16, SI_C_Done

 msgbox SI_C_Text_Library, MSGBOX_DEFAULT

 setvar VAR_SI_STAGE, 17

 releaseall
 end

SI_C_Prologue::
 lockall
 fadescreen 1

 msgbox SI_C_Text_Dream, MSGBOX_DEFAULT

 showmonpic SPECIES_GIRATINA, 10, 3
 playmoncry SPECIES_GIRATINA, 0
 waitmoncry

 msgbox SI_C_Text_Awake, MSGBOX_DEFAULT

 hidemonpic
 fadescreen 0
 goto SI_Starter

SI_C_Rift::
 lockall
 removeobject LOCALID_SI_SPEARPILLAR_4
 removeobject LOCALID_SI_SPEARPILLAR_5
 clearflag FLAG_SI_CAUGHT_DIALGA
 clearflag FLAG_SI_CAUGHT_PALKIA

 msgbox SI_C_Text_Rift, MSGBOX_DEFAULT

 showmonpic SPECIES_GIRATINA, 10, 3
 playmoncry SPECIES_GIRATINA, 0
 waitmoncry

 msgbox SI_C_Text_Rift2, MSGBOX_DEFAULT

 hidemonpic
 setvar VAR_SI_STAGE, 21
 warp MAP_SI_DISTORTION_WORLD, 255, 6, 8
 waitstate
 releaseall
 end

SI_C_Restoration::
 removeobject LOCALID_SI_DISTORTIONWORLD_3
 clearflag FLAG_SI_CAUGHT_GIRATINA
 showmonpic SPECIES_ARCEUS, 10, 3
 playmoncry SPECIES_ARCEUS, 0
 waitmoncry

 msgbox SI_C_Text_Judgment, MSGBOX_DEFAULT

 msgbox SI_C_Text_Judgment2, MSGBOX_DEFAULT

 hidemonpic
 setvar VAR_SI_STAGE, 23
 warp MAP_TWINLEAF_TOWN, 255, 6, 10
 waitstate
 lockall

 msgbox SI_C_Text_Home, MSGBOX_DEFAULT

 releaseall
 end

SI_C_Go_HearthomeCity_HearthomeCity_PokemonCenter::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_HearthomeCity_HearthomeCity_PokemonCenter, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_HEARTHOME_CITY__POKEMON_CENTER, 255, 6, 7
 waitstate
 releaseall
 end

SI_C_Go_HearthomeCity_HearthomeCity_PokemonCenter_Back::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_HearthomeCity_HearthomeCity_PokemonCenter_Back, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_HEARTHOME_CITY, 255, 6, 9
 waitstate
 releaseall
 end

SI_C_Go_HearthomeCity_HearthomeCity_Mart::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_HearthomeCity_HearthomeCity_Mart, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_HEARTHOME_CITY__MART, 255, 5, 6
 waitstate
 releaseall
 end

SI_C_Go_HearthomeCity_HearthomeCity_Mart_Back::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_HearthomeCity_HearthomeCity_Mart_Back, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_HEARTHOME_CITY, 255, 6, 9
 waitstate
 releaseall
 end

SI_C_Go_HearthomeCity_HearthomeCity_House::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_HearthomeCity_HearthomeCity_House, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_HEARTHOME_CITY__HOUSE, 255, 6, 7
 waitstate
 releaseall
 end

SI_C_Go_HearthomeCity_HearthomeCity_House_Back::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_HearthomeCity_HearthomeCity_House_Back, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_HEARTHOME_CITY, 255, 6, 9
 waitstate
 releaseall
 end

SI_C_Go_SolaceonTown_SolaceonTown_PokemonCenter::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_SolaceonTown_SolaceonTown_PokemonCenter, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_SOLACEON_TOWN__POKEMON_CENTER, 255, 6, 7
 waitstate
 releaseall
 end

SI_C_Go_SolaceonTown_SolaceonTown_PokemonCenter_Back::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_SolaceonTown_SolaceonTown_PokemonCenter_Back, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SOLACEON_TOWN, 255, 10, 12
 waitstate
 releaseall
 end

SI_C_Go_SolaceonTown_SolaceonTown_Mart::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_SolaceonTown_SolaceonTown_Mart, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_SOLACEON_TOWN__MART, 255, 5, 6
 waitstate
 releaseall
 end

SI_C_Go_SolaceonTown_SolaceonTown_Mart_Back::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_SolaceonTown_SolaceonTown_Mart_Back, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SOLACEON_TOWN, 255, 10, 12
 waitstate
 releaseall
 end

SI_C_Go_SolaceonTown_SolaceonTown_House::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_SolaceonTown_SolaceonTown_House, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_SOLACEON_TOWN__HOUSE, 255, 6, 7
 waitstate
 releaseall
 end

SI_C_Go_SolaceonTown_SolaceonTown_House_Back::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_SolaceonTown_SolaceonTown_House_Back, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SOLACEON_TOWN, 255, 10, 12
 waitstate
 releaseall
 end

SI_C_Go_VeilstoneCity_VeilstoneCity_PokemonCenter::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_VeilstoneCity_VeilstoneCity_PokemonCenter, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_VEILSTONE_CITY__POKEMON_CENTER, 255, 6, 7
 waitstate
 releaseall
 end

SI_C_Go_VeilstoneCity_VeilstoneCity_PokemonCenter_Back::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_VeilstoneCity_VeilstoneCity_PokemonCenter_Back, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_VEILSTONE_CITY, 255, 15, 12
 waitstate
 releaseall
 end

SI_C_Go_VeilstoneCity_VeilstoneCity_Mart::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_VeilstoneCity_VeilstoneCity_Mart, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_VEILSTONE_CITY__MART, 255, 5, 6
 waitstate
 releaseall
 end

SI_C_Go_VeilstoneCity_VeilstoneCity_Mart_Back::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_VeilstoneCity_VeilstoneCity_Mart_Back, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_VEILSTONE_CITY, 255, 15, 12
 waitstate
 releaseall
 end

SI_C_Go_VeilstoneCity_VeilstoneCity_House::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_VeilstoneCity_VeilstoneCity_House, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_VEILSTONE_CITY__HOUSE, 255, 6, 7
 waitstate
 releaseall
 end

SI_C_Go_VeilstoneCity_VeilstoneCity_House_Back::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_VeilstoneCity_VeilstoneCity_House_Back, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_VEILSTONE_CITY, 255, 15, 12
 waitstate
 releaseall
 end

SI_C_Go_PastoriaCity_PastoriaCity_PokemonCenter::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_PastoriaCity_PastoriaCity_PokemonCenter, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_PASTORIA_CITY__POKEMON_CENTER, 255, 6, 7
 waitstate
 releaseall
 end

SI_C_Go_PastoriaCity_PastoriaCity_PokemonCenter_Back::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_PastoriaCity_PastoriaCity_PokemonCenter_Back, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_PASTORIA_CITY, 255, 18, 17
 waitstate
 releaseall
 end

SI_C_Go_PastoriaCity_PastoriaCity_Mart::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_PastoriaCity_PastoriaCity_Mart, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_PASTORIA_CITY__MART, 255, 5, 6
 waitstate
 releaseall
 end

SI_C_Go_PastoriaCity_PastoriaCity_Mart_Back::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_PastoriaCity_PastoriaCity_Mart_Back, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_PASTORIA_CITY, 255, 18, 17
 waitstate
 releaseall
 end

SI_C_Go_PastoriaCity_PastoriaCity_House::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_PastoriaCity_PastoriaCity_House, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_PASTORIA_CITY__HOUSE, 255, 6, 7
 waitstate
 releaseall
 end

SI_C_Go_PastoriaCity_PastoriaCity_House_Back::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_PastoriaCity_PastoriaCity_House_Back, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_PASTORIA_CITY, 255, 18, 17
 waitstate
 releaseall
 end

SI_C_Go_CelesticTown_CelesticTown_PokemonCenter::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_CelesticTown_CelesticTown_PokemonCenter, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_CELESTIC_TOWN__POKEMON_CENTER, 255, 6, 7
 waitstate
 releaseall
 end

SI_C_Go_CelesticTown_CelesticTown_PokemonCenter_Back::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_CelesticTown_CelesticTown_PokemonCenter_Back, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_CELESTIC_TOWN, 255, 10, 18
 waitstate
 releaseall
 end

SI_C_Go_CelesticTown_CelesticTown_Mart::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_CelesticTown_CelesticTown_Mart, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_CELESTIC_TOWN__MART, 255, 5, 6
 waitstate
 releaseall
 end

SI_C_Go_CelesticTown_CelesticTown_Mart_Back::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_CelesticTown_CelesticTown_Mart_Back, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_CELESTIC_TOWN, 255, 10, 18
 waitstate
 releaseall
 end

SI_C_Go_CelesticTown_CelesticTown_House::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_CelesticTown_CelesticTown_House, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_CELESTIC_TOWN__HOUSE, 255, 6, 7
 waitstate
 releaseall
 end

SI_C_Go_CelesticTown_CelesticTown_House_Back::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_CelesticTown_CelesticTown_House_Back, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_CELESTIC_TOWN, 255, 10, 18
 waitstate
 releaseall
 end

SI_C_Go_CanalaveCity_CanalaveCity_PokemonCenter::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_CanalaveCity_CanalaveCity_PokemonCenter, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_CANALAVE_CITY__POKEMON_CENTER, 255, 6, 7
 waitstate
 releaseall
 end

SI_C_Go_CanalaveCity_CanalaveCity_PokemonCenter_Back::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_CanalaveCity_CanalaveCity_PokemonCenter_Back, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_CANALAVE_CITY, 255, 6, 19
 waitstate
 releaseall
 end

SI_C_Go_CanalaveCity_CanalaveCity_Mart::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_CanalaveCity_CanalaveCity_Mart, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_CANALAVE_CITY__MART, 255, 5, 6
 waitstate
 releaseall
 end

SI_C_Go_CanalaveCity_CanalaveCity_Mart_Back::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_CanalaveCity_CanalaveCity_Mart_Back, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_CANALAVE_CITY, 255, 6, 19
 waitstate
 releaseall
 end

SI_C_Go_CanalaveCity_CanalaveCity_House::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_CanalaveCity_CanalaveCity_House, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_CANALAVE_CITY__HOUSE, 255, 6, 7
 waitstate
 releaseall
 end

SI_C_Go_CanalaveCity_CanalaveCity_House_Back::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_CanalaveCity_CanalaveCity_House_Back, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_CANALAVE_CITY, 255, 6, 19
 waitstate
 releaseall
 end

SI_C_Go_SnowpointCity_SnowpointCity_PokemonCenter::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_SnowpointCity_SnowpointCity_PokemonCenter, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_SNOWPOINT_CITY__POKEMON_CENTER, 255, 6, 7
 waitstate
 releaseall
 end

SI_C_Go_SnowpointCity_SnowpointCity_PokemonCenter_Back::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_SnowpointCity_SnowpointCity_PokemonCenter_Back, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SNOWPOINT_CITY, 255, 11, 9
 waitstate
 releaseall
 end

SI_C_Go_SnowpointCity_SnowpointCity_Mart::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_SnowpointCity_SnowpointCity_Mart, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_SNOWPOINT_CITY__MART, 255, 5, 6
 waitstate
 releaseall
 end

SI_C_Go_SnowpointCity_SnowpointCity_Mart_Back::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_SnowpointCity_SnowpointCity_Mart_Back, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SNOWPOINT_CITY, 255, 11, 9
 waitstate
 releaseall
 end

SI_C_Go_SnowpointCity_SnowpointCity_House::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_SnowpointCity_SnowpointCity_House, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_SNOWPOINT_CITY__HOUSE, 255, 6, 7
 waitstate
 releaseall
 end

SI_C_Go_SnowpointCity_SnowpointCity_House_Back::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_SnowpointCity_SnowpointCity_House_Back, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SNOWPOINT_CITY, 255, 11, 9
 waitstate
 releaseall
 end

SI_C_Go_SunyshoreCity_SunyshoreCity_PokemonCenter::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_SunyshoreCity_SunyshoreCity_PokemonCenter, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_SUNYSHORE_CITY__POKEMON_CENTER, 255, 6, 7
 waitstate
 releaseall
 end

SI_C_Go_SunyshoreCity_SunyshoreCity_PokemonCenter_Back::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_SunyshoreCity_SunyshoreCity_PokemonCenter_Back, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SUNYSHORE_CITY, 255, 25, 16
 waitstate
 releaseall
 end

SI_C_Go_SunyshoreCity_SunyshoreCity_Mart::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_SunyshoreCity_SunyshoreCity_Mart, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_SUNYSHORE_CITY__MART, 255, 5, 6
 waitstate
 releaseall
 end

SI_C_Go_SunyshoreCity_SunyshoreCity_Mart_Back::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_SunyshoreCity_SunyshoreCity_Mart_Back, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SUNYSHORE_CITY, 255, 25, 16
 waitstate
 releaseall
 end

SI_C_Go_SunyshoreCity_SunyshoreCity_House::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_SunyshoreCity_SunyshoreCity_House, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_SUNYSHORE_CITY__HOUSE, 255, 6, 7
 waitstate
 releaseall
 end

SI_C_Go_SunyshoreCity_SunyshoreCity_House_Back::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_SunyshoreCity_SunyshoreCity_House_Back, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SUNYSHORE_CITY, 255, 25, 16
 waitstate
 releaseall
 end

SI_C_Go_FightArea_FightArea_PokemonCenter::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_FightArea_FightArea_PokemonCenter, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_FIGHT_AREA__POKEMON_CENTER, 255, 6, 7
 waitstate
 releaseall
 end

SI_C_Go_FightArea_FightArea_PokemonCenter_Back::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_FightArea_FightArea_PokemonCenter_Back, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_FIGHT_AREA, 255, 21, 9
 waitstate
 releaseall
 end

SI_C_Go_FightArea_FightArea_Mart::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_FightArea_FightArea_Mart, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_FIGHT_AREA__MART, 255, 5, 6
 waitstate
 releaseall
 end

SI_C_Go_FightArea_FightArea_Mart_Back::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_FightArea_FightArea_Mart_Back, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_FIGHT_AREA, 255, 21, 9
 waitstate
 releaseall
 end

SI_C_Go_FightArea_FightArea_House::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_FightArea_FightArea_House, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_FIGHT_AREA__HOUSE, 255, 6, 7
 waitstate
 releaseall
 end

SI_C_Go_FightArea_FightArea_House_Back::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_FightArea_FightArea_House_Back, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_FIGHT_AREA, 255, 21, 9
 waitstate
 releaseall
 end

SI_C_Go_ResortArea_ResortArea_PokemonCenter::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_ResortArea_ResortArea_PokemonCenter, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_RESORT_AREA__POKEMON_CENTER, 255, 6, 7
 waitstate
 releaseall
 end

SI_C_Go_ResortArea_ResortArea_PokemonCenter_Back::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_ResortArea_ResortArea_PokemonCenter_Back, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_RESORT_AREA, 255, 6, 9
 waitstate
 releaseall
 end

SI_C_Go_ResortArea_ResortArea_Mart::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_ResortArea_ResortArea_Mart, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_RESORT_AREA__MART, 255, 5, 6
 waitstate
 releaseall
 end

SI_C_Go_ResortArea_ResortArea_Mart_Back::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_ResortArea_ResortArea_Mart_Back, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_RESORT_AREA, 255, 6, 9
 waitstate
 releaseall
 end

SI_C_Go_ResortArea_ResortArea_House::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_ResortArea_ResortArea_House, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_RESORT_AREA__HOUSE, 255, 6, 7
 waitstate
 releaseall
 end

SI_C_Go_ResortArea_ResortArea_House_Back::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_ResortArea_ResortArea_House_Back, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_RESORT_AREA, 255, 6, 9
 waitstate
 releaseall
 end

SI_C_Go_SurvivalArea_SurvivalArea_PokemonCenter::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_SurvivalArea_SurvivalArea_PokemonCenter, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_SURVIVAL_AREA__POKEMON_CENTER, 255, 6, 7
 waitstate
 releaseall
 end

SI_C_Go_SurvivalArea_SurvivalArea_PokemonCenter_Back::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_SurvivalArea_SurvivalArea_PokemonCenter_Back, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SURVIVAL_AREA, 255, 6, 16
 waitstate
 releaseall
 end

SI_C_Go_SurvivalArea_SurvivalArea_Mart::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_SurvivalArea_SurvivalArea_Mart, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_SURVIVAL_AREA__MART, 255, 5, 6
 waitstate
 releaseall
 end

SI_C_Go_SurvivalArea_SurvivalArea_Mart_Back::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_SurvivalArea_SurvivalArea_Mart_Back, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SURVIVAL_AREA, 255, 6, 16
 waitstate
 releaseall
 end

SI_C_Go_SurvivalArea_SurvivalArea_House::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_SurvivalArea_SurvivalArea_House, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_SURVIVAL_AREA__HOUSE, 255, 6, 7
 waitstate
 releaseall
 end

SI_C_Go_SurvivalArea_SurvivalArea_House_Back::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_SurvivalArea_SurvivalArea_House_Back, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SURVIVAL_AREA, 255, 6, 16
 waitstate
 releaseall
 end

SI_C_Go_HearthomeCity_HearthomeCity_Gym::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_HearthomeCity_HearthomeCity_Gym, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_HEARTHOME_CITY__GYM, 255, 6, 8
 waitstate
 releaseall
 end

SI_C_Go_HearthomeCity_HearthomeCity_Gym_Back::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_HearthomeCity_HearthomeCity_Gym_Back, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_HEARTHOME_CITY, 255, 6, 9
 waitstate
 releaseall
 end

SI_C_Go_VeilstoneCity_VeilstoneCity_Gym::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_VeilstoneCity_VeilstoneCity_Gym, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_VEILSTONE_CITY__GYM, 255, 6, 8
 waitstate
 releaseall
 end

SI_C_Go_VeilstoneCity_VeilstoneCity_Gym_Back::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_VeilstoneCity_VeilstoneCity_Gym_Back, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_VEILSTONE_CITY, 255, 15, 12
 waitstate
 releaseall
 end

SI_C_Go_PastoriaCity_PastoriaCity_Gym::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_PastoriaCity_PastoriaCity_Gym, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_PASTORIA_CITY__GYM, 255, 6, 8
 waitstate
 releaseall
 end

SI_C_Go_PastoriaCity_PastoriaCity_Gym_Back::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_PastoriaCity_PastoriaCity_Gym_Back, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_PASTORIA_CITY, 255, 18, 17
 waitstate
 releaseall
 end

SI_C_Go_CanalaveCity_CanalaveCity_Gym::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_CanalaveCity_CanalaveCity_Gym, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_CANALAVE_CITY__GYM, 255, 6, 8
 waitstate
 releaseall
 end

SI_C_Go_CanalaveCity_CanalaveCity_Gym_Back::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_CanalaveCity_CanalaveCity_Gym_Back, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_CANALAVE_CITY, 255, 6, 19
 waitstate
 releaseall
 end

SI_C_Go_SnowpointCity_SnowpointCity_Gym::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_SnowpointCity_SnowpointCity_Gym, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_SNOWPOINT_CITY__GYM, 255, 6, 8
 waitstate
 releaseall
 end

SI_C_Go_SnowpointCity_SnowpointCity_Gym_Back::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_SnowpointCity_SnowpointCity_Gym_Back, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SNOWPOINT_CITY, 255, 11, 9
 waitstate
 releaseall
 end

SI_C_Go_SunyshoreCity_SunyshoreCity_Gym::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_SunyshoreCity_SunyshoreCity_Gym, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_SUNYSHORE_CITY__GYM, 255, 6, 8
 waitstate
 releaseall
 end

SI_C_Go_SunyshoreCity_SunyshoreCity_Gym_Back::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_SunyshoreCity_SunyshoreCity_Gym_Back, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SUNYSHORE_CITY, 255, 25, 16
 waitstate
 releaseall
 end

SI_C_Go_CanalaveCity_CanalaveLibrary::
 lock
 faceplayer
 goto_if_lt VAR_SI_STAGE, 16, SI_C_NotYet

 msgbox SI_C_Text_SI_C_Go_CanalaveCity_CanalaveLibrary, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_CANALAVE_LIBRARY, 255, 6, 9
 waitstate
 releaseall
 end

SI_C_Go_CanalaveCity_CanalaveLibrary_Back::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_CanalaveCity_CanalaveLibrary_Back, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_CANALAVE_CITY, 255, 6, 19
 waitstate
 releaseall
 end

SI_C_Go_VeilstoneCity_VeilstoneHQ::
 lock
 faceplayer
 goto_if_lt VAR_SI_STAGE, 19, SI_C_NotYet

 msgbox SI_C_Text_SI_C_Go_VeilstoneCity_VeilstoneHQ, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_VEILSTONE_H_Q, 255, 6, 9
 waitstate
 releaseall
 end

SI_C_Go_VeilstoneCity_VeilstoneHQ_Back::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_VeilstoneCity_VeilstoneHQ_Back, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_VEILSTONE_CITY, 255, 15, 12
 waitstate
 releaseall
 end

SI_C_Go_Route207_MtCoronetSummit::
 lock
 faceplayer
 goto_if_lt VAR_SI_STAGE, 20, SI_C_NotYet

 msgbox SI_C_Text_SI_C_Go_Route207_MtCoronetSummit, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_MT_CORONET_SUMMIT, 255, 6, 8
 waitstate
 releaseall
 end

SI_C_Go_Route207_MtCoronetSummit_Back::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_Route207_MtCoronetSummit_Back, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_ROUTE207, 255, 6, 9
 waitstate
 releaseall
 end

SI_C_Go_MtCoronetSummit_SpearPillar::
 lock
 faceplayer
 goto_if_lt VAR_SI_STAGE, 20, SI_C_NotYet

 msgbox SI_C_Text_SI_C_Go_MtCoronetSummit_SpearPillar, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_SPEAR_PILLAR, 255, 6, 8
 waitstate
 releaseall
 end

SI_C_Go_MtCoronetSummit_SpearPillar_Back::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_MtCoronetSummit_SpearPillar_Back, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_MT_CORONET_SUMMIT, 255, 6, 8
 waitstate
 releaseall
 end

SI_C_Go_SpearPillar_DistortionWorld::
 lock
 faceplayer
 goto_if_lt VAR_SI_STAGE, 21, SI_C_NotYet

 msgbox SI_C_Text_SI_C_Go_SpearPillar_DistortionWorld, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_DISTORTION_WORLD, 255, 6, 8
 waitstate
 releaseall
 end

SI_C_Go_SpearPillar_DistortionWorld_Back::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_SpearPillar_DistortionWorld_Back, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_SPEAR_PILLAR, 255, 6, 8
 waitstate
 releaseall
 end

SI_C_Go_SpearPillar_HallOfOrigin::
 lock
 faceplayer
 goto_if_lt VAR_SI_STAGE, 29, SI_C_NotYet

 msgbox SI_C_Text_SI_C_Go_SpearPillar_HallOfOrigin, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_HALL_OF_ORIGIN, 255, 6, 8
 waitstate
 releaseall
 end

SI_C_Go_SpearPillar_HallOfOrigin_Back::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_SpearPillar_HallOfOrigin_Back, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_SPEAR_PILLAR, 255, 6, 8
 waitstate
 releaseall
 end

SI_C_Go_Route214_TurnbackCave::
 lock
 faceplayer
 goto_if_lt VAR_SI_STAGE, 29, SI_C_NotYet

 msgbox SI_C_Text_SI_C_Go_Route214_TurnbackCave, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_TURNBACK_CAVE, 255, 6, 8
 waitstate
 releaseall
 end

SI_C_Go_Route214_TurnbackCave_Back::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_Route214_TurnbackCave_Back, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_ROUTE214, 255, 15, 9
 waitstate
 releaseall
 end

SI_C_Go_SnowpointCity_SnowpointTemple::
 lock
 faceplayer
 goto_if_lt VAR_SI_STAGE, 29, SI_C_NotYet

 msgbox SI_C_Text_SI_C_Go_SnowpointCity_SnowpointTemple, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_SNOWPOINT_TEMPLE, 255, 6, 8
 waitstate
 releaseall
 end

SI_C_Go_SnowpointCity_SnowpointTemple_Back::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_SnowpointCity_SnowpointTemple_Back, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SNOWPOINT_CITY, 255, 11, 9
 waitstate
 releaseall
 end

SI_C_Go_Route217_LakeAcuity::
 lock
 faceplayer
 goto_if_lt VAR_SI_STAGE, 17, SI_C_NotYet

 msgbox SI_C_Text_SI_C_Go_Route217_LakeAcuity, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_LAKE_ACUITY, 255, 28, 8
 waitstate
 releaseall
 end

SI_C_Go_Route217_LakeAcuity_Back::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_Route217_LakeAcuity_Back, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_ROUTE217, 255, 6, 15
 waitstate
 releaseall
 end

SI_C_Go_SunyshoreCity_VictoryRoad::
 lock
 faceplayer
 goto_if_lt VAR_SI_STAGE, 24, SI_C_NotYet

 msgbox SI_C_Text_SI_C_Go_SunyshoreCity_VictoryRoad, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_VICTORY_ROAD, 255, 6, 8
 waitstate
 releaseall
 end

SI_C_Go_SunyshoreCity_VictoryRoad_Back::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_SunyshoreCity_VictoryRoad_Back, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SUNYSHORE_CITY, 255, 25, 16
 waitstate
 releaseall
 end

SI_C_Go_VictoryRoad_LeagueAaron::
 lock
 faceplayer
 goto_if_lt VAR_SI_STAGE, 24, SI_C_NotYet

 msgbox SI_C_Text_SI_C_Go_VictoryRoad_LeagueAaron, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_LEAGUE_AARON, 255, 6, 8
 waitstate
 releaseall
 end

SI_C_Go_VictoryRoad_LeagueAaron_Back::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_VictoryRoad_LeagueAaron_Back, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_VICTORY_ROAD, 255, 6, 8
 waitstate
 releaseall
 end

SI_C_Go_LeagueAaron_LeagueBertha::
 lock
 faceplayer
 goto_if_lt VAR_SI_STAGE, 25, SI_C_NotYet

 msgbox SI_C_Text_SI_C_Go_LeagueAaron_LeagueBertha, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_LEAGUE_BERTHA, 255, 6, 8
 waitstate
 releaseall
 end

SI_C_Go_LeagueAaron_LeagueBertha_Back::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_LeagueAaron_LeagueBertha_Back, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_LEAGUE_AARON, 255, 6, 8
 waitstate
 releaseall
 end

SI_C_Go_LeagueBertha_LeagueFlint::
 lock
 faceplayer
 goto_if_lt VAR_SI_STAGE, 26, SI_C_NotYet

 msgbox SI_C_Text_SI_C_Go_LeagueBertha_LeagueFlint, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_LEAGUE_FLINT, 255, 6, 8
 waitstate
 releaseall
 end

SI_C_Go_LeagueBertha_LeagueFlint_Back::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_LeagueBertha_LeagueFlint_Back, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_LEAGUE_BERTHA, 255, 6, 8
 waitstate
 releaseall
 end

SI_C_Go_LeagueFlint_LeagueLucian::
 lock
 faceplayer
 goto_if_lt VAR_SI_STAGE, 27, SI_C_NotYet

 msgbox SI_C_Text_SI_C_Go_LeagueFlint_LeagueLucian, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_LEAGUE_LUCIAN, 255, 6, 8
 waitstate
 releaseall
 end

SI_C_Go_LeagueFlint_LeagueLucian_Back::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_LeagueFlint_LeagueLucian_Back, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_LEAGUE_FLINT, 255, 6, 8
 waitstate
 releaseall
 end

SI_C_Go_LeagueLucian_LeagueCynthia::
 lock
 faceplayer
 goto_if_lt VAR_SI_STAGE, 28, SI_C_NotYet

 msgbox SI_C_Text_SI_C_Go_LeagueLucian_LeagueCynthia, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_LEAGUE_CYNTHIA, 255, 6, 8
 waitstate
 releaseall
 end

SI_C_Go_LeagueLucian_LeagueCynthia_Back::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_LeagueLucian_LeagueCynthia_Back, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SI_LEAGUE_LUCIAN, 255, 6, 8
 waitstate
 releaseall
 end

SI_C_Go_SnowpointCity_FightArea::
 lock
 faceplayer
 goto_if_lt VAR_SI_STAGE, 29, SI_C_NotYet

 msgbox SI_C_Text_SI_C_Go_SnowpointCity_FightArea, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_FIGHT_AREA, 255, 21, 9
 waitstate
 releaseall
 end

SI_C_Go_SnowpointCity_FightArea_Back::
 lock
 faceplayer

 msgbox SI_C_Text_SI_C_Go_SnowpointCity_FightArea_Back, MSGBOX_YESNO

 goto_if_eq VAR_RESULT, NO, SI_End
 warp MAP_SNOWPOINT_CITY, 255, 11, 9
 waitstate
 releaseall
 end

SI_C_Encounter_DIALGA::
 lock
 faceplayer
 goto_if_lt VAR_SI_STAGE, 29, SI_C_NotYet
 goto_if_set FLAG_SI_CAUGHT_DIALGA, SI_C_Done

 msgbox SI_C_Text_DIALGA_Meet, MSGBOX_DEFAULT

 setwildbattle SPECIES_DIALGA, 70, ITEM_NONE
 dowildbattle
 specialvar VAR_RESULT, GetBattleOutcome
 goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, SI_C_Retry
 setflag FLAG_SI_CAUGHT_DIALGA
 removeobject VAR_LAST_TALKED

 msgbox SI_C_Text_DIALGA_Caught, MSGBOX_DEFAULT

 releaseall
 end

SI_C_Encounter_PALKIA::
 lock
 faceplayer
 goto_if_lt VAR_SI_STAGE, 29, SI_C_NotYet
 goto_if_set FLAG_SI_CAUGHT_PALKIA, SI_C_Done

 msgbox SI_C_Text_PALKIA_Meet, MSGBOX_DEFAULT

 setwildbattle SPECIES_PALKIA, 70, ITEM_NONE
 dowildbattle
 specialvar VAR_RESULT, GetBattleOutcome
 goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, SI_C_Retry
 setflag FLAG_SI_CAUGHT_PALKIA
 removeobject VAR_LAST_TALKED

 msgbox SI_C_Text_PALKIA_Caught, MSGBOX_DEFAULT

 releaseall
 end

SI_C_Encounter_GIRATINA::
 lock
 faceplayer
 goto_if_lt VAR_SI_STAGE, 29, SI_C_NotYet
 goto_if_set FLAG_SI_CAUGHT_GIRATINA, SI_C_Done

 msgbox SI_C_Text_GIRATINA_Meet, MSGBOX_DEFAULT

 setwildbattle SPECIES_GIRATINA, 70, ITEM_NONE
 dowildbattle
 specialvar VAR_RESULT, GetBattleOutcome
 goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, SI_C_Retry
 setflag FLAG_SI_CAUGHT_GIRATINA
 removeobject VAR_LAST_TALKED

 msgbox SI_C_Text_GIRATINA_Caught, MSGBOX_DEFAULT

 releaseall
 end

SI_C_Encounter_ARCEUS::
 lock
 faceplayer
 goto_if_lt VAR_SI_STAGE, 29, SI_C_NotYet
 goto_if_set FLAG_SI_CAUGHT_ARCEUS, SI_C_Done

 goto_if_unset FLAG_SI_CAUGHT_DIALGA, SI_C_NotYet

 goto_if_unset FLAG_SI_CAUGHT_PALKIA, SI_C_NotYet

 goto_if_unset FLAG_SI_CAUGHT_GIRATINA, SI_C_NotYet

 msgbox SI_C_Text_ARCEUS_Meet, MSGBOX_DEFAULT

 setwildbattle SPECIES_ARCEUS, 80, ITEM_NONE
 dowildbattle
 specialvar VAR_RESULT, GetBattleOutcome
 goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, SI_C_Retry
 setflag FLAG_SI_CAUGHT_ARCEUS
 removeobject VAR_LAST_TALKED

 msgbox SI_C_Text_ARCEUS_Caught, MSGBOX_DEFAULT

 releaseall
 end

SI_C_Encounter_UXIE::
 lock
 faceplayer
 goto_if_lt VAR_SI_STAGE, 29, SI_C_NotYet
 goto_if_set FLAG_SI_CAUGHT_UXIE, SI_C_Done

 msgbox SI_C_Text_UXIE_Meet, MSGBOX_DEFAULT

 setwildbattle SPECIES_UXIE, 50, ITEM_NONE
 dowildbattle
 specialvar VAR_RESULT, GetBattleOutcome
 goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, SI_C_Retry
 setflag FLAG_SI_CAUGHT_UXIE
 removeobject VAR_LAST_TALKED

 msgbox SI_C_Text_UXIE_Caught, MSGBOX_DEFAULT

 releaseall
 end

SI_C_Encounter_MESPRIT::
 lock
 faceplayer
 goto_if_lt VAR_SI_STAGE, 29, SI_C_NotYet
 goto_if_set FLAG_SI_CAUGHT_MESPRIT, SI_C_Done

 msgbox SI_C_Text_MESPRIT_Meet, MSGBOX_DEFAULT

 setwildbattle SPECIES_MESPRIT, 50, ITEM_NONE
 dowildbattle
 specialvar VAR_RESULT, GetBattleOutcome
 goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, SI_C_Retry
 setflag FLAG_SI_CAUGHT_MESPRIT
 removeobject VAR_LAST_TALKED

 msgbox SI_C_Text_MESPRIT_Caught, MSGBOX_DEFAULT

 releaseall
 end

SI_C_Encounter_AZELF::
 lock
 faceplayer
 goto_if_lt VAR_SI_STAGE, 29, SI_C_NotYet
 goto_if_set FLAG_SI_CAUGHT_AZELF, SI_C_Done

 msgbox SI_C_Text_AZELF_Meet, MSGBOX_DEFAULT

 setwildbattle SPECIES_AZELF, 50, ITEM_NONE
 dowildbattle
 specialvar VAR_RESULT, GetBattleOutcome
 goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, SI_C_Retry
 setflag FLAG_SI_CAUGHT_AZELF
 removeobject VAR_LAST_TALKED

 msgbox SI_C_Text_AZELF_Caught, MSGBOX_DEFAULT

 releaseall
 end

SI_C_Encounter_REGIGIGAS::
 lock
 faceplayer
 goto_if_lt VAR_SI_STAGE, 29, SI_C_NotYet
 goto_if_set FLAG_SI_CAUGHT_REGIGIGAS, SI_C_Done

 msgbox SI_C_Text_REGIGIGAS_Meet, MSGBOX_DEFAULT

 setwildbattle SPECIES_REGIGIGAS, 70, ITEM_NONE
 dowildbattle
 specialvar VAR_RESULT, GetBattleOutcome
 goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, SI_C_Retry
 setflag FLAG_SI_CAUGHT_REGIGIGAS
 removeobject VAR_LAST_TALKED

 msgbox SI_C_Text_REGIGIGAS_Caught, MSGBOX_DEFAULT

 releaseall
 end

SI_C_Encounter_HEATRAN::
 lock
 faceplayer
 goto_if_lt VAR_SI_STAGE, 29, SI_C_NotYet
 goto_if_set FLAG_SI_CAUGHT_HEATRAN, SI_C_Done

 msgbox SI_C_Text_HEATRAN_Meet, MSGBOX_DEFAULT

 setwildbattle SPECIES_HEATRAN, 70, ITEM_NONE
 dowildbattle
 specialvar VAR_RESULT, GetBattleOutcome
 goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, SI_C_Retry
 setflag FLAG_SI_CAUGHT_HEATRAN
 removeobject VAR_LAST_TALKED

 msgbox SI_C_Text_HEATRAN_Caught, MSGBOX_DEFAULT

 releaseall
 end

SI_C_Encounter_CRESSELIA::
 lock
 faceplayer
 goto_if_lt VAR_SI_STAGE, 29, SI_C_NotYet
 goto_if_set FLAG_SI_CAUGHT_CRESSELIA, SI_C_Done

 msgbox SI_C_Text_CRESSELIA_Meet, MSGBOX_DEFAULT

 setwildbattle SPECIES_CRESSELIA, 60, ITEM_NONE
 dowildbattle
 specialvar VAR_RESULT, GetBattleOutcome
 goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, SI_C_Retry
 setflag FLAG_SI_CAUGHT_CRESSELIA
 removeobject VAR_LAST_TALKED

 msgbox SI_C_Text_CRESSELIA_Caught, MSGBOX_DEFAULT

 releaseall
 end

SI_C_Retry::
 msgbox SI_C_Text_Retry, MSGBOX_DEFAULT
 releaseall
 end

SI_C_Journal::

 goto_if_eq VAR_SI_STAGE, 7, SI_C_Goal_7

 goto_if_eq VAR_SI_STAGE, 8, SI_C_Goal_8

 goto_if_eq VAR_SI_STAGE, 9, SI_C_Goal_9

 goto_if_eq VAR_SI_STAGE, 10, SI_C_Goal_10

 goto_if_eq VAR_SI_STAGE, 11, SI_C_Goal_11

 goto_if_eq VAR_SI_STAGE, 12, SI_C_Goal_12

 goto_if_eq VAR_SI_STAGE, 13, SI_C_Goal_13

 goto_if_eq VAR_SI_STAGE, 14, SI_C_Goal_14

 goto_if_eq VAR_SI_STAGE, 15, SI_C_Goal_15

 goto_if_eq VAR_SI_STAGE, 16, SI_C_Goal_16

 goto_if_eq VAR_SI_STAGE, 17, SI_C_Goal_17

 goto_if_eq VAR_SI_STAGE, 18, SI_C_Goal_18

 goto_if_eq VAR_SI_STAGE, 19, SI_C_Goal_19

 goto_if_eq VAR_SI_STAGE, 20, SI_C_Goal_20

 goto_if_eq VAR_SI_STAGE, 21, SI_C_Goal_21

 goto_if_eq VAR_SI_STAGE, 22, SI_C_Goal_22

 goto_if_eq VAR_SI_STAGE, 23, SI_C_Goal_23

 goto_if_eq VAR_SI_STAGE, 24, SI_C_Goal_24

 goto_if_eq VAR_SI_STAGE, 25, SI_C_Goal_25

 goto_if_eq VAR_SI_STAGE, 26, SI_C_Goal_26

 goto_if_eq VAR_SI_STAGE, 27, SI_C_Goal_27

 goto_if_eq VAR_SI_STAGE, 28, SI_C_Goal_28

 goto_if_eq VAR_SI_STAGE, 29, SI_C_Goal_29

 goto SI_C_Done

SI_C_Goal_7::
 msgbox SI_C_Text_Goal7, MSGBOX_DEFAULT
 releaseall
 end

SI_C_Goal_8::
 msgbox SI_C_Text_Goal8, MSGBOX_DEFAULT
 releaseall
 end

SI_C_Goal_9::
 msgbox SI_C_Text_Goal9, MSGBOX_DEFAULT
 releaseall
 end

SI_C_Goal_10::
 msgbox SI_C_Text_Goal10, MSGBOX_DEFAULT
 releaseall
 end

SI_C_Goal_11::
 msgbox SI_C_Text_Goal11, MSGBOX_DEFAULT
 releaseall
 end

SI_C_Goal_12::
 msgbox SI_C_Text_Goal12, MSGBOX_DEFAULT
 releaseall
 end

SI_C_Goal_13::
 msgbox SI_C_Text_Goal13, MSGBOX_DEFAULT
 releaseall
 end

SI_C_Goal_14::
 msgbox SI_C_Text_Goal14, MSGBOX_DEFAULT
 releaseall
 end

SI_C_Goal_15::
 msgbox SI_C_Text_Goal15, MSGBOX_DEFAULT
 releaseall
 end

SI_C_Goal_16::
 msgbox SI_C_Text_Goal16, MSGBOX_DEFAULT
 releaseall
 end

SI_C_Goal_17::
 msgbox SI_C_Text_Goal17, MSGBOX_DEFAULT
 releaseall
 end

SI_C_Goal_18::
 msgbox SI_C_Text_Goal18, MSGBOX_DEFAULT
 releaseall
 end

SI_C_Goal_19::
 msgbox SI_C_Text_Goal19, MSGBOX_DEFAULT
 releaseall
 end

SI_C_Goal_20::
 msgbox SI_C_Text_Goal20, MSGBOX_DEFAULT
 releaseall
 end

SI_C_Goal_21::
 msgbox SI_C_Text_Goal21, MSGBOX_DEFAULT
 releaseall
 end

SI_C_Goal_22::
 msgbox SI_C_Text_Goal22, MSGBOX_DEFAULT
 releaseall
 end

SI_C_Goal_23::
 msgbox SI_C_Text_Goal23, MSGBOX_DEFAULT
 releaseall
 end

SI_C_Goal_24::
 msgbox SI_C_Text_Goal24, MSGBOX_DEFAULT
 releaseall
 end

SI_C_Goal_25::
 msgbox SI_C_Text_Goal25, MSGBOX_DEFAULT
 releaseall
 end

SI_C_Goal_26::
 msgbox SI_C_Text_Goal26, MSGBOX_DEFAULT
 releaseall
 end

SI_C_Goal_27::
 msgbox SI_C_Text_Goal27, MSGBOX_DEFAULT
 releaseall
 end

SI_C_Goal_28::
 msgbox SI_C_Text_Goal28, MSGBOX_DEFAULT
 releaseall
 end

SI_C_Goal_29::
 msgbox SI_C_Text_Goal29, MSGBOX_DEFAULT
 releaseall
 end

SI_C_Text_MARS_Intro::
 .string "MARS: Cada turbina empurra\no presente para um amanha\pperfeito. Cyrus nao\nprecisa de pessoas;\pprecisa da energia que\nelas desperdicam. Se voce\pdesligar o coletor,\ncondenara o nosso futuro!$"
SI_C_Text_MARS_Intro_En::
 .string "MARS: Every turbine pushes\nthe present toward a\pperfect tomorrow. Cyrus\nneeds the energy people\pwaste. Shut down this\ncollector and you destroy\pour future!$"
SI_C_Text_MARS_Defeat::
 .string "Voce protegeu o amanha.$"
SI_C_Text_MARS_Defeat_En::
 .string "You protected tomorrow.$"
SI_C_Text_MARS_After::
 .string "A turbina para. Um\ntrabalhador revela que o\ppulso foi enviado ao\nedificio Galactico em\pEterna. Uma sombra aparece\nno reflexo do rio, embora\pnao haja nada no ceu.$"
SI_C_Text_MARS_After_En::
 .string "The turbine stops. A\nworker reveals that its\ppulse reached Galactic\nEterna. A shadow crosses\pthe river reflection,\nalthough the sky is empty.$"
SI_C_Text_GARDENIA_Intro::
 .string "GARDENIA: Minha floresta\nfloresceu duas vezes na\pmesma noite. O tempo esta\nerrado. Mostre que voce\pconsegue proteger uma vida\nantes de investigar quem\pquer reescrever todas\nelas.$"
SI_C_Text_GARDENIA_Intro_En::
 .string "GARDENIA: My forest\nbloomed twice in one\pnight. Time is wrong. Show\nme that you can protect\pone life before facing\nthose who would rewrite\pevery life.$"
SI_C_Text_GARDENIA_Defeat::
 .string "Voce protegeu o amanha.$"
SI_C_Text_GARDENIA_Defeat_En::
 .string "You protected tomorrow.$"
SI_C_Text_GARDENIA_After::
 .string "Gardenia entrega Cut e uma\nbicicleta. O caminho ao\pedificio Galactico esta\naberto. Looker encontrou\pnotas sobre tres lagos e\numa quarta sombra.$"
SI_C_Text_GARDENIA_After_En::
 .string "Gardenia gives you Cut and\na bicycle. Galactic Eterna\pis accessible. Looker\nfound notes about three\plakes and a fourth shadow.$"
SI_C_Text_JUPITER_Intro::
 .string "JUPITER: Ha futuros nos\nquais voce perdeu tudo.\pCyrus quer impedir que\nqualquer pessoa sinta essa\pdor. O espelho no lago\nmostrou esses futuros a\pele.$"
SI_C_Text_JUPITER_Intro_En::
 .string "JUPITER: Some futures take\neverything from you. Cyrus\pwants nobody to feel that\npain. The mirror in the\plake showed those futures\nto him.$"
SI_C_Text_JUPITER_Defeat::
 .string "Voce protegeu o amanha.$"
SI_C_Text_JUPITER_Defeat_En::
 .string "You protected tomorrow.$"
SI_C_Text_JUPITER_After::
 .string "No arquivo, Dialga aparece\ncomo o Relogio e Palkia\pcomo a Porta. O nome\nGiratina foi riscado.\pCynthia pede que voce a\nencontre depois do desafio\pem Hearthome.$"
SI_C_Text_JUPITER_After_En::
 .string "The files call Dialga the\nClock and Palkia the Door.\pGiratina has been crossed\nout. Cynthia asks you to\pcontinue through\nHearthome.$"
SI_C_Text_FANTINA_Intro::
 .string "FANTINA: Os espiritos nao\ndesapareceram. Estao\ppresos em um segundo que\nnunca acaba. Nossa batalha\pprecisa lembrar a eles que\no mundo ainda pode mudar!$"
SI_C_Text_FANTINA_Intro_En::
 .string "FANTINA: The spirits are\ntrapped inside a second\pthat never ends. Our\nbattle must remind them\pthat the world can still\nchange!$"
SI_C_Text_FANTINA_Defeat::
 .string "Voce protegeu o amanha.$"
SI_C_Text_FANTINA_Defeat_En::
 .string "You protected tomorrow.$"
SI_C_Text_FANTINA_After::
 .string "Uma rachadura se abre no\npalco e se fecha. Cynthia\preconhece o simbolo de um\nmundo invertido. A\pGalactica esta comprando\ntransmissores em\pVeilstone.$"
SI_C_Text_FANTINA_After_En::
 .string "A crack opens beneath the\nstage, then closes.\pCynthia recognizes a\nsymbol of an inverted\pworld. Galactic is buying\ntransmitters in Veilstone.$"
SI_C_Text_MAYLENE_Intro::
 .string "MAYLENE: Lucario sente\nmedo vindo de todos os\pradios da cidade. Vamos\ntestar uma forca que nasce\pda confianca, nao de\ncontrolar o outro.$"
SI_C_Text_MAYLENE_Intro_En::
 .string "MAYLENE: Lucario senses\nfear inside every radio in\ptown. Let us test strength\nbuilt on trust, rather\pthan control.$"
SI_C_Text_MAYLENE_Defeat::
 .string "Voce protegeu o amanha.$"
SI_C_Text_MAYLENE_Defeat_En::
 .string "You protected tomorrow.$"
SI_C_Text_MAYLENE_After::
 .string "Maylene encontra uma ordem\nde ataque ao Lago Valor. A\pcidade permanece vigiada\npor Looker. Procure Saturn\pantes que o pulso alcance\nos tres guardioes.$"
SI_C_Text_MAYLENE_After_En::
 .string "Maylene finds an order to\nattack Lake Valor. Looker\pstays to protect the city.\nStop Saturn before the\ppulse reaches all three\nguardians.$"
SI_C_Text_SATURN_VALOR_Intro::
 .string "SATURN: Azelf nos ensinou\nque vontade tambem pode\pser arrancada de alguem.\nHoje testaremos o que\presta da sua quando o lago\nsilenciar.$"
SI_C_Text_SATURN_VALOR_Intro_En::
 .string "SATURN: Azelf taught us\nthat willpower can be\ptaken away. Today we test\nwhat remains of yours when\pthis lake falls silent.$"
SI_C_Text_SATURN_VALOR_Defeat::
 .string "Voce protegeu o amanha.$"
SI_C_Text_SATURN_VALOR_Defeat_En::
 .string "You protected tomorrow.$"
SI_C_Text_SATURN_VALOR_After::
 .string "Azelf escapa, mas um\nfragmento de sua vontade\pficou no coletor. Rowan\npede ajuda ao lider de\pPastoria: as aguas estao\nescoando para uma fenda\pinvisivel.$"
SI_C_Text_SATURN_VALOR_After_En::
 .string "Azelf escapes, but a\nfragment of its will\premains inside the\ncollector. Rowan sends you\pto Pastoria: its water\ndrains into an invisible\prift.$"
SI_C_Text_WAKE_Intro::
 .string "WAKE: Quem luta por Sinnoh\nnao pode ter medo de\pmergulhar! A agua\nencontrou uma saida para\poutro mundo. Primeiro\nvamos descobrir se voce\paguenta a correnteza!$"
SI_C_Text_WAKE_Intro_En::
 .string "WAKE: A protector of\nSinnoh cannot fear the\pdeep! Water found a way\ninto another world. First,\pprove that you can\nwithstand the current!$"
SI_C_Text_WAKE_Defeat::
 .string "Voce protegeu o amanha.$"
SI_C_Text_WAKE_Defeat_En::
 .string "You protected tomorrow.$"
SI_C_Text_WAKE_After::
 .string "Wake estabiliza os canais.\nCynthia enviou uma pista:\pos registros de Celestic\ndescrevem um julgamento\pconduzido por Arceus.$"
SI_C_Text_WAKE_After_En::
 .string "Wake stabilizes the\nchannels. Cynthia sends a\pclue: the Celestic records\ndescribe a judgment\poverseen by Arceus.$"
SI_C_Text_BYRON_Intro::
 .string "BYRON: Meu filho protegeu\na memoria das pedras. Eu\pprotejo quem vive sobre\nelas. Cyrus roubou um\pnucleo antigo da\nbiblioteca. Mostre-me que\pvoce pode busca-lo!$"
SI_C_Text_BYRON_Intro_En::
 .string "BYRON: My son protects the\nmemory inside stone. I\pprotect those who live\nabove it. Cyrus stole an\pancient library core.\nProve that you can recover\pit!$"
SI_C_Text_BYRON_Defeat::
 .string "Voce protegeu o amanha.$"
SI_C_Text_BYRON_Defeat_En::
 .string "You protected tomorrow.$"
SI_C_Text_BYRON_After::
 .string "Byron entrega Strength.\nRowan aguarda na\pbiblioteca com o mapa de\num pulso que atravessa os\ptres lagos ao mesmo tempo.$"
SI_C_Text_BYRON_After_En::
 .string "Byron gives you Strength.\nRowan waits at the library\pwith a pulse map that\ncrosses all three lakes at\ponce.$"
SI_C_Text_SATURN_ACUITY_Intro::
 .string "SATURN: Uxie mostrou a\nCyrus cada erro que ele\painda cometeria. Como\npoderia continuar vivendo\pdepois de ver todos eles?\nEsquecer o mundo parece\pmisericordia.$"
SI_C_Text_SATURN_ACUITY_Intro_En::
 .string "SATURN: Uxie showed Cyrus\nevery mistake he would\pever make. How could he\nkeep living after seeing\pthem? Forgetting this\nworld feels merciful.$"
SI_C_Text_SATURN_ACUITY_Defeat::
 .string "Voce protegeu o amanha.$"
SI_C_Text_SATURN_ACUITY_Defeat_En::
 .string "You protected tomorrow.$"
SI_C_Text_SATURN_ACUITY_After::
 .string "Uxie rompe o circuito. Mas\nCyrus ja tem tres\pfragmentos. Candice\nprotege a ultima estrada\ppara o transmissor\ncentral.$"
SI_C_Text_SATURN_ACUITY_After_En::
 .string "Uxie breaks the circuit.\nCyrus already has three\pfragments. Candice guards\nthe last road toward the\pcentral transmitter.$"
SI_C_Text_CANDICE_Intro::
 .string "CANDICE: O gelo guardou\nlembrancas de gente que\pnunca existiu. Eu escolho\no nosso presente! Sua\pproxima batalha precisa\nderreter essa duvida.$"
SI_C_Text_CANDICE_Intro_En::
 .string "CANDICE: Ice preserved\nmemories of people who\pnever existed. I choose\nour present! Your next\pbattle must melt that\ndoubt.$"
SI_C_Text_CANDICE_Defeat::
 .string "Voce protegeu o amanha.$"
SI_C_Text_CANDICE_Defeat_En::
 .string "You protected tomorrow.$"
SI_C_Text_CANDICE_After::
 .string "Cynthia confirma: a sede\nGalactica em Veilstone\pesta transmitindo ao Mt.\nCoronet. Looker abriu um\pcaminho para voce.$"
SI_C_Text_CANDICE_After_En::
 .string "Cynthia confirms that\nGalactic Veilstone is\ptransmitting to Mt.\nCoronet. Looker opened a\proute for you.$"
SI_C_Text_CYRUS_Intro::
 .string "CYRUS: Vi mil versoes\ndeste mundo. Em todas,\palguem sofre. Dialga\nremovera o passado. Palkia\pfechara as saidas. Arceus\nsera obrigado a aceitar\pminha criacao.$"
SI_C_Text_CYRUS_Intro_En::
 .string "CYRUS: I saw a thousand\nversions of this world. In\pevery one, someone\nsuffers. Dialga will\premove the past. Palkia\nwill seal the exits.\pArceus must accept my\ncreation.$"
SI_C_Text_CYRUS_Defeat::
 .string "Voce protegeu o amanha.$"
SI_C_Text_CYRUS_Defeat_En::
 .string "You protected tomorrow.$"
SI_C_Text_CYRUS_After::
 .string "Cyrus abandona a sede e\nleva a corrente ao Spear\pPillar. Looker liberta os\npesquisadores. Suba pelo\pMt. Coronet antes do\nultimo pulso.$"
SI_C_Text_CYRUS_After_En::
 .string "Cyrus leaves for Spear\nPillar with the chain.\pLooker frees the\nresearchers. Climb Mt.\pCoronet before the final\npulse.$"
SI_C_Text_CYRUS_FINAL_Intro::
 .string "CYRUS: Giratina guardou\ntodos os futuros que eu\pdescartei. Agora eles me\nperseguem! Se eu tomar\peste mundo vazio, nenhum\nsentimento podera me ferir\pnovamente!$"
SI_C_Text_CYRUS_FINAL_Intro_En::
 .string "CYRUS: Giratina kept every\nfuture I discarded. Now\pthey pursue me! If I take\nthis empty world, no\pfeeling can ever hurt me\nagain!$"
SI_C_Text_CYRUS_FINAL_Defeat::
 .string "Voce protegeu o amanha.$"
SI_C_Text_CYRUS_FINAL_Defeat_En::
 .string "You protected tomorrow.$"
SI_C_Text_CYRUS_FINAL_After::
 .string "Cyrus cai de joelhos. Voce\nquebra a corrente, mas a\pfenda mostra Twinleaf\nsendo apagada. Giratina\pnao era o inimigo: ele\nsegurava os futuros\prejeitados.$"
SI_C_Text_CYRUS_FINAL_After_En::
 .string "Cyrus falls to his knees.\nYou break the chain, but\pthe rift shows Twinleaf\nbeing erased. Giratina was\pholding the rejected\nfutures together.$"
SI_C_Text_VOLKNER_Intro::
 .string "VOLKNER: Todos os relogios\npararam, mas minha cidade\pvoltou a acender. Voce\nescolheu o mundo\pimperfeito. Agora mostre a\nenergia que merece chegar\pa Liga!$"
SI_C_Text_VOLKNER_Intro_En::
 .string "VOLKNER: Every clock\nstopped, but my city\pshines again. You chose\nour imperfect world. Show\pme the energy that\ndeserves the League!$"
SI_C_Text_VOLKNER_Defeat::
 .string "Voce protegeu o amanha.$"
SI_C_Text_VOLKNER_Defeat_En::
 .string "You protected tomorrow.$"
SI_C_Text_VOLKNER_After::
 .string "Volkner entrega Waterfall.\nA Liga de Sinnoh espera ao\pnorte da Rota 223. Os\nguardioes voltaram aos\plagos; eles lembram de\nvoce.$"
SI_C_Text_VOLKNER_After_En::
 .string "Volkner gives you\nWaterfall. The Sinnoh\pLeague waits north of\nRoute 223. The guardians\preturned to their lakes,\nand remember you.$"
SI_C_Text_AARON_Intro::
 .string "AARON: Uma floresta\ninteira se sustenta em\pvidas pequenas. Voce\nsalvou os deuses. Agora\prespeite quem nunca\nprecisou ser um!$"
SI_C_Text_AARON_Intro_En::
 .string "AARON: A whole forest\nrelies on small lives. You\psaved the gods. Now\nrespect those who never\pneeded to become one!$"
SI_C_Text_AARON_Defeat::
 .string "Voce protegeu o amanha.$"
SI_C_Text_AARON_Defeat_En::
 .string "You protected tomorrow.$"
SI_C_Text_AARON_After::
 .string "Aaron reconhece sua\nvitoria. Bertha espera na\pproxima sala. A Liga\npreserva as vitorias se\pvoce precisar voltar para\nse preparar.$"
SI_C_Text_AARON_After_En::
 .string "Aaron recognizes your\nvictory. Bertha waits in\pthe next room. Your League\nprogress remains if you\pneed to prepare again.$"
SI_C_Text_BERTHA_Intro::
 .string "BERTHA: O mundo tem\nrachaduras e ainda assim\pnos sustenta. A paciencia\nvale mais que um futuro\psem erros. Vamos ver a\nsua!$"
SI_C_Text_BERTHA_Intro_En::
 .string "BERTHA: The world has\ncracks and still supports\pus. Patience matters more\nthan a future without\pmistakes. Let us test\nyours!$"
SI_C_Text_BERTHA_Defeat::
 .string "Voce protegeu o amanha.$"
SI_C_Text_BERTHA_Defeat_En::
 .string "You protected tomorrow.$"
SI_C_Text_BERTHA_After::
 .string "Bertha abre o caminho.\nFlint quer conhecer a\pchama que sobreviveu ao\nMundo Distorcido.$"
SI_C_Text_BERTHA_After_En::
 .string "Bertha opens the path.\nFlint wants to meet the\pflame that survived the\nDistortion World.$"
SI_C_Text_FLINT_Intro::
 .string "FLINT: O ceu voltou ao\nlugar e Volkner voltou a\psorrir. Agora deixe sua\nequipe mostrar toda a\pchama que tem!$"
SI_C_Text_FLINT_Intro_En::
 .string "FLINT: The sky returned,\nand Volkner smiles again.\pLet your team show every\nspark it has!$"
SI_C_Text_FLINT_Defeat::
 .string "Voce protegeu o amanha.$"
SI_C_Text_FLINT_Defeat_En::
 .string "You protected tomorrow.$"
SI_C_Text_FLINT_After::
 .string "Flint aponta a proxima\nporta. Lucian reuniu os\pregistros que sobreviveram\na crise.$"
SI_C_Text_FLINT_After_En::
 .string "Flint points to the next\ndoor. Lucian gathered the\precords that survived the\ncrisis.$"
SI_C_Text_LUCIAN_Intro::
 .string "LUCIAN: Arceus ofereceu um\nmundo perfeito e voce\pdevolveu a escolha as\npessoas. Conhecimento sem\pcompaixao foi a derrota de\nCyrus. O que sera a sua\pvitoria?$"
SI_C_Text_LUCIAN_Intro_En::
 .string "LUCIAN: Arceus offered\nperfection, and you\prestored human choice.\nKnowledge without\pcompassion defeated Cyrus.\nWhat will define your\pvictory?$"
SI_C_Text_LUCIAN_Defeat::
 .string "Voce protegeu o amanha.$"
SI_C_Text_LUCIAN_Defeat_En::
 .string "You protected tomorrow.$"
SI_C_Text_LUCIAN_After::
 .string "Lucian fecha seu livro.\nCynthia espera. Esta\pbatalha decide o titulo de\nCampeao de Sinnoh.$"
SI_C_Text_LUCIAN_After_En::
 .string "Lucian closes his book.\nCynthia waits. This battle\pdecides the title of\nSinnoh Champion.$"
SI_C_Text_CYNTHIA_Intro::
 .string "CYNTHIA: Quando Arceus\nabriu a porta, voce\ppoderia ter escolhido um\nmundo onde nunca perderia.\pEscolheu continuar. Eu\ntambem. Agora vamos lutar\ppelo amanha que\nconquistamos!$"
SI_C_Text_CYNTHIA_Intro_En::
 .string "CYNTHIA: When Arceus\nopened the door, you could\phave chosen a world where\nyou never lose. You chose\pto continue. So did I. Let\nus battle for the tomorrow\pwe earned!$"
SI_C_Text_CYNTHIA_Defeat::
 .string "Voce protegeu o amanha.$"
SI_C_Text_CYNTHIA_Defeat_En::
 .string "You protected tomorrow.$"
SI_C_Text_CYNTHIA_After::
 .string "CAMPEAO DE SINNOH! Os\nlagos brilham. Dialga,\pPalkia e Giratina esperam\nquem rompeu a corrente.\pDepois de encontra-los, o\nHall of Origin se abrira.\pLooker encontra Cyrus\nvivo, ajudando a\preconstruir a biblioteca.\nO futuro continua livre.$"
SI_C_Text_CYNTHIA_After_En::
 .string "SINNOH CHAMPION! The lakes\nshine. Dialga, Palkia and\pGiratina await the one who\nbroke the chain. Meet them\pto open the Hall of\nOrigin. Looker finds Cyrus\palive, rebuilding the\nlibrary. The future\premains free.$"
SI_C_Text_NotYet::
 .string "Este evento depende da\nmissao atual. Abra MISSAO\pno menu para descobrir o\nproximo destino.$"
SI_C_Text_NotYet_En::
 .string "This event requires the\ncurrent mission. Open\pMISSION in the menu to\nfind your next\pdestination.$"
SI_C_Text_Done::
 .string "Nossa parte na historia\nesta registrada. O proximo\ppasso aguarda voce no\ndiario MISSAO.$"
SI_C_Text_Done_En::
 .string "Our part in the story is\nrecorded. Your next step\pis listed in MISSION.$"
SI_C_Text_Celestic::
 .string "CYNTHIA: Arceus nao\nescolheu um mundo sem dor.\pEscolheu vidas capazes de\nmudar. Cyrus interpreta o\pespelho como uma ordem,\nmas ele mostra\ppossibilidades. Leve Surf\ne procure Byron em\pCanalave.$"
SI_C_Text_Celestic_En::
 .string "CYNTHIA: Arceus chose\nlives capable of change.\pCyrus thinks the mirror\ncommands him, but it shows\ppossibilities. Take Surf\nand find Byron in\pCanalave.$"
SI_C_Text_Library::
 .string "ROWAN: Os lagos sustentam\nvontade, emocao e memoria.\pCyrus roubou um fragmento\nde cada. Giratina guarda\pas possibilidades\ndescartadas. Sem os\pguardioes, todas vao\ninvadir este mundo. Corra\pao Lago Acuity!$"
SI_C_Text_Library_En::
 .string "ROWAN: The lakes sustain\nwill, emotion and memory.\pCyrus took a fragment of\neach. Giratina keeps\pdiscarded possibilities.\nWithout the guardians they\pwill flood this world.\nHurry to Lake Acuity!$"
SI_C_Text_Dream::
 .string "O ceu sobre Twinleaf se\ndobra. Voce ve sua casa\pvazia, coberta por agua,\ndepois por gelo. Uma\psombra deixa quatro\npalavras: NAO ACEITE O\pUNICO FUTURO.$"
SI_C_Text_Dream_En::
 .string "The Twinleaf sky folds.\nYou see your empty home\punder water, then ice. A\nshadow leaves four words:\pREJECT THE ONLY FUTURE.$"
SI_C_Text_Awake::
 .string "Voce desperta em Twinleaf.\nJOHANNA: O professor Rowan\pveio conferir os tremores.\nEle trouxe tres parceiros\ppara voce. ROWAN: O sonho\npode esperar; primeiro\pescolha quem vai caminhar\nao seu lado.$"
SI_C_Text_Awake_En::
 .string "You wake in Twinleaf.\nJOHANNA: Professor Rowan\pcame to check the tremors.\nHe brought three partners.\pROWAN: First choose who\nwill walk beside you.$"
SI_C_Text_Rift::
 .string "CYRUS: Dialga! Palkia!\nFechem o mundo! A corrente\ppuxa as estrelas. Cynthia\ne Looker tentam rompe-la,\pmas o chao vira um\nespelho. Giratina emerge\ppor baixo do altar e\narrasta Cyrus. A sombra do\pseu sonho estende uma\npassagem.$"
SI_C_Text_Rift_En::
 .string "CYRUS: Dialga! Palkia!\nSeal this world! The chain\ppulls the stars. Cynthia\nand Looker try to break\pit. The floor becomes a\nmirror. Giratina takes\pCyrus. Your dream shadow\nopens a passage.$"
SI_C_Text_Rift2::
 .string "CYNTHIA: Ele esta\nprotegendo os futuros que\pCyrus quer apagar. Se a\ncorrente continuar ligada,\peles vao destruir Sinnoh.\nEntre! Eu mantenho esta\ppassagem aberta.$"
SI_C_Text_Rift2_En::
 .string "CYNTHIA: Giratina protects\nthe futures Cyrus wants\perased. If the chain\nremains active, they will\pdestroy Sinnoh. Go! I will\nkeep the passage open.$"
SI_C_Text_Judgment::
 .string "Arceus abre dois caminhos.\nNo primeiro, voce nunca\pperde e ninguem lembra de\nquem escolheu diferente.\pNo segundo, todos os\nfuturos continuam\ppossiveis. Voce devolve a\ncorrente. Dialga retorna\pos segundos; Palkia\ndevolve os caminhos.\pGiratina segura a sombra.$"
SI_C_Text_Judgment_En::
 .string "Arceus opens two paths. In\none you never lose, and\pnobody remembers those who\nchose differently. In the\pother every future remains\npossible. You return the\pchain. Dialga restores\ntime; Palkia restores\pspace. Giratina holds the\nshadow.$"
SI_C_Text_Judgment2::
 .string "Sua equipe atravessa a\nsegunda porta. O espelho\pexplode em pequenas\nestrelas. Cada uma volta\ppara uma pessoa de Sinnoh.\nArceus nao apaga o mundo:\papaga a certeza de um\nunico destino.$"
SI_C_Text_Judgment2_En::
 .string "Your team crosses the\nsecond door. The mirror\pshatters into small stars.\nEach returns to a person\pin Sinnoh. Arceus erases\nthe certainty of a single\pdestiny.$"
SI_C_Text_Home::
 .string "JOHANNA: Voce voltou. O\nrelogio marcou a mesma\phora duas vezes, mas desta\nvez voce estava aqui.\pROWAN: Sinnoh ainda tem\nmuito a viver. Volkner\pespera em Sunyshore. A\nLiga continua aberta, e o\pamanha tambem.$"
SI_C_Text_Home_En::
 .string "JOHANNA: You returned. The\nclock marked the same hour\ptwice, but this time you\nwere here. ROWAN: Volkner\pwaits in Sunyshore. The\nLeague remains open, and\pso does tomorrow.$"
SI_C_Text_SI_C_Go_HearthomeCity_HearthomeCity_PokemonCenter::
 .string "Guia: seguir para\nHearthomeCity\pPokemonCenter?$"
SI_C_Text_SI_C_Go_HearthomeCity_HearthomeCity_PokemonCenter_En::
 .string "Guide: travel to\nHearthomeCity\pPokemonCenter?$"
SI_C_Text_SI_C_Go_HearthomeCity_HearthomeCity_PokemonCenter_Back::
 .string "Guia: seguir para\nHearthomeCity?$"
SI_C_Text_SI_C_Go_HearthomeCity_HearthomeCity_PokemonCenter_Back_En::
 .string "Guide: travel to\nHearthomeCity?$"
SI_C_Text_SI_C_Go_HearthomeCity_HearthomeCity_Mart::
 .string "Guia: seguir para\nHearthomeCity Mart?$"
SI_C_Text_SI_C_Go_HearthomeCity_HearthomeCity_Mart_En::
 .string "Guide: travel to\nHearthomeCity Mart?$"
SI_C_Text_SI_C_Go_HearthomeCity_HearthomeCity_Mart_Back::
 .string "Guia: seguir para\nHearthomeCity?$"
SI_C_Text_SI_C_Go_HearthomeCity_HearthomeCity_Mart_Back_En::
 .string "Guide: travel to\nHearthomeCity?$"
SI_C_Text_SI_C_Go_HearthomeCity_HearthomeCity_House::
 .string "Guia: seguir para\nHearthomeCity House?$"
SI_C_Text_SI_C_Go_HearthomeCity_HearthomeCity_House_En::
 .string "Guide: travel to\nHearthomeCity House?$"
SI_C_Text_SI_C_Go_HearthomeCity_HearthomeCity_House_Back::
 .string "Guia: seguir para\nHearthomeCity?$"
SI_C_Text_SI_C_Go_HearthomeCity_HearthomeCity_House_Back_En::
 .string "Guide: travel to\nHearthomeCity?$"
SI_C_Text_SI_C_Go_SolaceonTown_SolaceonTown_PokemonCenter::
 .string "Guia: seguir para\nSolaceonTown\pPokemonCenter?$"
SI_C_Text_SI_C_Go_SolaceonTown_SolaceonTown_PokemonCenter_En::
 .string "Guide: travel to\nSolaceonTown\pPokemonCenter?$"
SI_C_Text_SI_C_Go_SolaceonTown_SolaceonTown_PokemonCenter_Back::
 .string "Guia: seguir para\nSolaceonTown?$"
SI_C_Text_SI_C_Go_SolaceonTown_SolaceonTown_PokemonCenter_Back_En::
 .string "Guide: travel to\nSolaceonTown?$"
SI_C_Text_SI_C_Go_SolaceonTown_SolaceonTown_Mart::
 .string "Guia: seguir para\nSolaceonTown Mart?$"
SI_C_Text_SI_C_Go_SolaceonTown_SolaceonTown_Mart_En::
 .string "Guide: travel to\nSolaceonTown Mart?$"
SI_C_Text_SI_C_Go_SolaceonTown_SolaceonTown_Mart_Back::
 .string "Guia: seguir para\nSolaceonTown?$"
SI_C_Text_SI_C_Go_SolaceonTown_SolaceonTown_Mart_Back_En::
 .string "Guide: travel to\nSolaceonTown?$"
SI_C_Text_SI_C_Go_SolaceonTown_SolaceonTown_House::
 .string "Guia: seguir para\nSolaceonTown House?$"
SI_C_Text_SI_C_Go_SolaceonTown_SolaceonTown_House_En::
 .string "Guide: travel to\nSolaceonTown House?$"
SI_C_Text_SI_C_Go_SolaceonTown_SolaceonTown_House_Back::
 .string "Guia: seguir para\nSolaceonTown?$"
SI_C_Text_SI_C_Go_SolaceonTown_SolaceonTown_House_Back_En::
 .string "Guide: travel to\nSolaceonTown?$"
SI_C_Text_SI_C_Go_VeilstoneCity_VeilstoneCity_PokemonCenter::
 .string "Guia: seguir para\nVeilstoneCity\pPokemonCenter?$"
SI_C_Text_SI_C_Go_VeilstoneCity_VeilstoneCity_PokemonCenter_En::
 .string "Guide: travel to\nVeilstoneCity\pPokemonCenter?$"
SI_C_Text_SI_C_Go_VeilstoneCity_VeilstoneCity_PokemonCenter_Back::
 .string "Guia: seguir para\nVeilstoneCity?$"
SI_C_Text_SI_C_Go_VeilstoneCity_VeilstoneCity_PokemonCenter_Back_En::
 .string "Guide: travel to\nVeilstoneCity?$"
SI_C_Text_SI_C_Go_VeilstoneCity_VeilstoneCity_Mart::
 .string "Guia: seguir para\nVeilstoneCity Mart?$"
SI_C_Text_SI_C_Go_VeilstoneCity_VeilstoneCity_Mart_En::
 .string "Guide: travel to\nVeilstoneCity Mart?$"
SI_C_Text_SI_C_Go_VeilstoneCity_VeilstoneCity_Mart_Back::
 .string "Guia: seguir para\nVeilstoneCity?$"
SI_C_Text_SI_C_Go_VeilstoneCity_VeilstoneCity_Mart_Back_En::
 .string "Guide: travel to\nVeilstoneCity?$"
SI_C_Text_SI_C_Go_VeilstoneCity_VeilstoneCity_House::
 .string "Guia: seguir para\nVeilstoneCity House?$"
SI_C_Text_SI_C_Go_VeilstoneCity_VeilstoneCity_House_En::
 .string "Guide: travel to\nVeilstoneCity House?$"
SI_C_Text_SI_C_Go_VeilstoneCity_VeilstoneCity_House_Back::
 .string "Guia: seguir para\nVeilstoneCity?$"
SI_C_Text_SI_C_Go_VeilstoneCity_VeilstoneCity_House_Back_En::
 .string "Guide: travel to\nVeilstoneCity?$"
SI_C_Text_SI_C_Go_PastoriaCity_PastoriaCity_PokemonCenter::
 .string "Guia: seguir para\nPastoriaCity\pPokemonCenter?$"
SI_C_Text_SI_C_Go_PastoriaCity_PastoriaCity_PokemonCenter_En::
 .string "Guide: travel to\nPastoriaCity\pPokemonCenter?$"
SI_C_Text_SI_C_Go_PastoriaCity_PastoriaCity_PokemonCenter_Back::
 .string "Guia: seguir para\nPastoriaCity?$"
SI_C_Text_SI_C_Go_PastoriaCity_PastoriaCity_PokemonCenter_Back_En::
 .string "Guide: travel to\nPastoriaCity?$"
SI_C_Text_SI_C_Go_PastoriaCity_PastoriaCity_Mart::
 .string "Guia: seguir para\nPastoriaCity Mart?$"
SI_C_Text_SI_C_Go_PastoriaCity_PastoriaCity_Mart_En::
 .string "Guide: travel to\nPastoriaCity Mart?$"
SI_C_Text_SI_C_Go_PastoriaCity_PastoriaCity_Mart_Back::
 .string "Guia: seguir para\nPastoriaCity?$"
SI_C_Text_SI_C_Go_PastoriaCity_PastoriaCity_Mart_Back_En::
 .string "Guide: travel to\nPastoriaCity?$"
SI_C_Text_SI_C_Go_PastoriaCity_PastoriaCity_House::
 .string "Guia: seguir para\nPastoriaCity House?$"
SI_C_Text_SI_C_Go_PastoriaCity_PastoriaCity_House_En::
 .string "Guide: travel to\nPastoriaCity House?$"
SI_C_Text_SI_C_Go_PastoriaCity_PastoriaCity_House_Back::
 .string "Guia: seguir para\nPastoriaCity?$"
SI_C_Text_SI_C_Go_PastoriaCity_PastoriaCity_House_Back_En::
 .string "Guide: travel to\nPastoriaCity?$"
SI_C_Text_SI_C_Go_CelesticTown_CelesticTown_PokemonCenter::
 .string "Guia: seguir para\nCelesticTown\pPokemonCenter?$"
SI_C_Text_SI_C_Go_CelesticTown_CelesticTown_PokemonCenter_En::
 .string "Guide: travel to\nCelesticTown\pPokemonCenter?$"
SI_C_Text_SI_C_Go_CelesticTown_CelesticTown_PokemonCenter_Back::
 .string "Guia: seguir para\nCelesticTown?$"
SI_C_Text_SI_C_Go_CelesticTown_CelesticTown_PokemonCenter_Back_En::
 .string "Guide: travel to\nCelesticTown?$"
SI_C_Text_SI_C_Go_CelesticTown_CelesticTown_Mart::
 .string "Guia: seguir para\nCelesticTown Mart?$"
SI_C_Text_SI_C_Go_CelesticTown_CelesticTown_Mart_En::
 .string "Guide: travel to\nCelesticTown Mart?$"
SI_C_Text_SI_C_Go_CelesticTown_CelesticTown_Mart_Back::
 .string "Guia: seguir para\nCelesticTown?$"
SI_C_Text_SI_C_Go_CelesticTown_CelesticTown_Mart_Back_En::
 .string "Guide: travel to\nCelesticTown?$"
SI_C_Text_SI_C_Go_CelesticTown_CelesticTown_House::
 .string "Guia: seguir para\nCelesticTown House?$"
SI_C_Text_SI_C_Go_CelesticTown_CelesticTown_House_En::
 .string "Guide: travel to\nCelesticTown House?$"
SI_C_Text_SI_C_Go_CelesticTown_CelesticTown_House_Back::
 .string "Guia: seguir para\nCelesticTown?$"
SI_C_Text_SI_C_Go_CelesticTown_CelesticTown_House_Back_En::
 .string "Guide: travel to\nCelesticTown?$"
SI_C_Text_SI_C_Go_CanalaveCity_CanalaveCity_PokemonCenter::
 .string "Guia: seguir para\nCanalaveCity\pPokemonCenter?$"
SI_C_Text_SI_C_Go_CanalaveCity_CanalaveCity_PokemonCenter_En::
 .string "Guide: travel to\nCanalaveCity\pPokemonCenter?$"
SI_C_Text_SI_C_Go_CanalaveCity_CanalaveCity_PokemonCenter_Back::
 .string "Guia: seguir para\nCanalaveCity?$"
SI_C_Text_SI_C_Go_CanalaveCity_CanalaveCity_PokemonCenter_Back_En::
 .string "Guide: travel to\nCanalaveCity?$"
SI_C_Text_SI_C_Go_CanalaveCity_CanalaveCity_Mart::
 .string "Guia: seguir para\nCanalaveCity Mart?$"
SI_C_Text_SI_C_Go_CanalaveCity_CanalaveCity_Mart_En::
 .string "Guide: travel to\nCanalaveCity Mart?$"
SI_C_Text_SI_C_Go_CanalaveCity_CanalaveCity_Mart_Back::
 .string "Guia: seguir para\nCanalaveCity?$"
SI_C_Text_SI_C_Go_CanalaveCity_CanalaveCity_Mart_Back_En::
 .string "Guide: travel to\nCanalaveCity?$"
SI_C_Text_SI_C_Go_CanalaveCity_CanalaveCity_House::
 .string "Guia: seguir para\nCanalaveCity House?$"
SI_C_Text_SI_C_Go_CanalaveCity_CanalaveCity_House_En::
 .string "Guide: travel to\nCanalaveCity House?$"
SI_C_Text_SI_C_Go_CanalaveCity_CanalaveCity_House_Back::
 .string "Guia: seguir para\nCanalaveCity?$"
SI_C_Text_SI_C_Go_CanalaveCity_CanalaveCity_House_Back_En::
 .string "Guide: travel to\nCanalaveCity?$"
SI_C_Text_SI_C_Go_SnowpointCity_SnowpointCity_PokemonCenter::
 .string "Guia: seguir para\nSnowpointCity\pPokemonCenter?$"
SI_C_Text_SI_C_Go_SnowpointCity_SnowpointCity_PokemonCenter_En::
 .string "Guide: travel to\nSnowpointCity\pPokemonCenter?$"
SI_C_Text_SI_C_Go_SnowpointCity_SnowpointCity_PokemonCenter_Back::
 .string "Guia: seguir para\nSnowpointCity?$"
SI_C_Text_SI_C_Go_SnowpointCity_SnowpointCity_PokemonCenter_Back_En::
 .string "Guide: travel to\nSnowpointCity?$"
SI_C_Text_SI_C_Go_SnowpointCity_SnowpointCity_Mart::
 .string "Guia: seguir para\nSnowpointCity Mart?$"
SI_C_Text_SI_C_Go_SnowpointCity_SnowpointCity_Mart_En::
 .string "Guide: travel to\nSnowpointCity Mart?$"
SI_C_Text_SI_C_Go_SnowpointCity_SnowpointCity_Mart_Back::
 .string "Guia: seguir para\nSnowpointCity?$"
SI_C_Text_SI_C_Go_SnowpointCity_SnowpointCity_Mart_Back_En::
 .string "Guide: travel to\nSnowpointCity?$"
SI_C_Text_SI_C_Go_SnowpointCity_SnowpointCity_House::
 .string "Guia: seguir para\nSnowpointCity House?$"
SI_C_Text_SI_C_Go_SnowpointCity_SnowpointCity_House_En::
 .string "Guide: travel to\nSnowpointCity House?$"
SI_C_Text_SI_C_Go_SnowpointCity_SnowpointCity_House_Back::
 .string "Guia: seguir para\nSnowpointCity?$"
SI_C_Text_SI_C_Go_SnowpointCity_SnowpointCity_House_Back_En::
 .string "Guide: travel to\nSnowpointCity?$"
SI_C_Text_SI_C_Go_SunyshoreCity_SunyshoreCity_PokemonCenter::
 .string "Guia: seguir para\nSunyshoreCity\pPokemonCenter?$"
SI_C_Text_SI_C_Go_SunyshoreCity_SunyshoreCity_PokemonCenter_En::
 .string "Guide: travel to\nSunyshoreCity\pPokemonCenter?$"
SI_C_Text_SI_C_Go_SunyshoreCity_SunyshoreCity_PokemonCenter_Back::
 .string "Guia: seguir para\nSunyshoreCity?$"
SI_C_Text_SI_C_Go_SunyshoreCity_SunyshoreCity_PokemonCenter_Back_En::
 .string "Guide: travel to\nSunyshoreCity?$"
SI_C_Text_SI_C_Go_SunyshoreCity_SunyshoreCity_Mart::
 .string "Guia: seguir para\nSunyshoreCity Mart?$"
SI_C_Text_SI_C_Go_SunyshoreCity_SunyshoreCity_Mart_En::
 .string "Guide: travel to\nSunyshoreCity Mart?$"
SI_C_Text_SI_C_Go_SunyshoreCity_SunyshoreCity_Mart_Back::
 .string "Guia: seguir para\nSunyshoreCity?$"
SI_C_Text_SI_C_Go_SunyshoreCity_SunyshoreCity_Mart_Back_En::
 .string "Guide: travel to\nSunyshoreCity?$"
SI_C_Text_SI_C_Go_SunyshoreCity_SunyshoreCity_House::
 .string "Guia: seguir para\nSunyshoreCity House?$"
SI_C_Text_SI_C_Go_SunyshoreCity_SunyshoreCity_House_En::
 .string "Guide: travel to\nSunyshoreCity House?$"
SI_C_Text_SI_C_Go_SunyshoreCity_SunyshoreCity_House_Back::
 .string "Guia: seguir para\nSunyshoreCity?$"
SI_C_Text_SI_C_Go_SunyshoreCity_SunyshoreCity_House_Back_En::
 .string "Guide: travel to\nSunyshoreCity?$"
SI_C_Text_SI_C_Go_FightArea_FightArea_PokemonCenter::
 .string "Guia: seguir para\nFightArea PokemonCenter?$"
SI_C_Text_SI_C_Go_FightArea_FightArea_PokemonCenter_En::
 .string "Guide: travel to FightArea\nPokemonCenter?$"
SI_C_Text_SI_C_Go_FightArea_FightArea_PokemonCenter_Back::
 .string "Guia: seguir para\nFightArea?$"
SI_C_Text_SI_C_Go_FightArea_FightArea_PokemonCenter_Back_En::
 .string "Guide: travel to\nFightArea?$"
SI_C_Text_SI_C_Go_FightArea_FightArea_Mart::
 .string "Guia: seguir para\nFightArea Mart?$"
SI_C_Text_SI_C_Go_FightArea_FightArea_Mart_En::
 .string "Guide: travel to FightArea\nMart?$"
SI_C_Text_SI_C_Go_FightArea_FightArea_Mart_Back::
 .string "Guia: seguir para\nFightArea?$"
SI_C_Text_SI_C_Go_FightArea_FightArea_Mart_Back_En::
 .string "Guide: travel to\nFightArea?$"
SI_C_Text_SI_C_Go_FightArea_FightArea_House::
 .string "Guia: seguir para\nFightArea House?$"
SI_C_Text_SI_C_Go_FightArea_FightArea_House_En::
 .string "Guide: travel to FightArea\nHouse?$"
SI_C_Text_SI_C_Go_FightArea_FightArea_House_Back::
 .string "Guia: seguir para\nFightArea?$"
SI_C_Text_SI_C_Go_FightArea_FightArea_House_Back_En::
 .string "Guide: travel to\nFightArea?$"
SI_C_Text_SI_C_Go_ResortArea_ResortArea_PokemonCenter::
 .string "Guia: seguir para\nResortArea PokemonCenter?$"
SI_C_Text_SI_C_Go_ResortArea_ResortArea_PokemonCenter_En::
 .string "Guide: travel to\nResortArea PokemonCenter?$"
SI_C_Text_SI_C_Go_ResortArea_ResortArea_PokemonCenter_Back::
 .string "Guia: seguir para\nResortArea?$"
SI_C_Text_SI_C_Go_ResortArea_ResortArea_PokemonCenter_Back_En::
 .string "Guide: travel to\nResortArea?$"
SI_C_Text_SI_C_Go_ResortArea_ResortArea_Mart::
 .string "Guia: seguir para\nResortArea Mart?$"
SI_C_Text_SI_C_Go_ResortArea_ResortArea_Mart_En::
 .string "Guide: travel to\nResortArea Mart?$"
SI_C_Text_SI_C_Go_ResortArea_ResortArea_Mart_Back::
 .string "Guia: seguir para\nResortArea?$"
SI_C_Text_SI_C_Go_ResortArea_ResortArea_Mart_Back_En::
 .string "Guide: travel to\nResortArea?$"
SI_C_Text_SI_C_Go_ResortArea_ResortArea_House::
 .string "Guia: seguir para\nResortArea House?$"
SI_C_Text_SI_C_Go_ResortArea_ResortArea_House_En::
 .string "Guide: travel to\nResortArea House?$"
SI_C_Text_SI_C_Go_ResortArea_ResortArea_House_Back::
 .string "Guia: seguir para\nResortArea?$"
SI_C_Text_SI_C_Go_ResortArea_ResortArea_House_Back_En::
 .string "Guide: travel to\nResortArea?$"
SI_C_Text_SI_C_Go_SurvivalArea_SurvivalArea_PokemonCenter::
 .string "Guia: seguir para\nSurvivalArea\pPokemonCenter?$"
SI_C_Text_SI_C_Go_SurvivalArea_SurvivalArea_PokemonCenter_En::
 .string "Guide: travel to\nSurvivalArea\pPokemonCenter?$"
SI_C_Text_SI_C_Go_SurvivalArea_SurvivalArea_PokemonCenter_Back::
 .string "Guia: seguir para\nSurvivalArea?$"
SI_C_Text_SI_C_Go_SurvivalArea_SurvivalArea_PokemonCenter_Back_En::
 .string "Guide: travel to\nSurvivalArea?$"
SI_C_Text_SI_C_Go_SurvivalArea_SurvivalArea_Mart::
 .string "Guia: seguir para\nSurvivalArea Mart?$"
SI_C_Text_SI_C_Go_SurvivalArea_SurvivalArea_Mart_En::
 .string "Guide: travel to\nSurvivalArea Mart?$"
SI_C_Text_SI_C_Go_SurvivalArea_SurvivalArea_Mart_Back::
 .string "Guia: seguir para\nSurvivalArea?$"
SI_C_Text_SI_C_Go_SurvivalArea_SurvivalArea_Mart_Back_En::
 .string "Guide: travel to\nSurvivalArea?$"
SI_C_Text_SI_C_Go_SurvivalArea_SurvivalArea_House::
 .string "Guia: seguir para\nSurvivalArea House?$"
SI_C_Text_SI_C_Go_SurvivalArea_SurvivalArea_House_En::
 .string "Guide: travel to\nSurvivalArea House?$"
SI_C_Text_SI_C_Go_SurvivalArea_SurvivalArea_House_Back::
 .string "Guia: seguir para\nSurvivalArea?$"
SI_C_Text_SI_C_Go_SurvivalArea_SurvivalArea_House_Back_En::
 .string "Guide: travel to\nSurvivalArea?$"
SI_C_Text_SI_C_Go_HearthomeCity_HearthomeCity_Gym::
 .string "Guia: seguir para\nHearthomeCity Gym?$"
SI_C_Text_SI_C_Go_HearthomeCity_HearthomeCity_Gym_En::
 .string "Guide: travel to\nHearthomeCity Gym?$"
SI_C_Text_SI_C_Go_HearthomeCity_HearthomeCity_Gym_Back::
 .string "Guia: seguir para\nHearthomeCity?$"
SI_C_Text_SI_C_Go_HearthomeCity_HearthomeCity_Gym_Back_En::
 .string "Guide: travel to\nHearthomeCity?$"
SI_C_Text_SI_C_Go_VeilstoneCity_VeilstoneCity_Gym::
 .string "Guia: seguir para\nVeilstoneCity Gym?$"
SI_C_Text_SI_C_Go_VeilstoneCity_VeilstoneCity_Gym_En::
 .string "Guide: travel to\nVeilstoneCity Gym?$"
SI_C_Text_SI_C_Go_VeilstoneCity_VeilstoneCity_Gym_Back::
 .string "Guia: seguir para\nVeilstoneCity?$"
SI_C_Text_SI_C_Go_VeilstoneCity_VeilstoneCity_Gym_Back_En::
 .string "Guide: travel to\nVeilstoneCity?$"
SI_C_Text_SI_C_Go_PastoriaCity_PastoriaCity_Gym::
 .string "Guia: seguir para\nPastoriaCity Gym?$"
SI_C_Text_SI_C_Go_PastoriaCity_PastoriaCity_Gym_En::
 .string "Guide: travel to\nPastoriaCity Gym?$"
SI_C_Text_SI_C_Go_PastoriaCity_PastoriaCity_Gym_Back::
 .string "Guia: seguir para\nPastoriaCity?$"
SI_C_Text_SI_C_Go_PastoriaCity_PastoriaCity_Gym_Back_En::
 .string "Guide: travel to\nPastoriaCity?$"
SI_C_Text_SI_C_Go_CanalaveCity_CanalaveCity_Gym::
 .string "Guia: seguir para\nCanalaveCity Gym?$"
SI_C_Text_SI_C_Go_CanalaveCity_CanalaveCity_Gym_En::
 .string "Guide: travel to\nCanalaveCity Gym?$"
SI_C_Text_SI_C_Go_CanalaveCity_CanalaveCity_Gym_Back::
 .string "Guia: seguir para\nCanalaveCity?$"
SI_C_Text_SI_C_Go_CanalaveCity_CanalaveCity_Gym_Back_En::
 .string "Guide: travel to\nCanalaveCity?$"
SI_C_Text_SI_C_Go_SnowpointCity_SnowpointCity_Gym::
 .string "Guia: seguir para\nSnowpointCity Gym?$"
SI_C_Text_SI_C_Go_SnowpointCity_SnowpointCity_Gym_En::
 .string "Guide: travel to\nSnowpointCity Gym?$"
SI_C_Text_SI_C_Go_SnowpointCity_SnowpointCity_Gym_Back::
 .string "Guia: seguir para\nSnowpointCity?$"
SI_C_Text_SI_C_Go_SnowpointCity_SnowpointCity_Gym_Back_En::
 .string "Guide: travel to\nSnowpointCity?$"
SI_C_Text_SI_C_Go_SunyshoreCity_SunyshoreCity_Gym::
 .string "Guia: seguir para\nSunyshoreCity Gym?$"
SI_C_Text_SI_C_Go_SunyshoreCity_SunyshoreCity_Gym_En::
 .string "Guide: travel to\nSunyshoreCity Gym?$"
SI_C_Text_SI_C_Go_SunyshoreCity_SunyshoreCity_Gym_Back::
 .string "Guia: seguir para\nSunyshoreCity?$"
SI_C_Text_SI_C_Go_SunyshoreCity_SunyshoreCity_Gym_Back_En::
 .string "Guide: travel to\nSunyshoreCity?$"
SI_C_Text_SI_C_Go_CanalaveCity_CanalaveLibrary::
 .string "Guia: seguir para\nCanalaveLibrary?$"
SI_C_Text_SI_C_Go_CanalaveCity_CanalaveLibrary_En::
 .string "Guide: travel to\nCanalaveLibrary?$"
SI_C_Text_SI_C_Go_CanalaveCity_CanalaveLibrary_Back::
 .string "Guia: seguir para\nCanalaveCity?$"
SI_C_Text_SI_C_Go_CanalaveCity_CanalaveLibrary_Back_En::
 .string "Guide: travel to\nCanalaveCity?$"
SI_C_Text_SI_C_Go_VeilstoneCity_VeilstoneHQ::
 .string "Guia: seguir para\nVeilstoneHQ?$"
SI_C_Text_SI_C_Go_VeilstoneCity_VeilstoneHQ_En::
 .string "Guide: travel to\nVeilstoneHQ?$"
SI_C_Text_SI_C_Go_VeilstoneCity_VeilstoneHQ_Back::
 .string "Guia: seguir para\nVeilstoneCity?$"
SI_C_Text_SI_C_Go_VeilstoneCity_VeilstoneHQ_Back_En::
 .string "Guide: travel to\nVeilstoneCity?$"
SI_C_Text_SI_C_Go_Route207_MtCoronetSummit::
 .string "Guia: seguir para\nMtCoronetSummit?$"
SI_C_Text_SI_C_Go_Route207_MtCoronetSummit_En::
 .string "Guide: travel to\nMtCoronetSummit?$"
SI_C_Text_SI_C_Go_Route207_MtCoronetSummit_Back::
 .string "Guia: seguir para\nRoute207?$"
SI_C_Text_SI_C_Go_Route207_MtCoronetSummit_Back_En::
 .string "Guide: travel to Route207?$"
SI_C_Text_SI_C_Go_MtCoronetSummit_SpearPillar::
 .string "Guia: seguir para\nSpearPillar?$"
SI_C_Text_SI_C_Go_MtCoronetSummit_SpearPillar_En::
 .string "Guide: travel to\nSpearPillar?$"
SI_C_Text_SI_C_Go_MtCoronetSummit_SpearPillar_Back::
 .string "Guia: seguir para\nMtCoronetSummit?$"
SI_C_Text_SI_C_Go_MtCoronetSummit_SpearPillar_Back_En::
 .string "Guide: travel to\nMtCoronetSummit?$"
SI_C_Text_SI_C_Go_SpearPillar_DistortionWorld::
 .string "Guia: seguir para\nDistortionWorld?$"
SI_C_Text_SI_C_Go_SpearPillar_DistortionWorld_En::
 .string "Guide: travel to\nDistortionWorld?$"
SI_C_Text_SI_C_Go_SpearPillar_DistortionWorld_Back::
 .string "Guia: seguir para\nSpearPillar?$"
SI_C_Text_SI_C_Go_SpearPillar_DistortionWorld_Back_En::
 .string "Guide: travel to\nSpearPillar?$"
SI_C_Text_SI_C_Go_SpearPillar_HallOfOrigin::
 .string "Guia: seguir para\nHallOfOrigin?$"
SI_C_Text_SI_C_Go_SpearPillar_HallOfOrigin_En::
 .string "Guide: travel to\nHallOfOrigin?$"
SI_C_Text_SI_C_Go_SpearPillar_HallOfOrigin_Back::
 .string "Guia: seguir para\nSpearPillar?$"
SI_C_Text_SI_C_Go_SpearPillar_HallOfOrigin_Back_En::
 .string "Guide: travel to\nSpearPillar?$"
SI_C_Text_SI_C_Go_Route214_TurnbackCave::
 .string "Guia: seguir para\nTurnbackCave?$"
SI_C_Text_SI_C_Go_Route214_TurnbackCave_En::
 .string "Guide: travel to\nTurnbackCave?$"
SI_C_Text_SI_C_Go_Route214_TurnbackCave_Back::
 .string "Guia: seguir para\nRoute214?$"
SI_C_Text_SI_C_Go_Route214_TurnbackCave_Back_En::
 .string "Guide: travel to Route214?$"
SI_C_Text_SI_C_Go_SnowpointCity_SnowpointTemple::
 .string "Guia: seguir para\nSnowpointTemple?$"
SI_C_Text_SI_C_Go_SnowpointCity_SnowpointTemple_En::
 .string "Guide: travel to\nSnowpointTemple?$"
SI_C_Text_SI_C_Go_SnowpointCity_SnowpointTemple_Back::
 .string "Guia: seguir para\nSnowpointCity?$"
SI_C_Text_SI_C_Go_SnowpointCity_SnowpointTemple_Back_En::
 .string "Guide: travel to\nSnowpointCity?$"
SI_C_Text_SI_C_Go_Route217_LakeAcuity::
 .string "Guia: seguir para\nLakeAcuity?$"
SI_C_Text_SI_C_Go_Route217_LakeAcuity_En::
 .string "Guide: travel to\nLakeAcuity?$"
SI_C_Text_SI_C_Go_Route217_LakeAcuity_Back::
 .string "Guia: seguir para\nRoute217?$"
SI_C_Text_SI_C_Go_Route217_LakeAcuity_Back_En::
 .string "Guide: travel to Route217?$"
SI_C_Text_SI_C_Go_SunyshoreCity_VictoryRoad::
 .string "Guia: seguir para\nVictoryRoad?$"
SI_C_Text_SI_C_Go_SunyshoreCity_VictoryRoad_En::
 .string "Guide: travel to\nVictoryRoad?$"
SI_C_Text_SI_C_Go_SunyshoreCity_VictoryRoad_Back::
 .string "Guia: seguir para\nSunyshoreCity?$"
SI_C_Text_SI_C_Go_SunyshoreCity_VictoryRoad_Back_En::
 .string "Guide: travel to\nSunyshoreCity?$"
SI_C_Text_SI_C_Go_VictoryRoad_LeagueAaron::
 .string "Guia: seguir para\nLeagueAaron?$"
SI_C_Text_SI_C_Go_VictoryRoad_LeagueAaron_En::
 .string "Guide: travel to\nLeagueAaron?$"
SI_C_Text_SI_C_Go_VictoryRoad_LeagueAaron_Back::
 .string "Guia: seguir para\nVictoryRoad?$"
SI_C_Text_SI_C_Go_VictoryRoad_LeagueAaron_Back_En::
 .string "Guide: travel to\nVictoryRoad?$"
SI_C_Text_SI_C_Go_LeagueAaron_LeagueBertha::
 .string "Guia: seguir para\nLeagueBertha?$"
SI_C_Text_SI_C_Go_LeagueAaron_LeagueBertha_En::
 .string "Guide: travel to\nLeagueBertha?$"
SI_C_Text_SI_C_Go_LeagueAaron_LeagueBertha_Back::
 .string "Guia: seguir para\nLeagueAaron?$"
SI_C_Text_SI_C_Go_LeagueAaron_LeagueBertha_Back_En::
 .string "Guide: travel to\nLeagueAaron?$"
SI_C_Text_SI_C_Go_LeagueBertha_LeagueFlint::
 .string "Guia: seguir para\nLeagueFlint?$"
SI_C_Text_SI_C_Go_LeagueBertha_LeagueFlint_En::
 .string "Guide: travel to\nLeagueFlint?$"
SI_C_Text_SI_C_Go_LeagueBertha_LeagueFlint_Back::
 .string "Guia: seguir para\nLeagueBertha?$"
SI_C_Text_SI_C_Go_LeagueBertha_LeagueFlint_Back_En::
 .string "Guide: travel to\nLeagueBertha?$"
SI_C_Text_SI_C_Go_LeagueFlint_LeagueLucian::
 .string "Guia: seguir para\nLeagueLucian?$"
SI_C_Text_SI_C_Go_LeagueFlint_LeagueLucian_En::
 .string "Guide: travel to\nLeagueLucian?$"
SI_C_Text_SI_C_Go_LeagueFlint_LeagueLucian_Back::
 .string "Guia: seguir para\nLeagueFlint?$"
SI_C_Text_SI_C_Go_LeagueFlint_LeagueLucian_Back_En::
 .string "Guide: travel to\nLeagueFlint?$"
SI_C_Text_SI_C_Go_LeagueLucian_LeagueCynthia::
 .string "Guia: seguir para\nLeagueCynthia?$"
SI_C_Text_SI_C_Go_LeagueLucian_LeagueCynthia_En::
 .string "Guide: travel to\nLeagueCynthia?$"
SI_C_Text_SI_C_Go_LeagueLucian_LeagueCynthia_Back::
 .string "Guia: seguir para\nLeagueLucian?$"
SI_C_Text_SI_C_Go_LeagueLucian_LeagueCynthia_Back_En::
 .string "Guide: travel to\nLeagueLucian?$"
SI_C_Text_SI_C_Go_SnowpointCity_FightArea::
 .string "Guia: seguir para\nFightArea?$"
SI_C_Text_SI_C_Go_SnowpointCity_FightArea_En::
 .string "Guide: travel to\nFightArea?$"
SI_C_Text_SI_C_Go_SnowpointCity_FightArea_Back::
 .string "Guia: seguir para\nSnowpointCity?$"
SI_C_Text_SI_C_Go_SnowpointCity_FightArea_Back_En::
 .string "Guide: travel to\nSnowpointCity?$"
SI_C_Text_DIALGA_Meet::
 .string "Dialga reconhece voce.\nAproxime-se e tente\pcaptura-lo. Fugir ou\nderrota-lo permite tentar\pnovamente.$"
SI_C_Text_DIALGA_Meet_En::
 .string "Dialga recognizes you. Try\nto catch it. Running or\pdefeating it allows\nanother attempt.$"
SI_C_Text_DIALGA_Caught::
 .string "Dialga agora caminha ao\nseu lado. O futuro\ppertence a quem pode\nescolher.$"
SI_C_Text_DIALGA_Caught_En::
 .string "Dialga now walks beside\nyou. The future belongs to\pthose who can choose.$"
SI_C_Text_PALKIA_Meet::
 .string "Palkia reconhece voce.\nAproxime-se e tente\pcaptura-lo. Fugir ou\nderrota-lo permite tentar\pnovamente.$"
SI_C_Text_PALKIA_Meet_En::
 .string "Palkia recognizes you. Try\nto catch it. Running or\pdefeating it allows\nanother attempt.$"
SI_C_Text_PALKIA_Caught::
 .string "Palkia agora caminha ao\nseu lado. O futuro\ppertence a quem pode\nescolher.$"
SI_C_Text_PALKIA_Caught_En::
 .string "Palkia now walks beside\nyou. The future belongs to\pthose who can choose.$"
SI_C_Text_GIRATINA_Meet::
 .string "Giratina reconhece voce.\nAproxime-se e tente\pcaptura-lo. Fugir ou\nderrota-lo permite tentar\pnovamente.$"
SI_C_Text_GIRATINA_Meet_En::
 .string "Giratina recognizes you.\nTry to catch it. Running\por defeating it allows\nanother attempt.$"
SI_C_Text_GIRATINA_Caught::
 .string "Giratina agora caminha ao\nseu lado. O futuro\ppertence a quem pode\nescolher.$"
SI_C_Text_GIRATINA_Caught_En::
 .string "Giratina now walks beside\nyou. The future belongs to\pthose who can choose.$"
SI_C_Text_ARCEUS_Meet::
 .string "Arceus reconhece voce.\nAproxime-se e tente\pcaptura-lo. Fugir ou\nderrota-lo permite tentar\pnovamente.$"
SI_C_Text_ARCEUS_Meet_En::
 .string "Arceus recognizes you. Try\nto catch it. Running or\pdefeating it allows\nanother attempt.$"
SI_C_Text_ARCEUS_Caught::
 .string "Arceus agora caminha ao\nseu lado. O futuro\ppertence a quem pode\nescolher.$"
SI_C_Text_ARCEUS_Caught_En::
 .string "Arceus now walks beside\nyou. The future belongs to\pthose who can choose.$"
SI_C_Text_UXIE_Meet::
 .string "Uxie reconhece voce.\nAproxime-se e tente\pcaptura-lo. Fugir ou\nderrota-lo permite tentar\pnovamente.$"
SI_C_Text_UXIE_Meet_En::
 .string "Uxie recognizes you. Try\nto catch it. Running or\pdefeating it allows\nanother attempt.$"
SI_C_Text_UXIE_Caught::
 .string "Uxie agora caminha ao seu\nlado. O futuro pertence a\pquem pode escolher.$"
SI_C_Text_UXIE_Caught_En::
 .string "Uxie now walks beside you.\nThe future belongs to\pthose who can choose.$"
SI_C_Text_MESPRIT_Meet::
 .string "Mesprit reconhece voce.\nAproxime-se e tente\pcaptura-lo. Fugir ou\nderrota-lo permite tentar\pnovamente.$"
SI_C_Text_MESPRIT_Meet_En::
 .string "Mesprit recognizes you.\nTry to catch it. Running\por defeating it allows\nanother attempt.$"
SI_C_Text_MESPRIT_Caught::
 .string "Mesprit agora caminha ao\nseu lado. O futuro\ppertence a quem pode\nescolher.$"
SI_C_Text_MESPRIT_Caught_En::
 .string "Mesprit now walks beside\nyou. The future belongs to\pthose who can choose.$"
SI_C_Text_AZELF_Meet::
 .string "Azelf reconhece voce.\nAproxime-se e tente\pcaptura-lo. Fugir ou\nderrota-lo permite tentar\pnovamente.$"
SI_C_Text_AZELF_Meet_En::
 .string "Azelf recognizes you. Try\nto catch it. Running or\pdefeating it allows\nanother attempt.$"
SI_C_Text_AZELF_Caught::
 .string "Azelf agora caminha ao seu\nlado. O futuro pertence a\pquem pode escolher.$"
SI_C_Text_AZELF_Caught_En::
 .string "Azelf now walks beside\nyou. The future belongs to\pthose who can choose.$"
SI_C_Text_REGIGIGAS_Meet::
 .string "Regigigas reconhece voce.\nAproxime-se e tente\pcaptura-lo. Fugir ou\nderrota-lo permite tentar\pnovamente.$"
SI_C_Text_REGIGIGAS_Meet_En::
 .string "Regigigas recognizes you.\nTry to catch it. Running\por defeating it allows\nanother attempt.$"
SI_C_Text_REGIGIGAS_Caught::
 .string "Regigigas agora caminha ao\nseu lado. O futuro\ppertence a quem pode\nescolher.$"
SI_C_Text_REGIGIGAS_Caught_En::
 .string "Regigigas now walks beside\nyou. The future belongs to\pthose who can choose.$"
SI_C_Text_HEATRAN_Meet::
 .string "Heatran reconhece voce.\nAproxime-se e tente\pcaptura-lo. Fugir ou\nderrota-lo permite tentar\pnovamente.$"
SI_C_Text_HEATRAN_Meet_En::
 .string "Heatran recognizes you.\nTry to catch it. Running\por defeating it allows\nanother attempt.$"
SI_C_Text_HEATRAN_Caught::
 .string "Heatran agora caminha ao\nseu lado. O futuro\ppertence a quem pode\nescolher.$"
SI_C_Text_HEATRAN_Caught_En::
 .string "Heatran now walks beside\nyou. The future belongs to\pthose who can choose.$"
SI_C_Text_CRESSELIA_Meet::
 .string "Cresselia reconhece voce.\nAproxime-se e tente\pcaptura-lo. Fugir ou\nderrota-lo permite tentar\pnovamente.$"
SI_C_Text_CRESSELIA_Meet_En::
 .string "Cresselia recognizes you.\nTry to catch it. Running\por defeating it allows\nanother attempt.$"
SI_C_Text_CRESSELIA_Caught::
 .string "Cresselia agora caminha ao\nseu lado. O futuro\ppertence a quem pode\nescolher.$"
SI_C_Text_CRESSELIA_Caught_En::
 .string "Cresselia now walks beside\nyou. The future belongs to\pthose who can choose.$"
SI_C_Text_Retry::
 .string "O encontro continua\ndisponivel. Prepare sua\pequipe e volte quando\nquiser.$"
SI_C_Text_Retry_En::
 .string "This encounter remains\navailable. Prepare your\pteam and return whenever\nyou wish.$"
SI_C_Text_Goal7::
 .string "FIOS DO AMANHA. Proximo\ndestino: Valley Windworks.$"
SI_C_Text_Goal7_En::
 .string "THREADS OF TOMORROW. Next\ndestination: Valley\pWindworks.$"
SI_C_Text_Goal8::
 .string "FIOS DO AMANHA. Proximo\ndestino: Eterna Gym.$"
SI_C_Text_Goal8_En::
 .string "THREADS OF TOMORROW. Next\ndestination: Eterna Gym.$"
SI_C_Text_Goal9::
 .string "FIOS DO AMANHA. Proximo\ndestino: Eterna Galactic\pHQ 3F.$"
SI_C_Text_Goal9_En::
 .string "THREADS OF TOMORROW. Next\ndestination: Eterna\pGalactic HQ 3F.$"
SI_C_Text_Goal10::
 .string "FIOS DO AMANHA. Proximo\ndestino: Hearthome Gym.$"
SI_C_Text_Goal10_En::
 .string "THREADS OF TOMORROW. Next\ndestination: Hearthome\pGym.$"
SI_C_Text_Goal11::
 .string "FIOS DO AMANHA. Proximo\ndestino: Veilstone Gym.$"
SI_C_Text_Goal11_En::
 .string "THREADS OF TOMORROW. Next\ndestination: Veilstone\pGym.$"
SI_C_Text_Goal12::
 .string "FIOS DO AMANHA. Proximo\ndestino: Lake Valor.$"
SI_C_Text_Goal12_En::
 .string "THREADS OF TOMORROW. Next\ndestination: Lake Valor.$"
SI_C_Text_Goal13::
 .string "FIOS DO AMANHA. Proximo\ndestino: Pastoria Gym.$"
SI_C_Text_Goal13_En::
 .string "THREADS OF TOMORROW. Next\ndestination: Pastoria Gym.$"
SI_C_Text_Goal14::
 .string "FIOS DO AMANHA. Proximo\ndestino: Cynthia -\pCelestic Town.$"
SI_C_Text_Goal14_En::
 .string "THREADS OF TOMORROW. Next\ndestination: Cynthia -\pCelestic Town.$"
SI_C_Text_Goal15::
 .string "FIOS DO AMANHA. Proximo\ndestino: Canalave Gym.$"
SI_C_Text_Goal15_En::
 .string "THREADS OF TOMORROW. Next\ndestination: Canalave Gym.$"
SI_C_Text_Goal16::
 .string "FIOS DO AMANHA. Proximo\ndestino: Rowan - Canalave\pLibrary.$"
SI_C_Text_Goal16_En::
 .string "THREADS OF TOMORROW. Next\ndestination: Rowan -\pCanalave Library.$"
SI_C_Text_Goal17::
 .string "FIOS DO AMANHA. Proximo\ndestino: Lake Acuity.$"
SI_C_Text_Goal17_En::
 .string "THREADS OF TOMORROW. Next\ndestination: Lake Acuity.$"
SI_C_Text_Goal18::
 .string "FIOS DO AMANHA. Proximo\ndestino: Snowpoint Gym.$"
SI_C_Text_Goal18_En::
 .string "THREADS OF TOMORROW. Next\ndestination: Snowpoint\pGym.$"
SI_C_Text_Goal19::
 .string "FIOS DO AMANHA. Proximo\ndestino: Veilstone\pGalactic HQ.$"
SI_C_Text_Goal19_En::
 .string "THREADS OF TOMORROW. Next\ndestination: Veilstone\pGalactic HQ.$"
SI_C_Text_Goal20::
 .string "FIOS DO AMANHA. Proximo\ndestino: Mt. Coronet -\pSpear Pillar.$"
SI_C_Text_Goal20_En::
 .string "THREADS OF TOMORROW. Next\ndestination: Mt. Coronet -\pSpear Pillar.$"
SI_C_Text_Goal21::
 .string "FIOS DO AMANHA. Proximo\ndestino: Cyrus -\pDistortion World.$"
SI_C_Text_Goal21_En::
 .string "THREADS OF TOMORROW. Next\ndestination: Cyrus -\pDistortion World.$"
SI_C_Text_Goal22::
 .string "FIOS DO AMANHA. Proximo\ndestino: Arceus -\pDistortion World.$"
SI_C_Text_Goal22_En::
 .string "THREADS OF TOMORROW. Next\ndestination: Arceus -\pDistortion World.$"
SI_C_Text_Goal23::
 .string "FIOS DO AMANHA. Proximo\ndestino: Sunyshore Gym.$"
SI_C_Text_Goal23_En::
 .string "THREADS OF TOMORROW. Next\ndestination: Sunyshore\pGym.$"
SI_C_Text_Goal24::
 .string "FIOS DO AMANHA. Proximo\ndestino: Aaron - Sinnoh\pLeague.$"
SI_C_Text_Goal24_En::
 .string "THREADS OF TOMORROW. Next\ndestination: Aaron -\pSinnoh League.$"
SI_C_Text_Goal25::
 .string "FIOS DO AMANHA. Proximo\ndestino: Bertha - Sinnoh\pLeague.$"
SI_C_Text_Goal25_En::
 .string "THREADS OF TOMORROW. Next\ndestination: Bertha -\pSinnoh League.$"
SI_C_Text_Goal26::
 .string "FIOS DO AMANHA. Proximo\ndestino: Flint - Sinnoh\pLeague.$"
SI_C_Text_Goal26_En::
 .string "THREADS OF TOMORROW. Next\ndestination: Flint -\pSinnoh League.$"
SI_C_Text_Goal27::
 .string "FIOS DO AMANHA. Proximo\ndestino: Lucian - Sinnoh\pLeague.$"
SI_C_Text_Goal27_En::
 .string "THREADS OF TOMORROW. Next\ndestination: Lucian -\pSinnoh League.$"
SI_C_Text_Goal28::
 .string "FIOS DO AMANHA. Proximo\ndestino: Cynthia - Sinnoh\pLeague.$"
SI_C_Text_Goal28_En::
 .string "THREADS OF TOMORROW. Next\ndestination: Cynthia -\pSinnoh League.$"
SI_C_Text_Goal29::
 .string "FIOS DO AMANHA. Proximo\ndestino: Lendarios /\pLegendary encounters.$"
SI_C_Text_Goal29_En::
 .string "THREADS OF TOMORROW. Next\ndestination: Lendarios /\pLegendary encounters.$"

SI_C_Trainer_FIELD0::
 trainerbattle_single TRAINER_SI_FIELD0, SI_Text_TrainerIntro, SI_Text_Lose
 msgbox SI_Text_TrainerAfter, MSGBOX_AUTOCLOSE
 end


SI_C_Trainer_FIELD1::
 trainerbattle_single TRAINER_SI_FIELD1, SI_Text_TrainerIntro, SI_Text_Lose
 msgbox SI_Text_TrainerAfter, MSGBOX_AUTOCLOSE
 end


SI_C_Trainer_FIELD2::
 trainerbattle_single TRAINER_SI_FIELD2, SI_Text_TrainerIntro, SI_Text_Lose
 msgbox SI_Text_TrainerAfter, MSGBOX_AUTOCLOSE
 end


SI_C_Trainer_FIELD3::
 trainerbattle_single TRAINER_SI_FIELD3, SI_Text_TrainerIntro, SI_Text_Lose
 msgbox SI_Text_TrainerAfter, MSGBOX_AUTOCLOSE
 end


SI_C_Trainer_FIELD4::
 trainerbattle_single TRAINER_SI_FIELD4, SI_Text_TrainerIntro, SI_Text_Lose
 msgbox SI_Text_TrainerAfter, MSGBOX_AUTOCLOSE
 end


SI_C_Trainer_FIELD5::
 trainerbattle_single TRAINER_SI_FIELD5, SI_Text_TrainerIntro, SI_Text_Lose
 msgbox SI_Text_TrainerAfter, MSGBOX_AUTOCLOSE
 end


SI_C_Trainer_FIELD6::
 trainerbattle_single TRAINER_SI_FIELD6, SI_Text_TrainerIntro, SI_Text_Lose
 msgbox SI_Text_TrainerAfter, MSGBOX_AUTOCLOSE
 end


SI_C_Trainer_FIELD7::
 trainerbattle_single TRAINER_SI_FIELD7, SI_Text_TrainerIntro, SI_Text_Lose
 msgbox SI_Text_TrainerAfter, MSGBOX_AUTOCLOSE
 end


SI_C_Trainer_FIELD8::
 trainerbattle_single TRAINER_SI_FIELD8, SI_Text_TrainerIntro, SI_Text_Lose
 msgbox SI_Text_TrainerAfter, MSGBOX_AUTOCLOSE
 end


SI_C_Trainer_FIELD9::
 trainerbattle_single TRAINER_SI_FIELD9, SI_Text_TrainerIntro, SI_Text_Lose
 msgbox SI_Text_TrainerAfter, MSGBOX_AUTOCLOSE
 end


SI_C_Trainer_FIELD10::
 trainerbattle_single TRAINER_SI_FIELD10, SI_Text_TrainerIntro, SI_Text_Lose
 msgbox SI_Text_TrainerAfter, MSGBOX_AUTOCLOSE
 end


SI_C_Trainer_FIELD11::
 trainerbattle_single TRAINER_SI_FIELD11, SI_Text_TrainerIntro, SI_Text_Lose
 msgbox SI_Text_TrainerAfter, MSGBOX_AUTOCLOSE
 end


SI_C_Trainer_FIELD12::
 trainerbattle_single TRAINER_SI_FIELD12, SI_Text_TrainerIntro, SI_Text_Lose
 msgbox SI_Text_TrainerAfter, MSGBOX_AUTOCLOSE
 end


SI_C_Trainer_FIELD13::
 trainerbattle_single TRAINER_SI_FIELD13, SI_Text_TrainerIntro, SI_Text_Lose
 msgbox SI_Text_TrainerAfter, MSGBOX_AUTOCLOSE
 end


SI_C_Trainer_FIELD14::
 trainerbattle_single TRAINER_SI_FIELD14, SI_Text_TrainerIntro, SI_Text_Lose
 msgbox SI_Text_TrainerAfter, MSGBOX_AUTOCLOSE
 end


SI_C_Trainer_FIELD15::
 trainerbattle_single TRAINER_SI_FIELD15, SI_Text_TrainerIntro, SI_Text_Lose
 msgbox SI_Text_TrainerAfter, MSGBOX_AUTOCLOSE
 end


SI_C_Trainer_FIELD16::
 trainerbattle_single TRAINER_SI_FIELD16, SI_Text_TrainerIntro, SI_Text_Lose
 msgbox SI_Text_TrainerAfter, MSGBOX_AUTOCLOSE
 end


SI_C_Trainer_FIELD17::
 trainerbattle_single TRAINER_SI_FIELD17, SI_Text_TrainerIntro, SI_Text_Lose
 msgbox SI_Text_TrainerAfter, MSGBOX_AUTOCLOSE
 end


SI_C_Trainer_FIELD18::
 trainerbattle_single TRAINER_SI_FIELD18, SI_Text_TrainerIntro, SI_Text_Lose
 msgbox SI_Text_TrainerAfter, MSGBOX_AUTOCLOSE
 end


SI_C_Trainer_FIELD19::
 trainerbattle_single TRAINER_SI_FIELD19, SI_Text_TrainerIntro, SI_Text_Lose
 msgbox SI_Text_TrainerAfter, MSGBOX_AUTOCLOSE
 end


SI_C_Trainer_FIELD20::
 trainerbattle_single TRAINER_SI_FIELD20, SI_Text_TrainerIntro, SI_Text_Lose
 msgbox SI_Text_TrainerAfter, MSGBOX_AUTOCLOSE
 end


SI_C_Trainer_FIELD21::
 trainerbattle_single TRAINER_SI_FIELD21, SI_Text_TrainerIntro, SI_Text_Lose
 msgbox SI_Text_TrainerAfter, MSGBOX_AUTOCLOSE
 end


SI_C_Trainer_FIELD22::
 trainerbattle_single TRAINER_SI_FIELD22, SI_Text_TrainerIntro, SI_Text_Lose
 msgbox SI_Text_TrainerAfter, MSGBOX_AUTOCLOSE
 end


SI_C_Trainer_FIELD23::
 trainerbattle_single TRAINER_SI_FIELD23, SI_Text_TrainerIntro, SI_Text_Lose
 msgbox SI_Text_TrainerAfter, MSGBOX_AUTOCLOSE
 end


SI_C_Trainer_FIELD24::
 trainerbattle_single TRAINER_SI_FIELD24, SI_Text_TrainerIntro, SI_Text_Lose
 msgbox SI_Text_TrainerAfter, MSGBOX_AUTOCLOSE
 end


SI_C_Trainer_FIELD25::
 trainerbattle_single TRAINER_SI_FIELD25, SI_Text_TrainerIntro, SI_Text_Lose
 msgbox SI_Text_TrainerAfter, MSGBOX_AUTOCLOSE
 end


SI_C_Trainer_FIELD26::
 trainerbattle_single TRAINER_SI_FIELD26, SI_Text_TrainerIntro, SI_Text_Lose
 msgbox SI_Text_TrainerAfter, MSGBOX_AUTOCLOSE
 end


SI_C_Trainer_FIELD27::
 trainerbattle_single TRAINER_SI_FIELD27, SI_Text_TrainerIntro, SI_Text_Lose
 msgbox SI_Text_TrainerAfter, MSGBOX_AUTOCLOSE
 end


SI_C_Trainer_FIELD28::
 trainerbattle_single TRAINER_SI_FIELD28, SI_Text_TrainerIntro, SI_Text_Lose
 msgbox SI_Text_TrainerAfter, MSGBOX_AUTOCLOSE
 end


SI_C_Trainer_FIELD29::
 trainerbattle_single TRAINER_SI_FIELD29, SI_Text_TrainerIntro, SI_Text_Lose
 msgbox SI_Text_TrainerAfter, MSGBOX_AUTOCLOSE
 end


SI_C_Trainer_FIELD30::
 trainerbattle_single TRAINER_SI_FIELD30, SI_Text_TrainerIntro, SI_Text_Lose
 msgbox SI_Text_TrainerAfter, MSGBOX_AUTOCLOSE
 end


SI_C_Trainer_FIELD31::
 trainerbattle_single TRAINER_SI_FIELD31, SI_Text_TrainerIntro, SI_Text_Lose
 msgbox SI_Text_TrainerAfter, MSGBOX_AUTOCLOSE
 end


SI_C_SeasonOwn::
 msgbox SI_C_SeasonOwnText, MSGBOX_NPC
 end
SI_C_SeasonOwnText::
 .string "Esta aventura e de Sinnoh.\nHoenn possui seu proprio\pNovo Jogo. Guarde o save\nantes de iniciar outra\ptemporada.$"
SI_C_SeasonOwnText_En::
 .string "This is a Sinnoh adventure.\nHoenn has its own New Game.\pBack up your save before\nstarting another season.$"

SI_C_Link_OreburghCity_Flat3_F1_OreburghCity_Flat3_F2::
 lock
 faceplayer
 msgbox SI_Text_Clerk, MSGBOX_DEFAULT
 warp MAP_OREBURGH_CITY_FLAT3_F2, 255, 6, 6
 waitstate
 releaseall
 end

SI_C_Link_OreburghCity_Flat3_F2_OreburghCity_Flat3_F1::
 lock
 faceplayer
 msgbox SI_Text_Clerk, MSGBOX_DEFAULT
 warp MAP_OREBURGH_CITY_FLAT3_F1, 255, 6, 6
 waitstate
 releaseall
 end

SI_C_Link_Route225_Route225_Access::
 lock
 faceplayer
 msgbox SI_Text_Clerk, MSGBOX_DEFAULT
 warp MAP_ROUTE225_ACCESS, 255, 5, 9
 waitstate
 releaseall
 end

SI_C_Link_Route225_Access_Route225::
 lock
 faceplayer
 msgbox SI_Text_Clerk, MSGBOX_DEFAULT
 warp MAP_ROUTE225, 255, 10, 9
 waitstate
 releaseall
 end

SI_C_Link_Route226_Route226_Access::
 lock
 faceplayer
 msgbox SI_Text_Clerk, MSGBOX_DEFAULT
 warp MAP_ROUTE226_ACCESS, 255, 6, 6
 waitstate
 releaseall
 end

SI_C_Link_Route226_Access_Route226::
 lock
 faceplayer
 msgbox SI_Text_Clerk, MSGBOX_DEFAULT
 warp MAP_ROUTE226, 255, 6, 9
 waitstate
 releaseall
 end
