#!/usr/bin/env python3
"""Static consistency checks for Unova 0.10.1; does not build or play the ROM."""
from pathlib import Path
import json
import re
import sys

ROOT = Path(__file__).resolve().parents[1]
errors = []
checks = 0

def check(condition, description):
    global checks
    checks += 1
    if not condition:
        errors.append(description)

def read(path):
    return (ROOT/path).read_text()

def jsonfile(path):
    try:
        return json.loads(read(path))
    except Exception as exc:
        errors.append(f"invalid JSON: {path}: {exc}")
        return None

def compact(n):
    return re.sub(r'(?<!^)(?=[A-Z])', '_', n).upper()

maps = jsonfile('data/maps/map_groups.json')['gMapGroup_Unova']
layouts = jsonfile('data/layouts/layouts.json')['layouts']
ids = {v['id'] for v in layouts}
sections = {v['id'] for v in jsonfile('src/data/region_map/region_map_sections.json')['map_sections']}
check(len(set(maps)) == len(maps), 'map group has duplicated map entries')
check(len(ids) == len(layouts), 'layouts contain duplicate IDs')
check('MAPSEC_UN_NIMBASA' in sections, 'missing Nimbasa map-section ID')
world = {}
for name in maps:
    info = jsonfile(f'data/maps/{name}/map.json')
    if info is None: continue
    world[info['id']] = info
    for obj in info.get("object_events", []):
        local_id = obj.get("local_id")
        if local_id is not None:
            check(bool(re.fullmatch(r"[A-Za-z_][A-Za-z_0-9]*", str(local_id))), f"{name}: invalid object local_id {local_id!r}")
    check(info['name'] == name, f'{name}: name mismatch')
    check(info['layout'] in ids, f'{name}: undefined layout')
    check(info['region_map_section'] in sections, f'{name}: invalid map-section')
    check((ROOT/f'data/maps/{name}/scripts.inc').exists(), f'{name}: missing map script file')
    check(f'.include "data/maps/{name}/scripts.inc"' in read('data/event_scripts.s'), f'{name}: script missing in linker input')
    for connection in info['connections']:
        check(connection['map'] in (f'MAP_UN_{compact(x[2:])}' for x in maps), f'{name}: unknown linked map {connection["map"]}')
    for warp in info['warp_events']:
        check(warp['dest_map'] != info['id'], f'{name}: self-loop warp')
for name in ['UnRoute4','UnNimbasaCity','UnNimbasaCenter']:
    check(name in maps, f'missing new map {name}')
for from_map,to_map,direction in [
    ('MAP_UN_CASTELIA_STREET','MAP_UN_ROUTE4','up'),
    ('MAP_UN_ROUTE4','MAP_UN_NIMBASA_CITY','up')]:
    check(any(x['map']==to_map and x['direction']==direction for x in world[from_map]['connections']), f'missing north connection {from_map} -> {to_map}')
    check(any(x['map']==from_map and x['direction']=='down' for x in world[to_map]['connections']), f'missing south connection {to_map} -> {from_map}')
check(any(x['dest_map']=='MAP_UN_NIMBASA_CENTER' for x in world['MAP_UN_NIMBASA_CITY']['warp_events']), 'Nimbasa Center entrance missing')
check(any(x['dest_map']=='MAP_UN_NIMBASA_CITY' for x in world['MAP_UN_NIMBASA_CENTER']['warp_events']), 'Nimbasa Center exit missing')
for name in ['Route4','NimbasaCity','NimbasaCenter']:
    layout = next(x for x in layouts if x['name']==f'Un{name}_Layout')
    for kind,expected in [('map.bin',layout['width']*layout['height']*2),('border.bin',8)]:
        path=ROOT/f'data/layouts/Un{name}/{kind}'
        check(path.exists() and path.stat().st_size==expected, f'invalid {kind} for {name}: expected {expected} bytes')
heals = {x['id']:x for x in jsonfile('src/data/heal_locations.json')['heal_locations']}
for center in ['NUVEMAHOUSE','ACCUMULACENTER','STRIATONCENTER','NACRENECENTER','CASTELIACENTER','NIMBASACENTER']:
    key='HEAL_LOCATION_UN_'+center
    check(key in heals, f'missing heal location {key}')
    if key in heals: check(heals[key]['map'] in world, f'heal map missing: {key}')
wild = jsonfile('src/data/wild_encounters.json')['wild_encounter_groups'][0]['encounters']
route4 = [x for x in wild if x['map']=='MAP_UN_ROUTE4']
check(len(route4)==1, 'Route 4 wild encounters duplicated/missing')
if route4: check(len(route4[0]['land_mons']['mons'])==12, 'Route 4 requires 12 slots')
scripts = read('data/scripts/unova_chapter.inc')
labels = set(re.findall(r'(?m)^([A-Za-z_][A-Za-z0-9_]*):', scripts))
for name in ['UN_Route4Gate','UN_Route4Ranger','UN_Route4Traveler','UN_NimbasaArrival','UN_NimbasaMusician']:
    check(name in labels, f'undefined new script {name}')
for name in ['UN_T_Route4Gate','UN_T_Route4Ranger','UN_T_Route4Traveler','UN_T_NimbasaArrival','UN_T_NimbasaMusician']:
    check(name in labels and name+'_En' in labels, f'missing translated text {name}')
check('setvar VAR_UN_STAGE, 18' in scripts and 'setvar VAR_UN_STAGE, 19' in scripts, 'story does not reach Nimbasa')
source=read('src/unova_chapter.c')
check('LAYOUT_UN_NIMBASACENTER' in source, 'Nimbasa missing from heal setter')
check('sMissionPage' in source and 'JOY_NEW(A_BUTTON)' in source, 'mission detail button not implemented')
check('ARRAY_COUNT(sMissions)-1' in source, 'mission stage not bounded')
local=read('src/data/unova_localization.h')
for name in ['UN_T_Route4Gate','UN_T_Route4Ranger','UN_T_NimbasaArrival']:
    check(local.index('extern const u8 '+name) < local.index('static const struct HeTranslation'), 'translation declaration must precede table: '+name)

if errors:
    for error in errors: print('FAIL:',error)
    print(f'FAILED: {len(errors)} failures over {checks} checks')
    sys.exit(1)
print(f'PASS: {checks} Unova static checks (no ROM was compiled)')
