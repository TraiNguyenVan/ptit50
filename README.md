# PTIT50 — C++ Practice Problems

[![Language](https://img.shields.io/badge/language-C++11-blue)](https://en.cppreference.com/w/cpp/11)
[![License](https://img.shields.io/badge/license-MIT-green)](LICENSE)

50 programming problems from **Posts and Telecommunications Institute of Technology (PTIT)**, solved in C++11. Covers foundational topics from basic math to OOP and file I/O.

🔗 [GitHub Repository](https://github.com/TraiNguyenVan/ptit50)

## About

This repository contains my solutions to PTIT's C++ practice problem set. Each solution is self-contained, compiles standalone, and covers a distinct concept to help build programming fundamentals step by step.

## Prerequisites

- **C++ compiler** — `g++` (recommended) or `clang++`
- **CMake** ≥ 3.10 (recommended) — for batch compilation

## Structure

```
.
├── solutions/    # prob01.cpp – prob50.cpp
├── docs/         # Problem statements and reference files
├── TUTORIAL.md   # Build, run, and learning guide
└── README.md
```

## Topics Covered

| Topic | Problems |
|---|---|
| Basic math & loops | 01, 03 |
| Strings | 02, 17, 18, 28, 29, 30, 47 |
| Digit manipulation | 04, 05, 16, 19 |
| Number theory | 06, 07, 08 |
| Arrays | 09, 10, 11, 14, 15, 26, 31, 32, 33 |
| Matrices | 12, 13, 25, 27 |
| Struct, class, OOP | 20, 21, 22, 23, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46 |
| File I/O | 24, 48, 49, 50 |

## Quick Start

```bash
mkdir build && cd build
cmake ..
cmake --build .
./prob01
```

Or compile a single file manually:

```bash
g++ -std=c++11 -o prob01 solutions/prob01.cpp && ./prob01
```

See [TUTORIAL.md](TUTORIAL.md) for detailed compilation and learning instructions.

## Author

**Nguyen Van Trai** — PTIT

## License

This project is licensed under the MIT License.
