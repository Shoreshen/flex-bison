#include "calc3.h"

struct symbol symtab[NHASH];

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
    CHECK_NONULL(a);
    a->nodetype = 'K';
    a->number = d;
    return (struct ast*)a;
}
struct ast* newcmp(char nodetype, struct ast* l, struct ast* r)
{
    struct ast* a = malloc(sizeof(struct ast));
    CHECK_NONULL(a);
    a->nodetype = '0' + nodetype;
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
    a->nodetype = 'C';
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
struct symlist* newsymlist(struct symbol* s, struct symlist* sl)
{
    struct symlist* new_sl = malloc(sizeof(struct symlist));
    CHECK_NONULL(new_sl);
    new_sl->sym = s;
    new_sl->next = sl;
    return new_sl;
}
#pragma endregion

#pragma region Func eval
double sys_func(struct sfunc * a)
{
    double tmp = eval(a->l);
    switch(a->funcType){
        case 1:
            return sqrt(tmp);
        case 2:
            return exp(tmp);
        case 3:
            return log(tmp);
        case 4:
            printf("= %4.4g\n", tmp);
            return tmp;
        default:
            yyerror("Unknown built-in function %d", a->funcType);
            return 0.0;
    }
}
double user_func(struct ufunc * a)
{
    struct symbol *fn = a->s;
    struct symlist *param_formal = fn->syms;
    struct ast* param_actual = a->l;
    int arg_num = 0, i;
    double *tmp, v;

    while(param_formal){
        arg_num++;
        param_formal = param_formal->next;
    }

    tmp = malloc(arg_num * sizeof(double));
    param_formal = fn->syms;

    for(i = 0; i < arg_num; i++){
        if(!param_actual){
            yyerror("Too few args in call to %s", fn->name);
            free(tmp);
            return 0;
        }
        if(param_actual->nodetype == 'L'){
            v = eval(param_actual->l);
            param_actual = param_actual->r;
        }else{
            v = eval(param_actual);
            param_actual = NULL;
        }
        tmp[i] =  param_formal->sym->value;
        param_formal->sym->value = v;
        param_formal = param_formal->next;
    }

    v = eval(fn->func);
    
    param_formal = fn->syms;

    for(i = 0; i < arg_num; i++){
        param_formal->sym->value = tmp[i];
        param_formal = param_formal->next;
    }

    return v;
}
#pragma endregion

double eval(struct ast *a)
{
    double tmp;
    switch(a->nodetype){
        case 'K':
            tmp = ((struct numval*)a)->number;
            break;
        case 'N': // No need to free symbol
            tmp = ((struct symref*)a)->sym->value;
            break;
        case '+':
            tmp = eval(a->l) + eval(a->r);
            break;
        case '-':
            tmp = eval(a->l) - eval(a->r);
            break;
        case '*':
            tmp = eval(a->l) * eval(a->r);
            break;
        case '/':
            tmp = eval(a->l) / eval(a->r);
            break;
        case '1':
            tmp = (double)(eval(a->l) > eval(a->r));
            break;
        case '2':
            tmp = (double)(eval(a->l) < eval(a->r));
            break;
        case '3':
            tmp = (double)(eval(a->l) != eval(a->r));
            break;
        case '4':
            tmp = (double)(eval(a->l) == eval(a->r));
            break;
        case '5':
            tmp = (double)(eval(a->l) >= eval(a->r));
            break;
        case '6':
            tmp = (double)(eval(a->l) <= eval(a->r));
            break;
        case 'M':
            tmp = - eval(a->l);
            break;
        case '|':
            tmp = eval(a->l);
            if(tmp < 0) {
                tmp = - tmp;
            }
            break;
        case 'L':
            eval(a->l);
            tmp = eval(a->r);
            break;
        case 'C':
            tmp = user_func((struct ufunc*)a);
            break;
        case 'F': // struct ast* l; at the same position
            tmp = sys_func((struct sfunc*)a);
            break;
        case '=': // struct ast* v; at the same position
            tmp = eval(((struct symasgn*)a)->v);
            ((struct symasgn*)a)->s->value = tmp;
            break;
        case 'I':
            if(eval(((struct flow*)a)->cond) != 0){
                if(((struct flow*)a)->tl){
                    tmp = eval(((struct flow*)a)->tl);
                } else {
                    tmp = 0;
                }
            } else {
                if(((struct flow*)a)->el){
                    tmp = eval(((struct flow*)a)->el);
                } else {
                    tmp = 0;
                }
            }
            break;
        case 'W':
            if(((struct flow*)a)->tl){
                while(eval(((struct flow*)a)->cond) != 0) {
                    tmp = eval(((struct flow*)a)->tl);
                }
            }
            break;
        default: 
            printf("internal error: free bad node %c\n", a->nodetype);
    }
    return tmp;
}

void treefree(struct ast* a)
{
    switch(a->nodetype){
        case 'K':
        case 'N': // No need to free symbol
            break;
        case '+':
        case '-':
        case '*':
        case '/':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case 'L': // expression list
            treefree(a->r);
            treefree(a->l);
            break;
        case 'M': // struct ast
        case '|': // struct ast
        case 'C': // struct ast* l; at the same position
        case 'F': // struct ast* l; at the same position
        case '=': // struct ast* v; at the same position
            treefree(a->l);
            break;
        case 'I':
        case 'W':
            treefree(((struct flow*)a)->cond);
            if(((struct flow*)a)->el){
                treefree(((struct flow*)a)->el);
            }
            if(((struct flow*)a)->tl){
                treefree(((struct flow*)a)->tl);
            }
            break;
        default: 
            printf("internal error: free bad node %c\n", a->nodetype);
    }
    free(a);
}

void symlistfree(struct symlist *sl)
{
    struct symlist *nsl;

    while(sl) {
        nsl = sl->next;
        free(sl);
        sl = nsl;
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

void dodef(struct symbol* fn, struct symlist* sl, struct ast* list)
{
    if(fn->syms){

    }
    if(fn->func){
        treefree(fn->func);
    }
    fn->syms = sl;
    fn->func = list;
}

int main()
{
    memset(&symtab[0], 0, sizeof(symtab));
    printf("> ");
    return yyparse();
}