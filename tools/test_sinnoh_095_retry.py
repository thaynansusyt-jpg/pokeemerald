from pathlib import Path

root=Path(__file__).resolve().parents[1]
scripts=(root/'data/scripts/sinnoh_chapter1.inc').read_text()
setup=(root/'src/battle_setup.c').read_text()
chapter=(root/'src/sinnoh_chapter.c').read_text()
over=(root/'src/overworld.c').read_text()

lake=scripts[scripts.index('SI_Lake::'):scripts.index('SI_Looker::')]
assert 'trainerbattle_single TRAINER_SI_LAKE' in lake
assert 'callnative SiLakeBattleWon' in lake
assert 'goto_if_eq VAR_RESULT, FALSE, SI_LakeRetry' in lake
assert lake.index('goto_if_eq VAR_RESULT, FALSE, SI_LakeRetry') < lake.index('setvar VAR_SI_STAGE, 3')
assert 'SI_LakeRetry:' in lake and 'release' in lake.split('SI_LakeRetry:')[1]
assert 'SI_Text_LakeRetry::' in scripts
assert 'SI_Text_LakeRetry_En::' in scripts

cb=setup[setup.index('static void CB2_EndTrainerBattle(void)\n{'):]
assert 'SiIsSeason() && VarGet(VAR_SI_STAGE) <= 2' in cb
guard=cb[cb.index('SiIsSeason() && VarGet(VAR_SI_STAGE) <= 2'):]
assert guard.index('HealPlayerParty()') < guard.index('SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic)')
assert guard.index('IsPlayerDefeated(gBattleOutcome)') < guard.index('SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic)')
assert 'gSpecialVar_Result = (gBattleOutcome == B_OUTCOME_WON)' in chapter
assert 'if (SiIsSeason())\n        return FALSE;' in over[over.index('static bool32 IsWhiteoutCutscene(void)\n{'):]

print('PASS: initial Galactic Lake encounter allows rematch without advancing story')
print('PASS: losing restores party on map without calling Pokemon Center nurse sequence')
print('PASS: generic Sinnoh whiteouts bypass incompatible inherited nurse cutscene')
print('LIMIT: MyBoy reproduction using the user save and full playthrough still required')
