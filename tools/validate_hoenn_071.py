#!/usr/bin/env python3
"""Check the producer/consumer contracts that caused the 0.7 blockers."""
from pathlib import Path
import re
r=Path(__file__).resolve().parents[1]
def text(p):return (r/p).read_text()
gym=text('data/maps/RustboroCity_Gym/scripts.inc')
city=text('data/maps/RustboroCity/scripts.inc')
assert re.search(r'setvar VAR_RUSTBORO_CITY_STATE, 1\b',gym)
assert 'RustboroCity_EventScript_StolenGoodsTrigger' in city
assert 'callnative HeRepairProgression' in city
assert 'HeRepairProgression();' in text('src/overworld.c')
repair=text('src/hoenn_rules.c').split('void HeRepairProgression(void)',1)[1].split('unsigned HeExpCapType',1)[0]
assert 'VarGet(VAR_RUSTBORO_CITY_STATE) == 0' in repair
for f in ['FLAG_DEVON_GOODS_STOLEN','FLAG_RECOVERED_DEVON_GOODS','FLAG_RECEIVED_POKENAV','FLAG_HE_HARBOR_SAFE']:assert '!FlagGet('+f+')' in repair
museum=text('data/maps/SlateportCity_OceanicMuseum_2F/scripts.inc')
assert 'TRAINER_HE_HARBOR' in museum and 'TRAINER_LEAF' not in museum
assert 'removeitem ITEM_DEVON_PARTS, 1' in museum
opponents=text('include/constants/opponents.h')
assert re.search(r'#define TRAINER_HE_HARBOR\s+852\b',opponents)
assert '#define MAX_TRAINERS_COUNT_EMERALD 864' in opponents
post=text('data/scripts/hoenn_postgame.inc')
ship=post.split('HE_RainbowShip::',1)[1].split('HE_RainbowFinal::',1)[0]
assert ship.index('giveitem ITEM_MEGA_RING') < ship.index('setvar VAR_HE_RAINBOW_STAGE, 4')
assert 'goto_if_eq VAR_RESULT, FALSE, HE_RainbowRingBagFull' in ship
assert 'HE_RainbowRecoverRing:' in ship
recover=ship.split('HE_RainbowRecoverRing:',1)[1]
assert 'setvar VAR_HE_RAINBOW_STAGE' not in recover
assert 'FLAG_RECOVERED_DEVON_GOODS' in text('data/scripts/hoenn_eclipse.inc')
print('OK: theft gate, Continue repair, stable trainer IDs, harbor battle, item transaction and Ring recovery.')
