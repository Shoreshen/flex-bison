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
">" { 
    yylval.fn = 1;
    return CMP;
}
"<" { 
    yylval.fn = 2;
    return CMP;
}
"<>"    { 
    yylval.fn = 3;
    return CMP;
}
"=="    { 
    yylval.fn = 4;
    return CMP;
}
">="    { 
    yylval.fn = 5;
    return CMP;
}
"<="    { 
    yylval.fn = 6;
    return CMP;
}

 /*key words*/
"if"    {return IF;}
"then"  {return THEN;}
"else"  {return ELSE;}
"while" {return WHILE;}
"do"    {return DO;}
"let"   {return LET;}

 /*System func*/
"sqrt" {
    yylval.fn = sf_sqrt;
    return FUNC;
}
"exp" {
    yylval.fn = sf_exp;
    return FUNC;
}
"log" {
    yylval.fn = sf_log;
    return FUNC;
}
"print" {
    yylval.fn = sf_print;
    return FUNC;
}

 /*
   names
   should be after keywords, so let flex prefering the pattern appear first
 */
[a-zA-Z][a-zA-Z0-9]* {
    yylval.s = lookup(yytext); /*
                      Implicity definition char* yytext
                      Pointing at the string just identified
                    */
    return NAME;
}

[0-9]+"."[0-9]*{EXP}?|"."?[0-9]+{EXP}?  {
    yylval.d = atof(yytext); /*The value of current token*/
    return NUMBER;           /*The token kind*/
}

\\\n    { printf("c> "); }  /* 
                              backslash+newline ignores returning EOL
                              Make it possible to type in with multiple lines
                            */
\n  { return EOL; }
"//".*  /*"//" + any character but '\n', with zero or n numbers*/
[ \t]   { /* ignore white space */ }
.   { yyerror("Mystery character %c\n", *yytext); }
%%