import json
import os

line_nums = [
    1, 24, 41, 54, 76, 101, 115, 138, 163, 195,
    223, 251, 310, 346, 363, 395, 409, 433, 450, 479,
    502, 533, 550, 568, 581, 611, 637, 672, 696, 721,
    742, 769, 795, 821, 856, 892, 937, 983, 1030, 1077,
    1104, 1150, 1198, 1244, 1302, 1338, 1375, 1397, 1428, 1456
]

with open('problems.txt', 'r', encoding='utf-8') as f:
    lines = f.readlines()

problems = []
for i in range(len(line_nums)):
    start_line = line_nums[i]
    title = lines[start_line - 1].strip()
    
    # Clean up title if it contains zero-width spaces or other invisible chars
    title = title.replace('\u200b', '').strip()

    if i < len(line_nums) - 1:
        end_line = line_nums[i+1] - 1
    else:
        end_line = len(lines)
        
    problems.append({
        "id": i + 1,
        "title": title,
        "start_line": start_line,
        "end_line": end_line
    })

with open('problem_index.json', 'w', encoding='utf-8') as f:
    json.dump(problems, f, ensure_ascii=False, indent=2)

print("Created problem_index.json with {} problems.".format(len(problems)))
