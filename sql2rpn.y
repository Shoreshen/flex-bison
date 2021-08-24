%{
    #include <stdlib.h>
    #include <stdarg.h>
    #include <string.h>
    #include <stdio.h>

    void yyerror(char* s,...);
    void emit(char* s,...);   
%}

%union {
    int intval;
    double floatval;
    char* strval;
    int subtok;
}

%start stmt_list


 /*Values*/
%token <strval> NAME
%token <strval> STRING
%token <strval> USERVAR
%token <intval> INTNUM
%token <intval> BOOL
%token <floatval> APPROXNUM

 /* functions with special syntax */
%token FSUBSTRING
%token FTRIM
%token FDATE_ADD FDATE_SUB
%token FCOUNT

 /*Assisting non-terminals with value*/
%type <intval> select_opts select_expr_list
%type <intval> val_list opt_val_list case_list
%type <intval> groupby_list opt_with_rollup opt_asc_desc
%type <intval> table_references opt_inner_cross opt_outer
%type <intval> left_or_right opt_left_or_right_outer column_list
%type <intval> index_list opt_for_join

%type <intval> delete_opts delete_list
%type <intval> insert_opts insert_vals insert_vals_list
%type <intval> insert_asgn_list opt_if_not_exists update_opts update_asgn_list
%type <intval> opt_temporary opt_length opt_binary opt_uz enum_list
%type <intval> column_atts data_type opt_ignore_replace create_col_list

 /*operator, precedence & association*/
%right ASSIGN
%left OR
%left XOR
%left ANDOP
%nonassoc IN IS LIKE REGEXP
%left NOT '!'
%left BETWEEN
%left <subtok> COMPARISON /* = <> < > <= >= <=> */
%left '|'
%left '&'
%left <subtok> SHIFT /* << >> */
%left '+' '-'
%left '*' '/' '%' MOD
%left '^'
%nonassoc UMINUS

 /*Key words*/
%token ADD
%token ALL
%token ALTER
%token ANALYZE
%token AND
%token ANY
%token AS
%token ASC
%token AUTO_INCREMENT
%token BEFORE
%token BIGINT
%token BINARY
%token BIT
%token BLOB
%token BOTH
%token BY
%token CALL
%token CASCADE
%token CASE
%token CHANGE
%token CHAR
%token CHECK
%token COLLATE
%token COLUMN
%token COMMENT
%token CONDITION
%token CONSTRAINT
%token CONTINUE
%token CONVERT
%token CREATE
%token CROSS
%token CURRENT_DATE
%token CURRENT_TIME
%token CURRENT_TIMESTAMP
%token CURRENT_USER
%token CURSOR
%token DATABASE
%token DATABASES
%token DATE
%token DATETIME
%token DAY_HOUR
%token DAY_MICROSECOND
%token DAY_MINUTE
%token DAY_SECOND
%token DECIMAL
%token DECLARE
%token DEFAULT
%token DELAYED
%token DELETE
%token DESC
%token DESCRIBE
%token DETERMINISTIC
%token DISTINCT
%token DISTINCTROW
%token DIV
%token DOUBLE
%token DROP
%token DUAL
%token EACH
%token ELSE
%token ELSEIF
%token ENCLOSED
%token END
%token ENUM
%token ESCAPED
%token <subtok> EXISTS
%token EXIT
%token EXPLAIN
%token FETCH
%token FLOAT
%token FOR
%token FORCE
%token FOREIGN
%token FROM
%token FULLTEXT
%token GRANT
%token GROUP
%token HAVING
%token HIGH_PRIORITY
%token HOUR_MICROSECOND
%token HOUR_MINUTE
%token HOUR_SECOND
%token IF
%token IGNORE
%token INDEX
%token INFILE
%token INNER
%token INOUT
%token INSENSITIVE
%token INSERT
%token INT
%token INTEGER
%token INTERVAL
%token INTO
%token ITERATE
%token JOIN
%token KEY
%token KEYS
%token KILL
%token LEADING
%token LEAVE
%token LEFT
%token LIMIT
%token LINES
%token LOAD
%token LOCALTIME
%token LOCALTIMESTAMP
%token LOCK
%token LONG
%token LONGBLOB
%token LONGTEXT
%token LOOP
%token LOW_PRIORITY
%token MATCH
%token MEDIUMBLOB
%token MEDIUMINT
%token MEDIUMTEXT
%token MINUTE_MICROSECOND
%token MINUTE_SECOND
%token MODIFIES
%token NATURAL
%token NO_WRITE_TO_BINLOG
%token NULLX
%token NUMBER
%token ON
%token ONDUPLICATE
%token OPTIMIZE
%token OPTION
%token OPTIONALLY
%token ORDER
%token OUT
%token OUTER
%token OUTFILE
%token PRECISION
%token PRIMARY
%token PROCEDURE
%token PURGE
%token QUICK
%token READ
%token READS
%token REAL
%token REFERENCES
%token RELEASE
%token RENAME
%token REPEAT
%token REPLACE
%token REQUIRE
%token RESTRICT
%token RETURN
%token REVOKE
%token RIGHT
%token ROLLUP
%token SCHEMA
%token SCHEMAS
%token SECOND_MICROSECOND
%token SELECT
%token SENSITIVE
%token SEPARATOR
%token SET
%token SHOW
%token SMALLINT
%token SOME
%token SONAME
%token SPATIAL
%token SPECIFIC
%token SQL
%token SQLEXCEPTION
%token SQLSTATE
%token SQLWARNING
%token SQL_BIG_RESULT
%token SQL_CALC_FOUND_ROWS
%token SQL_SMALL_RESULT
%token SSL
%token STARTING
%token STRAIGHT_JOIN
%token TABLE
%token TEMPORARY
%token TEXT
%token TERMINATED
%token THEN
%token TIME
%token TIMESTAMP
%token TINYBLOB
%token TINYINT
%token TINYTEXT
%token TO
%token TRAILING
%token TRIGGER
%token UNDO
%token UNION
%token UNIQUE
%token UNLOCK
%token UNSIGNED
%token UPDATE
%token USAGE
%token USE
%token USING
%token UTC_DATE
%token UTC_TIME
%token UTC_TIMESTAMP
%token VALUES
%token VARBINARY
%token VARCHAR
%token VARYING
%token WHEN
%token WHERE
%token WHILE
%token WITH
%token WRITE
%token YEAR
%token YEAR_MONTH
%token ZEROFILL

%%
stmt_list : 
    stmt
    | stmt_list stmt ';'
;

expr: 
    /*Name and string/number literal*/
    NAME {
        emit("NAME %s", $1);
        free($1);
    }
    | NAME '.' NAME{
        // special for `table.name` format
        emit("FIELDNAME %s.%s", $1, $3);
        free($1);
        free($3);
    }
    | USERVAR {
        emit("NAME %s", $1);
        free($1);
    }
    | USERVAR {
        emit("USERVAR %s", $1);
        free($1);
    }
    | STRING {
        emit("STRING %s", $1);
        free($1);
    }
    | INTNUM {
        emit("NUMBER %d", $1);
    }
    | APPROXNUM {
        emit("FLOAT %g", $1);
    }
    | BOOL {
        emit("BOOL %d", $1);
    }
    /*Calculation operator*/
    | expr '+' expr{
        emit("ADD");
    }
    | expr '-' expr{
        emit("SUB");
    }
    | expr '*' expr{
        emit("MUL");
    }
    | expr '/' expr
    {
        emit("DIV");
    }
    | expr '%' expr
    {
        emit("MOD");
    }
    | expr MOD expr
    {
        emit("MOD");
    }
    | '-' expr %prec UMINUS
    {
        emit("NGE");
    }
    | expr ANDOP expr
    {
        emit("AND");
    }
    | expr OR expr
    {
        emit("OR");
    }
    | expr XOR expr
    {
        emit("XOR");
    }
    | expr '|' expr
    {
        emit("BITOR");
    }
    | expr '&' expr
    {
        emit("BITAND");
    }
    | expr '^' expr
    {
        emit("BITXOR");
    }
    | expr SHIFT expr
    {
        if($2 == 1){
            emit("SHIFT left");
        } else {
            emit("SHIFT right");
        }
    }
    | NOT expr{
        emit("NOT");
    }
    | '!' expr{
        emit("NOT");
    }
    | expr COMPARISON expr {
        emit("CMP %d", $2);
    }
    /*recoursive selects and comparisons*/
    | expr COMPARISON '(' select_stmt ')' {
        emit("CMPSELECT %d", $2);
    }
    | expr COMPARISON ANY '(' select_stmt ')' {
        emit("CMPANYSELECT %d", $2);
    }
    | expr COMPARISON SOME '(' select_stmt ')' {
        emit("CMPANYSELECT %d", $2);
    }
    | expr COMPARISON ALL '(' select_stmt ')' {
        emit("CMPALLSELECT %d", $2);
    }
    /*unary/binary related*/
    | expr IS NULLX{
        emit("ISNULL");
    }
    | expr IS NOT NULLX{
        emit("ISNULL");
        emit("NOT");
    }
    | expr IS BOOL {
        emit("ISBOOL %d", $3);
    }
    | expr IS NOT BOOL {
        emit("ISBOOL %d", $4);
        emit("NOT");
    }
    /*assigning user variable*/
    | USERVAR ASSIGN expr {
        emit("ASSIGN @%s", $1);
        free($1);
    }
    /*between expression*/
    | expr BETWEEN expr AND expr %prec BETWEEN {
        emit("BETWEEN");
    }
    /*In lists or select results*/
    | expr IN '(' val_list ')' {
        emit("ISIN %d", $4);
    }
    | expr NOT IN '(' val_list ')' {
        emit("ISIN %d", $5);
        emit("NOT");
    }
    | expr IN '(' select_stmt ')' {
        emit("CMPANYSELECT 3");
    }
    | expr NOT IN '(' select_stmt ')' {
        emit("CMPANYSELECT 4");
    }
    | expr NOT IN '(' select_stmt ')' {
        emit("CMPANYSELECT 4");
    }
    | EXISTS '(' select_stmt ')' {
        emit("EXISTSSELECT");
        if($1){
            emit("NOT");
        }
    }
    /*function related*/
    | NAME '(' opt_val_list ')' {
        emit("call %d %s", $3, $1);
        free($1);
    }
    | FCOUNT '(' '*' ')' {
        emit("COUNTALL");
    }
    | FCOUNT '(' expr ')' {
        emit("CALL 1 COUNT");
    }
    | FSUBSTRING '(' val_list ')' {
        emit("CALL %d SUBSTR", $3);
    }
    | FSUBSTRING '(' expr FROM expr ')' {
        emit("CALL 2 SUBSTR");
    }
    | FSUBSTRING '(' expr FROM expr FOR expr ')' {
        emit("CALL 3 SUBSTR");
    } 
    | FTRIM '(' val_list ')' {
        emit("CALL %d TRIM", $3);
    }
    | FTRIM '(' trim_tbl expr FROM expr ')' {
        emit("CALL 3 TRIM");
    }
    /*date operation*/
    | FDATE_ADD '(' expr ',' interval_exp ')' {
        emit("CALL 3 DATE_ADD");
    }
    | FDATE_SUB '(' expr ',' interval_exp ')' {
        emit("CALL 3 DATE_SUB");
    }
    /*case expression*/
    | CASE expr case_list END {
        emit("CASEVAL %d 0", $3);
    }
    | CASE expr case_list ELSE expr END {
        emit("CASEVAL %d 1", $3);
    }
    | CASE case_list END {
        emit("CASE %d 0", $2);
    }
    | CASE case_list ELSE expr END {
        emit("CASE %d 1", $2);
    }
    /*like expression*/
    | expr LIKE expr {
        emit("LIKE");
    }
    | expr NOT LIKE expr {
        emit("LIKE");
        emit("NOT");
    }
    /*regular expression*/
    | expr REGEXP expr {
        emit("REGXP");
    }
    | expr NOT REGEXP expr {
        emit("REGXP");
        emit("NOT");
    }
    /*time stamp*/
    | CURRENT_TIMESTAMP{
        emit("NOW");
    }
    | CURRENT_DATE{
        emit("NOW");
    }
    | CURRENT_TIME{
        emit("NOW");
    }
;

case_list:
    WHEN expr THEN expr {
        $$ = 1;
    }
    | case_list WHEN expr THEN expr {
        $$ = $1 + 1;
    }

interval_exp:
    INTERVAL expr DAY_HOUR{
        emit("NUMBER 1");
    }
    | INTERVAL expr DAY_MICROSECOND { 
       emit("NUMBER 2"); 
    }
    | INTERVAL expr DAY_MINUTE { 
        emit("NUMBER 3"); 
    }
    | INTERVAL expr DAY_SECOND { 
        emit("NUMBER 4"); 
    }
    | INTERVAL expr YEAR_MONTH { 
        emit("NUMBER 5"); 
    }
    | INTERVAL expr YEAR       { 
        emit("NUMBER 6"); 
    }
    | INTERVAL expr HOUR_MICROSECOND { 
        emit("NUMBER 7"); 
    }
    | INTERVAL expr HOUR_MINUTE { 
        emit("NUMBER 8"); }
    | INTERVAL expr HOUR_SECOND { 
        emit("NUMBER 9"); 
    }
;

trim_tbl: 
    LEADING {
        emit("NUMBER 1");
    }
    | TRAILING {
        emit("NUMBER 2");
    }
    | BOTH {
        emit("NUMBER 3");
    }
;

val_list: 
    expr {
        $$ = 1;
    }
    | expr ',' val_list {
        $$ = $3 + 1;
    }
;

opt_val_list: 
    {
        $$ = 0;
    }
    | val_list {
        $$ = $1;
    }
;

stmt : 
    select_stmt {
        emit("STMT");
    }
    | delete_stmt {
        emit("STMT");
    }
    | insert_stmt {
        emit("STMT");
    }
    | replace_stmt {
        emit("STMT");
    }
    | update_stmt {
        emit("STMT");
    }
    | create_database_stmt {
        emit("STMT");
    }
    | set_stmt {
        emit("STMT");
    }
    | create_table_stmt {
        emit("STMT");
    }
;

select_stmt:
    // `select xxxx`, without tables
    SELECT select_opts select_expr_list {
        emit("SELECTNODATA %d %d", $2, $3);
    }
    | SELECT select_opts select_expr_list FROM table_references
    opt_where opt_groupby opt_having opt_orderby opt_limit
    opt_into { 
        emit("SELECT %d %d %d", $2, $3, $5); 
    } 
;

select_opts:
    /*nil*/ {
        $$ = 0;
    }
    | select_opts ALL {
        if($1 & (1 << 0)){
            yyerror("Duplicate ALL option");
        }
        $$ = $1 | 1 << 0;
    }
    | select_opts DISTINCT {
        if($1 & (1 << 1)){
            yyerror("Duplicate DISTINCT option");
        }
        $$ = $1 | 1 << 1;
    }
    | select_opts DISTINCTROW {
        if($1 & (1 << 2)){
            yyerror("Duplicate DISTINCTROW option");
        }
        $$ = $1 | 1 << 2;
    }
    | select_opts HIGH_PRIORITY {
        if($1 & (1 << 3)){
            yyerror("Duplicate HIGH_PRIORITY option");
        }
        $$ = $1 | 1 << 3;
    }
    | select_opts STRAIGHT_JOIN {
        if($1 & (1 << 4)){
            yyerror("Duplicate STRAIGHT_JOIN option");
        }
        $$ = $1 | 1 << 4;
    }
    | select_opts SQL_SMALL_RESULT {
        if($1 & (1 << 5)){
            yyerror("Duplicate SQL_SMALL_RESULT option");
        }
        $$ = $1 | 1 << 5;
    }
    | select_opts SQL_BIG_RESULT {
        if($1 & (1 << 6)){
            yyerror("Duplicate SQL_BIG_RESULT option");
        }
        $$ = $1 | 1 << 6;
    }
    | select_opts SQL_CALC_FOUND_ROWS {
        if($1 & (1 << 7)){
            yyerror("Duplicate SQL_CALC_FOUND_ROWS option");
        }
        $$ = $1 | 1 << 7;
    }
;
select_expr_list:
    select_expr {
        $$ = 1;
    }
    | select_expr_list ',' select_expr {
        $$ = $1 + 1;
    }
    | '*' {
        emit("SELECTALL");
        $$ = 1;
    }
;
select_expr: expr opt_as_alias;
opt_as_alias: /*nil*/
    | AS NAME {
        emit("ALIAS %s", $2);
        free($2);
    }
    | NAME
;
opt_where:
    | WHERE expr{
        emit("WHERE");
    }
;
opt_groupby:
    | GROUP BY groupby_list opt_with_rollup {
        emit("GROUPBYLIST %d, %d", $3, $4);
    }
;
groupby_list:
    expr opt_asc_desc {
        emit("GROUPBY %d", $2);
        $$ = 1;
    }
    | groupby_list ',' expr opt_asc_desc {
        emit("GROUPBY %d", $4);
        $$ = $1 + 1;
    }
;
opt_asc_desc: { $$ = 0; }
    | ASC {
        $$ = 0;
    }
    | DESC {
        $$ = 1;
    }
;
opt_with_rollup:{ $$ = 0; }
    | WITH ROLLUP {
        $$ = 1;
    }
;
opt_having:
    | HAVING expr {
        emit("HAVING");
    }
;
opt_orderby:
    | ORDER BY groupby_list {
        emit("ORDERBY %d", $3);
    }
;
opt_limit:
    | LIMIT expr {
        emit("LIMIT 1");
    }
    | LIMIT expr ',' expr {
        emit("LIMIT 2");
    }
;
opt_into: /*nil*/
    | INTO 
; 
column_list:
    NAME {
        emit("COLUMN %s", $1);
        $$ = 1;
        free($1);
    } 
    | column_list ',' NAME {
        emit("COLUMN %s", $3);
        $$ = $1 + 1;
        free($3);
    }
table_references:
    table_reference {
        $$ = 1;
    }
    | table_references ',' table_reference {
        $$ = $1 + 1;
    }
;
table_reference:
    table_factor /*default $$ = $1*/
    |join_table /*default $$ = $1*/
;
table_factor:
    NAME opt_as_alias index_hint {
        emit("TABLE %s", $1);
        free($1);
    }
    | NAME '.' NAME opt_as_alias index_hint {
        emit("TABLE %s.%s", $1, $3);
        free($1);
        free($3);
    }
    | table_subquery opt_as NAME {
        emit("SUBQUERAYS %s", $3);
        free($3);
    }
    |'(' table_references ')' {
        emit("TABLEREFERENCES %d", $2);
    }
;
table_subquery:
    '(' select_stmt ')' {
        emit("SUBQUERY");
    }
;
opt_as: /*nil*/
    | AS
;
index_hint: /*nil*/
    | USE KEY opt_for_join '(' index_list ')' {
        emit("INDEXHINT %d %d", $5, 10 + $3);
    }
    | IGNORE KEY opt_for_join {
        emit("INDEXHINT %d %d", $5, 20 + $3);
    }
    | IGNORE KEY opt_for_join {
        emit("INDEXHINT %d %d", $5, 30 + $3);
    }
;
opt_for_join:
    /*nil*/ {
        $$ = 0;
    }
    | FOR JOIN {
        $$ = 1;
    }
;
index_list:
    NAME {
        emit("INDEX %s", $1);
        free($1);
    }
    | index_list ',' NAME {
        emit("INDEX %s", $3);
        free($3);
    }
;
join_table:
    table_reference opt_inner_cross JOIN table_factor opt_join_condition {
        emit("JOIN %d", 100 + $2);
    }
    | table_reference STRAIGHT_JOIN JOIN table_factor {
        emit("JOIN %d", 200);
    }
    | table_reference STRAIGHT_JOIN JOIN table_factor ON expr {
        emit("JOIN %d", 200);
    }
    | table_reference left_or_right opt_outer JOIN table_factor join_condition {
        emit("JOIN %d", 300 + $2 + $3);
    }
    | table_reference NATURAL opt_left_or_right_outer JOIN JOIN table_factor {
        emit("JOIN %d", 400 + $3);
    }
;
opt_inner_cross:
    /*nil*/ {
        $$ = 0;
    }
    | INNER {
        $$ = 1;
    }
    | CROSS {
        $$ = 2;
    }
;
opt_join_condition: /*nil*/
    | join_condition;
;
join_condition:
    ON expr {
        emit("ONEXPR");
    }
    | USING '(' column_list ')' {
        emit("USING %d", $3);
    }
;
left_or_right:
    LEFT {
        $$ = 1;
    }
    | RIGHT {
        $$ = 2
    }
;
opt_outer:
    /*nil*/ {
        $$ = 0;
    }
    | OUTER {
        $$ = 4;
    }
;
opt_left_or_right_outer: 
    /*nil*/ {
        $$ = 0;
    }
    | LEFT opt_outer {
        $$ = 1 + $2;
    }
    | RIGHT opt_outer {
        $$ = 2 + $2;
    }
;
delete_stmt:
    DELETE delete_opts 
    FROM NAME 
    opt_where opt_orderby opt_limit {
        emit("DELETE %d %s", $2, $4);
        free($4);
    }
    | DELETE delete_opts delete_list 
    FROM table_references 
    opt_where {
        emit("DELETEMULTI %d %d %d", $2, $3, $5);
    }
    | DELETE delete_opts 
    USING table_references 
    opt_where {
        emit("DELETEMULTI %d %d %d", $2, $4, $6);
    }
;
delete_opts: 
    /*nil*/ {
        $$ = 0;
    }
    | delete_opts LOW_PRIORITY {
        $$ = $1 | 1;
    }
    | delete_opts QUICK {
        $$ = $1 | 1 << 1;
    }
    | delete_opts IGNORE {
        $$ = $1 | 1 << 2;
    }
;
delete_list:
    NAME opt_dot_star {
        emit("TABLE %s", $1);
        free($1);
        $$ = 1;
    }
    | delete_list ',' NAME opt_dot_star {
        emit("TABLE %s", $3);
        free($3);
        $$ = $1 + 1;
    }
;
opt_dot_star:/*nil*/
    | '.' '*'
;
insert_stmt:
    INSERT insert_opts opt_into NAME 
    opt_col_names
    VALUES insert_vals_list 
    opt_ondupupdate {
        emit("INSERTVALS %d %d %s", $2, $7, $4);
        free($4);
    }
    | INSERT insert_opts opt_into NAME
    SET insert_asgn_list
    opt_ondupupdate {
        emit("INSERTASGN %d %d %s", $2, $6, $4);
        free($4);
    }
    | INSERT insert_opts opt_into NAME opt_col_names
    select_stmt
    opt_ondupupdate {
        emit("INSERTSELECT %d %s", $2, $4);
        free($4);
    }
;
insert_opts: 
    /*nil*/ {
        $$ = 0;
    }
    |insert_opts LOW_PRIORITY {
        $$ = $1 | 1;
    }
    |insert_opts DELAYED {
        $$ = $1 | 1<<1;
    }
    |insert_opts HIGH_PRIORITY {
        $$ = $1 | 1<<2;
    }
    |insert_opts IGNORE {
        $$ = $1 | 1<<1 | 1<<3;
    }
;
opt_col_names: /*nil*/
    | '(' column_list ')' {
        emit("INSERTCOLS %d", $2);
    }
;
insert_vals_list:
    '(' insert_vals ')' {
        emit("VALUES %d", $2);
        $$ = 1;
    }
    | insert_vals_list ',' '(' insert_vals ')' {
        emit("VALUES %d", $4);
        $$ = $1 + 1;
    }
;
insert_vals:
    expr {
        $$ = 1;
    }
    | DEFAULT {
        emit("DEFUALT");
        $$ = $1;
    }
    | insert_vals ',' expr {
        $$ = $1 + 1;
    }
    | insert_vals ',' DEFAULT {
        $$ = $1 + 1;
    }
;
opt_ondupupdate: /*nil*/
    | ONDUPLICATE KEY UPDATE insert_asgn_list {
        emit("DUPUPDATE %d", $4);
    }
;
insert_asgn_list:
    NAME COMPARISON expr {
        if ($2 != 4){
            yyerror("bad insert assignment to %s", $1);
        }
        emit("ASSIGN %s", $1);
        free($1);
        $$ = 1;
    }
    | NAME COMPARISON DEFAULT {
        if ($2 != 4) {
            yyerror("bad insert assignment to %s", $1);
        }
        emit("DEFAULT"); 
        emit("ASSIGN %s", $1); 
        free($1); 
        $$ = 1; 
    }
    | insert_asgn_list ',' NAME COMPARISON expr {
        if ($4 != 4){
            yyerror("bad insert assignment to %s", $3);
        }
        emit("ASSIGN %s", $3);
        free($3);
        $$ = $1
    }
    | insert_asgn_list ',' NAME COMPARISON DEFAULT {
        if ($4 != 4) {
            yyerror("bad insert assignment to %s", $3);
        }
        emit("DEFAULT"); 
        emit("ASSIGN %s", $3); 
        free($3); 
        $$ = $1; 
    }
;
replace_stmt:
    REPLACE insert_opts opt_into NAME
    opt_col_names
    VALUES insert_vals_list
    opt_ondupupdate {
        emit("REPLACEVALS %d %d %s", $2, $7, $4);
        free($4)
    }
    | REPLACE insert_opts opt_into NAME
    SET insert_asgn_list
    opt_ondupupdate {
        emit("REPLACEASGN %d %d %s", $2, $6, $4);
        free($4);
    }
    | REPLACE insert_opts opt_into NAME opt_col_names
    select_stmt
    opt_ondupupdate { 
        emit("REPLACESELECT %d %s", $2, $4); 
        free($4); 
    }
;
update_stmt:
    UPDATE update_opts table_references
    SET update_asgn_list
    opt_where
    opt_orderby
    opt_limit { 
        emit("UPDATE %d %d %d", $2, $3, $5); 
    }
    | 
;
update_opts: 
    /*nil*/ {
        $$ = 0;
    }
    | insert_opts LOW_PRIORITY {
        
    }
    | insert_opts IGNORE { 
        $$ = $1 | 1<<1 | 1<<3;
    }
;
update_asgn_list:
    NAME COMPARISON expr {
        // Only for comparison of `=`
        if ($2 != 4) {
            yyerror("bad insert assignment to %s", $1);
        }
	    emit("ASSIGN %s", $1); 
        free($1); 
        $$ = 1;
    }
    | NAME '.' NAME COMPARISON expr {
        if ($2 != 4) {
            yyerror("bad insert assignment to %s.%s", $1, $3);
        }
	    emit("ASSIGN %s.%s", $1, $3); 
        free($1); 
        free($3);
        $$ = 1;
    }
    | update_asgn_list ',' NAME COMPARISON expr {
        if ($4 != 4) {
            yyerror("bad insert assignment to %s", $3);
        }
	    emit("ASSIGN %s", $3); 
        free($3); 
        $$ = $1 + 1;
    }
    | update_asgn_list ',' NAME '.' NAME COMPARISON expr {
        if ($2 != 4) {
            yyerror("bad insert assignment to %s.%s", $3, $5);
        }
	    emit("ASSIGN %s.%s", $3, $5); 
        free($3); 
        free($5); 
        $$ = $1 + 1;
    }
;
create_database_stmt:
    CREATE DATABASE opt_if_not_exists NAME {
        emit("CREATEDATABASE %d %s", $3, $4);
        free($4);
    }
    | CREATE SCHEMA opt_if_not_exists NAME {
        emit("CREATEDATABASE %d %s", $3, $4);
        free($4);
    }
;
opt_if_not_exists: 
    /*nil*/ {
        $$ = 0;
    }
    | IF EXISTS {
        if ($2) {
            yyerror("IF EXISTS doesn't exist"); 
        }
        $$ = $2;
    }
;
set_stmt: SET set_list;
set_list: set_expr | set_list ',' set_expr;
set_expr:
    USERVAR COMPARISON expr {
        if ($2 != 4) {
            yyerror("bad set to @%s", $1);
        }
        emit("SET %s", $1);
        free($1);
    }
    | USERVAR ASSIGN expr {
        emit("SET %s", $1);
        free($1);
    }
;
create_table_stmt:
;
%%

void emit(char *s, ...)
{
  extern yylineno;

  va_list ap;
  va_start(ap, s);

  printf("rpn: ");
  vfprintf(stdout, s, ap);
  printf("\n");
}
void yyerror(char *s, ...)
{
  extern yylineno;

  va_list ap;
  va_start(ap, s);

  fprintf(stderr, "%d: error: ", yylineno);
  vfprintf(stderr, s, ap);
  fprintf(stderr, "\n");
}
