#include "calc3.h"

#pragma region Symbol operations
unsigned int symhash(char* sym)
{
    unsigned int hash = 0;
    unsigned char c = *sym;
    while(c){
        hash = hash*9 ^ c;
        sym++;
        c = *sym;
    }
    
    return hash;
}
struct symbol* lookup(char* sym)
{
    struct symbol* sp = &symtab[symhash(sym)%NHASH];
    int i;
    for(i = 0; i < NHASH; i++){
        if(sp->name && !strcmp(sym, sp->name)){
            return sp;
        }
        if(!sp->name){
            sp->name = strdup(sym);
            sp->value = 0;
            sp->func = NULL;
            sp->syms = NULL;
            return sp;
        }
        if(sp > &symtab[NHASH]){
            sp = &symtab[0];
        }
        sp ++;
    }
    printf("symbol table overflow\n");
    abort();
}
#pragma endregion

#pragma region building AST
struct ast* newast(char nodetype, struct ast *l, struct ast *r)
{
    struct ast* a = malloc(sizeof(struct ast));
    CHECK_NONULL(a);
    a->l = l;
    a->r = r;
    a->nodetype = nodetype;
    return a;
}

struct ast* newnum(double d)
{
    struct numval* a = malloc(sizeof(struct numval));
    if(!a){
        printf("out of space");
        exit(0);
    }
    a->nodetype = 'K';
    a->number = d;
    return (struct ast*)a;
}
struct ast* newcmp(char nodetype, struct ast* l, struct ast* r)
{
    struct ast* a = malloc(sizeof(struct ast));
    CHECK_NONULL(a);
    a->nodetype = nodetype;
    a->l = l;
    a->r = r;
    return a;
}
struct ast* newsfunc(int funcType, struct ast* l)
{
    struct sfunc* a = malloc(sizeof(struct sfunc));
    CHECK_NONULL(a);
    a->nodetype = 'F';
    a->funcType = funcType;
    a->l = l;
    return (struct ast*)a;
}
struct ast* newufunc(struct symbol* s, struct ast* l)
{
    struct ufunc* a = malloc(sizeof(struct ufunc));
    CHECK_NONULL(a);
    a->nodetype;
    a->s = s;
    a->l = l;
    return (struct ast*)a;
}
struct ast* newref(struct symbol *s)
{
    struct symref* a = malloc(sizeof(struct symref));
    CHECK_NONULL(a);
    a->nodetype = 'N';
    a->sym = s;
    return (struct ast*)a;
}
struct ast* newflow(char nodetype, struct ast* cond, struct ast* tl, struct ast* el)
{
    struct flow* a = malloc(sizeof(struct flow));
    CHECK_NONULL(a);
    a->nodetype = nodetype;
    a->cond = cond;
    a->tl = tl;
    a->el = el;
    return (struct ast*)a;
}
struct ast* newasgn(struct symbol* s, struct ast* v)
{
    struct symasgn* a = malloc(sizeof(struct symasgn));
    CHECK_NONULL(a);
    a->nodetype = '=';
    a->s = s;
    a->v = v;
    return (struct ast*)a;
}
#pragma endregion

double eval(struct ast *a)
{
    double tmp;
    switch(a->nodetype){
        case 'K':
            return ((struct numval*)a)->number;
        case '+':
            return eval(a->l) + eval(a->r);
        case '-':
            return eval(a->l) - eval(a->r);
        case '*':
            return eval(a->l) * eval(a->r);
        case '/':
            return eval(a->l) / eval(a->r);
        case 'M':
            return - eval(a->l);
        case '|':
            tmp = eval(a->l);
            if(tmp<0){
                return -tmp;
            }
            return tmp;
        default: 
            printf("internal error: free bad node %c\n", a->nodetype);
    }
}

void treefree(struct ast *a)
{
    switch(a->nodetype){
        case 'K':
            free(a);
            return;
        case '+':
        case '-':
        case '*':
        case '/':
            treefree(a->r);
            treefree(a->l);
            return;
        case 'M':
        case '|':
            treefree(a->l);
            return;
        default: 
            printf("internal error: free bad node %c\n", a->nodetype);
    }
}
void yyerror(char *s, ...)
{
    va_list ap;
    va_start(ap, s);
    fprintf(stderr, "%d: error: ", yylineno);
    vfprintf(stderr, s, ap);
    fprintf(stderr, "\n");
}

int main()
{
    printf("> ");
    return yyparse();
}