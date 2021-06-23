#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

struct ast {
    char nodetype;
    struct ast *l;
    struct ast *r;
};

struct numval {
    char nodetype;
    double number;
};

struct ast *newast(char nodetype, struct ast *l, struct ast *r);
struct ast *newnum(double d);

double eval(struct ast *);

void treefree(struct ast *);

extern int yylineno;
void yyerror(char *s, ...);

//==============================================================================================
// Symbol table
//==============================================================================================
#define NHASH 9997
struct arglist{
    struct arglist* next;
    struct symbol* sym;
};

struct symbol{
    char *name;
    double value;
    struct ast *func;
    struct arglist* args;
};

struct symbol symtab[NHASH];

struct arglist* new_arglist(struct symbol *sym, struct arglist* next);