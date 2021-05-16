%option noyywrap
%option nodefault
%{
#include <calc.tab.h>
    int words = 0;
    int chars = 0;
    int lines = 0;
    int totwords = 0;
    int totchars = 0;
    int totlines = 0;
%}

%%

[a-zA-Z]    {words++; chars += strlen(yytext);}
\n          {chars++;lines++;}
.           {chars++;}

%%

int main(int argc, char **argv)
{
    int i;
    for(i=1;i<argc;i++) {
        words = 0;
        chars = 0;
        lines = 0;
        if(!(yyin = fopen(argv[i], "r"))) {
            perror(argv[1]);
            return 1;
        }
        yylex();
        totwords += words;
        totchars += chars;
        totlines += lines;
        printf("%s: %8d%8d%8d\n", argv[1], lines, words, chars);
    }
    printf("tot: %8d%8d%8d\n", totlines, totwords, totchars);
    return 0;
}