import re

with open('problems.txt', 'r', encoding='utf-8') as f:
    lines = f.readlines()

titles = []
for i, line in enumerate(lines):
    # check for uppercase lines
    stripped = line.strip()
    if stripped and stripped.isupper() and len(stripped) > 3 and not stripped.startswith('INPUT') and not stripped.startswith('OUTPUT'):
        # also not just numbers
        if not re.match(r'^\d+$', stripped):
            titles.append((i+1, stripped))

for t in titles:
    print(t)
