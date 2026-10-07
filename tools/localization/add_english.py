import json, sys
from pathlib import Path
p=Path('docs/localization/story_catalog.json')
c=json.loads(p.read_text())
for line in sys.stdin:
    if not line.strip(): continue
    key, value = line.rstrip('\n').split('\t',1)
    c[int(key)]['en']=value
p.write_text(json.dumps(c,ensure_ascii=False,indent=2)+'\n')
print('Translated:',sum('en' in e for e in c),'/',len(c))
