#!/usr/bin/env python3
"""Regression checks for the subtitled-video bug fixes; no emulator claims."""
import json
import re
import struct
from pathlib import Path

R = Path(__file__).resolve().parents[1]
layouts = {v["id"]: v for v in json.loads(
    (R / "data/layouts/layouts.json").read_text())["layouts"]}
done = 0

for map_name, xs, rows, dest, index in (
    ("UnNuvemaBedroom", (9, 10, 11), (13, 14), "MAP_UN_NUVEMA_HOUSE", "1"),
    ("UnNuvemaHouse", (8, 9, 10), (12, 13), "MAP_UN_NUVEMA_TOWN", "0"),
):
    j = json.loads((R / "data/maps" / map_name / "map.json").read_text())
    layout = layouts[j["layout"]]
    data = (R / layout["blockdata_filepath"]).read_bytes()
    assert len(data) == layout["width"] * layout["height"] * 2
    tiles = struct.unpack("<" + "H" * (len(data) // 2), data)
    assert j["warp_events"][0]["dest_map"] == dest
    coords = {(int(w["x"]), int(w["y"])) for w in j["warp_events"]
              if w["dest_map"] == dest and str(w["dest_warp_id"]) == index}
    assert len(coords) == len([w for w in j["warp_events"]
              if w["dest_map"] == dest and str(w["dest_warp_id"]) == index]), "duplicate exits"
    for y in rows:
        for x in xs:
            assert (x, y) in coords, (map_name, x, y, "warp missing")
            assert (tiles[y * layout["width"] + x] & 0x03FF) == 0, (
                map_name, x, y, "exit has blocking metatile")
            done += 1

main = (R / "src/main_menu.c").read_text()
for task in ("ThisIsAPokemon", "MainSpeech", "AndYouAre",
             "StartBirchLotadPlatformFade", "WaitForSpriteFadeInAndTextPrinter",
             "ShrinkPlayer"):
    rexp = r"static void Task_NewGameBirchSpeech_" + task + (
        r"\(u8 taskId\)\n\{([\s\S]*?)\n\}")
    m = re.search(rexp, main)
    assert m and "JOY_NEW(A_BUTTON)" in m.group(1), task + " skips player confirmation"
    done += 1

battle = (R / "src/battle_message.c").read_text()
for name in ("sUnTrainerChallengePt", "sUnTrainerSendPt", "sUnGoPt"):
    assert name in battle
    done += 1
for path in ("src/battle_bg.c", "src/battle_main.c"):
    assert "UnBattleTextPalette();" in (R / path).read_text(), path
    done += 1
assert "void UnBattleTextPalette(void)" in (R / "src/unova_chapter.c").read_text()
done += 1

print(f"PASS: {done} Unova 0.10.8 subtitle-driven exit/text/battle checks")
