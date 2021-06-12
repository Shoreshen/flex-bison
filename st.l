%option noyywrap
%option nodefault
/*Providing an yylineno int increase each time meet '\n'*/
%option yylineno
/*Function as it is named*/
%option case-insensitive

%{
    struct ref{
        struct ref *next;
        char *filename;
        int flags;
        int lineno;
    };
    struct symbol{
        char *name;
        struct ref *reflist;
    };
    
    #define NHASH 9997
    struct symbol symtab[NHASH];

    struct symbol *lookup(char* sym);
    void addref(int lineno, char* filename, char* word, int flags);
    void printrefs();

    char* curfilename;
%}

%%
a | an | and | are | as | at | be | but | for | in | 
is | it | of | on | or | that | the | this | to 
    /* Ignore target expression since lex accept the longer one*/

[a-z]+(\'(s|t))? { addref(yylineno, curfilename, yytext, 0); }
                    /*()? -- zero or one for reg-expr in ()
                      \'  -- same as "'", follow c gramma
                    */
.|\n  /*. -- Ignore all characters execpt \n*/
%%

//==============================================================================================
// Recursively reading files
//==============================================================================================
int main(int argc, char **argv)
{
    int i;
    FILE *fp;
    memset(&symtab[0], 0, sizeof(struct symbol));
    for(i=1;i<argc;i++) {
        fp = fopen(argv[i], "r");
        if(!fp) {
            perror(argv[1]);
            return 1;
        }
        curfilename = argv[i];

        yyrestart(fp);
        yylineno = 1;
        yylex();
        fclose(fp);
    }
    printrefs();
    return 0;
}
//==============================================================================================
// Symbol table
//==============================================================================================
unsigned int symhash(char* sym)
{
    unsigned int hash = 0;
    unsigned char c = *sym;
    while(c){
        hash = hash*9 ^ c;
        sym++;
        c = *sym;
    }
    
    return hash;
}

struct symbol* lookup(char* sym)
{
    struct symbol* sp = &symtab[symhash(sym)%NHASH];
    int i;
    if(sp->name && !strcmp(sym, sp->name)){
        return sp;
    }
    for(i = 1; i < NHASH; i++){
        if(!sp->name){
            sp->name = strdup(sym);
            return sp;
        }
        if(sp > &symtab[NHASH]){
            sp = &symtab[0];
        }
        sp ++;
    }
    printf("symbol table overflow\n");
    abort();
}

void addref(int lineno, char* filename, char* word, int flags)
{
    struct ref* rp;
    struct symbol* sp = lookup(word);

    if(
        sp->reflist &&
        sp->reflist->lineno == lineno &&
        sp->reflist->filename == filename
    ){
        return;
    }

    rp = malloc(sizeof(struct ref));
    if(!rp){
        printf("Not enough space\n");
        abort;
    }
    rp->next = sp->reflist;
    sp->reflist = rp;
    rp->filename = filename;
    rp->lineno = lineno;
    rp->flags = flags;
}
//==============================================================================================
// Printing
//==============================================================================================
int symcompare(const void* a, const void* b)
{
    struct symbol* xa = (struct symbol*)a;
    struct symbol* xb = (struct symbol*)b;
    if(!xa->name){
        if(!xb->name){
            return 0;
        }
        return 1;
    }
    if(!xb->name){
        return -1;
    }
    return strcmp(xa->name, xb->name);
}
void printrefs()
{
    int i;
    struct ref* rp;
    char* prev_fn;
    qsort(&symtab[0], NHASH, sizeof(struct symbol), symcompare);

    for(i = 0; i < NHASH; i++) {
        if(!symtab[i].name){
            return;
        }
        printf("%10s", symtab[i].name);
        rp = symtab[i].reflist;
        prev_fn = NULL;
        while(rp){
            if(rp->filename == prev_fn){
                printf(" %d", rp->lineno);
            } else {
                printf(" %s:%d", rp->filename, rp->lineno);
                prev_fn = rp->filename;
            }
            rp = rp->next;
        }
        printf("\n");
    }
}