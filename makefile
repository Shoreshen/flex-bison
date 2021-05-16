# $@  表示目标文件
# $^  表示所有的依赖文件
# $<  表示第一个依赖文件
# $?  表示比目标还要新的依赖文件列表
# Variables =====================================================================================
PHONY 			= 
proj 		= main
file 		= 
ifeq ($(proj),wc)
	LEX_FILE = wc.l
else
	LEX_FILE	= lex.l
	BISON_FILE	= yacc.y
endif
ifneq ($(BISON_FILE),)
	BISON_OUT	= $(subst .y,,$(BISON_FILE)).tab.c $(subst .y,,$(BISON_FILE)).tab.h
endif
LEX_OUT		= $(subst .l,,$(LEX_FILE)).yy.c
CFLAGS		= -g

# Flex ==========================================================================================
$(LEX_OUT):$(LEX_FILE) $(BISON_OUT)
	flex --outfile=$@ $<

# Bison =========================================================================================
$(BISON_OUT):$(BISON_FILE)
ifneq ($(BISON_FILE),)
	bison -d $<
endif

# Run ===========================================================================================
$(proj).out:$(LEX_OUT) $(BISON_OUT)
ifneq ($(BISON_FILE),)
	gcc $(CFLAGS) $(word 1,$^) $(word 2,$^) -o $@
else
	gcc $(CFLAGS) $(word 1,$^) -o $@
endif

run:$(proj).out
	./$< $(file)

PHONY += run run_wc
# Clean =========================================================================================
clean:
	-rm *.out *.yy.c *.tab.h *.tab.c *.s
cleansp:
	-rm $(proj).out $(BISON_OUT) $(LEX_OUT)

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