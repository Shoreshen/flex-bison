# $@  表示目标文件
# $^  表示所有的依赖文件
# $<  表示第一个依赖文件
# $?  表示比目标还要新的依赖文件列表
# Variables =====================================================================================
PHONY 			= 
proj 			= 
ifeq ($(proj),)
	LEX_FILE	= lex.l
	BISON_FILE	= yacc.y
else
	LEX_FILE 	= $(proj).l
	BISON_FILE	= $(proj).y
endif

BISON_OUT		= $(subst .y,,$(BISON_FILE)).tab.c $(subst .y,,$(BISON_FILE)).tab.h
LEX_OUT			= $(subst .l,,$(LEX_FILE)).yy.c
LEX_OUT_ONLY	= $(subst .l,,$(LEX_FILE)).only.yy.c
CFLAGS			= -g

# Flex ==========================================================================================
$(LEX_OUT):$(LEX_FILE) $(BISON_OUT)
	flex --outfile=$@ $<
$(LEX_OUT_ONLY):$(LEX_FILE)
	flex --outfile=$@ $<

# Bison =========================================================================================
$(BISON_OUT):$(BISON_FILE)
	bison -d $<

# Run ===========================================================================================
$(proj).out:$(LEX_OUT) $(BISON_OUT)
	gcc $(CFLAGS) $(word 1,$^) $(word 2,$^) -o $@
$(proj).lex:$(LEX_OUT_ONLY)
	gcc $(CFLAGS) $(word 1,$^) -o $@

run:$(proj).out
	./$<

run_lex:$(proj).lex
	@echo "Please type in file names: "; \
	read file; \
	./$< $$file

PHONY += run run_wc run_lex
# Clean =========================================================================================
clean:
	-rm *.out *.lex *.yy.c *.tab.h *.tab.c *.s
cleansp:
	-rm $(proj).out $(proj).lex $(BISON_OUT) $(LEX_OUT)

PHONY += clean cleansp
# GitHub ========================================================================================
commit: clean
	git add -A
	@echo "Please type in commit comment: "; \
	read comment; \
	git commit -m"$$comment"
sync: commit 
	git push -u origin master

PHONY += commit sync
# PHONY =========================================================================================
.PHONY: $(PHONY)