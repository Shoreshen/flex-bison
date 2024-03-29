# $@  表示目标文件
# $^  表示所有的依赖文件
# $<  表示第一个依赖文件
# $?  表示比目标还要新的依赖文件列表
# Disable implicity rules =======================================================================
%.c: %.y
%.c: %.l
# Variables =====================================================================================
PHONY 			= 
proj 			= 

ALL_FILES	:= $(filter $(proj).%,$(shell ls | grep "^$(proj)\.[a-z]*$$"))
LEX_FILE 	:= $(filter %.l, $(ALL_FILES))
BISON_FILE	:= $(filter %.y, $(ALL_FILES))
C_FILE		:= $(filter %.c, $(ALL_FILES))
H_FILE		:= $(filter %.h, $(ALL_FILES))

BISON_OUT_H	:= $(subst .y,.tab.h,$(BISON_FILE)) 
BISON_OUT_C	:= $(subst .y,.tab.c,$(BISON_FILE))
BISON_OUT	:= $(BISON_OUT_C) $(BISON_OUT_H)
LEX_OUT		:= $(subst .l,.yy.c,$(LEX_FILE))
LEX_TRG		:= $(LEX_FILE)
LEX_DEP		:= $(LEX_FILE) $(BISON_OUT_H)
GCC_TRG		:= $(BISON_OUT_C) $(LEX_OUT) $(C_FILE) 
GCC_DEP		:= $(GCC_TRG) $(H_FILE) $(BISON_OUT_H)
BISON_FLAG	:= -d -Wcounterexamples # --report=all produce name.output, indicating conflict
									# -Wcounterexamples print out conflict example in terminal
CFLAGS		= -g -lm -DYYDEBUG=1 # -DYYDEBUG=1 define the macro so that yydebug can be used

test:
	@echo $(proj)
	@echo $(ALL_FILES)
	@echo $(LEX_FILE)
	@echo $(BISON_FILE)
	@echo $(C_FILE)
	@echo $(BISON_OUT_C)
	@echo $(LEX_OUT)
	@echo $(GCC_TRG)
	@echo $(GCC_DEP)
# Flex ==========================================================================================
$(LEX_OUT):$(LEX_DEP)
ifneq (,$(LEX_TRG))
	flex --outfile=$@ $(LEX_TRG)
endif

# Bison =========================================================================================
$(BISON_OUT):$(BISON_FILE)
ifneq (,$(BISON_FILE))
	bison $(BISON_FLAG) $<
endif

# Run ===========================================================================================
$(proj).out:$(GCC_DEP)
ifneq (,$(GCC_TRG))
	gcc $(CFLAGS) $(GCC_TRG) -o $@
endif

build:$(proj).out

run:$(proj).out
	./$<

run_lex:$(proj).out
	@echo "Please type in file names: "; \
	read file; \
	./$< $$file

run_file:$(proj).out
	@echo "Please type in file names: "; \
	read file; \
	./$< $$file

PHONY += build run run_wc run_lex
# Clean =========================================================================================
clean:
	-rm *.out *.lex *.yy.c *.tab.h *.tab.c *.s *.output
cleansp:
	-rm $(proj).out $(proj).lex $(BISON_OUT) $(LEX_OUT)

PHONY += clean cleansp
# GitHub ========================================================================================
sub_pull:
	git submodule foreach --recursive 'git pull'
commit: clean
	git add -A
	@echo "Please type in commit comment: "; \
	read comment; \
	git commit -m"$$comment"
sync: sub_pull commit 
	git push -u origin master

PHONY += commit sync
# PHONY =========================================================================================
.PHONY: $(PHONY)