#include "calc.h"

struct ast* newast(char nodetype, struct ast *l, struct ast *r)
{
    struct ast* a = malloc(sizeof(struct ast));
    if(!a){
        printf("out of space");
        exit(0);
    }
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
        case '+':
        case '-':
        case '*':
        case '/':
            treefree(a->r);
            treefree(a->l);
            break;
        case 'M':
        case '|':
            treefree(a->l);
            break;
        default: 
            printf("internal error: free bad node %c\n", a->nodetype);
    }
}

int main()
{
    printf("> ");
    return yyparse();
}