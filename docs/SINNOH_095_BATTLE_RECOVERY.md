# Sinnoh 0.9.5 — introductory battle defeat hotfix

Reproduction supplied by player: on MyBoy, losing the mandatory early battle returned to the Pokémon Center and hung after the nurse's final text (“We hope you excel!”).

## Implementation
- Preserve normal Hoenn battle outcomes and encounter flags.
- For the mandatory Lake Verity Galactic trainer only, defeated Sinnoh party gets healed and returned to the field, no whiteout and no victory flag.
- Sinnoh chapter progression to stage 3 now checks the actual battle outcome. On loss the player can retry.
- For other Sinnoh battles, bypass the inherited nurse cutscene during a normal blackout, using the normal fade instead.
- Preserve existing Sinnoh 0.9.4 softer night palette and temporary DexNav nickname workaround.

## Validation
- GitHub Actions compiles a fresh GBA ROM and performs static regression tests.
- A screenshot of an error and a 128 KiB `.sav` were provided. The save is private and **not uploaded to the public GitHub repository**.
- Run gameplay testing on MyBoy with a copy of the original save. Defeat lake trainer, win rematch, heal in center, save/reload; retest other trainer blackouts, DexNav Shinx and darkness at night.
- This is not a claim that the game, all badges or legendary postgame have been completed.
