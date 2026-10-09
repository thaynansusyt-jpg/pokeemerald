#!/usr/bin/env python3
"""Unova 0.10.8: make Nuvema bedroom/house exits accessible in GBA.
Keep each original first warp index intact. Do not alter quests or saves.
"""
from pathlib import Path
import json
import struct

ROOT = Path(__file__).resolve().parents[1]
LAYOUTS = {entry["id"]: entry for entry in json.loads(
    (ROOT / "data/layouts/layouts.json").read_text()
)["layouts"]}

# Widen the visible doorway to 3 tiles and activate a second, adjacent
# row of warp triggers so players can leave without finding one magic pixel.
# Original first warp remains index 0, preserving incoming destinations.
RULES = {
    "UnNuvemaBedroom": {
        "destination": ("MAP_UN_NUVEMA_HOUSE", "1"),
        "passage": [(x, y) for y in (13, 14) for x in (9, 10, 11)],
    },
    "UnNuvemaHouse": {
        "destination": ("MAP_UN_NUVEMA_TOWN", "0"),
        "passage": [(x, y) for y in (12, 13) for x in (8, 9, 10)],
    },
}


def apply(name, rule):
    path = ROOT / "data/maps" / name / "map.json"
    j = json.loads(path.read_text())
    assert j["region"] == "REGION_UNOVA" and j["map_type"] == "MAP_TYPE_INDOOR"
    layout = LAYOUTS[j["layout"]]
    width, height = layout["width"], layout["height"]
    raw_path = ROOT / layout["blockdata_filepath"]
    raw = raw_path.read_bytes()
    assert len(raw) == width * height * 2
    tiles = list(struct.unpack("<" + "H" * (width * height), raw))
    dest, dest_id = rule["destination"]
    old_warps = j["warp_events"]
    assert old_warps and old_warps[0]["dest_map"] == dest
    assert str(old_warps[0]["dest_warp_id"]) == dest_id
    existing = {(int(w["x"]), int(w["y"])) for w in old_warps}
    added = 0

    for x, y in rule["passage"]:
        assert 1 <= x < width - 1 and 2 <= y < height
        index = y * width + x
        # Floor metatile zero is already used by the established playable
        # room. Preserve high elevation/collision flags and only touch ID.
        tiles[index] &= ~0x03FF
        if (x, y) not in existing:
            old_warps.append({
                "x": x, "y": y, "elevation": 0,
                "dest_map": dest, "dest_warp_id": dest_id
            })
            existing.add((x, y))
            added += 1

    # Do not reorder warp IDs. The original must remain first.
    assert old_warps[0]["dest_map"] == dest
    raw_path.write_bytes(struct.pack("<" + "H" * len(tiles), *tiles))
    path.write_text(json.dumps(j, ensure_ascii=False, indent=2) + "\n")
    print("NUVEMA EXIT FIX:", name, "warps", len(old_warps),
          "added", added, "doorway width 3")


if __name__ == "__main__":
    for name, rule in RULES.items():
        apply(name, rule)
