# 0.9.7 Lake Verity — blocker fix (beta)

## Confirmed blocker
The stage-2 Galactic collector previously spawned at (19,41), and Barry at (18,41). Both stood on the west side of Lake Verity, separated from the south/east entrance by the lake, inaccessible without Surf. The mission journal and proposed help arrow pointed there even though the player couldn't reach it.

## Fix
- Collector -> (39,35), Barry -> (41,35), in the accessible clearing close to the entrance.
- Structural pathfinding test ensures both NPCs are reachable without Surf and the story battle label remains present.
- Existing 0.9.5 defeat recovery and 0.9.4 night/DexNav workarounds are retained.
- 0.9.5 guide-arrow patch is **not** bundled here because its GitHub build failed. This is an intentionally scoped unblock build.

## To test with an existing save
Back up .sav. Load the updated ROM and re-enter Lake Verity to reload NPCs. Reach and speak to the Galactic collector, win, open journal to confirm next mission, save/reload and verify that the chapter advances. The all-region campaign and legendary postgame have NOT been completed by this test.
