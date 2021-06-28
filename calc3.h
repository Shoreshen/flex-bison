#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

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
struct symlist{
    struct symlist* next;
    struct symbol* sym;
};
struct symbol symtab[NHASH];
//==============================================================================================
// Symbol operation
//==============================================================================================
struct symbol* lookup(char *s);
struct symlist* newsymlist(struct symbol* s, struct symlist* sl);
//Defining an function
struct ast* dodef(struct symbol* sym, struct symlist* sl, struct ast* list);
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
    enum sf_type funcType;
    struct ast* l;
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
    char nodetype;
    struct symbol* s;
    struct ast* v;
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
struct ast* newasgn(char nodetype, struct symbol* s, struct ast* v);
//Operations
void dumpast(struct ast* a, int level);
double eval(struct ast* a);
void treefree(struct ast* a);