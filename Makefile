ifeq ($(t),cf)
	FOLDER = Codeforces
else ifeq ($(t),at)
	FOLDER = AtCoder
else ifeq ($(t),lc)
	FOLDER = LeetCode
else ifeq ($(t),cses)
	FOLDER = CSES
else ifeq ($(t),ac)
	FOLDER = ACMP
else
	FOLDER = $(t)
endif

# Path to the problem directory (set per target)
TASK_PATH = $(FOLDER)/$*

# Compiler and flags (adjust as needed)
CXX = g++
CXXFLAGS = -g -std=c++20 -Wall -Wextra -pedantic -O0 \
           -Warray-bounds=2 -Wstringop-overflow -Wvla -Walloca \
           -fsanitize=address -fsanitize=undefined -fsanitize=bounds \
           -D_GLIBCXX_DEBUG -D_GLIBCXX_ASSERTIONS
           
LAST_PROBLEM_FILE = .last_problem

%:
	@if [ -d "$(TASK_PATH)" ]; then \
		echo "Error: $(TASK_PATH) already exists!"; \
		exit 1; \
	else \
		mkdir -p "$(TASK_PATH)"; \
		cp template.cpp "$(TASK_PATH)/$@.cpp"; \
		echo "Problem $@ created at $(TASK_PATH)/$@.cpp"; \
		echo "$(TASK_PATH)/$@" > $(LAST_PROBLEM_FILE); \
	fi

build: $(LAST_PROBLEM_FILE)
	@if [ ! -f "$(LAST_PROBLEM_FILE)" ]; then \
		echo "No problem created yet. Run 'make t=xxx problem_name' first."; \
		exit 1; \
	fi
	$(eval BIN := $(shell cat $(LAST_PROBLEM_FILE)))
	@echo "Compiling $(BIN).cpp -> $(BIN)"
	$(CXX) $(CXXFLAGS) -o $(BIN) $(BIN).cpp

run: $(LAST_PROBLEM_FILE)
	@if [ ! -f "$(LAST_PROBLEM_FILE)" ]; then \
		echo "No problem created yet."; \
		exit 1; \
	fi
	$(eval BIN := $(shell cat $(LAST_PROBLEM_FILE)))
	@if [ ! -f "$(BIN)" ]; then \
		echo "Binary not found. Run 'make build' first."; \
		exit 1; \
	fi
	@echo "Running $(BIN) < input.txt > output.txt"
	@$(BIN) < input.txt > output.txt
	@echo "Done. Output saved to output.txt"

%-run: %-build
	$(FOLDER)/$*/$* < input.txt > output.txt

%-build: %
	$(CXX) $(CXXFLAGS) -o $(FOLDER)/$*/$* $(FOLDER)/$*/$*.cpp


debug: build
	lldb $(shell cat $(LAST_PROBLEM_FILE))
