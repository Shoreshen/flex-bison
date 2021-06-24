#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

extern int yylineno;
void yyerror(char *s, ...);

//==============================================================================================
// Symbol table
//==============================================================================================
#define NHASH 9997
struct symlist{
    struct symlist* next;
    struct symbol* sym;
};

struct symbol{
    char *name;
    double value;
    struct ast *func;
    struct symlist* args;
};

struct symbol symtab[NHASH];
//==============================================================================================
// AST
//==============================================================================================
struct ast {
    char nodetype;
    struct ast* l;
    struct ast* r;
};

struct func {
    char nodetype;
    struct ast* l;
    struct symbol* s;
};

struct numval {
    char nodetype;
    double number;
};

struct symref {
    char nodetype;
    struct symbol* sym;
};

struct flow {
    char notetype;
    struct ast* cond;
    struct ast* tl;
    struct ast* el;
};