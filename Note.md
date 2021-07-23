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

### Define a start condition

Using `%x <sc_name>` in [first section](#1st_sec) to define an [exclusive start condition](#mk1)

Using `%x <sc_name>` in [first section](#1st_sec) to define an [inclusive start condition](#mk2)

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
2. `[]` character class, matches any character within the brackets
   1. <a id=neg_class></a>`^` as the first character to indicate a "negated character class", match any character except the ones in the brackets;<br>
      e.g. `[^09]` means match any character except `0` and `9`
   2. `-` represent character range based on the ACSII convention<br>
      e.g. `[0-9]` means ACSII that is greater than 48('0') and smaller than 57('9')
3. `{}` 3 functions:
   1. Indicating range of number of times a character continually appears, e.g. `A{1,4}` means accept `A`, `AA`, `AAA`
   2. Indicating exact number of times a character continually appears, e.g. `A{4}` means accept `AAAA`
   3. referring to a named pattern
4. `.*` ignore the rest of the current line (not including `\n`)
5. `.` Matches any single character except the newline character (`\n`)
   1. Note in [negated character class](#neg_class), it simply means character "."<br>
      e.g. `[^.]` means match any character except `.`
6. `?` Matches zero or one occurrence of the preceding regular expression, e.g. `-?[0-9]+` matches a signed number including an optional leading minus sign
7. `/` Matches character with specified following characters, e.g. `0/1` will match `0` within the text of `01`, but not `02`
8. `()` Groups a series of regular expressions together into a new regular expression, e.g. `([0-9]+)?` matches empty or an integer digit
9. `^` Matches the beginning of a line as the first character of a regular expression.
10. `r/s` an `r` but only if it is followed by an `s`.
11. `r$` an `r`, but only at the end of a line (i.e., just before a newline). Equivalent to `r/\n`

# Bison

## Precedence 

Mechanism to resolve shift/reduce conflict by assigning precedence level to production rules and terminal symbols.

### Defining

By key words `%left`, `%right` , `%nonassoc` or `%precedence` following by a string of terminal symbols to define the level precedence.

With level precedence, the later defined terminal symbols have the higher precedence.

### Mechanism

Bison assign terminal symbols with the precedence it is defined, production rules with the precedence of last terminal symbol in right hand side.

When facing a shift/reduce conflict, bison will compare the reduce production rule's precedence with the precedence of next symbol reading in, and do:
1. If rule's precedence higher than symbol's, then reduce
2. If symbol's precedence higher than rule's, then shift

## Association

Mechanism to resolve shift/reduce conflict with the same terminal symbol.

### Defining

By keywords `%left` following by a string of terminal symbols to define left association

By keywords `%right` following by a string of terminal symbols to define right association

By keywords `%nonassoc` following by a string of terminal symbols to define no association

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
