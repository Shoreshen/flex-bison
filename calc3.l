%option noyywrap yylineno nodefault

%{
    #include "calc3.h"
    #include "calc3.tab.h"
%}

EXP ([Ee][-+]?[0-9]+)

%%
 /* single character tokens */
"+" |
"-" |
"*" |
"/" |
"|" |
"(" |
")" |
"=" |
"," | 
";" {return yytext[0];} /* `char* yytext` pointing to string just accepted */

 /* comparison tokens */


[0-9]+"."[0-9]*{EXP}?|"."?[0-9]+{EXP}?  {
                                            yylval.d = atof(yytext); /*The value of current token*/
                                            return NUMBER;           /*The token kind*/
                                        }
\n          { return EOL; }
"//".*  
[ \t]       { /* ignore white space */ }
.	        { yyerror("Mystery character %c\n", *yytext); }
%%