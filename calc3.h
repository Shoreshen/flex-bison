#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <math.h>

// Wrapper for flex & bison
extern int yylineno;
extern int yyparse();
extern int yylex();
// Defining yyerror for bison
void yyerror(char *s, ...);
//==============================================================================================
// Utility
//==============================================================================================
#define CHECK_NONULL(a) if(!a){\
    printf("out of space");\
    exit(0);\
}
//==============================================================================================
// Symbol structure
//==============================================================================================
#define NHASH 9997
struct symbol{
    char *name;
    double value;
    struct ast *func;
    struct symlist* syms;
};
//==============================================================================================
// Symbol operation
//==============================================================================================
struct symbol* lookup(char *s);
void dodef(struct symbol* fn, struct symlist* sl, struct ast* list);
void symlistfree(struct symlist *sl);
//==============================================================================================
// AST struct
//==============================================================================================
struct ast {
    char nodetype;
    struct ast* l;
    struct ast* r;
};
enum sf_type{
    sf_sqrt = 1,
    sf_exp,
    sf_log,
    sf_print,
};
struct sfunc {
    char nodetype; // 'F'
    struct ast* l;
    enum sf_type funcType;
};
struct ufunc {
    char nodetype; // 'C'
    struct ast* l;
    struct symbol* s;
};
struct numval {
    char nodetype; // 'K'
    double number;
};
struct symref {
    char nodetype; // 'N'
    struct symbol* sym;
};
struct flow {
    char nodetype; // if = 'I'; while = 'W'
    struct ast* cond;
    struct ast* tl;
    struct ast* el;
};
struct symasgn {
    char nodetype; // '='
    struct ast* v;
    struct symbol* s;
};
struct symlist{
    struct symbol* sym;
    struct symlist* next;
};
//==============================================================================================
// AST operation
//==============================================================================================
// Creating nodes
struct ast* newast(char nodetype, struct ast* l, struct ast* r);
struct ast* newnum(double number);
struct ast* newcmp(char nodetype, struct ast* l, struct ast* r);
struct ast* newsfunc(int funcType, struct ast* l);
struct ast* newufunc(struct symbol* s, struct ast* l);
struct ast* newref(struct symbol *s);
struct ast* newflow(char nodetype, struct ast* cond, struct ast* tl, struct ast* el);
struct ast* newasgn(struct symbol* s, struct ast* v);
struct symlist* newsymlist(struct symbol* s, struct symlist* sl);
//Operations
void dumpast(struct ast* a, int level);
double eval(struct ast* a);
void treefree(struct ast* a);