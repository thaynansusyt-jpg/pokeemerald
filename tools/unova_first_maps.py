#!/usr/bin/env python3
"""Deterministic Unova 0.10.6 first-region map polish.
Uses the project's original, permitted GBA tilesets. No DS ROM assets.
Adds safe paved streets, plazas, short side trails, and generic NPCs.
Preserves buildings, warps, triggers, outer borders, event positions.
"""
from pathlib import Path
import json
import struct

ROOT = Path(__file__).resolve().parents[1]
LAYOUTS = {layout["name"]: layout for layout in json.loads(
    (ROOT / "data/layouts/layouts.json").read_text()
)["layouts"]}

# Rectangle (x0,y0,x1,y1), inclusive, all using known walkable path block 1.
STREETS = {
    "UnNuvemaTown": [
        (8, 12, 38, 13), (8, 32, 39, 33), (8, 12, 9, 33),
        (38, 12, 39, 33), (15, 18, 32, 19),
        (16, 27, 31, 28), (16, 19, 17, 28),
        (30, 19, 31, 28), (9, 9, 9, 14), (34, 10, 34, 13)
    ],
    "UnAccumulaTown": [
        (10, 17, 37, 18), (10, 33, 37, 34),
        (10, 17, 11, 34), (36, 17, 37, 34),
        (15, 23, 32, 24), (15, 28, 32, 29),
        (15, 24, 16, 29), (31, 24, 32, 29),
        (9, 13, 37, 14), (35, 14, 36, 18)
    ],
    "UnStriatonCity": [
        (7, 17, 40, 18), (7, 35, 40, 36),
        (7, 18, 8, 35), (39, 18, 40, 35),
        (13, 20, 14, 34), (34, 20, 35, 34),
        (13, 28, 34, 29), (14, 12, 35, 13),
        (10, 13, 11, 17), (35, 13, 36, 17)
    ],
    "UnRoute1": [(8, 14, 11, 15), (8, 15, 9, 23),
                 (9, 23, 13, 24), (19, 27, 24, 28),
                 (24, 28, 25, 35), (12, 40, 19, 41)],
    "UnRoute2": [(8, 12, 11, 13), (8, 13, 9, 23),
                 (9, 23, 14, 24), (19, 30, 24, 31),
                 (23, 31, 24, 43), (8, 47, 14, 48)],
    "UnDreamyard": [(8, 11, 28, 12), (8, 27, 28, 28),
                   (8, 12, 9, 27), (27, 12, 28, 27),
                   (13, 18, 22, 19), (13, 19, 14, 26)],
    "UnPinwheelOuter": [(10, 13, 15, 14), (10, 14, 11, 24),
                       (11, 24, 16, 25), (24, 28, 31, 29),
                       (29, 29, 30, 35)],
}

# Additional early-route wild grass, replacing only open ground (block 0).
# Does not modify entrances, entrances to buildings, or existing placed objects.
MEADOWS = {
    "UnRoute1": [(5, 28, 9, 30), (23, 40, 27, 42)],
    "UnRoute2": [(5, 37, 8, 39), (24, 46, 27, 48)],
    "UnDreamyard": [(8, 28, 12, 30), (24, 8, 27, 9)],
    "UnPinwheelOuter": [(6, 27, 10, 30), (29, 12, 33, 14)],
}

# Extra generic inhabitants placed off central roads, retaining gameplay NPCs.
PEOPLE = {
    "UnNuvemaTown": [
        ("OBJ_EVENT_GFX_UN_CHILD_F", 13, 20, "UN_Resident0"),
        ("OBJ_EVENT_GFX_UN_LADY", 34, 24, "UN_Resident1")
    ],
    "UnAccumulaTown": [
        ("OBJ_EVENT_GFX_UN_MUSICIAN", 18, 20, "UN_PlazaCitizen"),
        ("OBJ_EVENT_GFX_UN_CHILD_M", 34, 35, "UN_PlazaCitizen")
    ],
    "UnStriatonCity": [
        ("OBJ_EVENT_GFX_UN_GENTLEMAN", 10, 23, "UN_Resident6"),
        ("OBJ_EVENT_GFX_UN_CHILD_F", 37, 34, "UN_Resident7")
    ],
    "UnRoute1": [
        ("OBJ_EVENT_GFX_UN_BACKPACKER", 8, 29, "UN_Coach")
    ],
    "UnRoute2": [
        ("OBJ_EVENT_GFX_UN_CHILD_F", 8, 40, "UN_Coach")
    ],
    "UnDreamyard": [
        ("OBJ_EVENT_GFX_UN_SCIENTIST", 25, 29, "UN_Fennel")
    ],
    "UnPinwheelOuter": [
        ("OBJ_EVENT_GFX_UN_BACKPACKER", 8, 18, "UN_Resident41")
    ],
}


def polish(name):
    info = LAYOUTS[name + "_Layout"]
    width, height = info["width"], info["height"]
    map_path = ROOT / info["blockdata_filepath"]
    raw = map_path.read_bytes()
    assert len(raw) == width * height * 2, (name, "unexpected layout length")
    tiles = list(struct.unpack("<" + "H" * (width * height), raw))
    map_path_json = ROOT / "data/maps" / name / "map.json"
    events = json.loads(map_path_json.read_text())
    reserved = set()
    for category in ("object_events", "warp_events", "coord_events"):
        for event in events.get(category, []):
            if "x" in event and "y" in event:
                reserved.add((event["x"], event["y"]))
    # Prevent changing any occupied event/warp tile. Only 0 (ground)
    # is converted to 1 (existing road) or 3 (existing encounter grass).
    def draw_rect(rect, new_tile):
        x0, y0, x1, y1 = rect
        for y in range(max(4, y0), min(height - 4, y1 + 1)):
            for x in range(max(4, x0), min(width - 4, x1 + 1)):
                if (x, y) in reserved:
                    continue
                index = y * width + x
                existing = tiles[index]
                if (existing & 0x03FF) == 0:
                    tiles[index] = (existing & ~0x03FF) | new_tile
    for rect in STREETS.get(name, []):
        draw_rect(rect, 1)
    for rect in MEADOWS.get(name, []):
        draw_rect(rect, 3)
    new_data = struct.pack("<" + "H" * len(tiles), *tiles)
    if new_data != raw:
        map_path.write_bytes(new_data)
    objects = events.get("object_events", [])
    existing_ids = {o["local_id"] for o in objects}
    existing_coords = {(o["x"], o["y"]) for o in objects}
    index = max([int(x.rsplit("_", 1)[-1]) for x in existing_ids
                 if x.rsplit("_", 1)[-1].isdigit()] or [0])
    added = 0
    for graphics, x, y, script in PEOPLE.get(name, []):
        if (x, y) in existing_coords or (x, y) in reserved:
            continue
        if not 4 <= x < width - 4 or not 4 <= y < height - 4:
            raise ValueError("NPC out of bounds: " + name)
        existing_coords.add((x, y))
        index += 1
        # Stable, tool-generated local IDs; rerunning cannot duplicate them.
        local_id = "LOCALID_" + events["id"].replace("MAP_", "") + "_" + str(index)
        objects.append({
            "graphics_id": graphics, "x": x, "y": y, "elevation": 3,
            "movement_type": "MOVEMENT_TYPE_FACE_DOWN",
            "movement_range_x": 0, "movement_range_y": 0,
            "trainer_type": "TRAINER_TYPE_NONE",
            "trainer_sight_or_berry_tree_id": "0",
            "script": script, "flag": "0", "local_id": local_id
        })
        added += 1
    if added:
        events["object_events"] = objects
        map_path_json.write_text(json.dumps(events, indent=2, ensure_ascii=False) + "\n")
    return name, sum(a != b for a, b in zip(new_data, raw)) // 2, added


if __name__ == "__main__":
    for place in STREETS:
        name, changed, inhabitants = polish(place)
        print(f"UNOVA MAP PASS: {name}: changed-bytes={changed*2}, new-npcs={inhabitants}")
