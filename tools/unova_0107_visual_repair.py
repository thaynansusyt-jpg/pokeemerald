#!/usr/bin/env python3
"""Unova interior and protagonist visual repair (source assets only).
No edits to event scripts, map coordinates, collision or existing saves.
All assets used are preexisting assets of this project or new procedural pixels.
"""
from pathlib import Path
from PIL import Image

ROOT = Path(__file__).resolve().parents[1]


def update_palette(path, updates):
    lines = path.read_text().splitlines()
    assert lines[:3] == ["JASC-PAL", "0100", "16"], path
    assert len(lines) >= 19, path
    for idx, color in updates.items():
        assert 0 <= idx < 16
        assert len(color) == 3 and all(0 <= n <= 255 for n in color)
        lines[3 + idx] = " ".join(map(str, color))
    path.write_text("\n".join(lines) + "\n")


def create_planks(path, primary=False):
    im = Image.open(path)
    assert im.mode == "P" and im.size == (128, 256), (path, im.mode, im.size)
    # Floor metatiles 0 and 1 use tiles 1-4 of the indexed spritesheets.
    # Recreate only these four original tile slots; preserve ALL others.
    for tile in range(1, 5):
        x0 = 8 * tile
        for y in range(8):
            for x in range(8):
                # Light oak boards, with sparse small grain and minimal grout.
                if y == 0:
                    v = 3
                elif x == 0:
                    v = 4
                elif y == 7:
                    v = 2
                elif (x + 3 * tile + 2 * y) % 13 == 0:
                    v = 5
                elif (x * 5 + y + tile) % 7 == 0:
                    v = 2
                else:
                    v = 1
                im.putpixel((x0 + x, y), v)
    im.save(path, optimize=True)


def fix_hilda_back_hat(path):
    im = Image.open(path)
    assert im.mode == "P" and im.size == (576, 32)
    # Original sprites lacked the visible pink/white cap from rear view.
    # The overworld animation uses these six back-facing frames.
    for frame in (1, 5, 6, 10, 14, 15):
        x0 = frame * 32
        # Thin dark outline, pale crown and recognizable pink band.
        for y, xa, xb, idx in (
            (4, 13, 18, 14), (5, 12, 19, 2), (6, 11, 20, 2),
            (7, 11, 20, 2), (8, 12, 19, 8),
        ):
            for x in range(xa, xb + 1):
                im.putpixel((x0 + x, y), idx)
        # Small pink bow, as seen from behind (symmetric).
        for dx, dy in ((11, 7), (10, 6), (20, 7), (21, 6)):
            im.putpixel((x0 + dx, dy), 4)
    im.save(path, optimize=True)


if __name__ == "__main__":
    p = ROOT / "data/tilesets/primary/un_indoor"
    s = ROOT / "data/tilesets/secondary/un_rooms"
    create_planks(p / "tiles.png", primary=True)
    create_planks(s / "tiles.png", primary=False)
    update_palette(p / "palettes/00.pal", {
        1: (246, 238, 219), 2: (234, 221, 196),
        3: (201, 180, 145), 4: (172, 151, 120), 5: (195, 168, 131),
        6: (159, 143, 126), 7: (126, 117, 112), 8: (106, 98, 96)
    })
    update_palette(s / "palettes/06.pal", {
        1: (246, 237, 220), 2: (234, 220, 199), 3: (198, 175, 141),
        4: (169, 145, 118), 5: (216, 198, 171), 6: (158, 145, 128),
        7: (132, 123, 116), 8: (101, 107, 129),
        9: (91, 100, 127), 10: (77, 90, 112), 11: (63, 74, 96)
    })
    fix_hilda_back_hat(
        ROOT / "graphics/object_events/pics/people/unova/hilda.png")
    print("PASS: Unova original oak floor palette, preserved other tile slots and Hilda rear cap")
