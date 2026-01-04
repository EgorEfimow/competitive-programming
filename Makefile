t ?= cf

ifeq ($(t),cf)
	FOLDER = Codeforces
else ifeq ($(t),at)
	FOLDER = AtCoder
else ifeq ($(t),lc)
	FOLDER = LeetCode
else ifeq ($(t),cses)
	FOLDER = CSES
else ifeq ($(t),acmp)
	FOLDER = ACMP
else
	FOLDER = $(t)
endif

TASK_PATH = $(FOLDER)/$@

%:
	@if [ -d "$(TASK_PATH)" ]; then \
		echo "❌ Error: $(TASK_PATH) already exists!"; \
	else \
		mkdir -p $(TASK_PATH); \
		touch $(TASK_PATH)/input.txt; \
		touch $(TASK_PATH)/output.txt; \
		touch $(TASK_PATH)/expected.txt; \
		\
		cp template.cpp $(TASK_PATH)/$@.cpp; \
		\
		echo "✅ Problem $@ created in $(FOLDER)"; \
		code $(TASK_PATH)/$@.cpp; \
	fi