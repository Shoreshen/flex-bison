%option noyywrap

%{
    # include "yacc.tab.h"
%}

%%
"+"	        { return ADD; }
"-"	        { return SUB; }
"*"	        { return MUL; }
"/"	        { return DIV; }
"|"         { return ABS; }
"("         { return OP; }
")"         { return CP; }
[0-9]+	    { yylval = atoi(yytext); return NUMBER; }
0x[a-f0-9]+	{ yylval = strtol(yytext,NULL, 16); return NUMBER; }
\n          { return EOL; }
"//".*  
[ \t]       { /* ignore white space */ }
.	        { yyerror("Mystery character %c\n", *yytext); }
%%
/* Testing program*/

/* int main(int argc, char **argv)
{
    yytokentype tok;

    tok = yylex();
    while(tok){
        printf("%d", tok);
        if(tok == NUMBER){
            printf(" = %d\n", yylval);
        }else{
            printf("\n");
        }
        tok = yylex();
    }
    return 0;
} */