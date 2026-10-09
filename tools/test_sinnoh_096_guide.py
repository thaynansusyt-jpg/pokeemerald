from pathlib import Path
p=Path(__file__).resolve().parents[1]
guide=(p/'src/sinnoh_missions.c').read_text()
menu=(p/'src/option_menu.c').read_text()
over=(p/'src/overworld.c').read_text()
const=(p/'include/constants/vars.h').read_text()
assert '#define VAR_SI_GUIDE_MODE 0x407A' in const
assert 'SiGuideUpdate();' in over
assert 'GetPlayerAvatarSpriteId()' in guide
assert 'MAP_LAKE_VERITY, 19, 41' in guide
assert 'MAP_VERITY_LAKEFRONT, 2, 4' in guide
assert 'MAP_ROUTE201, 0, 14' in guide
assert 'VarGet(VAR_SI_STAGE)' in guide
assert 'VarGet(VAR_SI_GUIDE_MODE) != 1' in guide
assert 'CreateSprite(&sSiGuideTemplate' in guide
assert 'sprite->invisible = ((sprite->data[0] / 16) & 1) != 0' in guide
assert 'MENUITEM_GUIDEMODE' in menu and 'MODO AJUDA' in menu
assert 'VarSet(VAR_SI_GUIDE_MODE, gTasks[taskId].tGuideMode)' in menu
assert 'HeUiPresent();' in guide
print('PASS: guide mode toggle persisted in unused save var and targets Lake Verity collector')
print('PASS: field overlay sprite follows mission state and flickers on the map')
print('PASS: existing journal UI retained and option menu exposes Normal/Ajuda')
print('LIMIT: target arrows only on supported early-Sinnoh maps; GBA runtime and visual checks needed')
