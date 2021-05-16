# Flex

## Basic structure

A flex program consists of the following three sections, separated by %% lines:

|Section|Functions|
|-|-|
|First section<a id='1st_sec'></a>|1. The first section contains declarations and option settings<br>2. code inside of `%{` and `%}` is copied to the generated C files|
|Second section<a id='2nd_sec'></a>|1. The second section is a list of patterns and actions<br>2. Formatted as `<RegExpr>    {<action1>,<action2,...>}`|
|Third section<a id='3rd_sec'></a>|The third section is C code that is copied to the generated scanner|

## Useful rules

1. Flex breaks a tie by preferring longer matches
2. If two patterns match the same thing, it prefers the pattern that appears first in the flex program

## Options

1. `%option noyywrap` do not call `yywrap()`, which is an I/O macro in flex library. Always use it when applying user defined `main` function

## Useful regular expression

1. Quotes tell flex to match the exact strings rather than regular expressions.
   1. e.g.:`"+"` means match once a `+` is found in the source code
2. `[]` character class, matches any character within the brackets
   1. `^` match any character except the ones in the brackets.
   2. `-` represent character range based on the ACSII convention, e.g. `[0-9]` means ACSII that is greater than 48('0') and smaller than 57('9')
3. `{}` 3 functions:
   1. Indicating range of number of times a character continually appears, e.g. `A{1,4}` means accept `A`, `AA`, `AAA`
   2. Indicating exact number of times a character continually appears, e.g. `A{4}` means accept `AAAA`
   3. referring to a named pattern
4. `.*` ignore the rest of the current line (not including `\n`)
5. `.` Matches any single character except the newline character (`\n`)
6. `?` Matches zero or one occurrence of the preceding regular expression, e.g. `-?[0-9]+` matches a signed number including an optional leading minus sign
7. `/` Matches character with specified following characters, e.g. `0/1` will match `0` within the text of `01`, but not `02`
8. `()` Groups a series of regular expressions together into a new regular expression, e.g. `([0-9]+)?` matches empty or an integer digit
