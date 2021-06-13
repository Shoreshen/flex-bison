%option noyywrap 
%option nodefault
%option yylineno

%x COMMENT
%x IFILE

/*Define some complex reg-expr*/
/*Universal Character Name*/
/*For examples like \u9afe or \U988daff indicating Unicode hex expression for character*/
UCN     (\\u[0-9a-fA-F]{4}|\\U[0-9a-fA-F]{8})
/*Float Exponent*/
EXP     ([Ee][-+]?[0-9]+)
/*Integer Length*/
ILEN    ([Uu](L|l|LL|ll)?|(L|l|LL|ll)[Uu]?)

%{
    /*Symbol table*/
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
    
    /* include file stack */
    typedef struct bufstack{
        struct bufstack *prev;
        YY_BUFFER_STATE bs;
        char *filename;
        int lineno;
        FILE* fp;
    } bufstack;
    
    struct bufstack* curr_bs = NULL;

    int newfile(char *fn);
    int popfile(void);

    int defining = 0;
%}

%%
 /* comments */
"/*"    {BEGIN (COMMENT);}
<COMMENT>"*/"    {BEGIN (INITIAL);}
<COMMENT>([^*]|\n)+|.
        /*Ignore everything between comments
          ([^*]|\n) -- matches long string without '*'
          .         -- matches single character include '*' without '\n'
          1. If '*' found, only matched the single character pattern.
          2. If '/' followed, '*' and '/' can be matched in 2end pattern
          3. Since flex prefer longer match, the second pattern will hit
        */
<COMMENT><<EOF>>    {
                        printf("%s:%d: Unterminated comment\n",curfilename, yylineno);
                        return 0;
                    }
 /* line comments */
"//".*\n

 /* declaration keywords */
 /* Have to declear one line each, otherwise defining = 0 in output*/
_Bool |
_Complex |
_Imaginary |
auto |
char |
const |
double |
enum |
extern |
float |
inline |
int |
long |
register |
restrict |
short |
signed |
static |
struct |
typedef |
union |
unsigned |
void |
volatile { defining = 1; }

 /*Ignore keywords */
break
case
continue
default
do
else
for
goto
if
return
sizeof
switch
while

 /* constants */
 /* integers */
0[0-7]*{ILEN}? /*In c, the '0' prefix indicating an octal constant*/
[1-9][0-9]*{ILEN}? /*{} -- refering to a named pattern, in here the ILEN*/
0[Xx][0-9a-fA-F]+{ILEN}?
 /* decimal float */
([0-9]*\.[0-9]+|[0-9]+\.){EXP}?[flFL]?
[0-9]+{EXP}[flFL]?
 /* hex float */
0[Xx]([0-9a-fA-F]*\.[0-9a-fA-F]+|[0-9a-fA-F]+\.?)[Pp][-+]?[0-9]+[flFL]?
 /* char const */
\'([^'\\]|\\['"?\\abfnrtv]|\\[0-7]{1,3}|\\[Xx][0-9a-fA-F]+|{UCN})+\'
 /* string literal */
L?\"([^"\\]|\\['"?\\abfnrtv]|\\[0-7]{1,3}|\\[Xx][0-9a-fA-F]+|{UCN})*\"

 /* punctuators */
"{"|"<%"|";"    { defining = 0; }
"["|"]"|"("|")"|"{"|"}"|"."|"->"
"++"|"--"|"&"|"*"|"+"|"-"|"~"|"!"
"/"|"%"|"<<"|">>"|"<"|">"|"<="|">="|"=="|"!="|"^"|"|"|"&&"|"||"
"?"|":"|";"|"..."
"="|"*="|"/="|"%="|"+="|"-="|"<<="|">>="|"&="|"^=""|="
","|"#"|"##"
"<:"|":>"|"%>"|"%:"|"%:%:"

 /* identifier */
([_a-zA-Z]|{UCN})([_a-zA-Z0-9]|{UCN})* {addref(yylineno, curfilename, yytext, defining);}
    /*yytext is flex provided char* that point to the input text that the pattern just matched*/

 /* white space */
[ \t\n]+

 /* continued line */
\\$

 /* some preprocessor stuff */
"#"" "*if.*\n   /*" "* -- Zero or more space
                  .*   -- Zero or more any character except '\n'*/
"#"" "*else.*\n
"#"" "*endif.*\n
"#"" "*define.*\n
"#"" "*line.*\n

 /* invalid character */
.   { printf("%s:%d: Mystery character '%s'\n", curfilename, yylineno, yytext);}

 /* recognize an include */
^"#"[ \t]*include[ \t]*[\"<] { BEGIN IFILE; }
<IFILE>[^ \t\n\">]+ {
                        { 
                            int c;
                            while((c = input()) && c != '\n') ;
                            // Consume the rest of "#include" lines
                        }
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
%%
//==============================================================================================
// Recursively reading files
//==============================================================================================
int main(int argc, char **argv)
{
    int i;
    memset(&symtab[0], 0, sizeof(struct symbol));
    for(i=1;i<argc;i++) {
        if(newfile(argv[i])){
            yylex();
        }
    }
    //Need free all of the struct bufstack*
    printrefs();
    return 0;
}
//==============================================================================================
// File stack for '#include'
//==============================================================================================
int newfile(char *fn)
{
    FILE *fp = fopen(fn, "r");
    bufstack *bs = malloc(sizeof(bufstack));
    if(!fp){
        perror(fn);
        free(bs);
        return 0;
    }
    if(curr_bs){
        curr_bs->lineno = yylineno;
    }
    
    bs->prev = curr_bs;
    bs->bs = yy_create_buffer(fp, YY_BUF_SIZE);
    bs->fp = fp;
    bs->filename = fn;
    yy_switch_to_buffer(bs->bs);
    curr_bs = bs;
    yylineno = 1;
    curfilename = fn;
    return 1;
}

int popfile(void)
{
    bufstack *bs = curr_bs;

    if(!bs){
        return 0;
    }
       
    // yy_delete_buffer(bs->bs); Cannot use since newfile(yytext) will be destroyed

    fclose(bs->fp);

    curr_bs = bs->prev;
    free(bs);
    if(!curr_bs){
        return 0;
    }

    yy_switch_to_buffer(curr_bs->bs);
    yylineno = curr_bs->lineno;
    curfilename = curr_bs->filename;
    return 1;
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
            if(rp->flags & 01) {
                printf("*");
            }
            rp = rp->next;
        }
        printf("\n");
    }
}