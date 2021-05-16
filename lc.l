%option noyywrap
%option nodefault
%option yylineno

%x IFILE

%{
    #include <stdio.h>
    typedef struct bufstack{
        struct bufstack *prev;
        YY_BUFFER_STATE bs;
        char *filename;
        int lineno;
        FILE* fp;
    } bufstack;
    
    bufstack *curr_bs = NULL;
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
<IFILE>.|\n {
                fprintf(stderr, "%4d bad include line\n", yylineno);
                yyterminate();
            }
<<EOF>> { if(!popfile()) yyterminate(); }

^.  { fprintf(yyout, "%4d %s", yylineno, yytext); }
^\n { fprintf(yyout, "%4d %s", yylineno++, yytext); }
\n  { ECHO; yylineno++; }
.   { ECHO; }
%%

int main(int argc, char **argv)
{
    int i;
    for(i=1;i<argc;i++) {
        if(newfile(argv[i]))
        yylex();
    }
    return 0;
}
int newfile(char *fn)
{
    FILE *fp = fopen(fn, "r");
    bufstack *bs = malloc(sizeof(bufstack));

    if(fp){
        perror(fn);
        return 0;
    }

    if(curr_bs){
        curr_bs->lineno = yylineno;
        bs->prev = curr_bs;
    }

    bs->bs = yy_create_buffer(fp, YY_BUF_SIZE);
    bs->fp = fp;
    bs->filename = fn;
    yy_switch_to_buffer(bs->bs);
    curr_bs = bs;
    yylineno = 1;
    curr_fname = fn;
    return 1;
}

int popfile(void)
{
    bufstack *bs = curr_bs;

    if(!bs){
        return 0;
    }
    
    fclose(bs->fp);
    yy_delete_buffer(bs->bs);

    curr_bs = bs->prev;

    if(!curr_bs){
        return 0;
    }

    yy_switch_to_buffer(curr_bs->bs);
    yylineno = curr_bs->lineno;
    curr_fname = curr_bs->filename;
    return 1;
}