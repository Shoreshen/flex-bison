/* simplest version of calculator */
%{
    #include "calc2.h"
%}

/*
  Each symbol in bison had a value
  By defualt, the value is type of int
  If %union defined, the value is the union type
  The current token'value is referenced as yylval
*/
%union {
    struct ast *a;
    double d;
}
/* declare tokens */
%token <d> NUMBER 
%token EOL

%type <a> exp

%left '+' '-'
%left '*' '/'
%nonassoc '|' UMINUS

%%

calclist: /* nothing */
    | calclist exp EOL {
                        printf("= %4.4g\n", eval($2));
                        treefree($2); 
                        printf("> ");
                    }

    | calclist EOL { printf("> "); } /* blank line or a comment */
;
 /*
    The value of target symbol is referenced as $$
    The value of symbols at right are referecned from $1 to $n, left to right

    Literal character token such as '*' is used to match "*"
    The value type of it by defualt is int
    The value is the ACSII value of the character
 */
exp: exp '+' exp { $$ = newast('+', $1,$3); }
    | exp '-' exp { $$ = newast('-', $1,$3);}
    | exp '*' exp { $$ = newast('*', $1,$3); }
    | exp '/' exp { $$ = newast('/', $1,$3); }
    | '|' exp  { $$ = newast('|', $2, NULL); } 
    | '(' exp ')' { $$ = $2; }
    | '-' exp %prec UMINUS { $$ = newast('M', $2, NULL); } /*%prec UMINUS using the precedence of UNIMUS*/
    | NUMBER { $$ = newnum($1); }
;
%%
