%option noyywrap
%option nodefault
/*Providing an yylineno int increase each time meet '\n'*/
%option yylineno

%{
    #include "dim.h"
%}
TYPE ("int"|"logic")
ID ([a-zA-Z][a-zA-Z0-9_]*)
NUM ([0-9]+)
DIM ("["({NUM}|{ID})"]"[ ]*)

%%
"module" |
"function" {
    printf(yytext);
    push_map();
}
"endmodule" |
"endfunction" {
    printf(yytext);
    pop_map();
}
{TYPE}[ ]+{ID}[ ]*{DIM}+ {
    def_id(yytext);
}
{ID}[ ]*{DIM}+ {
    use_id(yytext);
}

.|\n  {
    printf(yytext);
}
%%