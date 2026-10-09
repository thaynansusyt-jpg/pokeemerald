"""Fast structural checks for the 0.9.4 corrective patch.

These checks do not prove the nickname crash is fixed. Capture testing
requires a reproducible MyBoy .sav from the reporter.
"""
from pathlib import Path
p=Path(__file__).resolve().parent.parent
script=(p/"data/battle_scripts_2.s").read_text()
prism=(p/"src/sinnoh_prism.c").read_text()
ow=(p/"src/overworld.c").read_text()
si=(p/"src/sinnoh_chapter.c").read_text()
a=script.index("BattleScript_TryNicknameCaughtMon::")
b=script.index("BattleScript_GiveCaughtMonEnd::",a)
assert script.index("callnative BS_SiDexNavNicknameGuard",a,b) < script.index("printstring STRINGID_GIVENICKNAMECAPTURED",a,b)
assert "jumpifbyte CMP_EQUAL, gSiDexNavSkipNickname, TRUE, BattleScript_GiveCaughtMonEnd" in script[a:b]
assert "gSiDexNavSkipNickname = SiIsSeason() && gDexNavSpecies != SPECIES_NONE;" in prism
assert "gBattlescriptCurrInstr += 5;" in prism
assert "sSinnohNightBlend" in ow and "SiIsSeason() ? &sSinnohNightBlend" in ow
assert "UpdateTimeOfDay(TRUE); // Initialize night palettes" in si
print("PASS: Sinnoh-only DexNav nickname workaround is before yes/no prompt")
print("PASS: Hoenn and non-DexNav capture paths remain eligible for nickname flow")
print("PASS: Sinnoh night uses an independent gentler blend and startup initialization")
print("LIMIT: Capture regression and MyBoy RTC behavior still require user save testing")
