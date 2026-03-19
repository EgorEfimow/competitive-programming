# Competitive Programming

My personal archive of solutions (Codeforces, AtCoder, LeetCode, etc.)

## Prerequisites

- Linux / MacOS / WSL
- `g++` (GCC)
- `make` (GNU Make)
- VS Code (with clangd and codelldb extensions)

---

## Usage

### 1. Initialize a Problem
Execute `make` from the root directory.

**AtCoder (Default):**
```bash
make abc429a
# Target: AtCoder/abc429a/
```

**Other Platforms (using `t=` flag):**
```bash
make 1700B t=cf   # Target: Codeforces/1700B/
make TwoSum t=lc     # Target: LeetCode/TwoSum/
make weird t=cses    # Target: CSES/weird/
make 1001 t=acmp     # Target: ACMP/1001/
```

### 2. Task scheme
Each generated task folder contains:
- **`Task.cpp`**: Source code (injected with the correct template).
- **`input.txt`**: Test case input buffer.
- **`output.txt`**: Program output buffer.
- **`expected.txt`**: Reference output for validation.
