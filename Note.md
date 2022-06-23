Current Mark: 2

# Flex

## Basic structure

A flex program consists of the following three sections, separated by %% lines:

|Section|Functions|
|-|-|
|First section<a id=1st_sec></a>|1. The first section contains declarations and option settings<br>2. code inside of `%{` and `%}` is copied to the generated C files|
|Second section<a id=2nd_sec></a>|1. The second section is a list of patterns and actions<br>2. Formatted as `<RegExpr>    {<action1>,<action2,...>}`|
|Third section<a id=3rd_sec></a>|The third section is C code that is copied to the generated scanner|

## Start condition

Used to specify regular expressions' activation status, for a defined start condition `sc`, expressions with prefix of `<sc>` would only be activated when condition is satisfied such as using `BEGIN sc` [macro](#macro).

Start condition can be classified as:

1. <a id=mk1></a>Exclusive condition: when condition `sc` is satisfied, only expressions with prefix `<sc>` is activated
2. <a id=mk2></a>Inclusive condition: when condition `sc` is satisfied, both expressions without prefix or with prefix `<sc>` is activated

There is a defualt start condition, which can be referenced by macro `INITIAL`.

### Define a start condition

Using `%x <sc_name>` in [first section](#1st_sec) to define an [exclusive start condition](#mk1)

Using `%s <sc_name>` in [first section](#1st_sec) to define an [inclusive start condition](#mk2)

### Start condition expression

To define a start condition `sc` specific expression, using `<sc>...` while `...` represent the regular expression.

## Scanning patterns

1. Flex breaks a tie by preferring longer matches
2. If two patterns match the same thing, it prefers the pattern that appears first in the flex program

## Options

1. `%option noyywrap` do not call `yywrap()`, which is an I/O macro in flex library. Always use it when applying user defined `main` function
2. `%option nodefault` do not include the default library, removes the `-lfl` option while using gcc building lex files
3. `%option yylineno` define variable `yylineno` to automatically track the current line number in the file

## Macro

1. `BEGIN` Switch to target [start condition](#start-condition), e.g. `BEGIN sc` switch to `sc` condition
2. `ECHO` equivalent to `fprintf(yyout, "%s", yytext);`
3. `yyout` current output file

## Useful regular expression

1. Quotes tell flex to match the exact strings rather than regular expressions.
   1. e.g.:`"+"` means match once a `+` is found in the source code
2. <a id=char_class></a>`[]` character class, matches any character within the brackets
   Note that inside of a character class, all regular expression operators lose their special meaning except:
   1. `^` as the first character to indicate a "negated character class", match any character except the ones in the brackets;<br>
      e.g. `[^09]` means match any character except `0` and `9`
   2. `-` represent character range based on the ACSII convention<br>
      e.g. `[0-9]` means ACSII that is greater than 48('0') and smaller than 57('9')
   3. `\` used to escape special charactors and ANSI-C interpretation
3. `{}` 3 functions:
   1. Indicating range of number of times a character continually appears, e.g. `A{1,4}` means accept `A`, `AA`, `AAA`
   2. Indicating exact number of times a character continually appears, e.g. `A{4}` means accept `AAAA`
   3. referring to a named pattern
4. `.*` ignore the rest of the current line (not including `\n`)
5. `.` Matches any single character except the newline character (`\n`)
   1. Note in [character class](#char_class), it simply means character "."<br>
      e.g. `[^.]` means match any character except `.`
6. `?` Matches zero or one occurrence of the preceding regular expression, e.g. `-?[0-9]+` matches a signed number including an optional leading minus sign
7. `/` Matches character with specified following characters, e.g. `0/1` will match `0` within the text of `01`, but not `02`
8. `()` Groups a series of regular expressions together into a new regular expression, e.g. `([0-9]+)?` matches empty or an integer digit
9. `^` Matches the beginning of a line as the first character of a regular expression.
10. `r/s` an `r` but only if it is followed by an `s`.
11. `r$` an `r`, but only at the end of a line (i.e., just before a newline). Equivalent to `r/\n`

## Macro and functions

1. `BEGIN BTWMODE`: start the [start condition](#start-condition) name `BTWMODE`
2. `input()`: Read the next char and pop it out of the stack
3. `unput(c)`: Push c into the stack as the next char

# Bison

## Scanning patterns

1. By defualt, bison will prefer shift rather than reduce

## key words

1. `%token <TYPE> NAME, NAME, ...`: 
   1. Declare a terminal symbols (token) with type of `TYPE` and name of `NAME`, without associativity/precedence.
   2. All terminal symbols need to be declared
   3. Out put to `*.tab.c` for lexer to use
2. `%type <TYPE> NAME, NAME, ...`: Declare type of `TYPE` for non-terminal symbol name of `NAME`
3. `%code{code}`: Defining the inserting point of the `{code}`
   1. `%code requires {code}`: Best place to re-define `YYSTYPE` and `YYLTYPE`; Also will be generated in parser header file (*.tab.h)
   2. `%code top {code}`: Near the top of the parser implementation file

## Mid rule action

Mid rule action refers to the `{c codes}` lies in the mid of the gramma, for example:

```c
exp: { a(); } "b" { c(); } { d(); } "e" { f(); };
```

It will be translated as follow:

```c
exp: $@1 "b" $@2 $@3 "e" { f(); };
$@1:%empty { a(); };
$@2:%empty { b(); };
$@3:%empty { c(); };
```

With the creation of new non-terminal symbol `$@1`, `$@2`, and `$@3`, bison would trigger the function when they are reduced.

## Precedence 

Mechanism to resolve shift/reduce conflict by assigning precedence level to production rules and terminal symbols.

### Defining

By key words `%left`, `%right` , `%nonassoc` or `%precedence` following by a string of terminal symbols to define their level of precedence by the following rules:

1. The later defined terminal symbols have the higher precedence
2. Symbols defined in a same line (e.g. `%left op1 op2`) has the same precedence
3. `%left`, `%right`, `%nonassoc` define precedence and [association](#association) of the symbol
4. `%precedence` only define the precedence of the symbol
5. If not declared, symbol has no precedence

### Mechanism

Bison assign terminal symbols with the precedence it is defined, production rules with the precedence of last terminal symbol in right hand side.

When facing a shift/reduce conflict, bison will compare the reduce production rule's precedence with the precedence of next symbol reading in, and do:
1. If rule's precedence higher than symbol's, then reduce
2. If symbol's precedence higher than rule's, then shift
3. If rule or symbol do not have precedence, bison will treat them as no precedence

### Example

1. `%prec`: In the following example, the rule's precedence will be `UMINUS` instead of last terminal symbol (which is `'-'`) due to the use of `%prec`. However, the UMINUS does not actually a part of the reducing rule.
   ```bision
   expr: '-' exp %prec UMINUS { $$ = newast('M', $2, NULL); }
   ```

## Association

Mechanism to resolve shift/reduce conflict with the same terminal symbol.

### Defining

Association is defined by the following rules:

1. `%left op1, op2, ...` define left association of `op`s
2. `%right op1, op2, ...` define right association of `op`s
3. `%nonassoc op1, op2, ...` define no non-associative of `op`s, which means that `x op y op z` is considered a syntax error, where `op` is the non-associative symbol.
4. `op`s defined in a same line is nested for association
   e.g: Defining `%right op1, op2` with stack `exp_1 op1 exp_2 op2 exp_3` since `op1`, `op2` is nested for right association, `exp_2 op2 exp_3` will be reduced first 

### Mechanism

When facing a shift/reduce conflict, with the next symbol is the same as the last terminal symbol in current stack:
1. If the symbol is left association, reduce
2. If the symbol is right association, shift
3. If the symbol has no association, report an error

## Error handling

Bison always defines token `error` for error handling, rules can be defined with the `error` token to identify and handling errors.

To better illustrate, we use the follow example:

```s
stmts: /*nothing*/
   | stmts ’\n’
   | stmts exp ’\n’
   | stmts error ’\n’
;
```

If bison encountered an error while parsing `exp`, then:
1. Discard symbols in stack until met `stmts` token
2. Shift in `error` token
3. Shift in the next token, if no rules can accept, then discard. In this case, if the next token is not `\n` then discard.
4. Until a valid rule can accept, in this case until the next token is `\n`, then shift and reduce.

### Macros

1. `yyerrok`: Ignore current error and continue parsing

# Location

## FLex

1. Macro `YY_USER_ACTION`: Define the action to be taken when a token is recognized.

## Bison

1. Locations are stored in `YYLTYPE` structures, which by default are declared as follows:
   ```c
   typedef struct YYLTYPE {
      int first_line;
      int first_column;
      int last_line;
      int last_column;
   } YYLTYPE;
   ```
2. Reducing: LHS's loacation will be set from the beginning of the first RHS symbol to the end of the last RHS symbol.
3. Rule with an empty RHS uses the location information of the previous item in the parse stack
4. Bison refer to the location of the LHS symbol as `@$` and the RHS as `@1`, `@2`, and so forth
5. Location code added when:
   1. Reference to an `@N` location in the action code
   2. `%locations` in the declaration part
6. `YYRHSLOC(rhs, k)` Is the location of:
   1. `k`th symbol in rhs when `k` is positive
   2. Symbol of stack top when `k` is zero and RHS is empty

# Debug

For output c file of flex and bison, need to remove regular expression `#line[ 0-9a-z"\.]*` in order to set correct break point line.