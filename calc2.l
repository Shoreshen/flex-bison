%option noyywrap

%{
    #include "calc.h"
    #include "calc.tab.h"
%}

EXP ([Ee][-+]?[0-9]+)

%%
"+" |
"-" |
"*" |
"/" |
"|" |
"(" |
")" {return yytext[0];} /* `char* yytext` pointing to string just accepted */
[0-9]+"."[0-9]*{EXP}?|"."?[0-9]+{EXP}?  {
                                            yylval.d = atof(yytext); /*The value of current token*/
                                            return NUMBER;           /*The token kind*/
                                        }
\n          { return EOL; }
"//".*  
[ \t]       { /* ignore white space */ }
.	        { yyerror("Mystery character %c\n", *yytext); }
%%