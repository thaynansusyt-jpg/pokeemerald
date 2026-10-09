# Pokémon Hoenn Expansion — Unova integrated development checkpoint 0.10.5

**Not a stable release. Do not replace the existing playable ROM.**

## Included engineering changes

- Fixed map generator to accept `REGION_UNOVA` and regenerated map tables.
- Fixed invalid Wellspring Cave map type and prior `MIN/MAX`, DexNav and script opcode references from the 0.10.4 troubleshooting chain.
- Fixed automatic Bianca/Cheren prologue battles by using a script-specific trainer macro that does not attempt to face a selected NPC. Six variants changed.
- Removed reuse of incompatible Hoenn throwing animations for the back sprites of Hilda and Hilbert. Current animation remains a stable pose; original full-frame animated artwork remains future work.
- Included Unova intro palette/dialog graphics from the 0.10.3 hotfix, with palette matching its textbox tiles.
- Added 5 **original** Unova-inspired MIDI compositions to music ID registry and mapped them to Unova locations and battles. These **are not** Nintendo soundtracks or fan remixes.
- Preserved previous Hoenn/Sinnoh regions' battle BGM path outside Unova.

## Verified in this development environment

- `python3 tools/qa_unova_0101.py` — PASS: 455 static checks.
- `python3 tools/qa_unova_integrated.py` — PASS: 104 added checks.
- `make -C tools/mapjson` — PASS: native map generator compiles.
- Recreate map groups from 1,192 map JSON files — PASS, `gMapGroup_Unova::` present.
- Generate all Unova map headers — PASS.
- Generate the five new MIDIs with `mid2agb` — PASS.
- ARM-assemble the five MIDI songs with Clang integrated assembler — PASS.
- ARM-assemble the new script trainerbattle macro on an isolated fixture — PASS.
- `gbagfx` native compilation and conversion of Unova message box to 4bpp and palette — PASS.

## Not verified / not yet completed

- **Full `arm-none-eabi-gcc` ROM compilation**, including the final linker stage (compiler unavailable in this environment).
- **Interactive mGBA gameplay testing** of the new ROM (no new .gba built).
- Bianca/Cheren battles and all story maps at runtime (cannot yet guarantee bugs are fixed).
- Nintendo Black & White exact map graphics, complete faithful city and route layouts, and 3D Skyarrow effect.
- Nintendo Black & White exact soundtrack or fan remixes. Only original project music was added; third-party tracks need compatible permissions.
- Full localized dialogue proofreading and final battle portrait animation.

## Next release gate

The `CONFERENCIA_ANTES_DE_COMPILAR.sh` script runs both suites and builds once on an ARM-capable Debian+Termux installation. A **successful build is necessary but not sufficient** to call this a release; gameplay must pass the intro + Bianca + Cheren + first save + reload and map transitions. No claim of a bug-free ROM is made here.
