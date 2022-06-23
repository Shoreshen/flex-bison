%option noyywrap
%option nodefault
/*Providing an yylineno int increase each time meet '\n'*/
%option yylineno

%{
    #include <stdio.h>
    #include <stdlib.h>
    int count = 0;
    void test(char* src);
%}

ID ([a-zA-Z][a-zA-Z0-9_]*)
NUM ([0-9]+)
DIM "["({NUM}|{ID})"]"

%%
{ID}{DIM}+ {
    test(yytext);
}

.|\n  {
    printf(yytext);
}
%%

//==============================================================================================
// Main func
//==============================================================================================
int main(int argc, char **argv)
{
    int i;
    for(i = 1; i < argc; i++) {
        if(!(yyin = fopen(argv[i], "r"))) {
            perror(argv[1]);
            return 1;
        }
        yylex();
    }
    return 0;
}
void test(char* src)
{
    count++;
}