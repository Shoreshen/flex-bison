#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

extern int yylineno;
void yyerror(char *s, ...);

//==============================================================================================
// Symbol
//==============================================================================================
#define NHASH 9997
struct symbol{
    char *name;
    double value;
    struct ast *func;
    struct symlist* syms;
};

struct symlist{
    struct symlist* next;
    struct symbol* sym;
};
struct symlist* newsymlist(struct symbol* s, struct symlist* sl);
//Defining an function
struct ast* dodef(struct symbol* sym, struct symlist* sl, struct ast* list);

struct symbol symtab[NHASH];
//==============================================================================================
// AST
//==============================================================================================
struct ast {
    char nodetype;
    struct ast* l;
    struct ast* r;
};
struct ast* newast(char nodetype, struct ast* l, struct ast* r);
// Comparison also using ast struct
struct ast* newcmp(char nodetype, struct ast* l, struct ast* r);
struct sfunc {
    char nodetype; // 'F'
    int funcType;
    struct ast* l;
};
struct ast* newsfunc(int funcType, struct ast* l);
struct ufunc {
    char nodetype;
    struct ast* l;
    struct symbol* s;
};
struct ast* newufunc(struct symbol* s, struct ast* l);
struct numval {
    char nodetype; // 'K'
    double number;
};
struct ast* newnum(double number);
struct symref {
    char nodetype;
    struct symbol* sym;
};
struct ast* newref(struct symbol *s);
struct flow {
    char notetype; // if = 'I'; while = 'W'
    struct ast* cond;
    struct ast* tl;
    struct ast* el;
};
struct ast* newflow(char nodetype, struct ast* cond, struct ast* tl, struct ast* el);
struct symasgn {
    char nodetype;
    struct symbol* s;
    struct ast* v;
};
struct ast* newasgn(char nodetype, struct symbol* s, struct ast* v);