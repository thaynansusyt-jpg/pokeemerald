# Sinnoh 0.9.4 — hotfix experimental (8–9 Oct 2026)

## Reported on MyBoy
- Nighttime screen nearly black until opening a menu.
- DexNav Shinx capture appeared to hang at the nickname Yes/No prompt after choosing No.

## Changes
- Softer **Sinnoh-only** nighttime palette, with time blend initialized on first Sinnoh warp. Hoenn retains its previous profile.
- **Temporary protection:** only Sinnoh DexNav catches skip the optional nickname prompt, keeping the species name and continuing through the regular give-caught-mon path. Standard wild encounters retain their nickname prompt.
- The precise underlying MyBoy lockup is not yet diagnosed. No claim of a definitive fix is made.

## QA
- 0.9.3 upstream build and direct-core boot/new-game tests passed previously.
- 0.9.4 structural checks and GitHub GBA build must pass before distributing ROM.
- **User .sav needed:** reproduce Shinx via DexNav on the same route, test No and Yes paths on the original 0.9.3 in emulator and test capture completion on the hotfix 0.9.4.
- Test RTC at 21:00, menu open/close, save/load, entering/leaving houses, and different times.

Do not publish as final until capture + nighttime regressions are verified.
