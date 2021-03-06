/* simplest version of calculator */
%{
#include <stdio.h>
%}

//union of types
%union {
    int intval;
}

/* declare tokens */
%token NUMBER
%token ADD SUB MUL DIV ABS
%token EOL
%token OP CP
%token HEX
// declear type for non-terminal symbols
%type <intval> exp factor term

%%
//Start symbol is left side of the first rule
calclist: /* nothing */
    | calclist exp EOL { printf("= %d\n", $2); }
    | EOL
;

exp: 
    factor  /*default $$ = $1*/
    | exp ABS factor { $$ = $1 | $3; }
    | exp ADD factor { $$ = $1 + $3; }
    | exp SUB factor { $$ = $1 - $3; }
;

factor: 
    term /*default $$ = $1*/
    | factor MUL term { $$ = $1 * $3; }
    | factor DIV term { $$ = $1 / $3; }
;

term: 
    NUMBER /*default $$ = $1*/
    | HEX 
    | ABS term { $$ = $2 >= 0? $2 : - $2; }
    | OP exp CP {$$ = $2;}
;

%%

int main(int argc, char **argv)
{
    yyparse();
    return 0;
}
yyerror(char *s)
{
    fprintf(stderr, "error: %s\n", s);
}