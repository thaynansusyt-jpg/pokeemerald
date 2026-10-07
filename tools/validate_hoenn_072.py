#!/usr/bin/env python3
"""Ensure reviewed catalogs reproduce linked ROM text without touching saved progress."""
import sys
from pathlib import Path
sys.path.insert(0,str(Path(__file__).parent/'localization'))
import generate_story
root=Path(__file__).resolve().parents[1]
paths=['data/text/hoenn_story_en.inc','src/data/hoenn_story_localization.h','src/data/hoenn_ui_localization.h']
before={p:(root/p).read_text()for p in paths}
generate_story.main()
for p in paths:assert (root/p).read_text()==before[p],f'Stale generated translation: {p}'
assert (root/'data/event_scripts.s').read_text().count('.include "data/text/hoenn_story_en.inc"')==1
for p,call in [('src/string_util.c','src = HeLocalize(src);'),('src/battle_message.c','src = HeLocalize(src);'),('src/hoenn_opening.c','str = HeLocalize(str);')]:assert call in(root/p).read_text()
s=(root/'src/hoenn_rules.c').read_text()
assert 'sNewGameLanguage = gSaveBlock2Ptr->optionsLanguage;'in s
assert 'gSaveBlock2Ptr->optionsLanguage = sNewGameLanguage;'in s
print('OK: EN/PT-BR catalog, placeholders, line widths, buffer bounds, opening and language persistence.')

# Capture flags must never alias the original campaign or one another.
import json, re
quests=json.loads((root/'docs/legend_quests.json').read_text())
assert len(quests)==81 and len({q['flag'] for q in quests})==81
flag_header=(root/'include/constants/flags.h').read_text()
for q in quests:
 aliases=re.findall(r'^#define\s+(\w+)\s+0x%X(?:\s|$)' % q['flag'],flag_header,re.M)
 assert aliases==['FLAG_HE_CAPTURE_'+q['species']],(q['species'],aliases)
 assert 0x264 <= q['flag'] <= 0x2B4
assert 'HeMigrateQuestProgress();' in s
print('OK: 81 unique formerly unused capture flags; compatible migration is called on Continue.')
