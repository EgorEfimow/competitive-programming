# Competitive Programming Workspace

My personal archive of solutions (Codeforces, AtCoder, LeetCode, etc.) featuring a highly automated CLI environment for VS Code.

## Features

- **Instant Deployment:** Generates a complete task environment (`.cpp`, I/O files) with a single keystroke using `make`.
- **Intelligent Routing:** Automatically directs new problems into their respective platform-specific directories.
- **Dynamic Templating:** Context-aware template selection.
- **Integrated Developer Experience (DX):**
    - **One-Click Testing:** Seamless build, run, and diff-comparison workflow via VS Code Tasks.
    - **Advanced Debugging:** Pre-configured `launch.json` with automatic stream redirection.

---

## Prerequisites

- Linux / MacOS / WSL
- `g++` (GCC)
- `make` (GNU Make)
- VS Code (with C/C++ extension)

---

## Usage

### 1. Initialize a Problem
Execute `make` from the root directory.

**Codeforces (Default):**
```bash
make 1700B
# Target: Codeforces/1700B/
```

**Other Platforms (using `t=` flag):**
```bash
make abc350_a t=at   # Target: AtCoder/abc350_a/
make TwoSum t=lc     # Target: LeetCode/TwoSum/
make weird t=cses    # Target: CSES/weird/
make 1001 t=acmp     # Target: ACMP/1001/
```

### 2. Task Architecture
Each generated task folder contains:
- **`Task.cpp`**: Source code (injected with the correct template).
- **`input.txt`**: Test case input buffer.
- **`output.txt`**: Program output buffer.
- **`expected.txt`**: Reference output for validation.

### 3. VS Code Workflow

| Action | Shortcut | Description |
| :--- | :--- | :--- |
| **Run / Debug** | `F5` | Compiles and executes code. Redirects `input.txt` to stdin and stdout to `output.txt`. |
| **Validate** | `Run Task -> Compare` | Launches a visual **Diff View** to verify correctness against `expected.txt`. |
