import json
import os

def main():
    with open('problems.txt', 'r', encoding='utf-8') as f:
        lines = f.readlines()

    with open('problem_index.json', 'r', encoding='utf-8') as f:
        index = json.load(f)

    for prob in index:
        i = prob['id']
        if 21 <= i <= 50:
            start = prob['start_line'] - 1
            end = prob['end_line']
            
            prob_text = "".join(lines[start:end]).strip()
            
            dir_name = f'prob{i:02d}'
            os.makedirs(dir_name, exist_ok=True)
            
            with open(os.path.join(dir_name, 'desc.txt'), 'w', encoding='utf-8') as f:
                f.write(prob_text)
            print(f"Created {dir_name}/desc.txt")

if __name__ == "__main__":
    main()
