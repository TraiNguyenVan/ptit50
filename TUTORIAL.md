# Tutorial

## Repository Structure

```
.
├── solutions/       # C++ source files (prob01.cpp – prob50.cpp)
├── docs/            # Problem statements, indexes, reference files
├── TUTORIAL.md      # This file
└── README.md        # Problem list with links
```

Each `.cpp` file in `solutions/` is a standalone solution to one problem. There are no dependencies between files — you can compile and run any problem independently.

## Prerequisites

- A C++ compiler (`g++` recommended)
- **CMake** ≥ 3.10 (recommended) — for batch compilation

## Compiling and Running

### Compile a single problem

```bash
g++ -std=c++11 -o prob01 solutions/prob01.cpp
```

### Run it

```bash
./prob01
```

### Feed sample input directly

```bash
./prob01 <<< "1 10"
```

Or from a file:

```bash
echo -e "2\n10\n20" > input.txt
./prob01 < input.txt
```

### Compile all problems with CMake (recommended)

```bash
mkdir build && cd build
cmake ..
cmake --build .
```

This compiles all 50 solutions at once. Binaries are placed inside `build/` — no clutter.

### Compile a single target with CMake

```bash
cmake --build . --target prob01
```

### Compile all problems manually (no CMake)

```bash
for f in solutions/prob*.cpp; do
  g++ -std=c++11 -o "${f%.cpp}" "$f"
done
```

This creates executables (`prob01`, `prob02`, ...) in the root directory. They are already listed in `.gitignore` so they won't be tracked.

## How to Learn from This Repository

### If you are a beginner

1. Start with **prob01** → **prob03**: basic math and loops
2. Move to **prob02**: character handling
3. Then **prob05** → **prob08**: digit manipulation and number theory
4. Then **prob09** → **prob15**: array problems
5. Then **prob12** → **prob13** → **prob25**: matrix problems
6. Then **prob20** → **prob21**: struct basics
7. Then work your way up sequentially

### Testing your understanding

Before running a solution:

1. Read the problem statement in `docs/pdf_layout.txt`
2. Try to write your own solution
3. Compare with the provided solution
4. Compile and run both with the sample input

### Progression of concepts

| Concept | Problems |
|---|---|
| Loops, basic math | 01, 03 |
| Characters, strings | 02, 17, 18, 28–30, 47 |
| Digit manipulation | 04, 05, 16, 19 |
| Primes, divisors | 06, 07, 08 |
| Arrays, sorting, two pointers | 09–11, 14, 15, 26, 31–33 |
| Matrices | 12, 13, 25, 27 |
| Structs, classes, OOP | 20–23, 34–46 |
| File I/O | 24, 48–50 |

Problems roughly increase in difficulty. Later problems combine multiple concepts (e.g., structs + sorting, file I/O + sets).
