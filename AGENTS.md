# AGENTS.md — Developer & AI Agent Guide

## Project Overview

PTIT50 is a collection of 50 standalone C++ solutions for PTIT's practice problem set. Each solution is self-contained in `solutions/probXX.cpp`.

## Structure

```
.
├── solutions/    # C++ source files (prob01.cpp – prob50.cpp)
├── docs/         # Problem statements, indexes, reference files
├── TUTORIAL.md   # Build, run, and learning guide
├── AGENTS.md     # This file
└── README.md
```

## Coding Conventions

- **Standard:** C++11
- **Formatting:** 2-space indentation, no tabs
- **Naming:** `camelCase` for variables, `PascalCase` for struct/class names
- **Headers:** Include only what is used (`<iostream>`, `<vector>`, `<string>`, `<algorithm>`, etc.)
- **Namespace:** `using namespace std;` is permitted
- **Comments:** Do not add comments unless the logic is non-trivial
- **I/O:** Use `cin`/`cout` with `fixed`/`setprecision` for floating point where needed

### File Template

```cpp
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int t;
  if (cin >> t) {
    while (t--) {
      // solve each test case
    }
  }
  return 0;
}
```

## Git Conventions

Use conventional commits:

```
feat:  new feature or solution
fix:   bug fix
docs:  documentation changes
chore: maintenance, gitignore, config
```

## Workflow

1. Solutions are compiled with `g++ -std=c++11 -o probXX solutions/probXX.cpp`
2. Test with sample input from `docs/pdf_layout.txt`
3. Compiled binaries (`probXX`) are gitignored — never commit them
4. The `scripts/` directory is local-only and gitignored

## Problem Pattern

Most solutions follow a test-case loop pattern:

```cpp
int main() {
  int t;
  if (cin >> t) {
    while (t--) {
      // read input
      // compute
      // print output
    }
  }
  return 0;
}
```
