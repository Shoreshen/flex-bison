%option noyywrap
%option nodefault

%x IFILE

%{
    #include <stdio.h>
    typedef struct bufstack{
        struct bufstack *parent;
        YY_BUFFER_STATE bs;
        int lineno;
        FILE* fp;
    } bufstack;
    
    char *curr_fname;
    
    int newfile(char *fn);
    int popfile(void);
%}
%%

^"#"[ \t]*include[ \t]*\[\"<] { BEGIN IFILE; }  /* 
                                                  ^"#" = "\n#" matches "#" at the begining of line
                                                  [ \t]* means multiple or zero space or tab 
                                                */
<IFILE>[^ \t\n\">]+ {
                        { 
                            int c;
                            while((c = input()) && c != '\n') ;
                            // Consume the rest of "#include" lines
                        }
                        yylineno++;
                        if(!newfile(yytext)){
                            yyterminate(); /* no such file */
                        }
                        BEGIN INITIAL;
                    }
<IFILE>.|\n     {
                    fprintf(stderr, "%4d bad include line\n", yylineno);
				    yyterminate();
			    }


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