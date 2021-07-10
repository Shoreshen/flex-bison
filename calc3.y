/* simplest version of calculator */
%{
    #include "calc3.h"
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
    struct symbol *s;
    struct symlist *sl;
    int fn;
}

/* declare tokens */
%token <d> NUMBER
%token <s> NAME
%token <fn> FUNC
%type <a> exp stmt list explist
%type <sl> symlist

/*Without type*/
%token IF THEN ELSE WHILE DO LET EOL

/*specifying start symbol instead of putting it at start*/
%start calclist

/*
  Precedence & association, all for exp token
*/
%nonassoc <fn> CMP // Declearing and defining the type, token together
%right '='
%left '+' '-'
%left '*' '/'
%nonassoc '|' UMINUS

%%
 /*
  By defualt, bison will shift else rather than reduce;
  Thus, if stack = IF exp THEN exp, lookahead = ELSE, 
  bison will shift in ELSE.
 */
stmt: 
    IF exp THEN list {
        $$ = newflow('I', $2, $4, NULL); 
    }
    | IF exp THEN list ELSE list {
        $$ = newflow('I', $2, $4, $6); 
    }
    | WHILE exp DO list {
        $$ = newflow('W', $2, $4, NULL); 
    }
    | exp /*By defualt $$ = $1*/
;

 /*Defualt shift overcome reduce*/
list: /* nothing */ { $$ = NULL; } /*No symbol, so no defualt value*/
    | stmt ';' list {
        if($3 == NULL){
            $$ = $1;
        } else {
            $$ = newast('L', $1, $3);
        }
    }
;

exp:
    exp CMP exp {
        newcmp($2, $1, $3);
    }
    | exp '+' exp{
        $$ = newast('+', $1, $3);
    }
    | exp '-' exp{
        $$ = newast('-', $1, $3);
    }
    | exp '*' exp{
        $$ = newast('*', $1, $3);
    }
    | exp '/' exp
    {
        $$ = newast('/', $1, $3);
    }
    | '|' exp{
        $$ = newast('|', $2, NULL);
    }
    | '(' exp ')'{
        $$ = $2;
    }
    | '-' exp %prec UMINUS{
        $$ = newast('M', $2, NULL);
    }
    | NUMBER {
        newnum($1);
    }
    | NAME {
        $$ = newref($1); /* 
                           $1 = NAME has value type of `struct symbol *s`
                           $$ = exp has value type of `struct ast *s`
                         */
    }
    | NAME '=' exp {
        $$ = newasgn($1, $3);
    }
    | FUNC '(' explist ')' {
        $$ = newsfunc($1, $3); /*explist is also an ast*/
    }
    | NAME '(' explist ')'{
        $$ = newufunc($1, $3);
    }
;

explist: 
    exp{
        $$ = $1;
    }
    | exp ',' explist{
        $$ = newast('L', $1, $3);
    }
;

symlist: 
    NAME {
        $$ = newsymlist($1, NULL);
    }
    | NAME ',' symlist{
        $$ = newsymlist($1, $3);
    }
;

calclist: /*nothing*/
      /*stme can be an exp*/
    | calclist stmt EOL{
        printf("= %4.4g\n> ", eval($2));
        treefree($2);
    }
      /*Defining function*/
    | calclist LET NAME '(' symlist ')' '=' list EOL {
        dodef($3, $5, $8);
        printf("Defined %s\n> ", $3->name);
    }
      /*Error handling, */
    | calclist error EOL {
        yyerrok; /*Ignore current error and continue*/
        printf("> "); 
    }
%%
