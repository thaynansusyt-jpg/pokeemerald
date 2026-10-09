#!/usr/bin/env python3
"""Place Lake Verity's stage-2 NPCs on the reachable shore and test the path.
Run with --apply after reconstructing Sinnoh patches; otherwise validate only.
"""
import collections
import json
import struct
import sys
from pathlib import Path

root = Path(__file__).resolve().parents[1]
map_path = root / "data/maps/LakeVerity/map.json"
layout_path = root / "data/layouts/SiLakeVerity/map.bin"
script_path = root / "data/scripts/sinnoh_chapter1.inc"
goal_locations = {
    "SI_Lake": (39, 35),
    "SI_W_BarrySupport1": (41, 35),
}
before = json.loads(map_path.read_text())
events = before["object_events"]
by_script = {event["script"]: event for event in events}
assert all(name in by_script for name in goal_locations), "Lake mission NPC missing"
assert len(set(goal_locations.values())) == 2
if "--apply" in sys.argv:
    for name, (x, y) in goal_locations.items():
        by_script[name]["x"] = x
        by_script[name]["y"] = y
    map_path.write_text(json.dumps(before, ensure_ascii=False, indent=2) + "\n")

after = json.loads(map_path.read_text())
by_script = {e["script"]: e for e in after["object_events"]}
W, H = 48, 46
raw = layout_path.read_bytes()
assert len(raw) == W * H * 2, "Unexpected Lake Verity layout shape"
tiles = struct.unpack("<" + "H" * (W * H), raw)
def tile_at(x, y):
    return tiles[y * W + x]
def on_foot(x, y):
    if not (0 <= x < W and 0 <= y < H):
        return False
    t = tile_at(x,y)
    return ((t >> 10) & 3) == 0 and (t & 0x3ff) != 0x0a1
# A conservative accessibility check from the entrance, without Surf.
start = (38, 42)
assert on_foot(*start), "Lake exit is blocked"
q = collections.deque([start])
reachable = {start}
while q:
    x, y = q.popleft()
    for pos in ((x-1,y), (x+1,y), (x,y-1), (x,y+1)):
        if pos not in reachable and on_foot(*pos):
            reachable.add(pos); q.append(pos)

for name, goal in goal_locations.items():
    event = by_script[name]
    assert (event["x"], event["y"]) == goal, f"{name} at wrong position"
    assert on_foot(*goal), f"{name} is not standing on land"
    x,y = goal
    assert any(p in reachable for p in ((x-1,y),(x+1,y),(x,y-1),(x,y+1))), f"{name} can't be reached on foot"
    print(f"PASS {name}: target {goal}, accessible from lake entrance")

scripts = script_path.read_text()
assert "SI_Lake::" in scripts and "trainerbattle_single TRAINER_SI_LAKE" in scripts
assert "SI_LakeWin:" in scripts and "setvar VAR_SI_STAGE, 3" in scripts
assert by_script["SI_Lake"]["flag"] == "0"
print(f"PASS layout pathfinding: {len(reachable)} tiles reachable without Surf")
print("PASS lake collector battle script and chapter progression labels exist")
