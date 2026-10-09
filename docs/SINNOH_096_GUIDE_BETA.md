# Sinnoh 0.9.6 — Guide mode (early chapter beta)

Built on the working 0.9.5 defeat-recovery beta.

## Player save inspection
The provided 0.9.5 MyBoy save contains a newer slot with `VAR_SI_STAGE=2`, `VAR_HE_SEASON=1`, coordinates (38,36), group 75/map 8: **Lake Verity**. The objective NPC Galactic Collector is at (19,41) on that map. The player must walk left/down and talk to that NPC. No need to restart.

## Guide
- **Options → Modo Ajuda**: Normal or Ajuda. Help mode uses an unused Sinnoh-specific persisted variable (0x407A). Existing saves initially use Normal; toggle once.
- Blinking yellow arrow sprite in the overworld, fixed to exact stage target when present onscreen; directional edge indicator when offscreen; short arrival sound.
- Confirmed anchors: Rowan's lab, Route 201 west exit, Verity Lakefront entrance, Lake Verity collector, Jubilife School, Oreburgh Museum, Oreburgh Mine B2F and Oreburgh Gym.
- Other story and postgame stages currently do not display an arrow rather than falsely giving directions. Future coverage requires playtest and verified NPC/warp anchors.
- Guide does not modify trainers, scripted battle outcomes, collision, stage completion, or source save sizes.

## Release quality
Requires GBA compilation and mGBA runtime screenshot plus MyBoy checkpoint tests. Not an end-to-end verified release. Save original .sav before testing, and do not rely on savestates across ROM builds.
