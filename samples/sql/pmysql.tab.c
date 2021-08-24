/* A Bison parser, made by GNU Bison 3.7.6.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30706

/* Bison version string.  */
#define YYBISON_VERSION "3.7.6"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 10 "pmysql.y"

#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

void yyerror(char *s, ...);
void emit(char *s, ...);

#line 80 "pmysql.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "pmysql.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NAME = 3,                       /* NAME  */
  YYSYMBOL_STRING = 4,                     /* STRING  */
  YYSYMBOL_INTNUM = 5,                     /* INTNUM  */
  YYSYMBOL_BOOL = 6,                       /* BOOL  */
  YYSYMBOL_APPROXNUM = 7,                  /* APPROXNUM  */
  YYSYMBOL_USERVAR = 8,                    /* USERVAR  */
  YYSYMBOL_ASSIGN = 9,                     /* ASSIGN  */
  YYSYMBOL_ANDOP = 10,                     /* ANDOP  */
  YYSYMBOL_IS = 11,                        /* IS  */
  YYSYMBOL_12_ = 12,                       /* '!'  */
  YYSYMBOL_COMPARISON = 13,                /* COMPARISON  */
  YYSYMBOL_14_ = 14,                       /* '|'  */
  YYSYMBOL_15_ = 15,                       /* '&'  */
  YYSYMBOL_SHIFT = 16,                     /* SHIFT  */
  YYSYMBOL_17_ = 17,                       /* '+'  */
  YYSYMBOL_18_ = 18,                       /* '-'  */
  YYSYMBOL_19_ = 19,                       /* '*'  */
  YYSYMBOL_20_ = 20,                       /* '/'  */
  YYSYMBOL_21_ = 21,                       /* '%'  */
  YYSYMBOL_22_ = 22,                       /* '^'  */
  YYSYMBOL_UMINUS = 23,                    /* UMINUS  */
  YYSYMBOL_ADD = 24,                       /* ADD  */
  YYSYMBOL_ALL = 25,                       /* ALL  */
  YYSYMBOL_ALTER = 26,                     /* ALTER  */
  YYSYMBOL_ANALYZE = 27,                   /* ANALYZE  */
  YYSYMBOL_AND = 28,                       /* AND  */
  YYSYMBOL_ANY = 29,                       /* ANY  */
  YYSYMBOL_AS = 30,                        /* AS  */
  YYSYMBOL_ASC = 31,                       /* ASC  */
  YYSYMBOL_AUTO_INCREMENT = 32,            /* AUTO_INCREMENT  */
  YYSYMBOL_BEFORE = 33,                    /* BEFORE  */
  YYSYMBOL_BETWEEN = 34,                   /* BETWEEN  */
  YYSYMBOL_BIGINT = 35,                    /* BIGINT  */
  YYSYMBOL_BINARY = 36,                    /* BINARY  */
  YYSYMBOL_BIT = 37,                       /* BIT  */
  YYSYMBOL_BLOB = 38,                      /* BLOB  */
  YYSYMBOL_BOTH = 39,                      /* BOTH  */
  YYSYMBOL_BY = 40,                        /* BY  */
  YYSYMBOL_CALL = 41,                      /* CALL  */
  YYSYMBOL_CASCADE = 42,                   /* CASCADE  */
  YYSYMBOL_CASE = 43,                      /* CASE  */
  YYSYMBOL_CHANGE = 44,                    /* CHANGE  */
  YYSYMBOL_CHAR = 45,                      /* CHAR  */
  YYSYMBOL_CHECK = 46,                     /* CHECK  */
  YYSYMBOL_COLLATE = 47,                   /* COLLATE  */
  YYSYMBOL_COLUMN = 48,                    /* COLUMN  */
  YYSYMBOL_COMMENT = 49,                   /* COMMENT  */
  YYSYMBOL_CONDITION = 50,                 /* CONDITION  */
  YYSYMBOL_CONSTRAINT = 51,                /* CONSTRAINT  */
  YYSYMBOL_CONTINUE = 52,                  /* CONTINUE  */
  YYSYMBOL_CONVERT = 53,                   /* CONVERT  */
  YYSYMBOL_CREATE = 54,                    /* CREATE  */
  YYSYMBOL_CROSS = 55,                     /* CROSS  */
  YYSYMBOL_CURRENT_DATE = 56,              /* CURRENT_DATE  */
  YYSYMBOL_CURRENT_TIME = 57,              /* CURRENT_TIME  */
  YYSYMBOL_CURRENT_TIMESTAMP = 58,         /* CURRENT_TIMESTAMP  */
  YYSYMBOL_CURRENT_USER = 59,              /* CURRENT_USER  */
  YYSYMBOL_CURSOR = 60,                    /* CURSOR  */
  YYSYMBOL_DATABASE = 61,                  /* DATABASE  */
  YYSYMBOL_DATABASES = 62,                 /* DATABASES  */
  YYSYMBOL_DATE = 63,                      /* DATE  */
  YYSYMBOL_DATETIME = 64,                  /* DATETIME  */
  YYSYMBOL_DAY_HOUR = 65,                  /* DAY_HOUR  */
  YYSYMBOL_DAY_MICROSECOND = 66,           /* DAY_MICROSECOND  */
  YYSYMBOL_DAY_MINUTE = 67,                /* DAY_MINUTE  */
  YYSYMBOL_DAY_SECOND = 68,                /* DAY_SECOND  */
  YYSYMBOL_DECIMAL = 69,                   /* DECIMAL  */
  YYSYMBOL_DECLARE = 70,                   /* DECLARE  */
  YYSYMBOL_DEFAULT = 71,                   /* DEFAULT  */
  YYSYMBOL_DELAYED = 72,                   /* DELAYED  */
  YYSYMBOL_DELETE = 73,                    /* DELETE  */
  YYSYMBOL_DESC = 74,                      /* DESC  */
  YYSYMBOL_DESCRIBE = 75,                  /* DESCRIBE  */
  YYSYMBOL_DETERMINISTIC = 76,             /* DETERMINISTIC  */
  YYSYMBOL_DISTINCT = 77,                  /* DISTINCT  */
  YYSYMBOL_DISTINCTROW = 78,               /* DISTINCTROW  */
  YYSYMBOL_DIV = 79,                       /* DIV  */
  YYSYMBOL_DOUBLE = 80,                    /* DOUBLE  */
  YYSYMBOL_DROP = 81,                      /* DROP  */
  YYSYMBOL_DUAL = 82,                      /* DUAL  */
  YYSYMBOL_EACH = 83,                      /* EACH  */
  YYSYMBOL_ELSE = 84,                      /* ELSE  */
  YYSYMBOL_ELSEIF = 85,                    /* ELSEIF  */
  YYSYMBOL_ENCLOSED = 86,                  /* ENCLOSED  */
  YYSYMBOL_END = 87,                       /* END  */
  YYSYMBOL_ENUM = 88,                      /* ENUM  */
  YYSYMBOL_ESCAPED = 89,                   /* ESCAPED  */
  YYSYMBOL_EXISTS = 90,                    /* EXISTS  */
  YYSYMBOL_EXIT = 91,                      /* EXIT  */
  YYSYMBOL_EXPLAIN = 92,                   /* EXPLAIN  */
  YYSYMBOL_FETCH = 93,                     /* FETCH  */
  YYSYMBOL_FLOAT = 94,                     /* FLOAT  */
  YYSYMBOL_FOR = 95,                       /* FOR  */
  YYSYMBOL_FORCE = 96,                     /* FORCE  */
  YYSYMBOL_FOREIGN = 97,                   /* FOREIGN  */
  YYSYMBOL_FROM = 98,                      /* FROM  */
  YYSYMBOL_FULLTEXT = 99,                  /* FULLTEXT  */
  YYSYMBOL_GRANT = 100,                    /* GRANT  */
  YYSYMBOL_GROUP = 101,                    /* GROUP  */
  YYSYMBOL_HAVING = 102,                   /* HAVING  */
  YYSYMBOL_HIGH_PRIORITY = 103,            /* HIGH_PRIORITY  */
  YYSYMBOL_HOUR_MICROSECOND = 104,         /* HOUR_MICROSECOND  */
  YYSYMBOL_HOUR_MINUTE = 105,              /* HOUR_MINUTE  */
  YYSYMBOL_HOUR_SECOND = 106,              /* HOUR_SECOND  */
  YYSYMBOL_IF = 107,                       /* IF  */
  YYSYMBOL_IGNORE = 108,                   /* IGNORE  */
  YYSYMBOL_IN = 109,                       /* IN  */
  YYSYMBOL_INDEX = 110,                    /* INDEX  */
  YYSYMBOL_INFILE = 111,                   /* INFILE  */
  YYSYMBOL_INNER = 112,                    /* INNER  */
  YYSYMBOL_INOUT = 113,                    /* INOUT  */
  YYSYMBOL_INSENSITIVE = 114,              /* INSENSITIVE  */
  YYSYMBOL_INSERT = 115,                   /* INSERT  */
  YYSYMBOL_INT = 116,                      /* INT  */
  YYSYMBOL_INTEGER = 117,                  /* INTEGER  */
  YYSYMBOL_INTERVAL = 118,                 /* INTERVAL  */
  YYSYMBOL_INTO = 119,                     /* INTO  */
  YYSYMBOL_ITERATE = 120,                  /* ITERATE  */
  YYSYMBOL_JOIN = 121,                     /* JOIN  */
  YYSYMBOL_KEY = 122,                      /* KEY  */
  YYSYMBOL_KEYS = 123,                     /* KEYS  */
  YYSYMBOL_KILL = 124,                     /* KILL  */
  YYSYMBOL_LEADING = 125,                  /* LEADING  */
  YYSYMBOL_LEAVE = 126,                    /* LEAVE  */
  YYSYMBOL_LEFT = 127,                     /* LEFT  */
  YYSYMBOL_LIKE = 128,                     /* LIKE  */
  YYSYMBOL_LIMIT = 129,                    /* LIMIT  */
  YYSYMBOL_LINES = 130,                    /* LINES  */
  YYSYMBOL_LOAD = 131,                     /* LOAD  */
  YYSYMBOL_LOCALTIME = 132,                /* LOCALTIME  */
  YYSYMBOL_LOCALTIMESTAMP = 133,           /* LOCALTIMESTAMP  */
  YYSYMBOL_LOCK = 134,                     /* LOCK  */
  YYSYMBOL_LONG = 135,                     /* LONG  */
  YYSYMBOL_LONGBLOB = 136,                 /* LONGBLOB  */
  YYSYMBOL_LONGTEXT = 137,                 /* LONGTEXT  */
  YYSYMBOL_LOOP = 138,                     /* LOOP  */
  YYSYMBOL_LOW_PRIORITY = 139,             /* LOW_PRIORITY  */
  YYSYMBOL_MATCH = 140,                    /* MATCH  */
  YYSYMBOL_MEDIUMBLOB = 141,               /* MEDIUMBLOB  */
  YYSYMBOL_MEDIUMINT = 142,                /* MEDIUMINT  */
  YYSYMBOL_MEDIUMTEXT = 143,               /* MEDIUMTEXT  */
  YYSYMBOL_MINUTE_MICROSECOND = 144,       /* MINUTE_MICROSECOND  */
  YYSYMBOL_MINUTE_SECOND = 145,            /* MINUTE_SECOND  */
  YYSYMBOL_MOD = 146,                      /* MOD  */
  YYSYMBOL_MODIFIES = 147,                 /* MODIFIES  */
  YYSYMBOL_NATURAL = 148,                  /* NATURAL  */
  YYSYMBOL_NOT = 149,                      /* NOT  */
  YYSYMBOL_NO_WRITE_TO_BINLOG = 150,       /* NO_WRITE_TO_BINLOG  */
  YYSYMBOL_NULLX = 151,                    /* NULLX  */
  YYSYMBOL_NUMBER = 152,                   /* NUMBER  */
  YYSYMBOL_ON = 153,                       /* ON  */
  YYSYMBOL_ONDUPLICATE = 154,              /* ONDUPLICATE  */
  YYSYMBOL_OPTIMIZE = 155,                 /* OPTIMIZE  */
  YYSYMBOL_OPTION = 156,                   /* OPTION  */
  YYSYMBOL_OPTIONALLY = 157,               /* OPTIONALLY  */
  YYSYMBOL_OR = 158,                       /* OR  */
  YYSYMBOL_ORDER = 159,                    /* ORDER  */
  YYSYMBOL_OUT = 160,                      /* OUT  */
  YYSYMBOL_OUTER = 161,                    /* OUTER  */
  YYSYMBOL_OUTFILE = 162,                  /* OUTFILE  */
  YYSYMBOL_PRECISION = 163,                /* PRECISION  */
  YYSYMBOL_PRIMARY = 164,                  /* PRIMARY  */
  YYSYMBOL_PROCEDURE = 165,                /* PROCEDURE  */
  YYSYMBOL_PURGE = 166,                    /* PURGE  */
  YYSYMBOL_QUICK = 167,                    /* QUICK  */
  YYSYMBOL_READ = 168,                     /* READ  */
  YYSYMBOL_READS = 169,                    /* READS  */
  YYSYMBOL_REAL = 170,                     /* REAL  */
  YYSYMBOL_REFERENCES = 171,               /* REFERENCES  */
  YYSYMBOL_REGEXP = 172,                   /* REGEXP  */
  YYSYMBOL_RELEASE = 173,                  /* RELEASE  */
  YYSYMBOL_RENAME = 174,                   /* RENAME  */
  YYSYMBOL_REPEAT = 175,                   /* REPEAT  */
  YYSYMBOL_REPLACE = 176,                  /* REPLACE  */
  YYSYMBOL_REQUIRE = 177,                  /* REQUIRE  */
  YYSYMBOL_RESTRICT = 178,                 /* RESTRICT  */
  YYSYMBOL_RETURN = 179,                   /* RETURN  */
  YYSYMBOL_REVOKE = 180,                   /* REVOKE  */
  YYSYMBOL_RIGHT = 181,                    /* RIGHT  */
  YYSYMBOL_ROLLUP = 182,                   /* ROLLUP  */
  YYSYMBOL_SCHEMA = 183,                   /* SCHEMA  */
  YYSYMBOL_SCHEMAS = 184,                  /* SCHEMAS  */
  YYSYMBOL_SECOND_MICROSECOND = 185,       /* SECOND_MICROSECOND  */
  YYSYMBOL_SELECT = 186,                   /* SELECT  */
  YYSYMBOL_SENSITIVE = 187,                /* SENSITIVE  */
  YYSYMBOL_SEPARATOR = 188,                /* SEPARATOR  */
  YYSYMBOL_SET = 189,                      /* SET  */
  YYSYMBOL_SHOW = 190,                     /* SHOW  */
  YYSYMBOL_SMALLINT = 191,                 /* SMALLINT  */
  YYSYMBOL_SOME = 192,                     /* SOME  */
  YYSYMBOL_SONAME = 193,                   /* SONAME  */
  YYSYMBOL_SPATIAL = 194,                  /* SPATIAL  */
  YYSYMBOL_SPECIFIC = 195,                 /* SPECIFIC  */
  YYSYMBOL_SQL = 196,                      /* SQL  */
  YYSYMBOL_SQLEXCEPTION = 197,             /* SQLEXCEPTION  */
  YYSYMBOL_SQLSTATE = 198,                 /* SQLSTATE  */
  YYSYMBOL_SQLWARNING = 199,               /* SQLWARNING  */
  YYSYMBOL_SQL_BIG_RESULT = 200,           /* SQL_BIG_RESULT  */
  YYSYMBOL_SQL_CALC_FOUND_ROWS = 201,      /* SQL_CALC_FOUND_ROWS  */
  YYSYMBOL_SQL_SMALL_RESULT = 202,         /* SQL_SMALL_RESULT  */
  YYSYMBOL_SSL = 203,                      /* SSL  */
  YYSYMBOL_STARTING = 204,                 /* STARTING  */
  YYSYMBOL_STRAIGHT_JOIN = 205,            /* STRAIGHT_JOIN  */
  YYSYMBOL_TABLE = 206,                    /* TABLE  */
  YYSYMBOL_TEMPORARY = 207,                /* TEMPORARY  */
  YYSYMBOL_TEXT = 208,                     /* TEXT  */
  YYSYMBOL_TERMINATED = 209,               /* TERMINATED  */
  YYSYMBOL_THEN = 210,                     /* THEN  */
  YYSYMBOL_TIME = 211,                     /* TIME  */
  YYSYMBOL_TIMESTAMP = 212,                /* TIMESTAMP  */
  YYSYMBOL_TINYBLOB = 213,                 /* TINYBLOB  */
  YYSYMBOL_TINYINT = 214,                  /* TINYINT  */
  YYSYMBOL_TINYTEXT = 215,                 /* TINYTEXT  */
  YYSYMBOL_TO = 216,                       /* TO  */
  YYSYMBOL_TRAILING = 217,                 /* TRAILING  */
  YYSYMBOL_TRIGGER = 218,                  /* TRIGGER  */
  YYSYMBOL_UNDO = 219,                     /* UNDO  */
  YYSYMBOL_UNION = 220,                    /* UNION  */
  YYSYMBOL_UNIQUE = 221,                   /* UNIQUE  */
  YYSYMBOL_UNLOCK = 222,                   /* UNLOCK  */
  YYSYMBOL_UNSIGNED = 223,                 /* UNSIGNED  */
  YYSYMBOL_UPDATE = 224,                   /* UPDATE  */
  YYSYMBOL_USAGE = 225,                    /* USAGE  */
  YYSYMBOL_USE = 226,                      /* USE  */
  YYSYMBOL_USING = 227,                    /* USING  */
  YYSYMBOL_UTC_DATE = 228,                 /* UTC_DATE  */
  YYSYMBOL_UTC_TIME = 229,                 /* UTC_TIME  */
  YYSYMBOL_UTC_TIMESTAMP = 230,            /* UTC_TIMESTAMP  */
  YYSYMBOL_VALUES = 231,                   /* VALUES  */
  YYSYMBOL_VARBINARY = 232,                /* VARBINARY  */
  YYSYMBOL_VARCHAR = 233,                  /* VARCHAR  */
  YYSYMBOL_VARYING = 234,                  /* VARYING  */
  YYSYMBOL_WHEN = 235,                     /* WHEN  */
  YYSYMBOL_WHERE = 236,                    /* WHERE  */
  YYSYMBOL_WHILE = 237,                    /* WHILE  */
  YYSYMBOL_WITH = 238,                     /* WITH  */
  YYSYMBOL_WRITE = 239,                    /* WRITE  */
  YYSYMBOL_XOR = 240,                      /* XOR  */
  YYSYMBOL_YEAR = 241,                     /* YEAR  */
  YYSYMBOL_YEAR_MONTH = 242,               /* YEAR_MONTH  */
  YYSYMBOL_ZEROFILL = 243,                 /* ZEROFILL  */
  YYSYMBOL_FSUBSTRING = 244,               /* FSUBSTRING  */
  YYSYMBOL_FTRIM = 245,                    /* FTRIM  */
  YYSYMBOL_FDATE_ADD = 246,                /* FDATE_ADD  */
  YYSYMBOL_FDATE_SUB = 247,                /* FDATE_SUB  */
  YYSYMBOL_FCOUNT = 248,                   /* FCOUNT  */
  YYSYMBOL_249_ = 249,                     /* ';'  */
  YYSYMBOL_250_ = 250,                     /* ','  */
  YYSYMBOL_251_ = 251,                     /* '.'  */
  YYSYMBOL_252_ = 252,                     /* '('  */
  YYSYMBOL_253_ = 253,                     /* ')'  */
  YYSYMBOL_YYACCEPT = 254,                 /* $accept  */
  YYSYMBOL_stmt_list = 255,                /* stmt_list  */
  YYSYMBOL_stmt = 256,                     /* stmt  */
  YYSYMBOL_select_stmt = 257,              /* select_stmt  */
  YYSYMBOL_opt_where = 258,                /* opt_where  */
  YYSYMBOL_opt_groupby = 259,              /* opt_groupby  */
  YYSYMBOL_groupby_list = 260,             /* groupby_list  */
  YYSYMBOL_opt_asc_desc = 261,             /* opt_asc_desc  */
  YYSYMBOL_opt_with_rollup = 262,          /* opt_with_rollup  */
  YYSYMBOL_opt_having = 263,               /* opt_having  */
  YYSYMBOL_opt_orderby = 264,              /* opt_orderby  */
  YYSYMBOL_opt_limit = 265,                /* opt_limit  */
  YYSYMBOL_opt_into_list = 266,            /* opt_into_list  */
  YYSYMBOL_column_list = 267,              /* column_list  */
  YYSYMBOL_select_opts = 268,              /* select_opts  */
  YYSYMBOL_select_expr_list = 269,         /* select_expr_list  */
  YYSYMBOL_select_expr = 270,              /* select_expr  */
  YYSYMBOL_table_references = 271,         /* table_references  */
  YYSYMBOL_table_reference = 272,          /* table_reference  */
  YYSYMBOL_table_factor = 273,             /* table_factor  */
  YYSYMBOL_opt_as = 274,                   /* opt_as  */
  YYSYMBOL_opt_as_alias = 275,             /* opt_as_alias  */
  YYSYMBOL_join_table = 276,               /* join_table  */
  YYSYMBOL_opt_inner_cross = 277,          /* opt_inner_cross  */
  YYSYMBOL_opt_outer = 278,                /* opt_outer  */
  YYSYMBOL_left_or_right = 279,            /* left_or_right  */
  YYSYMBOL_opt_left_or_right_outer = 280,  /* opt_left_or_right_outer  */
  YYSYMBOL_opt_join_condition = 281,       /* opt_join_condition  */
  YYSYMBOL_join_condition = 282,           /* join_condition  */
  YYSYMBOL_index_hint = 283,               /* index_hint  */
  YYSYMBOL_opt_for_join = 284,             /* opt_for_join  */
  YYSYMBOL_index_list = 285,               /* index_list  */
  YYSYMBOL_table_subquery = 286,           /* table_subquery  */
  YYSYMBOL_delete_stmt = 287,              /* delete_stmt  */
  YYSYMBOL_delete_opts = 288,              /* delete_opts  */
  YYSYMBOL_delete_list = 289,              /* delete_list  */
  YYSYMBOL_opt_dot_star = 290,             /* opt_dot_star  */
  YYSYMBOL_insert_stmt = 291,              /* insert_stmt  */
  YYSYMBOL_opt_ondupupdate = 292,          /* opt_ondupupdate  */
  YYSYMBOL_insert_opts = 293,              /* insert_opts  */
  YYSYMBOL_opt_into = 294,                 /* opt_into  */
  YYSYMBOL_opt_col_names = 295,            /* opt_col_names  */
  YYSYMBOL_insert_vals_list = 296,         /* insert_vals_list  */
  YYSYMBOL_insert_vals = 297,              /* insert_vals  */
  YYSYMBOL_insert_asgn_list = 298,         /* insert_asgn_list  */
  YYSYMBOL_replace_stmt = 299,             /* replace_stmt  */
  YYSYMBOL_update_stmt = 300,              /* update_stmt  */
  YYSYMBOL_update_opts = 301,              /* update_opts  */
  YYSYMBOL_update_asgn_list = 302,         /* update_asgn_list  */
  YYSYMBOL_create_database_stmt = 303,     /* create_database_stmt  */
  YYSYMBOL_opt_if_not_exists = 304,        /* opt_if_not_exists  */
  YYSYMBOL_create_table_stmt = 305,        /* create_table_stmt  */
  YYSYMBOL_create_col_list = 306,          /* create_col_list  */
  YYSYMBOL_create_definition = 307,        /* create_definition  */
  YYSYMBOL_308_1 = 308,                    /* $@1  */
  YYSYMBOL_column_atts = 309,              /* column_atts  */
  YYSYMBOL_opt_length = 310,               /* opt_length  */
  YYSYMBOL_opt_binary = 311,               /* opt_binary  */
  YYSYMBOL_opt_uz = 312,                   /* opt_uz  */
  YYSYMBOL_opt_csc = 313,                  /* opt_csc  */
  YYSYMBOL_data_type = 314,                /* data_type  */
  YYSYMBOL_enum_list = 315,                /* enum_list  */
  YYSYMBOL_create_select_statement = 316,  /* create_select_statement  */
  YYSYMBOL_opt_ignore_replace = 317,       /* opt_ignore_replace  */
  YYSYMBOL_opt_temporary = 318,            /* opt_temporary  */
  YYSYMBOL_set_stmt = 319,                 /* set_stmt  */
  YYSYMBOL_set_list = 320,                 /* set_list  */
  YYSYMBOL_set_expr = 321,                 /* set_expr  */
  YYSYMBOL_expr = 322,                     /* expr  */
  YYSYMBOL_val_list = 323,                 /* val_list  */
  YYSYMBOL_opt_val_list = 324,             /* opt_val_list  */
  YYSYMBOL_trim_ltb = 325,                 /* trim_ltb  */
  YYSYMBOL_interval_exp = 326,             /* interval_exp  */
  YYSYMBOL_case_list = 327                 /* case_list  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  31
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2326

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  254
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  74
/* YYNRULES -- Number of rules.  */
#define YYNRULES  300
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  620

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   494


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    12,     2,     2,     2,    21,    15,     2,
     252,   253,    19,    17,   250,    18,   251,    20,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   249,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    22,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    14,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    13,    16,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   301,   301,   302,   307,   310,   312,   318,   319,   321,
     322,   326,   328,   332,   333,   334,   337,   338,   341,   341,
     343,   343,   346,   346,   347,   350,   351,   354,   355,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   369,   370,
     371,   374,   376,   377,   380,   381,   385,   386,   388,   389,
     392,   393,   396,   397,   398,   402,   404,   406,   408,   410,
     414,   415,   416,   419,   420,   423,   424,   427,   428,   429,
     432,   432,   435,   436,   440,   442,   444,   446,   449,   450,
     453,   454,   457,   462,   465,   470,   471,   472,   473,   476,
     481,   482,   486,   486,   488,   496,   499,   505,   506,   509,
     510,   511,   512,   513,   516,   516,   519,   520,   523,   524,
     527,   528,   529,   530,   533,   539,   545,   548,   551,   554,
     560,   563,   569,   575,   581,   584,   591,   592,   593,   597,
     600,   603,   606,   614,   618,   619,   622,   623,   629,   632,
     636,   641,   646,   650,   656,   661,   662,   665,   665,   668,
     669,   670,   671,   672,   675,   676,   677,   678,   679,   680,
     681,   682,   683,   684,   685,   686,   687,   690,   691,   692,
     695,   696,   699,   700,   701,   704,   705,   706,   710,   711,
     712,   713,   714,   715,   716,   717,   718,   719,   720,   721,
     722,   723,   724,   725,   726,   727,   728,   729,   730,   731,
     732,   733,   734,   735,   736,   737,   738,   739,   742,   743,
     746,   749,   750,   751,   754,   755,   760,   763,   765,   765,
     768,   770,   775,   776,   777,   778,   779,   780,   781,   784,
     785,   786,   787,   788,   789,   790,   791,   792,   793,   794,
     795,   796,   797,   798,   799,   800,   801,   802,   803,   804,
     805,   808,   809,   810,   811,   814,   818,   819,   822,   823,
     826,   827,   828,   829,   830,   833,   837,   838,   840,   841,
     842,   843,   844,   847,   848,   849,   852,   853,   856,   857,
     858,   859,   860,   861,   862,   863,   864,   867,   868,   869,
     870,   873,   874,   877,   878,   881,   882,   885,   886,   887,
     890
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "NAME", "STRING",
  "INTNUM", "BOOL", "APPROXNUM", "USERVAR", "ASSIGN", "ANDOP", "IS", "'!'",
  "COMPARISON", "'|'", "'&'", "SHIFT", "'+'", "'-'", "'*'", "'/'", "'%'",
  "'^'", "UMINUS", "ADD", "ALL", "ALTER", "ANALYZE", "AND", "ANY", "AS",
  "ASC", "AUTO_INCREMENT", "BEFORE", "BETWEEN", "BIGINT", "BINARY", "BIT",
  "BLOB", "BOTH", "BY", "CALL", "CASCADE", "CASE", "CHANGE", "CHAR",
  "CHECK", "COLLATE", "COLUMN", "COMMENT", "CONDITION", "CONSTRAINT",
  "CONTINUE", "CONVERT", "CREATE", "CROSS", "CURRENT_DATE", "CURRENT_TIME",
  "CURRENT_TIMESTAMP", "CURRENT_USER", "CURSOR", "DATABASE", "DATABASES",
  "DATE", "DATETIME", "DAY_HOUR", "DAY_MICROSECOND", "DAY_MINUTE",
  "DAY_SECOND", "DECIMAL", "DECLARE", "DEFAULT", "DELAYED", "DELETE",
  "DESC", "DESCRIBE", "DETERMINISTIC", "DISTINCT", "DISTINCTROW", "DIV",
  "DOUBLE", "DROP", "DUAL", "EACH", "ELSE", "ELSEIF", "ENCLOSED", "END",
  "ENUM", "ESCAPED", "EXISTS", "EXIT", "EXPLAIN", "FETCH", "FLOAT", "FOR",
  "FORCE", "FOREIGN", "FROM", "FULLTEXT", "GRANT", "GROUP", "HAVING",
  "HIGH_PRIORITY", "HOUR_MICROSECOND", "HOUR_MINUTE", "HOUR_SECOND", "IF",
  "IGNORE", "IN", "INDEX", "INFILE", "INNER", "INOUT", "INSENSITIVE",
  "INSERT", "INT", "INTEGER", "INTERVAL", "INTO", "ITERATE", "JOIN", "KEY",
  "KEYS", "KILL", "LEADING", "LEAVE", "LEFT", "LIKE", "LIMIT", "LINES",
  "LOAD", "LOCALTIME", "LOCALTIMESTAMP", "LOCK", "LONG", "LONGBLOB",
  "LONGTEXT", "LOOP", "LOW_PRIORITY", "MATCH", "MEDIUMBLOB", "MEDIUMINT",
  "MEDIUMTEXT", "MINUTE_MICROSECOND", "MINUTE_SECOND", "MOD", "MODIFIES",
  "NATURAL", "NOT", "NO_WRITE_TO_BINLOG", "NULLX", "NUMBER", "ON",
  "ONDUPLICATE", "OPTIMIZE", "OPTION", "OPTIONALLY", "OR", "ORDER", "OUT",
  "OUTER", "OUTFILE", "PRECISION", "PRIMARY", "PROCEDURE", "PURGE",
  "QUICK", "READ", "READS", "REAL", "REFERENCES", "REGEXP", "RELEASE",
  "RENAME", "REPEAT", "REPLACE", "REQUIRE", "RESTRICT", "RETURN", "REVOKE",
  "RIGHT", "ROLLUP", "SCHEMA", "SCHEMAS", "SECOND_MICROSECOND", "SELECT",
  "SENSITIVE", "SEPARATOR", "SET", "SHOW", "SMALLINT", "SOME", "SONAME",
  "SPATIAL", "SPECIFIC", "SQL", "SQLEXCEPTION", "SQLSTATE", "SQLWARNING",
  "SQL_BIG_RESULT", "SQL_CALC_FOUND_ROWS", "SQL_SMALL_RESULT", "SSL",
  "STARTING", "STRAIGHT_JOIN", "TABLE", "TEMPORARY", "TEXT", "TERMINATED",
  "THEN", "TIME", "TIMESTAMP", "TINYBLOB", "TINYINT", "TINYTEXT", "TO",
  "TRAILING", "TRIGGER", "UNDO", "UNION", "UNIQUE", "UNLOCK", "UNSIGNED",
  "UPDATE", "USAGE", "USE", "USING", "UTC_DATE", "UTC_TIME",
  "UTC_TIMESTAMP", "VALUES", "VARBINARY", "VARCHAR", "VARYING", "WHEN",
  "WHERE", "WHILE", "WITH", "WRITE", "XOR", "YEAR", "YEAR_MONTH",
  "ZEROFILL", "FSUBSTRING", "FTRIM", "FDATE_ADD", "FDATE_SUB", "FCOUNT",
  "';'", "','", "'.'", "'('", "')'", "$accept", "stmt_list", "stmt",
  "select_stmt", "opt_where", "opt_groupby", "groupby_list",
  "opt_asc_desc", "opt_with_rollup", "opt_having", "opt_orderby",
  "opt_limit", "opt_into_list", "column_list", "select_opts",
  "select_expr_list", "select_expr", "table_references", "table_reference",
  "table_factor", "opt_as", "opt_as_alias", "join_table",
  "opt_inner_cross", "opt_outer", "left_or_right",
  "opt_left_or_right_outer", "opt_join_condition", "join_condition",
  "index_hint", "opt_for_join", "index_list", "table_subquery",
  "delete_stmt", "delete_opts", "delete_list", "opt_dot_star",
  "insert_stmt", "opt_ondupupdate", "insert_opts", "opt_into",
  "opt_col_names", "insert_vals_list", "insert_vals", "insert_asgn_list",
  "replace_stmt", "update_stmt", "update_opts", "update_asgn_list",
  "create_database_stmt", "opt_if_not_exists", "create_table_stmt",
  "create_col_list", "create_definition", "$@1", "column_atts",
  "opt_length", "opt_binary", "opt_uz", "opt_csc", "data_type",
  "enum_list", "create_select_statement", "opt_ignore_replace",
  "opt_temporary", "set_stmt", "set_list", "set_expr", "expr", "val_list",
  "opt_val_list", "trim_ltb", "interval_exp", "case_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,    33,   267,   124,    38,   268,    43,    45,    42,
      47,    37,    94,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,   412,   413,   414,   415,
     416,   417,   418,   419,   420,   421,   422,   423,   424,   425,
     426,   427,   428,   429,   430,   431,   432,   433,   434,   435,
     436,   437,   438,   439,   440,   441,   442,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,   480,   481,   482,   483,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,    59,
      44,    46,    40,    41
};
#endif

#define YYPACT_NINF (-402)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-141)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -34,   -33,  -402,  -402,  -402,  -402,    60,     0,    87,  -176,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,   -14,   -14,
    -402,  -107,    38,   292,   292,   188,   230,   -75,  -402,   190,
       1,  -402,   -65,  -402,   143,   255,   271,   -14,    35,   287,
    -402,  -402,  -402,   -81,  -402,  -402,  -402,  -402,  -402,   294,
     303,   -26,  -402,  -402,  -402,  -402,   286,   746,   746,  -402,
    -402,   746,   401,  -402,  -402,  -402,  -402,  -402,    56,  -402,
     746,  -402,  -402,  -402,  -402,    82,    83,    84,    98,   119,
     -80,  -402,  1344,   746,   746,    60,     2,     4,     8,    -1,
    -117,   167,  -402,  -402,   343,  -402,  -402,  -402,  -402,   389,
     382,  -402,    80,  -198,     1,   399,  -120,  -115,   400,   746,
     746,   407,  -402,  -402,   746,  1444,   -68,   232,   407,   746,
     320,   746,   746,   458,     1,   746,  -402,   746,    37,   122,
     746,   746,   746,   746,   746,   746,   746,   746,   746,   413,
     746,   178,   746,   746,   -88,   746,   746,   746,  -402,  1904,
    1904,  -402,   435,   -16,   193,  -167,   437,     1,  -402,  -402,
    -402,  -103,  -402,     1,   333,   299,  -402,   452,   -53,  -402,
     746,   308,     1,  -175,    35,   468,   469,  -140,   468,  -130,
    -402,  1070,  -402,   220,  1904,  1490,   -62,   746,  -402,   746,
     221,   921,   222,  -402,  -402,  -402,   235,   746,  1103,  1130,
     236,   859,  -175,  -402,  2108,  -402,    36,  -402,   238,   240,
     241,   232,   488,   645,   506,   322,   199,   199,   473,   473,
     473,  -402,  -402,  1609,   526,  2154,   473,   244,   746,   746,
    1926,  2154,  2086,    47,   375,   377,   378,  -402,  -402,  -402,
      -4,   -13,   167,   299,   299,   390,   345,     1,  -402,   391,
    -402,  -402,  -402,   510,   211,  -402,   343,  1904,   477,   406,
    -175,  -402,  -402,   505,  -131,  -402,   -42,   267,   366,  -131,
     267,   366,   746,  -402,   746,   746,  -402,  1654,  1676,  -402,
     746,  -402,  -402,  1732,   418,   418,  -402,  -402,   438,  -402,
    -402,   232,   232,   232,   288,   746,   289,   290,   526,  2154,
    2154,   -16,   445,   445,   445,   746,   542,   543,   308,  -402,
    -402,     1,   746,   -74,     1,   -38,   105,   295,   297,   429,
      11,  -402,   549,   232,   746,   746,  -402,  -402,   567,   432,
     552,  -402,   553,  -402,   583,  -106,  -402,  -402,  -106,  -402,
    -402,  1904,  1848,  -402,   746,   824,   746,   746,   304,   305,
     519,   459,   307,   310,   323,  -402,   465,  -402,  -402,   324,
     325,  -402,   460,   328,   340,   341,  1904,   581,    -3,   406,
    -402,  1904,   746,   344,  -402,  -402,   -74,   211,  -402,   346,
     347,   469,   469,   348,   211,  -100,  1948,  -402,   352,  1410,
    1172,  -402,  1904,   373,   591,  -402,  -402,    19,  1904,   353,
    -402,  -402,  -402,  1904,   746,  -402,   355,  1371,  -402,  -402,
     746,   746,   308,  -402,  -402,  -402,  -402,  -402,  -402,   603,
     603,   603,   746,   746,   606,  -402,  1904,   469,  -402,    32,
     469,   469,    39,    51,   469,  -402,  -402,   360,   360,   360,
    -402,   360,  -402,  -402,   360,   360,   361,   360,   360,   360,
    -402,   578,  -402,   360,   578,   360,   363,   360,   578,  -402,
    -402,  -402,   360,   578,   365,   368,  -402,  -402,   746,  -402,
    -402,  -402,   746,   468,   677,   719,  -402,   583,   886,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,   -79,
    1904,   406,  -402,    52,    96,   101,  1904,  1904,   605,   107,
     -73,   108,   141,  -402,  -402,   146,   616,  -402,  -402,  -402,
    -402,  -402,  -402,   618,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,   618,  -402,  -402,  -402,  -402,   622,   623,    17,
    1410,  1904,   379,  -402,  1904,  -402,  1904,   162,  -402,   448,
    -402,   512,   629,  -402,  -402,  -402,   746,  -402,  -402,  -402,
    -402,  -402,   164,  -172,   187,  -172,  -172,  -402,   189,  -172,
    -172,  -172,   187,  -172,   187,  -172,   198,  -172,   187,  -172,
     187,   380,   384,  -402,   631,   376,  -402,   491,  -402,   521,
    -109,  -402,  -402,  -402,   469,  -402,  -402,  1904,   639,  -402,
    -402,  -402,   461,   647,   649,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,   469,   405,   403,
     654,  -402,  -402,   187,   187,   187,   203,  -402,  -402,  -402
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,   214,    88,    99,    99,    29,     0,    99,     0,     0,
       4,    83,    95,   120,   124,   133,   138,   216,   136,   136,
     215,     0,     0,   105,   105,     0,     0,   217,   218,     0,
       0,     1,     0,     2,     0,     0,     0,   136,    92,     0,
      87,    85,    86,     0,   101,   102,   103,   104,   100,     0,
       0,   222,   225,   226,   228,   227,   223,     0,     0,    40,
      30,     0,     0,   298,   299,   297,    31,    32,     0,    33,
       0,    36,    37,    35,    34,     0,     0,     0,     0,     0,
       5,    38,    54,     0,     0,     0,   103,   100,    54,     0,
       0,    42,    44,    45,    51,     3,   137,   134,   135,     0,
       0,    90,     7,     0,     0,     0,   106,   106,     0,   258,
       0,   249,   235,   300,     0,     0,     0,     0,   248,     0,
       0,     0,     0,     0,     0,     0,    53,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    41,   221,
     220,   219,     0,    77,     0,     0,     0,     0,    62,    61,
      65,    69,    66,     0,     0,    63,    50,     0,   211,    93,
       0,    20,     0,     7,    92,     0,     0,     0,     0,     0,
     224,   256,   259,     0,   250,     0,     0,     0,   289,     0,
       0,   256,     0,   275,   273,   274,     0,     0,     0,     0,
       0,     0,     7,    39,   236,   253,     0,   251,     0,     0,
       0,     0,   239,   244,   245,   247,   229,   230,   231,   232,
     233,   246,    52,     0,     0,   293,   234,     0,     0,     0,
     237,   295,   238,    54,     0,     0,     0,    46,    82,    49,
       0,     7,    43,    63,    63,     0,    56,     0,    64,     0,
      48,   212,   213,     0,   147,   142,    51,     8,     0,    22,
       7,    89,    91,     0,    97,    27,     0,     0,    97,    97,
       0,    97,     0,   265,     0,     0,   287,     0,     0,   264,
       0,   268,   271,     0,     0,     0,   266,   267,     9,   254,
     252,     0,     0,     0,     0,     0,     0,     0,     0,   294,
     296,    77,    79,    79,    79,     0,     0,     0,    20,    67,
      68,     0,     0,    71,     0,   211,     0,     0,     0,     0,
       0,   145,     0,     0,     0,     0,    84,    94,     0,     0,
       0,   114,     0,   107,     0,    97,   115,   122,    97,   123,
     257,   291,     0,   290,     0,     0,     0,     0,     0,     0,
       0,    18,     0,     0,     0,   240,   255,   262,   260,     0,
       0,    47,     0,     0,     0,     0,   129,     0,     0,    22,
      59,    57,     0,     0,    55,    70,     0,   147,   144,     0,
       0,     0,     0,     0,   147,   211,     0,   210,    21,    13,
      23,   117,   116,     0,     0,    28,   111,     0,   110,     0,
      96,   121,   288,   292,     0,   269,     0,     0,   276,   277,
       0,     0,    20,   243,   241,   242,   263,   261,    78,     0,
       0,     0,     0,     0,     0,   125,    72,     0,    58,     0,
       0,     0,     0,     0,     0,   146,   141,   167,   167,   167,
     199,   167,   189,   192,   167,   167,     0,   167,   167,   167,
     201,   170,   200,   167,   170,   167,     0,   167,   170,   190,
     191,   198,   167,   170,     0,     0,   193,   154,     0,    14,
      15,    11,     0,     0,     0,     0,   108,     0,     0,   272,
     278,   279,   280,   281,   284,   285,   286,   283,   282,    16,
      19,    22,    80,     0,     0,     0,   130,   131,     0,     0,
     211,     0,     0,   151,   150,     0,     0,   172,   196,   178,
     175,   172,   172,     0,   172,   172,   172,   171,   175,   172,
     175,   172,     0,   172,   175,   172,   175,     0,     0,   148,
      13,    24,    98,   119,   118,   113,   112,     0,   270,     0,
      10,    25,     0,    76,    75,    74,     0,    73,   143,   152,
     153,   149,     0,   184,   194,   188,   186,   208,     0,   187,
     182,   183,   205,   181,   204,   185,     0,   180,   203,   179,
     202,     0,     0,   161,     0,     0,   165,     0,   156,     0,
       0,    12,   109,    17,     0,     6,    81,   132,     0,   168,
     173,   174,     0,     0,     0,   175,   175,   197,   175,   166,
     157,   158,   160,   159,   155,   164,   163,     0,    26,     0,
       0,   177,   209,   206,   207,   195,     0,   169,   176,   162
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -402,  -402,   651,   -63,   -78,  -402,   258,   139,  -402,  -402,
    -281,  -335,  -402,  -367,  -402,  -402,   545,   112,   514,  -157,
     416,   -44,  -402,  -402,    -2,  -402,  -402,  -402,   298,   385,
     -36,  -108,  -402,  -402,  -402,   637,   503,  -402,    49,   358,
     655,   571,   417,   213,  -177,  -402,  -402,  -402,  -402,  -402,
      28,  -402,   311,   309,  -402,  -402,   598,  -401,   336,  -243,
    -402,   169,  -303,  -402,  -402,  -402,  -402,   607,   -25,   -89,
    -402,  -402,   409,   582
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     8,     9,    10,   171,   351,   388,   471,   540,   412,
     259,   326,   585,   266,    25,    80,    81,    90,    91,    92,
     167,   148,    93,   164,   249,   165,   245,   374,   375,   237,
     363,   493,    94,    11,    22,    43,   101,    12,   331,    23,
      49,   177,   335,   397,   264,    13,    14,    30,   241,    15,
      35,    16,   320,   321,   322,   529,   507,   518,   553,   554,
     467,   558,   255,   256,    21,    17,    27,    28,   181,   182,
     183,   197,   348,   116
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      82,   269,    88,  -126,    88,  -128,   246,  -127,   251,   305,
     423,   126,   378,   606,   432,   433,   187,   104,   124,   188,
       1,   227,   275,   329,   243,   276,   154,   369,    18,   172,
     192,   196,   111,   112,   425,   251,   113,   115,   139,     2,
     228,    38,   289,   205,   153,   118,     5,    36,   329,   573,
     126,   590,   105,   520,   190,   251,     5,   524,   149,   150,
     499,   170,   526,   501,   502,    99,   574,   505,    26,   175,
     251,   591,   156,    33,   178,   157,   252,   139,   244,   372,
     234,     3,   436,   157,   229,   184,   239,    31,   575,   185,
     313,   267,   235,    34,   191,   261,   198,   199,   201,    37,
      82,   270,   204,   252,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   268,   223,   271,   225,   226,   330,
     230,   231,   232,   252,   288,    51,    52,    53,    54,    55,
      56,   491,   176,   157,    57,   297,    39,   176,   252,   576,
      58,     1,     4,   607,   399,   257,    40,   208,   294,  -139,
      19,   209,     5,   373,   370,     6,   541,   376,    61,   539,
       2,   296,   277,   308,   278,    62,   577,   189,   578,   105,
     125,   468,   283,   189,    20,    85,  -140,    41,    63,    64,
      65,   579,   327,   340,    95,     5,   206,   290,   207,   301,
       7,    51,    52,    53,    54,    55,    56,   548,   253,   254,
      57,   155,     3,   299,   300,    42,    58,    59,   332,   360,
     236,   333,    68,    60,   377,   379,   173,   608,   135,   136,
     137,   138,   158,   170,    61,   108,   109,   380,   352,   353,
     354,    62,   592,    96,   593,   359,   202,   307,   580,    83,
     616,   309,   310,    84,    63,    64,    65,   306,   424,   341,
     342,    89,  -126,    89,  -128,   345,  -127,   406,    97,   152,
     387,   384,    44,     4,   385,    66,    67,   364,   365,   475,
     356,    70,   476,     5,    98,   562,     6,   564,    68,   159,
     366,   568,   384,   570,   260,   500,   100,   371,   -60,   332,
     102,    69,   503,    45,   160,   110,   532,   106,    86,   389,
     390,   332,   542,   392,   504,   543,   107,   -92,   117,   398,
     316,     7,   494,   495,   210,   161,   170,   336,   337,   403,
     339,   317,   407,    51,    52,    53,    54,    55,    56,    87,
     -92,   100,    57,   318,   119,   120,   121,    70,    58,   133,
     134,   135,   136,   137,   138,   143,   542,   426,   162,   544,
     122,   542,   613,   614,   545,   615,    61,   332,   332,   193,
     547,   549,    24,    62,    44,    29,    75,    76,    77,    78,
      79,   123,   163,   166,   211,   319,    63,    64,    65,   478,
     600,   601,   602,   603,   400,   389,   490,   401,    71,    72,
      73,   332,   168,    74,   550,    45,   332,   496,   497,   551,
      46,   169,   174,   180,    51,    52,    53,    54,    55,    56,
      68,    47,   475,    57,   588,   582,   222,   589,     5,    58,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     224,    48,    75,    76,    77,    78,    79,    61,   233,   594,
     240,   140,   595,   530,    62,   194,   238,   531,   594,   534,
     536,   596,   398,   332,   247,   250,   619,    63,    64,    65,
     248,    51,    52,    53,    54,    55,    56,   258,   143,    70,
      57,   263,   265,   273,   279,   281,    58,   200,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   282,   286,
     291,    68,   292,   293,    61,   138,   298,   302,   312,   303,
     304,    62,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   311,   314,   315,    63,    64,    65,   324,   328,   334,
     329,   587,   132,   133,   134,   135,   136,   137,   138,    51,
      52,    53,    54,    55,    56,   325,   347,   195,    57,   350,
     362,   355,   357,   358,    58,   367,   368,   381,    68,   382,
      70,   383,   386,   143,   393,   394,   395,   408,   409,   410,
     413,   411,    61,   414,    75,    76,    77,    78,    79,    62,
      51,    52,    53,    54,    55,    56,   415,   416,   417,    57,
     419,   418,    63,    64,    65,    58,    51,    52,    53,    54,
      55,    56,   420,   421,   422,    57,   427,   473,   430,   431,
     434,    58,   468,    61,   474,   477,   492,    70,   479,   498,
      62,   143,   506,   513,   517,   522,    68,   527,   546,    61,
     528,   552,   557,    63,    64,    65,    62,   571,   572,   330,
     583,   584,   586,   597,   143,   599,   114,   598,   391,    63,
      64,    65,   604,   605,   609,    75,    76,    77,    78,    79,
     610,   611,   143,   612,   396,   332,   617,    68,   618,    32,
     131,   132,   133,   134,   135,   136,   137,   138,   489,   581,
     203,   242,   323,    68,   428,    70,   103,   262,   179,    50,
      51,    52,    53,    54,    55,    56,   361,   338,   429,    57,
     537,   566,   151,   435,   349,    58,     0,   186,     0,     0,
       0,     0,    75,    76,    77,    78,    79,     0,     0,     0,
       0,     0,     5,    61,     0,     0,    70,     0,     0,     0,
      62,     0,    51,    52,    53,    54,    55,    56,     0,     0,
       0,    57,    70,    63,    64,    65,     0,    58,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   533,    51,
      52,    53,    54,    55,    56,    61,     0,     0,    57,     0,
       0,     0,    62,     0,    58,     0,     0,    68,     0,     0,
      75,    76,    77,    78,    79,    63,    64,    65,     0,     0,
       0,     0,    61,     0,     0,     0,     0,     0,     0,    62,
     535,   143,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    63,    64,    65,     0,     0,     0,     0,    68,
       0,    75,    76,    77,    78,    79,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    70,    75,    76,    77,
      78,    79,     0,     0,   127,   128,    68,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   555,   556,     0,
     559,   560,   561,     0,     0,   563,     0,   565,   140,   567,
       0,   569,     0,     0,     0,     0,     0,     0,    70,   127,
     128,     0,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   140,     0,    70,   127,   128,     0,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   404,
     140,    75,    76,    77,    78,    79,     0,     0,     0,     0,
       0,   127,   128,   141,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,     0,     0,     0,     0,     0,     0,
       0,     0,   142,     0,     0,   140,     0,     0,     0,     0,
       0,     0,     0,    75,    76,    77,    78,    79,   141,     0,
     143,     0,     0,   144,     0,     0,     0,     0,     0,     0,
       0,     0,   145,     0,     0,     0,     0,   142,     0,     0,
      75,    76,    77,    78,    79,   141,   146,     0,     0,     0,
       0,     0,     0,     0,     0,   143,     0,     0,   144,     0,
       0,     0,     0,     0,   142,     0,     0,   145,     0,   280,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     141,   146,   143,     0,     0,   144,   508,   509,     0,   510,
       0,     0,   511,   512,   145,   514,   515,   516,     0,   142,
       0,   519,     0,   521,     0,   523,     0,     0,   146,     0,
     525,     0,     0,     0,   147,     0,     0,   143,     0,     0,
     144,     0,     0,     0,     0,     0,     0,   405,     0,   145,
     127,   128,     0,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   146,     0,     0,     0,     0,     0,   147,
       0,     0,     0,     0,   140,     0,     0,     0,     0,     0,
       0,     0,   287,   127,   128,     0,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   147,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   140,     0,   538,
     127,   128,     0,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,     0,     0,     0,     0,     0,     0,     0,
       0,   147,     0,     0,   140,     0,     0,     0,     0,     0,
       0,   272,     0,     0,     0,     0,     0,     0,     0,   141,
       0,     0,   127,   128,     0,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,     0,     0,     0,   142,     0,
       0,     0,     0,     0,     0,     0,   140,     0,     0,     0,
       0,     0,   141,     0,     0,     0,   143,     0,     0,   144,
       0,     0,     0,     0,     0,     0,     0,     0,   145,     0,
       0,   142,     0,     0,     0,     0,     0,     0,     0,   141,
       0,     0,   146,     0,     0,     0,     0,     0,     0,   143,
       0,     0,   144,     0,     0,     0,     0,     0,   142,     0,
       0,   145,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   146,   143,     0,     0,   144,
       0,   141,     0,     0,     0,     0,     0,     0,   145,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     142,     0,   146,     0,     0,     0,     0,     0,     0,     0,
     147,     0,     0,     0,     0,     0,     0,     0,   143,     0,
     272,   144,     0,     0,     0,     0,     0,     0,     0,     0,
     145,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   147,   146,     0,     0,   126,     0,     0,
       0,     0,     0,   284,   127,   128,     0,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,     0,     0,     0,
     147,     0,     0,     0,   139,     0,     0,     0,   140,     0,
     285,   127,   128,     0,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   140,     0,     0,     0,     0,
       0,     0,   147,     0,     0,     0,     0,     0,     0,     0,
     127,   128,   472,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,     0,     0,     0,   480,   481,   482,   483,
       0,   469,     0,     0,   140,     0,     0,     0,     0,     0,
       0,     0,     0,   141,   127,   128,     0,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,     0,     0,     0,
       0,     0,   142,     0,     0,   484,   485,   486,   140,     0,
     141,     0,     0,     0,   470,     0,     0,     0,     0,     0,
     143,     0,     0,   144,     0,     0,     0,     0,     0,   142,
     127,   128,   145,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,     0,     0,     0,   146,   143,     0,   141,
     144,     0,     0,     0,   140,     0,     0,     0,     0,   145,
       0,     0,     0,     0,     0,     0,     0,     0,   142,     0,
       0,     0,     0,   146,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   141,     0,     0,   143,     0,     0,   144,
       0,     0,     0,     0,     0,     0,     0,     0,   145,     0,
       0,     0,   142,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   146,     0,   147,     0,     0,     0,     0,     0,
     143,     0,     0,   144,     0,     0,     0,     0,     0,   141,
       0,     0,   145,     0,     0,     0,     0,     0,     0,     0,
       0,   147,   487,   488,     0,     0,   146,     0,   142,   127,
     128,     0,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,     0,     0,     0,     0,   143,   295,     0,   144,
       0,     0,     0,   140,     0,     0,     0,     0,   145,     0,
     147,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   146,     0,   127,   128,     0,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,     0,     0,   114,
       0,     0,     0,     0,   147,     0,   127,   128,   140,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,     0,
     274,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     140,     0,     0,     0,     0,     0,     0,     0,   141,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     147,     0,     0,     0,     0,     0,     0,   142,     0,     0,
       0,   343,   127,   128,     0,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   143,     0,     0,   144,     0,
       0,     0,     0,   141,     0,     0,   140,   145,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   146,   142,     0,     0,   141,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     143,     0,     0,   144,   142,     0,     0,     0,     0,     0,
       0,     0,   145,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   143,     0,     0,   144,   146,     0,     0,     0,
     346,     0,     0,     0,   145,     0,     0,     0,     0,     0,
       0,   141,     0,     0,     0,     0,     0,     0,   146,   147,
       0,     0,     0,     0,     0,     0,     0,     0,   127,   128,
     142,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,     0,     0,     0,     0,     0,     0,     0,   143,     0,
       0,   144,   140,     0,     0,     0,   344,     0,     0,     0,
     145,     0,     0,     0,   147,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   146,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   127,   128,   147,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,     0,     0,     0,
       0,     0,     0,     0,     0,   402,   127,   128,   140,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,     0,
       0,     0,     0,     0,     0,     0,     0,   141,     0,     0,
     140,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   147,     0,     0,     0,   142,     0,     0,     0,
       0,     0,     0,   437,   438,   439,   440,     0,     0,     0,
       0,     0,     0,   441,   143,     0,     0,   144,     0,     0,
       0,     0,     0,     0,     0,     0,   145,     0,     0,     0,
       0,   442,   443,   141,     0,     0,     0,   444,     0,     0,
     146,     0,     0,     0,     0,     0,     0,     0,   445,     0,
       0,     0,   142,     0,     0,   141,   446,     0,     0,     0,
       0,     0,   447,     0,     0,     0,     0,     0,     0,     0,
     143,     0,     0,   144,   142,     0,     0,     0,     0,     0,
       0,     0,   145,     0,   448,   449,     0,     0,     0,     0,
       0,     0,   143,     0,     0,   144,   146,     0,     0,     0,
       0,     0,     0,     0,   450,   451,     0,     0,   147,   452,
     453,   454,     0,     0,     0,     0,   127,   128,   146,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   455,   128,
     140,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,     0,     0,     0,     0,     0,     0,   456,     0,   457,
       0,     0,   140,     0,   147,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   458,     0,     0,   459,
     460,   461,   462,   463,     0,  -141,   147,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,     0,     0,     0,
     464,   465,     0,     0,     0,     0,     0,     0,   140,   466,
       0,     0,     0,     0,     0,   141,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   142,     0,     0,   141,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   143,     0,     0,   144,   142,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   143,     0,     0,   144,   146,     0,
       0,     0,     0,  -141,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     146,     0,  -141,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     143,     0,     0,   144,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -141
};

static const yytype_int16 yycheck[] =
{
      25,   178,     3,     3,     3,     3,   163,     3,   108,    13,
      13,     3,   315,   122,   381,   382,    84,    98,    98,    87,
      54,   109,    84,   154,   127,    87,    89,   308,    61,   227,
     119,   120,    57,    58,   369,   108,    61,    62,    30,    73,
     128,     3,     6,     6,    88,    70,   186,    19,   154,    32,
       3,   223,   250,   454,   117,   108,   186,   458,    83,    84,
     427,   236,   463,   430,   431,    37,    49,   434,     8,   189,
     108,   243,   189,   249,   189,   250,   176,    30,   181,   153,
      96,   115,   385,   250,   172,   110,   253,     0,    71,   114,
     247,   231,   108,   107,   119,   173,   121,   122,   123,   206,
     125,   231,   127,   176,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   177,   140,   179,   142,   143,   250,
     145,   146,   147,   176,   202,     3,     4,     5,     6,     7,
       8,   412,   252,   250,    12,   224,    98,   252,   176,   122,
      18,    54,   176,   252,   250,   170,   108,    25,   211,   249,
     183,    29,   186,   227,   311,   189,   491,   314,    36,   238,
      73,   224,   187,   241,   189,    43,   149,   235,   151,   250,
     250,   250,   197,   235,   207,   250,   249,   139,    56,    57,
      58,   164,   260,   272,   249,   186,   149,   151,   151,   233,
     224,     3,     4,     5,     6,     7,     8,   500,   251,   252,
      12,    89,   115,   228,   229,   167,    18,    19,   250,   298,
     226,   253,    90,    25,   252,   110,   104,   584,    19,    20,
      21,    22,    55,   236,    36,   251,   252,   122,   291,   292,
     293,    43,    45,    90,    47,   298,   124,   250,   221,     9,
     607,   243,   244,    13,    56,    57,    58,   251,   251,   274,
     275,   252,   252,   252,   252,   280,   252,   346,     3,   251,
     323,   250,    72,   176,   253,    77,    78,   303,   304,   250,
     295,   149,   253,   186,     3,   518,   189,   520,    90,   112,
     305,   524,   250,   526,   172,   253,   251,   312,   121,   250,
       3,   103,   253,   103,   127,     9,   473,     3,   108,   324,
     325,   250,   250,   328,   253,   253,     3,   227,   252,   334,
      99,   224,   420,   421,   192,   148,   236,   268,   269,   344,
     271,   110,   347,     3,     4,     5,     6,     7,     8,   139,
     250,   251,    12,   122,   252,   252,   252,   149,    18,    17,
      18,    19,    20,    21,    22,   146,   250,   372,   181,   253,
     252,   250,   595,   596,   253,   598,    36,   250,   250,    39,
     253,   253,     4,    43,    72,     7,   244,   245,   246,   247,
     248,   252,   205,    30,   252,   164,    56,    57,    58,   404,
       4,     5,     6,     7,   335,   410,   411,   338,   200,   201,
     202,   250,     3,   205,   253,   103,   250,   422,   423,   253,
     108,    19,     3,     3,     3,     4,     5,     6,     7,     8,
      90,   119,   250,    12,   250,   253,     3,   253,   186,    18,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
     252,   139,   244,   245,   246,   247,   248,    36,     3,   250,
       3,    34,   253,   468,    43,   125,   253,   472,   250,   474,
     475,   253,   477,   250,   121,     3,   253,    56,    57,    58,
     161,     3,     4,     5,     6,     7,     8,   159,   146,   149,
      12,     3,     3,   253,   253,   253,    18,    19,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,   253,   253,
     252,    90,   252,   252,    36,    22,   252,   122,   153,   122,
     122,    43,    14,    15,    16,    17,    18,    19,    20,    21,
      22,   121,   121,     3,    56,    57,    58,    40,    13,   252,
     154,   546,    16,    17,    18,    19,    20,    21,    22,     3,
       4,     5,     6,     7,     8,   129,   118,   217,    12,   101,
      95,   253,   253,   253,    18,     3,     3,   252,    90,   252,
     149,   122,     3,   146,   122,     3,     3,   253,   253,    40,
     253,   102,    36,   253,   244,   245,   246,   247,   248,    43,
       3,     4,     5,     6,     7,     8,   253,   253,   253,    12,
     252,   121,    56,    57,    58,    18,     3,     4,     5,     6,
       7,     8,   252,   252,    13,    12,   252,   224,   252,   252,
     252,    18,   250,    36,    13,   252,     3,   149,   253,     3,
      43,   146,   252,   252,    36,   252,    90,   252,    13,    36,
     252,     5,     4,    56,    57,    58,    43,     5,     5,   250,
     182,   119,     3,   253,   146,     4,   235,   253,    71,    56,
      57,    58,   151,   122,     5,   244,   245,   246,   247,   248,
     189,     4,   146,     4,    71,   250,   253,    90,     4,     8,
      15,    16,    17,    18,    19,    20,    21,    22,   410,   530,
     125,   157,   256,    90,   376,   149,    39,   174,   107,    24,
       3,     4,     5,     6,     7,     8,   301,   270,   377,    12,
     477,   522,    85,   384,   285,    18,    -1,   115,    -1,    -1,
      -1,    -1,   244,   245,   246,   247,   248,    -1,    -1,    -1,
      -1,    -1,   186,    36,    -1,    -1,   149,    -1,    -1,    -1,
      43,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    12,   149,    56,    57,    58,    -1,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,     3,
       4,     5,     6,     7,     8,    36,    -1,    -1,    12,    -1,
      -1,    -1,    43,    -1,    18,    -1,    -1,    90,    -1,    -1,
     244,   245,   246,   247,   248,    56,    57,    58,    -1,    -1,
      -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      71,   146,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    56,    57,    58,    -1,    -1,    -1,    -1,    90,
      -1,   244,   245,   246,   247,   248,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   149,   244,   245,   246,
     247,   248,    -1,    -1,    10,    11,    90,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,   511,   512,    -1,
     514,   515,   516,    -1,    -1,   519,    -1,   521,    34,   523,
      -1,   525,    -1,    -1,    -1,    -1,    -1,    -1,   149,    10,
      11,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    -1,   149,    10,    11,    -1,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,
      34,   244,   245,   246,   247,   248,    -1,    -1,    -1,    -1,
      -1,    10,    11,   109,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   128,    -1,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   244,   245,   246,   247,   248,   109,    -1,
     146,    -1,    -1,   149,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   158,    -1,    -1,    -1,    -1,   128,    -1,    -1,
     244,   245,   246,   247,   248,   109,   172,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   146,    -1,    -1,   149,    -1,
      -1,    -1,    -1,    -1,   128,    -1,    -1,   158,    -1,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     109,   172,   146,    -1,    -1,   149,   438,   439,    -1,   441,
      -1,    -1,   444,   445,   158,   447,   448,   449,    -1,   128,
      -1,   453,    -1,   455,    -1,   457,    -1,    -1,   172,    -1,
     462,    -1,    -1,    -1,   240,    -1,    -1,   146,    -1,    -1,
     149,    -1,    -1,    -1,    -1,    -1,    -1,   253,    -1,   158,
      10,    11,    -1,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,   172,    -1,    -1,    -1,    -1,    -1,   240,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   253,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,   240,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,   253,
      10,    11,    -1,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   240,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,   250,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,
      -1,    -1,    10,    11,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,   128,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,
      -1,    -1,   109,    -1,    -1,    -1,   146,    -1,    -1,   149,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,
      -1,   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,
      -1,    -1,   172,    -1,    -1,    -1,    -1,    -1,    -1,   146,
      -1,    -1,   149,    -1,    -1,    -1,    -1,    -1,   128,    -1,
      -1,   158,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   172,   146,    -1,    -1,   149,
      -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     128,    -1,   172,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     240,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   146,    -1,
     250,   149,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     158,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   240,   172,    -1,    -1,     3,    -1,    -1,
      -1,    -1,    -1,   250,    10,    11,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
     240,    -1,    -1,    -1,    30,    -1,    -1,    -1,    34,    -1,
     250,    10,    11,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,   240,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,   250,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    65,    66,    67,    68,
      -1,    31,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   109,    10,    11,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,   128,    -1,    -1,   104,   105,   106,    34,    -1,
     109,    -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,
     146,    -1,    -1,   149,    -1,    -1,    -1,    -1,    -1,   128,
      10,    11,   158,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,   172,   146,    -1,   109,
     149,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,   158,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   128,    -1,
      -1,    -1,    -1,   172,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   109,    -1,    -1,   146,    -1,    -1,   149,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,
      -1,    -1,   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   172,    -1,   240,    -1,    -1,    -1,    -1,    -1,
     146,    -1,    -1,   149,    -1,    -1,    -1,    -1,    -1,   109,
      -1,    -1,   158,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   240,   241,   242,    -1,    -1,   172,    -1,   128,    10,
      11,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,   146,    28,    -1,   149,
      -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,   158,    -1,
     240,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   172,    -1,    10,    11,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,   235,
      -1,    -1,    -1,    -1,   240,    -1,    10,    11,    34,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
     210,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     240,    -1,    -1,    -1,    -1,    -1,    -1,   128,    -1,    -1,
      -1,    87,    10,    11,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,   146,    -1,    -1,   149,    -1,
      -1,    -1,    -1,   109,    -1,    -1,    34,   158,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   172,   128,    -1,    -1,   109,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     146,    -1,    -1,   149,   128,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   158,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   146,    -1,    -1,   149,   172,    -1,    -1,    -1,
      98,    -1,    -1,    -1,   158,    -1,    -1,    -1,    -1,    -1,
      -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,   172,   240,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
     128,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   146,    -1,
      -1,   149,    34,    -1,    -1,    -1,   210,    -1,    -1,    -1,
     158,    -1,    -1,    -1,   240,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   172,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,   240,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    10,    11,    34,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   240,    -1,    -1,    -1,   128,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    36,    37,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    45,   146,    -1,    -1,   149,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,    -1,
      -1,    63,    64,   109,    -1,    -1,    -1,    69,    -1,    -1,
     172,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,
      -1,    -1,   128,    -1,    -1,   109,    88,    -1,    -1,    -1,
      -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     146,    -1,    -1,   149,   128,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   158,    -1,   116,   117,    -1,    -1,    -1,    -1,
      -1,    -1,   146,    -1,    -1,   149,   172,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   136,   137,    -1,    -1,   240,   141,
     142,   143,    -1,    -1,    -1,    -1,    10,    11,   172,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   170,    11,
      34,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    -1,    -1,   189,    -1,   191,
      -1,    -1,    34,    -1,   240,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   208,    -1,    -1,   211,
     212,   213,   214,   215,    -1,    11,   240,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
     232,   233,    -1,    -1,    -1,    -1,    -1,    -1,    34,   241,
      -1,    -1,    -1,    -1,    -1,   109,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   128,    -1,    -1,   109,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   146,    -1,    -1,   149,   128,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   146,    -1,    -1,   149,   172,    -1,
      -1,    -1,    -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     172,    -1,   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     146,    -1,    -1,   149,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   172
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,    54,    73,   115,   176,   186,   189,   224,   255,   256,
     257,   287,   291,   299,   300,   303,   305,   319,    61,   183,
     207,   318,   288,   293,   293,   268,     8,   320,   321,   293,
     301,     0,   256,   249,   107,   304,   304,   206,     3,    98,
     108,   139,   167,   289,    72,   103,   108,   119,   139,   294,
     294,     3,     4,     5,     6,     7,     8,    12,    18,    19,
      25,    36,    43,    56,    57,    58,    77,    78,    90,   103,
     149,   200,   201,   202,   205,   244,   245,   246,   247,   248,
     269,   270,   322,     9,    13,   250,   108,   139,     3,   252,
     271,   272,   273,   276,   286,   249,    90,     3,     3,   304,
     251,   290,     3,   289,    98,   250,     3,     3,   251,   252,
       9,   322,   322,   322,   235,   322,   327,   252,   322,   252,
     252,   252,   252,   252,    98,   250,     3,    10,    11,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    30,
      34,   109,   128,   146,   149,   158,   172,   240,   275,   322,
     322,   321,   251,   275,   257,   271,   189,   250,    55,   112,
     127,   148,   181,   205,   277,   279,    30,   274,     3,    19,
     236,   258,   227,   271,     3,   189,   252,   295,   189,   295,
       3,   322,   323,   324,   322,   322,   327,    84,    87,   235,
     257,   322,   323,    39,   125,   217,   323,   325,   322,   322,
      19,   322,   271,   270,   322,     6,   149,   151,    25,    29,
     192,   252,   322,   322,   322,   322,   322,   322,   322,   322,
     322,   322,     3,   322,   252,   322,   322,   109,   128,   172,
     322,   322,   322,     3,    96,   108,   226,   283,   253,   253,
       3,   302,   272,   127,   181,   280,   273,   121,   161,   278,
       3,   108,   176,   251,   252,   316,   317,   322,   159,   264,
     271,   258,   290,     3,   298,     3,   267,   231,   257,   298,
     231,   257,   250,   253,   210,    84,    87,   322,   322,   253,
      98,   253,   253,   322,   250,   250,   253,   253,   258,     6,
     151,   252,   252,   252,   257,    28,   257,   323,   252,   322,
     322,   275,   122,   122,   122,    13,   251,   250,   258,   278,
     278,   121,   153,   273,   121,     3,    99,   110,   122,   164,
     306,   307,   308,   274,    40,   129,   265,   258,    13,   154,
     250,   292,   250,   253,   252,   296,   292,   292,   296,   292,
     323,   322,   322,    87,   210,   322,    98,   118,   326,   326,
     101,   259,   257,   257,   257,   253,   322,   253,   253,   257,
     323,   283,    95,   284,   284,   284,   322,     3,     3,   264,
     273,   322,   153,   227,   281,   282,   273,   252,   316,   110,
     122,   252,   252,   122,   250,   253,     3,   257,   260,   322,
     322,    71,   322,   122,     3,     3,    71,   297,   322,   250,
     292,   292,    87,   322,    95,   253,   323,   322,   253,   253,
      40,   102,   263,   253,   253,   253,   253,   253,   121,   252,
     252,   252,    13,    13,   251,   265,   322,   252,   282,   306,
     252,   252,   267,   267,   252,   307,   316,    35,    36,    37,
      38,    45,    63,    64,    69,    80,    88,    94,   116,   117,
     136,   137,   141,   142,   143,   170,   189,   191,   208,   211,
     212,   213,   214,   215,   232,   233,   241,   314,   250,    31,
      74,   261,   250,   224,    13,   250,   253,   252,   322,   253,
      65,    66,    67,    68,   104,   105,   106,   241,   242,   260,
     322,   264,     3,   285,   285,   285,   322,   322,     3,   267,
     253,   267,   267,   253,   253,   267,   252,   310,   310,   310,
     310,   310,   310,   252,   310,   310,   310,    36,   311,   310,
     311,   310,   252,   310,   311,   310,   311,   252,   252,   309,
     322,   322,   298,    71,   322,    71,   322,   297,   253,   238,
     262,   265,   250,   253,   253,   253,    13,   253,   316,   253,
     253,   253,     5,   312,   313,   312,   312,     4,   315,   312,
     312,   312,   313,   312,   313,   312,   315,   312,   313,   312,
     313,     5,     5,    32,    49,    71,   122,   149,   151,   164,
     221,   261,   253,   182,   119,   266,     3,   322,   250,   253,
     223,   243,    45,    47,   250,   253,   253,   253,   253,     4,
       4,     5,     6,     7,   151,   122,   122,   252,   267,     5,
     189,     4,     4,   313,   313,   313,   267,   253,     4,   253
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   254,   255,   255,   256,   257,   257,   258,   258,   259,
     259,   260,   260,   261,   261,   261,   262,   262,   263,   263,
     264,   264,   265,   265,   265,   266,   266,   267,   267,   268,
     268,   268,   268,   268,   268,   268,   268,   268,   269,   269,
     269,   270,   271,   271,   272,   272,   273,   273,   273,   273,
     274,   274,   275,   275,   275,   276,   276,   276,   276,   276,
     277,   277,   277,   278,   278,   279,   279,   280,   280,   280,
     281,   281,   282,   282,   283,   283,   283,   283,   284,   284,
     285,   285,   286,   256,   287,   288,   288,   288,   288,   287,
     289,   289,   290,   290,   287,   256,   291,   292,   292,   293,
     293,   293,   293,   293,   294,   294,   295,   295,   296,   296,
     297,   297,   297,   297,   291,   291,   298,   298,   298,   298,
     256,   299,   299,   299,   256,   300,   301,   301,   301,   302,
     302,   302,   302,   256,   303,   303,   304,   304,   256,   305,
     305,   305,   305,   305,   305,   306,   306,   308,   307,   307,
     307,   307,   307,   307,   309,   309,   309,   309,   309,   309,
     309,   309,   309,   309,   309,   309,   309,   310,   310,   310,
     311,   311,   312,   312,   312,   313,   313,   313,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   315,   315,
     316,   317,   317,   317,   318,   318,   256,   319,   320,   320,
     321,   321,   322,   322,   322,   322,   322,   322,   322,   322,
     322,   322,   322,   322,   322,   322,   322,   322,   322,   322,
     322,   322,   322,   322,   322,   322,   322,   322,   322,   322,
     322,   322,   322,   322,   322,   322,   323,   323,   324,   324,
     322,   322,   322,   322,   322,   322,   322,   322,   322,   322,
     322,   322,   322,   325,   325,   325,   322,   322,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   322,   322,   322,
     322,   327,   327,   322,   322,   322,   322,   322,   322,   322,
     322
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     3,     1,     3,    11,     0,     2,     0,
       4,     2,     4,     0,     1,     1,     0,     2,     0,     2,
       0,     3,     0,     2,     4,     0,     2,     1,     3,     0,
       2,     2,     2,     2,     2,     2,     2,     2,     1,     3,
       1,     2,     1,     3,     1,     1,     3,     5,     3,     3,
       1,     0,     2,     1,     0,     5,     3,     5,     6,     5,
       0,     1,     1,     0,     1,     1,     1,     2,     2,     0,
       1,     0,     2,     4,     6,     6,     6,     0,     2,     0,
       1,     3,     3,     1,     7,     2,     2,     2,     0,     6,
       2,     4,     0,     2,     7,     1,     8,     0,     4,     0,
       2,     2,     2,     2,     1,     0,     0,     3,     3,     5,
       1,     1,     3,     3,     7,     7,     3,     3,     5,     5,
       1,     8,     7,     7,     1,     8,     0,     2,     2,     3,
       5,     5,     7,     1,     4,     4,     0,     2,     1,     8,
      10,     9,     6,    11,     8,     1,     3,     0,     4,     5,
       4,     4,     5,     5,     0,     3,     2,     3,     3,     3,
       3,     2,     5,     3,     3,     2,     3,     0,     3,     5,
       0,     1,     0,     2,     2,     0,     4,     3,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     3,     5,     2,     4,     1,     1,
       1,     1,     3,     3,     3,     3,     5,     5,     1,     3,
       3,     0,     1,     1,     0,     1,     1,     2,     1,     3,
       3,     3,     1,     1,     3,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     2,     3,     3,     3,     3,
       5,     6,     6,     6,     3,     3,     3,     3,     2,     2,
       3,     3,     4,     3,     4,     5,     1,     3,     0,     1,
       5,     6,     5,     6,     4,     4,     4,     4,     4,     6,
       8,     4,     7,     1,     1,     1,     6,     6,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     4,     6,     3,
       5,     4,     5,     3,     4,     3,     4,     1,     1,     1,
       2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 4: /* stmt: select_stmt  */
#line 307 "pmysql.y"
                  { emit("STMT"); }
#line 2242 "pmysql.tab.c"
    break;

  case 5: /* select_stmt: SELECT select_opts select_expr_list  */
#line 311 "pmysql.y"
                        { emit("SELECTNODATA %d %d", (yyvsp[-1].intval), (yyvsp[0].intval)); }
#line 2248 "pmysql.tab.c"
    break;

  case 6: /* select_stmt: SELECT select_opts select_expr_list FROM table_references opt_where opt_groupby opt_having opt_orderby opt_limit opt_into_list  */
#line 315 "pmysql.y"
                   { emit("SELECT %d %d %d", (yyvsp[-9].intval), (yyvsp[-8].intval), (yyvsp[-6].intval)); }
#line 2254 "pmysql.tab.c"
    break;

  case 8: /* opt_where: WHERE expr  */
#line 319 "pmysql.y"
                { emit("WHERE"); }
#line 2260 "pmysql.tab.c"
    break;

  case 10: /* opt_groupby: GROUP BY groupby_list opt_with_rollup  */
#line 323 "pmysql.y"
                             { emit("GROUPBYLIST %d %d", (yyvsp[-1].intval), (yyvsp[0].intval)); }
#line 2266 "pmysql.tab.c"
    break;

  case 11: /* groupby_list: expr opt_asc_desc  */
#line 327 "pmysql.y"
                             { emit("GROUPBY %d",  (yyvsp[0].intval)); (yyval.intval) = 1; }
#line 2272 "pmysql.tab.c"
    break;

  case 12: /* groupby_list: groupby_list ',' expr opt_asc_desc  */
#line 329 "pmysql.y"
                             { emit("GROUPBY %d",  (yyvsp[0].intval)); (yyval.intval) = (yyvsp[-3].intval) + 1; }
#line 2278 "pmysql.tab.c"
    break;

  case 13: /* opt_asc_desc: %empty  */
#line 332 "pmysql.y"
                        { (yyval.intval) = 0; }
#line 2284 "pmysql.tab.c"
    break;

  case 14: /* opt_asc_desc: ASC  */
#line 333 "pmysql.y"
                        { (yyval.intval) = 0; }
#line 2290 "pmysql.tab.c"
    break;

  case 15: /* opt_asc_desc: DESC  */
#line 334 "pmysql.y"
                        { (yyval.intval) = 1; }
#line 2296 "pmysql.tab.c"
    break;

  case 16: /* opt_with_rollup: %empty  */
#line 337 "pmysql.y"
                            { (yyval.intval) = 0; }
#line 2302 "pmysql.tab.c"
    break;

  case 17: /* opt_with_rollup: WITH ROLLUP  */
#line 338 "pmysql.y"
                  { (yyval.intval) = 1; }
#line 2308 "pmysql.tab.c"
    break;

  case 19: /* opt_having: HAVING expr  */
#line 341 "pmysql.y"
                                    { emit("HAVING"); }
#line 2314 "pmysql.tab.c"
    break;

  case 21: /* opt_orderby: ORDER BY groupby_list  */
#line 343 "pmysql.y"
                                               { emit("ORDERBY %d", (yyvsp[0].intval)); }
#line 2320 "pmysql.tab.c"
    break;

  case 23: /* opt_limit: LIMIT expr  */
#line 346 "pmysql.y"
                                  { emit("LIMIT 1"); }
#line 2326 "pmysql.tab.c"
    break;

  case 24: /* opt_limit: LIMIT expr ',' expr  */
#line 347 "pmysql.y"
                                    { emit("LIMIT 2"); }
#line 2332 "pmysql.tab.c"
    break;

  case 26: /* opt_into_list: INTO column_list  */
#line 351 "pmysql.y"
                      { emit("INTO %d", (yyvsp[0].intval)); }
#line 2338 "pmysql.tab.c"
    break;

  case 27: /* column_list: NAME  */
#line 354 "pmysql.y"
                  { emit("COLUMN %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = 1; }
#line 2344 "pmysql.tab.c"
    break;

  case 28: /* column_list: column_list ',' NAME  */
#line 355 "pmysql.y"
                          { emit("COLUMN %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2350 "pmysql.tab.c"
    break;

  case 29: /* select_opts: %empty  */
#line 358 "pmysql.y"
                                      { (yyval.intval) = 0; }
#line 2356 "pmysql.tab.c"
    break;

  case 30: /* select_opts: select_opts ALL  */
#line 359 "pmysql.y"
                                  { if((yyval.intval) & 01) yyerror("duplicate ALL option"); (yyval.intval) = (yyvsp[-1].intval) | 01; }
#line 2362 "pmysql.tab.c"
    break;

  case 31: /* select_opts: select_opts DISTINCT  */
#line 360 "pmysql.y"
                                  { if((yyval.intval) & 02) yyerror("duplicate DISTINCT option"); (yyval.intval) = (yyvsp[-1].intval) | 02; }
#line 2368 "pmysql.tab.c"
    break;

  case 32: /* select_opts: select_opts DISTINCTROW  */
#line 361 "pmysql.y"
                                  { if((yyval.intval) & 04) yyerror("duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[-1].intval) | 04; }
#line 2374 "pmysql.tab.c"
    break;

  case 33: /* select_opts: select_opts HIGH_PRIORITY  */
#line 362 "pmysql.y"
                                  { if((yyval.intval) & 010) yyerror("duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[-1].intval) | 010; }
#line 2380 "pmysql.tab.c"
    break;

  case 34: /* select_opts: select_opts STRAIGHT_JOIN  */
#line 363 "pmysql.y"
                                  { if((yyval.intval) & 020) yyerror("duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[-1].intval) | 020; }
#line 2386 "pmysql.tab.c"
    break;

  case 35: /* select_opts: select_opts SQL_SMALL_RESULT  */
#line 364 "pmysql.y"
                                  { if((yyval.intval) & 040) yyerror("duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[-1].intval) | 040; }
#line 2392 "pmysql.tab.c"
    break;

  case 36: /* select_opts: select_opts SQL_BIG_RESULT  */
#line 365 "pmysql.y"
                                  { if((yyval.intval) & 0100) yyerror("duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[-1].intval) | 0100; }
#line 2398 "pmysql.tab.c"
    break;

  case 37: /* select_opts: select_opts SQL_CALC_FOUND_ROWS  */
#line 366 "pmysql.y"
                                  { if((yyval.intval) & 0200) yyerror("duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[-1].intval) | 0200; }
#line 2404 "pmysql.tab.c"
    break;

  case 38: /* select_expr_list: select_expr  */
#line 369 "pmysql.y"
                              { (yyval.intval) = 1; }
#line 2410 "pmysql.tab.c"
    break;

  case 39: /* select_expr_list: select_expr_list ',' select_expr  */
#line 370 "pmysql.y"
                                       {(yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2416 "pmysql.tab.c"
    break;

  case 40: /* select_expr_list: '*'  */
#line 371 "pmysql.y"
          { emit("SELECTALL"); (yyval.intval) = 1; }
#line 2422 "pmysql.tab.c"
    break;

  case 42: /* table_references: table_reference  */
#line 376 "pmysql.y"
                                     { (yyval.intval) = 1; }
#line 2428 "pmysql.tab.c"
    break;

  case 43: /* table_references: table_references ',' table_reference  */
#line 377 "pmysql.y"
                                           { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2434 "pmysql.tab.c"
    break;

  case 46: /* table_factor: NAME opt_as_alias index_hint  */
#line 385 "pmysql.y"
                                 { emit("TABLE %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 2440 "pmysql.tab.c"
    break;

  case 47: /* table_factor: NAME '.' NAME opt_as_alias index_hint  */
#line 386 "pmysql.y"
                                          { emit("TABLE %s.%s", (yyvsp[-4].strval), (yyvsp[-2].strval));
                               free((yyvsp[-4].strval)); free((yyvsp[-2].strval)); }
#line 2447 "pmysql.tab.c"
    break;

  case 48: /* table_factor: table_subquery opt_as NAME  */
#line 388 "pmysql.y"
                               { emit("SUBQUERYAS %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2453 "pmysql.tab.c"
    break;

  case 49: /* table_factor: '(' table_references ')'  */
#line 389 "pmysql.y"
                             { emit("TABLEREFERENCES %d", (yyvsp[-1].intval)); }
#line 2459 "pmysql.tab.c"
    break;

  case 52: /* opt_as_alias: AS NAME  */
#line 396 "pmysql.y"
                      { emit ("ALIAS %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2465 "pmysql.tab.c"
    break;

  case 53: /* opt_as_alias: NAME  */
#line 397 "pmysql.y"
                      { emit ("ALIAS %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2471 "pmysql.tab.c"
    break;

  case 55: /* join_table: table_reference opt_inner_cross JOIN table_factor opt_join_condition  */
#line 403 "pmysql.y"
                  { emit("JOIN %d", 0100+(yyvsp[-3].intval)); }
#line 2477 "pmysql.tab.c"
    break;

  case 56: /* join_table: table_reference STRAIGHT_JOIN table_factor  */
#line 405 "pmysql.y"
                  { emit("JOIN %d", 0200); }
#line 2483 "pmysql.tab.c"
    break;

  case 57: /* join_table: table_reference STRAIGHT_JOIN table_factor ON expr  */
#line 407 "pmysql.y"
                  { emit("JOIN %d", 0200); }
#line 2489 "pmysql.tab.c"
    break;

  case 58: /* join_table: table_reference left_or_right opt_outer JOIN table_factor join_condition  */
#line 409 "pmysql.y"
                  { emit("JOIN %d", 0300+(yyvsp[-4].intval)+(yyvsp[-3].intval)); }
#line 2495 "pmysql.tab.c"
    break;

  case 59: /* join_table: table_reference NATURAL opt_left_or_right_outer JOIN table_factor  */
#line 411 "pmysql.y"
                  { emit("JOIN %d", 0400+(yyvsp[-2].intval)); }
#line 2501 "pmysql.tab.c"
    break;

  case 60: /* opt_inner_cross: %empty  */
#line 414 "pmysql.y"
                           { (yyval.intval) = 0; }
#line 2507 "pmysql.tab.c"
    break;

  case 61: /* opt_inner_cross: INNER  */
#line 415 "pmysql.y"
           { (yyval.intval) = 1; }
#line 2513 "pmysql.tab.c"
    break;

  case 62: /* opt_inner_cross: CROSS  */
#line 416 "pmysql.y"
            { (yyval.intval) = 2; }
#line 2519 "pmysql.tab.c"
    break;

  case 63: /* opt_outer: %empty  */
#line 419 "pmysql.y"
                      { (yyval.intval) = 0; }
#line 2525 "pmysql.tab.c"
    break;

  case 64: /* opt_outer: OUTER  */
#line 420 "pmysql.y"
           {(yyval.intval) = 4; }
#line 2531 "pmysql.tab.c"
    break;

  case 65: /* left_or_right: LEFT  */
#line 423 "pmysql.y"
                    { (yyval.intval) = 1; }
#line 2537 "pmysql.tab.c"
    break;

  case 66: /* left_or_right: RIGHT  */
#line 424 "pmysql.y"
            { (yyval.intval) = 2; }
#line 2543 "pmysql.tab.c"
    break;

  case 67: /* opt_left_or_right_outer: LEFT opt_outer  */
#line 427 "pmysql.y"
                                        { (yyval.intval) = 1 + (yyvsp[0].intval); }
#line 2549 "pmysql.tab.c"
    break;

  case 68: /* opt_left_or_right_outer: RIGHT opt_outer  */
#line 428 "pmysql.y"
                      { (yyval.intval) = 2 + (yyvsp[0].intval); }
#line 2555 "pmysql.tab.c"
    break;

  case 69: /* opt_left_or_right_outer: %empty  */
#line 429 "pmysql.y"
               { (yyval.intval) = 0; }
#line 2561 "pmysql.tab.c"
    break;

  case 72: /* join_condition: ON expr  */
#line 435 "pmysql.y"
            { emit("ONEXPR"); }
#line 2567 "pmysql.tab.c"
    break;

  case 73: /* join_condition: USING '(' column_list ')'  */
#line 436 "pmysql.y"
                                { emit("USING %d", (yyvsp[-1].intval)); }
#line 2573 "pmysql.tab.c"
    break;

  case 74: /* index_hint: USE KEY opt_for_join '(' index_list ')'  */
#line 441 "pmysql.y"
                  { emit("INDEXHINT %d %d", (yyvsp[-1].intval), 010+(yyvsp[-3].intval)); }
#line 2579 "pmysql.tab.c"
    break;

  case 75: /* index_hint: IGNORE KEY opt_for_join '(' index_list ')'  */
#line 443 "pmysql.y"
                  { emit("INDEXHINT %d %d", (yyvsp[-1].intval), 020+(yyvsp[-3].intval)); }
#line 2585 "pmysql.tab.c"
    break;

  case 76: /* index_hint: FORCE KEY opt_for_join '(' index_list ')'  */
#line 445 "pmysql.y"
                  { emit("INDEXHINT %d %d", (yyvsp[-1].intval), 030+(yyvsp[-3].intval)); }
#line 2591 "pmysql.tab.c"
    break;

  case 78: /* opt_for_join: FOR JOIN  */
#line 449 "pmysql.y"
                       { (yyval.intval) = 1; }
#line 2597 "pmysql.tab.c"
    break;

  case 79: /* opt_for_join: %empty  */
#line 450 "pmysql.y"
               { (yyval.intval) = 0; }
#line 2603 "pmysql.tab.c"
    break;

  case 80: /* index_list: NAME  */
#line 453 "pmysql.y"
                  { emit("INDEX %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = 1; }
#line 2609 "pmysql.tab.c"
    break;

  case 81: /* index_list: index_list ',' NAME  */
#line 454 "pmysql.y"
                         { emit("INDEX %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2615 "pmysql.tab.c"
    break;

  case 82: /* table_subquery: '(' select_stmt ')'  */
#line 457 "pmysql.y"
                                    { emit("SUBQUERY"); }
#line 2621 "pmysql.tab.c"
    break;

  case 83: /* stmt: delete_stmt  */
#line 462 "pmysql.y"
                  { emit("STMT"); }
#line 2627 "pmysql.tab.c"
    break;

  case 84: /* delete_stmt: DELETE delete_opts FROM NAME opt_where opt_orderby opt_limit  */
#line 467 "pmysql.y"
                  { emit("DELETEONE %d %s", (yyvsp[-5].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 2633 "pmysql.tab.c"
    break;

  case 85: /* delete_opts: delete_opts LOW_PRIORITY  */
#line 470 "pmysql.y"
                                      { (yyval.intval) = (yyvsp[-1].intval) + 01; }
#line 2639 "pmysql.tab.c"
    break;

  case 86: /* delete_opts: delete_opts QUICK  */
#line 471 "pmysql.y"
                       { (yyval.intval) = (yyvsp[-1].intval) + 02; }
#line 2645 "pmysql.tab.c"
    break;

  case 87: /* delete_opts: delete_opts IGNORE  */
#line 472 "pmysql.y"
                        { (yyval.intval) = (yyvsp[-1].intval) + 04; }
#line 2651 "pmysql.tab.c"
    break;

  case 88: /* delete_opts: %empty  */
#line 473 "pmysql.y"
               { (yyval.intval) = 0; }
#line 2657 "pmysql.tab.c"
    break;

  case 89: /* delete_stmt: DELETE delete_opts delete_list FROM table_references opt_where  */
#line 479 "pmysql.y"
            { emit("DELETEMULTI %d %d %d", (yyvsp[-4].intval), (yyvsp[-3].intval), (yyvsp[-1].intval)); }
#line 2663 "pmysql.tab.c"
    break;

  case 90: /* delete_list: NAME opt_dot_star  */
#line 481 "pmysql.y"
                               { emit("TABLE %s", (yyvsp[-1].strval)); free((yyvsp[-1].strval)); (yyval.intval) = 1; }
#line 2669 "pmysql.tab.c"
    break;

  case 91: /* delete_list: delete_list ',' NAME opt_dot_star  */
#line 483 "pmysql.y"
            { emit("TABLE %s", (yyvsp[-1].strval)); free((yyvsp[-1].strval)); (yyval.intval) = (yyvsp[-3].intval) + 1; }
#line 2675 "pmysql.tab.c"
    break;

  case 94: /* delete_stmt: DELETE delete_opts FROM delete_list USING table_references opt_where  */
#line 491 "pmysql.y"
            { emit("DELETEMULTI %d %d %d", (yyvsp[-5].intval), (yyvsp[-3].intval), (yyvsp[-1].intval)); }
#line 2681 "pmysql.tab.c"
    break;

  case 95: /* stmt: insert_stmt  */
#line 496 "pmysql.y"
                  { emit("STMT"); }
#line 2687 "pmysql.tab.c"
    break;

  case 96: /* insert_stmt: INSERT insert_opts opt_into NAME opt_col_names VALUES insert_vals_list opt_ondupupdate  */
#line 502 "pmysql.y"
                     { emit("INSERTVALS %d %d %s", (yyvsp[-6].intval), (yyvsp[-1].intval), (yyvsp[-4].strval)); free((yyvsp[-4].strval)); }
#line 2693 "pmysql.tab.c"
    break;

  case 98: /* opt_ondupupdate: ONDUPLICATE KEY UPDATE insert_asgn_list  */
#line 506 "pmysql.y"
                                             { emit("DUPUPDATE %d", (yyvsp[0].intval)); }
#line 2699 "pmysql.tab.c"
    break;

  case 99: /* insert_opts: %empty  */
#line 509 "pmysql.y"
                       { (yyval.intval) = 0; }
#line 2705 "pmysql.tab.c"
    break;

  case 100: /* insert_opts: insert_opts LOW_PRIORITY  */
#line 510 "pmysql.y"
                              { (yyval.intval) = (yyvsp[-1].intval) | 01 ; }
#line 2711 "pmysql.tab.c"
    break;

  case 101: /* insert_opts: insert_opts DELAYED  */
#line 511 "pmysql.y"
                         { (yyval.intval) = (yyvsp[-1].intval) | 02 ; }
#line 2717 "pmysql.tab.c"
    break;

  case 102: /* insert_opts: insert_opts HIGH_PRIORITY  */
#line 512 "pmysql.y"
                               { (yyval.intval) = (yyvsp[-1].intval) | 04 ; }
#line 2723 "pmysql.tab.c"
    break;

  case 103: /* insert_opts: insert_opts IGNORE  */
#line 513 "pmysql.y"
                        { (yyval.intval) = (yyvsp[-1].intval) | 010 ; }
#line 2729 "pmysql.tab.c"
    break;

  case 107: /* opt_col_names: '(' column_list ')'  */
#line 520 "pmysql.y"
                         { emit("INSERTCOLS %d", (yyvsp[-1].intval)); }
#line 2735 "pmysql.tab.c"
    break;

  case 108: /* insert_vals_list: '(' insert_vals ')'  */
#line 523 "pmysql.y"
                                      { emit("VALUES %d", (yyvsp[-1].intval)); (yyval.intval) = 1; }
#line 2741 "pmysql.tab.c"
    break;

  case 109: /* insert_vals_list: insert_vals_list ',' '(' insert_vals ')'  */
#line 524 "pmysql.y"
                                              { emit("VALUES %d", (yyvsp[-1].intval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 2747 "pmysql.tab.c"
    break;

  case 110: /* insert_vals: expr  */
#line 527 "pmysql.y"
          { (yyval.intval) = 1; }
#line 2753 "pmysql.tab.c"
    break;

  case 111: /* insert_vals: DEFAULT  */
#line 528 "pmysql.y"
             { emit("DEFAULT"); (yyval.intval) = 1; }
#line 2759 "pmysql.tab.c"
    break;

  case 112: /* insert_vals: insert_vals ',' expr  */
#line 529 "pmysql.y"
                          { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2765 "pmysql.tab.c"
    break;

  case 113: /* insert_vals: insert_vals ',' DEFAULT  */
#line 530 "pmysql.y"
                             { emit("DEFAULT"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2771 "pmysql.tab.c"
    break;

  case 114: /* insert_stmt: INSERT insert_opts opt_into NAME SET insert_asgn_list opt_ondupupdate  */
#line 536 "pmysql.y"
     { emit("INSERTASGN %d %d %s", (yyvsp[-5].intval), (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 2777 "pmysql.tab.c"
    break;

  case 115: /* insert_stmt: INSERT insert_opts opt_into NAME opt_col_names select_stmt opt_ondupupdate  */
#line 541 "pmysql.y"
                    { emit("INSERTSELECT %d %s", (yyvsp[-5].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 2783 "pmysql.tab.c"
    break;

  case 116: /* insert_asgn_list: NAME COMPARISON expr  */
#line 546 "pmysql.y"
     { if ((yyvsp[-1].subtok) != 4) yyerror("bad insert assignment to %s", (yyvsp[-2].strval));
       emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 2790 "pmysql.tab.c"
    break;

  case 117: /* insert_asgn_list: NAME COMPARISON DEFAULT  */
#line 549 "pmysql.y"
               { if ((yyvsp[-1].subtok) != 4) yyerror("bad insert assignment to %s", (yyvsp[-2].strval));
                 emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 2797 "pmysql.tab.c"
    break;

  case 118: /* insert_asgn_list: insert_asgn_list ',' NAME COMPARISON expr  */
#line 552 "pmysql.y"
               { if ((yyvsp[-1].subtok) != 4) yyerror("bad insert assignment to %s", (yyvsp[-4].intval));
                 emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 2804 "pmysql.tab.c"
    break;

  case 119: /* insert_asgn_list: insert_asgn_list ',' NAME COMPARISON DEFAULT  */
#line 555 "pmysql.y"
               { if ((yyvsp[-1].subtok) != 4) yyerror("bad insert assignment to %s", (yyvsp[-4].intval));
                 emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 2811 "pmysql.tab.c"
    break;

  case 120: /* stmt: replace_stmt  */
#line 560 "pmysql.y"
                   { emit("STMT"); }
#line 2817 "pmysql.tab.c"
    break;

  case 121: /* replace_stmt: REPLACE insert_opts opt_into NAME opt_col_names VALUES insert_vals_list opt_ondupupdate  */
#line 566 "pmysql.y"
                     { emit("REPLACEVALS %d %d %s", (yyvsp[-6].intval), (yyvsp[-1].intval), (yyvsp[-4].strval)); free((yyvsp[-4].strval)); }
#line 2823 "pmysql.tab.c"
    break;

  case 122: /* replace_stmt: REPLACE insert_opts opt_into NAME SET insert_asgn_list opt_ondupupdate  */
#line 572 "pmysql.y"
     { emit("REPLACEASGN %d %d %s", (yyvsp[-5].intval), (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 2829 "pmysql.tab.c"
    break;

  case 123: /* replace_stmt: REPLACE insert_opts opt_into NAME opt_col_names select_stmt opt_ondupupdate  */
#line 577 "pmysql.y"
                    { emit("REPLACESELECT %d %s", (yyvsp[-5].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 2835 "pmysql.tab.c"
    break;

  case 124: /* stmt: update_stmt  */
#line 581 "pmysql.y"
                  { emit("STMT"); }
#line 2841 "pmysql.tab.c"
    break;

  case 125: /* update_stmt: UPDATE update_opts table_references SET update_asgn_list opt_where opt_orderby opt_limit  */
#line 588 "pmysql.y"
          { emit("UPDATE %d %d %d", (yyvsp[-6].intval), (yyvsp[-5].intval), (yyvsp[-3].intval)); }
#line 2847 "pmysql.tab.c"
    break;

  case 126: /* update_opts: %empty  */
#line 591 "pmysql.y"
                       { (yyval.intval) = 0; }
#line 2853 "pmysql.tab.c"
    break;

  case 127: /* update_opts: insert_opts LOW_PRIORITY  */
#line 592 "pmysql.y"
                              { (yyval.intval) = (yyvsp[-1].intval) | 01 ; }
#line 2859 "pmysql.tab.c"
    break;

  case 128: /* update_opts: insert_opts IGNORE  */
#line 593 "pmysql.y"
                        { (yyval.intval) = (yyvsp[-1].intval) | 010 ; }
#line 2865 "pmysql.tab.c"
    break;

  case 129: /* update_asgn_list: NAME COMPARISON expr  */
#line 598 "pmysql.y"
       { if ((yyvsp[-1].subtok) != 4) yyerror("bad insert assignment to %s", (yyvsp[-2].strval));
	 emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 2872 "pmysql.tab.c"
    break;

  case 130: /* update_asgn_list: NAME '.' NAME COMPARISON expr  */
#line 601 "pmysql.y"
       { if ((yyvsp[-1].subtok) != 4) yyerror("bad insert assignment to %s", (yyvsp[-4].strval));
	 emit("ASSIGN %s.%s", (yyvsp[-4].strval), (yyvsp[-2].strval)); free((yyvsp[-4].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 2879 "pmysql.tab.c"
    break;

  case 131: /* update_asgn_list: update_asgn_list ',' NAME COMPARISON expr  */
#line 604 "pmysql.y"
       { if ((yyvsp[-1].subtok) != 4) yyerror("bad insert assignment to %s", (yyvsp[-2].strval));
	 emit("ASSIGN %s.%s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 2886 "pmysql.tab.c"
    break;

  case 132: /* update_asgn_list: update_asgn_list ',' NAME '.' NAME COMPARISON expr  */
#line 607 "pmysql.y"
       { if ((yyvsp[-1].subtok) != 4) yyerror("bad insert assignment to %s.$s", (yyvsp[-4].strval), (yyvsp[-2].strval));
	 emit("ASSIGN %s.%s", (yyvsp[-4].strval), (yyvsp[-2].strval)); free((yyvsp[-4].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 2893 "pmysql.tab.c"
    break;

  case 133: /* stmt: create_database_stmt  */
#line 614 "pmysql.y"
                           { emit("STMT"); }
#line 2899 "pmysql.tab.c"
    break;

  case 134: /* create_database_stmt: CREATE DATABASE opt_if_not_exists NAME  */
#line 618 "pmysql.y"
                                            { emit("CREATEDATABASE %d %s", (yyvsp[-1].intval), (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2905 "pmysql.tab.c"
    break;

  case 135: /* create_database_stmt: CREATE SCHEMA opt_if_not_exists NAME  */
#line 619 "pmysql.y"
                                          { emit("CREATEDATABASE %d %s", (yyvsp[-1].intval), (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2911 "pmysql.tab.c"
    break;

  case 136: /* opt_if_not_exists: %empty  */
#line 622 "pmysql.y"
                              { (yyval.intval) = 0; }
#line 2917 "pmysql.tab.c"
    break;

  case 137: /* opt_if_not_exists: IF EXISTS  */
#line 623 "pmysql.y"
                         { if(!(yyvsp[0].subtok))yyerror("IF EXISTS doesn't exist");
                        (yyval.intval) = (yyvsp[0].subtok); /* NOT EXISTS hack */ }
#line 2924 "pmysql.tab.c"
    break;

  case 138: /* stmt: create_table_stmt  */
#line 629 "pmysql.y"
                        { emit("STMT"); }
#line 2930 "pmysql.tab.c"
    break;

  case 139: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '(' create_col_list ')'  */
#line 633 "pmysql.y"
                           { emit("CREATE %d %d %d %s", (yyvsp[-6].intval), (yyvsp[-4].intval), (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 2936 "pmysql.tab.c"
    break;

  case 140: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME '(' create_col_list ')'  */
#line 637 "pmysql.y"
                           { emit("CREATE %d %d %d %s.%s", (yyvsp[-8].intval), (yyvsp[-6].intval), (yyvsp[-1].intval), (yyvsp[-5].strval), (yyvsp[-3].strval));
                          free((yyvsp[-5].strval)); free((yyvsp[-3].strval)); }
#line 2943 "pmysql.tab.c"
    break;

  case 141: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '(' create_col_list ')' create_select_statement  */
#line 643 "pmysql.y"
                        { emit("CREATESELECT %d %d %d %s", (yyvsp[-7].intval), (yyvsp[-5].intval), (yyvsp[-2].intval), (yyvsp[-4].strval)); free((yyvsp[-4].strval)); }
#line 2949 "pmysql.tab.c"
    break;

  case 142: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME create_select_statement  */
#line 647 "pmysql.y"
                           { emit("CREATESELECT %d %d 0 %s", (yyvsp[-4].intval), (yyvsp[-2].intval), (yyvsp[-1].strval)); free((yyvsp[-1].strval)); }
#line 2955 "pmysql.tab.c"
    break;

  case 143: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME '(' create_col_list ')' create_select_statement  */
#line 652 "pmysql.y"
                            { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[-9].intval), (yyvsp[-7].intval), (yyvsp[-6].strval), (yyvsp[-4].strval));
                              free((yyvsp[-6].strval)); free((yyvsp[-4].strval)); }
#line 2962 "pmysql.tab.c"
    break;

  case 144: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME create_select_statement  */
#line 657 "pmysql.y"
                           { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[-6].intval), (yyvsp[-4].intval), (yyvsp[-3].strval), (yyvsp[-1].strval));
                          free((yyvsp[-3].strval)); free((yyvsp[-1].strval)); }
#line 2969 "pmysql.tab.c"
    break;

  case 145: /* create_col_list: create_definition  */
#line 661 "pmysql.y"
                                   { (yyval.intval) = 1; }
#line 2975 "pmysql.tab.c"
    break;

  case 146: /* create_col_list: create_col_list ',' create_definition  */
#line 662 "pmysql.y"
                                            { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2981 "pmysql.tab.c"
    break;

  case 147: /* $@1: %empty  */
#line 665 "pmysql.y"
                   { emit("STARTCOL"); }
#line 2987 "pmysql.tab.c"
    break;

  case 148: /* create_definition: $@1 NAME data_type column_atts  */
#line 666 "pmysql.y"
                   { emit("COLUMNDEF %d %s", (yyvsp[-1].intval), (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 2993 "pmysql.tab.c"
    break;

  case 149: /* create_definition: PRIMARY KEY '(' column_list ')'  */
#line 668 "pmysql.y"
                                         { emit("PRIKEY %d", (yyvsp[-1].intval)); }
#line 2999 "pmysql.tab.c"
    break;

  case 150: /* create_definition: KEY '(' column_list ')'  */
#line 669 "pmysql.y"
                                         { emit("KEY %d", (yyvsp[-1].intval)); }
#line 3005 "pmysql.tab.c"
    break;

  case 151: /* create_definition: INDEX '(' column_list ')'  */
#line 670 "pmysql.y"
                                         { emit("KEY %d", (yyvsp[-1].intval)); }
#line 3011 "pmysql.tab.c"
    break;

  case 152: /* create_definition: FULLTEXT INDEX '(' column_list ')'  */
#line 671 "pmysql.y"
                                         { emit("TEXTINDEX %d", (yyvsp[-1].intval)); }
#line 3017 "pmysql.tab.c"
    break;

  case 153: /* create_definition: FULLTEXT KEY '(' column_list ')'  */
#line 672 "pmysql.y"
                                         { emit("TEXTINDEX %d", (yyvsp[-1].intval)); }
#line 3023 "pmysql.tab.c"
    break;

  case 154: /* column_atts: %empty  */
#line 675 "pmysql.y"
                       { (yyval.intval) = 0; }
#line 3029 "pmysql.tab.c"
    break;

  case 155: /* column_atts: column_atts NOT NULLX  */
#line 676 "pmysql.y"
                                        { emit("ATTR NOTNULL"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3035 "pmysql.tab.c"
    break;

  case 157: /* column_atts: column_atts DEFAULT STRING  */
#line 678 "pmysql.y"
                                        { emit("ATTR DEFAULT STRING %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3041 "pmysql.tab.c"
    break;

  case 158: /* column_atts: column_atts DEFAULT INTNUM  */
#line 679 "pmysql.y"
                                        { emit("ATTR DEFAULT NUMBER %d", (yyvsp[0].intval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3047 "pmysql.tab.c"
    break;

  case 159: /* column_atts: column_atts DEFAULT APPROXNUM  */
#line 680 "pmysql.y"
                                        { emit("ATTR DEFAULT FLOAT %g", (yyvsp[0].floatval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3053 "pmysql.tab.c"
    break;

  case 160: /* column_atts: column_atts DEFAULT BOOL  */
#line 681 "pmysql.y"
                                        { emit("ATTR DEFAULT BOOL %d", (yyvsp[0].intval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3059 "pmysql.tab.c"
    break;

  case 161: /* column_atts: column_atts AUTO_INCREMENT  */
#line 682 "pmysql.y"
                                        { emit("ATTR AUTOINC"); (yyval.intval) = (yyvsp[-1].intval) + 1; }
#line 3065 "pmysql.tab.c"
    break;

  case 162: /* column_atts: column_atts UNIQUE '(' column_list ')'  */
#line 683 "pmysql.y"
                                             { emit("ATTR UNIQUEKEY %d", (yyvsp[-1].intval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3071 "pmysql.tab.c"
    break;

  case 163: /* column_atts: column_atts UNIQUE KEY  */
#line 684 "pmysql.y"
                             { emit("ATTR UNIQUEKEY"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3077 "pmysql.tab.c"
    break;

  case 164: /* column_atts: column_atts PRIMARY KEY  */
#line 685 "pmysql.y"
                              { emit("ATTR PRIKEY"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3083 "pmysql.tab.c"
    break;

  case 165: /* column_atts: column_atts KEY  */
#line 686 "pmysql.y"
                      { emit("ATTR PRIKEY"); (yyval.intval) = (yyvsp[-1].intval) + 1; }
#line 3089 "pmysql.tab.c"
    break;

  case 166: /* column_atts: column_atts COMMENT STRING  */
#line 687 "pmysql.y"
                                 { emit("ATTR COMMENT %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3095 "pmysql.tab.c"
    break;

  case 167: /* opt_length: %empty  */
#line 690 "pmysql.y"
                      { (yyval.intval) = 0; }
#line 3101 "pmysql.tab.c"
    break;

  case 168: /* opt_length: '(' INTNUM ')'  */
#line 691 "pmysql.y"
                    { (yyval.intval) = (yyvsp[-1].intval); }
#line 3107 "pmysql.tab.c"
    break;

  case 169: /* opt_length: '(' INTNUM ',' INTNUM ')'  */
#line 692 "pmysql.y"
                               { (yyval.intval) = (yyvsp[-3].intval) + 1000*(yyvsp[-1].intval); }
#line 3113 "pmysql.tab.c"
    break;

  case 170: /* opt_binary: %empty  */
#line 695 "pmysql.y"
                      { (yyval.intval) = 0; }
#line 3119 "pmysql.tab.c"
    break;

  case 171: /* opt_binary: BINARY  */
#line 696 "pmysql.y"
            { (yyval.intval) = 4000; }
#line 3125 "pmysql.tab.c"
    break;

  case 172: /* opt_uz: %empty  */
#line 699 "pmysql.y"
                  { (yyval.intval) = 0; }
#line 3131 "pmysql.tab.c"
    break;

  case 173: /* opt_uz: opt_uz UNSIGNED  */
#line 700 "pmysql.y"
                     { (yyval.intval) = (yyvsp[-1].intval) | 1000; }
#line 3137 "pmysql.tab.c"
    break;

  case 174: /* opt_uz: opt_uz ZEROFILL  */
#line 701 "pmysql.y"
                     { (yyval.intval) = (yyvsp[-1].intval) | 2000; }
#line 3143 "pmysql.tab.c"
    break;

  case 176: /* opt_csc: opt_csc CHAR SET STRING  */
#line 705 "pmysql.y"
                             { emit("COLCHARSET %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3149 "pmysql.tab.c"
    break;

  case 177: /* opt_csc: opt_csc COLLATE STRING  */
#line 706 "pmysql.y"
                            { emit("COLCOLLATE %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3155 "pmysql.tab.c"
    break;

  case 178: /* data_type: BIT opt_length  */
#line 710 "pmysql.y"
                    { (yyval.intval) = 10000 + (yyvsp[0].intval); }
#line 3161 "pmysql.tab.c"
    break;

  case 179: /* data_type: TINYINT opt_length opt_uz  */
#line 711 "pmysql.y"
                               { (yyval.intval) = 10000 + (yyvsp[-1].intval); }
#line 3167 "pmysql.tab.c"
    break;

  case 180: /* data_type: SMALLINT opt_length opt_uz  */
#line 712 "pmysql.y"
                                { (yyval.intval) = 20000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3173 "pmysql.tab.c"
    break;

  case 181: /* data_type: MEDIUMINT opt_length opt_uz  */
#line 713 "pmysql.y"
                                 { (yyval.intval) = 30000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3179 "pmysql.tab.c"
    break;

  case 182: /* data_type: INT opt_length opt_uz  */
#line 714 "pmysql.y"
                           { (yyval.intval) = 40000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3185 "pmysql.tab.c"
    break;

  case 183: /* data_type: INTEGER opt_length opt_uz  */
#line 715 "pmysql.y"
                               { (yyval.intval) = 50000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3191 "pmysql.tab.c"
    break;

  case 184: /* data_type: BIGINT opt_length opt_uz  */
#line 716 "pmysql.y"
                              { (yyval.intval) = 60000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3197 "pmysql.tab.c"
    break;

  case 185: /* data_type: REAL opt_length opt_uz  */
#line 717 "pmysql.y"
                            { (yyval.intval) = 70000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3203 "pmysql.tab.c"
    break;

  case 186: /* data_type: DOUBLE opt_length opt_uz  */
#line 718 "pmysql.y"
                              { (yyval.intval) = 80000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3209 "pmysql.tab.c"
    break;

  case 187: /* data_type: FLOAT opt_length opt_uz  */
#line 719 "pmysql.y"
                             { (yyval.intval) = 90000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3215 "pmysql.tab.c"
    break;

  case 188: /* data_type: DECIMAL opt_length opt_uz  */
#line 720 "pmysql.y"
                               { (yyval.intval) = 110000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3221 "pmysql.tab.c"
    break;

  case 189: /* data_type: DATE  */
#line 721 "pmysql.y"
          { (yyval.intval) = 100001; }
#line 3227 "pmysql.tab.c"
    break;

  case 190: /* data_type: TIME  */
#line 722 "pmysql.y"
          { (yyval.intval) = 100002; }
#line 3233 "pmysql.tab.c"
    break;

  case 191: /* data_type: TIMESTAMP  */
#line 723 "pmysql.y"
               { (yyval.intval) = 100003; }
#line 3239 "pmysql.tab.c"
    break;

  case 192: /* data_type: DATETIME  */
#line 724 "pmysql.y"
              { (yyval.intval) = 100004; }
#line 3245 "pmysql.tab.c"
    break;

  case 193: /* data_type: YEAR  */
#line 725 "pmysql.y"
          { (yyval.intval) = 100005; }
#line 3251 "pmysql.tab.c"
    break;

  case 194: /* data_type: CHAR opt_length opt_csc  */
#line 726 "pmysql.y"
                             { (yyval.intval) = 120000 + (yyvsp[-1].intval); }
#line 3257 "pmysql.tab.c"
    break;

  case 195: /* data_type: VARCHAR '(' INTNUM ')' opt_csc  */
#line 727 "pmysql.y"
                                    { (yyval.intval) = 130000 + (yyvsp[-2].intval); }
#line 3263 "pmysql.tab.c"
    break;

  case 196: /* data_type: BINARY opt_length  */
#line 728 "pmysql.y"
                       { (yyval.intval) = 140000 + (yyvsp[0].intval); }
#line 3269 "pmysql.tab.c"
    break;

  case 197: /* data_type: VARBINARY '(' INTNUM ')'  */
#line 729 "pmysql.y"
                              { (yyval.intval) = 150000 + (yyvsp[-1].intval); }
#line 3275 "pmysql.tab.c"
    break;

  case 198: /* data_type: TINYBLOB  */
#line 730 "pmysql.y"
              { (yyval.intval) = 160001; }
#line 3281 "pmysql.tab.c"
    break;

  case 199: /* data_type: BLOB  */
#line 731 "pmysql.y"
          { (yyval.intval) = 160002; }
#line 3287 "pmysql.tab.c"
    break;

  case 200: /* data_type: MEDIUMBLOB  */
#line 732 "pmysql.y"
                { (yyval.intval) = 160003; }
#line 3293 "pmysql.tab.c"
    break;

  case 201: /* data_type: LONGBLOB  */
#line 733 "pmysql.y"
              { (yyval.intval) = 160004; }
#line 3299 "pmysql.tab.c"
    break;

  case 202: /* data_type: TINYTEXT opt_binary opt_csc  */
#line 734 "pmysql.y"
                                 { (yyval.intval) = 170000 + (yyvsp[-1].intval); }
#line 3305 "pmysql.tab.c"
    break;

  case 203: /* data_type: TEXT opt_binary opt_csc  */
#line 735 "pmysql.y"
                             { (yyval.intval) = 171000 + (yyvsp[-1].intval); }
#line 3311 "pmysql.tab.c"
    break;

  case 204: /* data_type: MEDIUMTEXT opt_binary opt_csc  */
#line 736 "pmysql.y"
                                   { (yyval.intval) = 172000 + (yyvsp[-1].intval); }
#line 3317 "pmysql.tab.c"
    break;

  case 205: /* data_type: LONGTEXT opt_binary opt_csc  */
#line 737 "pmysql.y"
                                 { (yyval.intval) = 173000 + (yyvsp[-1].intval); }
#line 3323 "pmysql.tab.c"
    break;

  case 206: /* data_type: ENUM '(' enum_list ')' opt_csc  */
#line 738 "pmysql.y"
                                    { (yyval.intval) = 200000 + (yyvsp[-2].intval); }
#line 3329 "pmysql.tab.c"
    break;

  case 207: /* data_type: SET '(' enum_list ')' opt_csc  */
#line 739 "pmysql.y"
                                   { (yyval.intval) = 210000 + (yyvsp[-2].intval); }
#line 3335 "pmysql.tab.c"
    break;

  case 208: /* enum_list: STRING  */
#line 742 "pmysql.y"
                  { emit("ENUMVAL %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = 1; }
#line 3341 "pmysql.tab.c"
    break;

  case 209: /* enum_list: enum_list ',' STRING  */
#line 743 "pmysql.y"
                          { emit("ENUMVAL %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3347 "pmysql.tab.c"
    break;

  case 210: /* create_select_statement: opt_ignore_replace opt_as select_stmt  */
#line 746 "pmysql.y"
                                                               { emit("CREATESELECT %d", (yyvsp[-2].intval)); }
#line 3353 "pmysql.tab.c"
    break;

  case 211: /* opt_ignore_replace: %empty  */
#line 749 "pmysql.y"
                              { (yyval.intval) = 0; }
#line 3359 "pmysql.tab.c"
    break;

  case 212: /* opt_ignore_replace: IGNORE  */
#line 750 "pmysql.y"
            { (yyval.intval) = 1; }
#line 3365 "pmysql.tab.c"
    break;

  case 213: /* opt_ignore_replace: REPLACE  */
#line 751 "pmysql.y"
             { (yyval.intval) = 2; }
#line 3371 "pmysql.tab.c"
    break;

  case 214: /* opt_temporary: %empty  */
#line 754 "pmysql.y"
                           { (yyval.intval) = 0; }
#line 3377 "pmysql.tab.c"
    break;

  case 215: /* opt_temporary: TEMPORARY  */
#line 755 "pmysql.y"
               { (yyval.intval) = 1;}
#line 3383 "pmysql.tab.c"
    break;

  case 216: /* stmt: set_stmt  */
#line 760 "pmysql.y"
               { emit("STMT"); }
#line 3389 "pmysql.tab.c"
    break;

  case 220: /* set_expr: USERVAR COMPARISON expr  */
#line 768 "pmysql.y"
                              { if ((yyvsp[-1].subtok) != 4) yyerror("bad set to @%s", (yyvsp[-2].strval));
		 emit("SET %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 3396 "pmysql.tab.c"
    break;

  case 221: /* set_expr: USERVAR ASSIGN expr  */
#line 770 "pmysql.y"
                          { emit("SET %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 3402 "pmysql.tab.c"
    break;

  case 222: /* expr: NAME  */
#line 775 "pmysql.y"
                    { emit("NAME %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3408 "pmysql.tab.c"
    break;

  case 223: /* expr: USERVAR  */
#line 776 "pmysql.y"
                     { emit("USERVAR %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3414 "pmysql.tab.c"
    break;

  case 224: /* expr: NAME '.' NAME  */
#line 777 "pmysql.y"
                   { emit("FIELDNAME %s.%s", (yyvsp[-2].strval), (yyvsp[0].strval)); free((yyvsp[-2].strval)); free((yyvsp[0].strval)); }
#line 3420 "pmysql.tab.c"
    break;

  case 225: /* expr: STRING  */
#line 778 "pmysql.y"
                   { emit("STRING %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3426 "pmysql.tab.c"
    break;

  case 226: /* expr: INTNUM  */
#line 779 "pmysql.y"
                   { emit("NUMBER %d", (yyvsp[0].intval)); }
#line 3432 "pmysql.tab.c"
    break;

  case 227: /* expr: APPROXNUM  */
#line 780 "pmysql.y"
                   { emit("FLOAT %g", (yyvsp[0].floatval)); }
#line 3438 "pmysql.tab.c"
    break;

  case 228: /* expr: BOOL  */
#line 781 "pmysql.y"
                   { emit("BOOL %d", (yyvsp[0].intval)); }
#line 3444 "pmysql.tab.c"
    break;

  case 229: /* expr: expr '+' expr  */
#line 784 "pmysql.y"
                    { emit("ADD"); }
#line 3450 "pmysql.tab.c"
    break;

  case 230: /* expr: expr '-' expr  */
#line 785 "pmysql.y"
                   { emit("SUB"); }
#line 3456 "pmysql.tab.c"
    break;

  case 231: /* expr: expr '*' expr  */
#line 786 "pmysql.y"
                   { emit("MUL"); }
#line 3462 "pmysql.tab.c"
    break;

  case 232: /* expr: expr '/' expr  */
#line 787 "pmysql.y"
                   { emit("DIV"); }
#line 3468 "pmysql.tab.c"
    break;

  case 233: /* expr: expr '%' expr  */
#line 788 "pmysql.y"
                   { emit("MOD"); }
#line 3474 "pmysql.tab.c"
    break;

  case 234: /* expr: expr MOD expr  */
#line 789 "pmysql.y"
                   { emit("MOD"); }
#line 3480 "pmysql.tab.c"
    break;

  case 235: /* expr: '-' expr  */
#line 790 "pmysql.y"
                           { emit("NEG"); }
#line 3486 "pmysql.tab.c"
    break;

  case 236: /* expr: expr ANDOP expr  */
#line 791 "pmysql.y"
                     { emit("AND"); }
#line 3492 "pmysql.tab.c"
    break;

  case 237: /* expr: expr OR expr  */
#line 792 "pmysql.y"
                  { emit("OR"); }
#line 3498 "pmysql.tab.c"
    break;

  case 238: /* expr: expr XOR expr  */
#line 793 "pmysql.y"
                   { emit("XOR"); }
#line 3504 "pmysql.tab.c"
    break;

  case 239: /* expr: expr COMPARISON expr  */
#line 794 "pmysql.y"
                          { emit("CMP %d", (yyvsp[-1].subtok)); }
#line 3510 "pmysql.tab.c"
    break;

  case 240: /* expr: expr COMPARISON '(' select_stmt ')'  */
#line 795 "pmysql.y"
                                         { emit("CMPSELECT %d", (yyvsp[-3].subtok)); }
#line 3516 "pmysql.tab.c"
    break;

  case 241: /* expr: expr COMPARISON ANY '(' select_stmt ')'  */
#line 796 "pmysql.y"
                                             { emit("CMPANYSELECT %d", (yyvsp[-4].subtok)); }
#line 3522 "pmysql.tab.c"
    break;

  case 242: /* expr: expr COMPARISON SOME '(' select_stmt ')'  */
#line 797 "pmysql.y"
                                              { emit("CMPANYSELECT %d", (yyvsp[-4].subtok)); }
#line 3528 "pmysql.tab.c"
    break;

  case 243: /* expr: expr COMPARISON ALL '(' select_stmt ')'  */
#line 798 "pmysql.y"
                                             { emit("CMPALLSELECT %d", (yyvsp[-4].subtok)); }
#line 3534 "pmysql.tab.c"
    break;

  case 244: /* expr: expr '|' expr  */
#line 799 "pmysql.y"
                   { emit("BITOR"); }
#line 3540 "pmysql.tab.c"
    break;

  case 245: /* expr: expr '&' expr  */
#line 800 "pmysql.y"
                   { emit("BITAND"); }
#line 3546 "pmysql.tab.c"
    break;

  case 246: /* expr: expr '^' expr  */
#line 801 "pmysql.y"
                   { emit("BITXOR"); }
#line 3552 "pmysql.tab.c"
    break;

  case 247: /* expr: expr SHIFT expr  */
#line 802 "pmysql.y"
                     { emit("SHIFT %s", (yyvsp[-1].subtok)==1?"left":"right"); }
#line 3558 "pmysql.tab.c"
    break;

  case 248: /* expr: NOT expr  */
#line 803 "pmysql.y"
              { emit("NOT"); }
#line 3564 "pmysql.tab.c"
    break;

  case 249: /* expr: '!' expr  */
#line 804 "pmysql.y"
              { emit("NOT"); }
#line 3570 "pmysql.tab.c"
    break;

  case 250: /* expr: USERVAR ASSIGN expr  */
#line 805 "pmysql.y"
                         { emit("ASSIGN @%s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 3576 "pmysql.tab.c"
    break;

  case 251: /* expr: expr IS NULLX  */
#line 808 "pmysql.y"
                         { emit("ISNULL"); }
#line 3582 "pmysql.tab.c"
    break;

  case 252: /* expr: expr IS NOT NULLX  */
#line 809 "pmysql.y"
                         { emit("ISNULL"); emit("NOT"); }
#line 3588 "pmysql.tab.c"
    break;

  case 253: /* expr: expr IS BOOL  */
#line 810 "pmysql.y"
                         { emit("ISBOOL %d", (yyvsp[0].intval)); }
#line 3594 "pmysql.tab.c"
    break;

  case 254: /* expr: expr IS NOT BOOL  */
#line 811 "pmysql.y"
                         { emit("ISBOOL %d", (yyvsp[0].intval)); emit("NOT"); }
#line 3600 "pmysql.tab.c"
    break;

  case 255: /* expr: expr BETWEEN expr AND expr  */
#line 814 "pmysql.y"
                                               { emit("BETWEEN"); }
#line 3606 "pmysql.tab.c"
    break;

  case 256: /* val_list: expr  */
#line 818 "pmysql.y"
               { (yyval.intval) = 1; }
#line 3612 "pmysql.tab.c"
    break;

  case 257: /* val_list: expr ',' val_list  */
#line 819 "pmysql.y"
                       { (yyval.intval) = 1 + (yyvsp[0].intval); }
#line 3618 "pmysql.tab.c"
    break;

  case 258: /* opt_val_list: %empty  */
#line 822 "pmysql.y"
                        { (yyval.intval) = 0; }
#line 3624 "pmysql.tab.c"
    break;

  case 260: /* expr: expr IN '(' val_list ')'  */
#line 826 "pmysql.y"
                                     { emit("ISIN %d", (yyvsp[-1].intval)); }
#line 3630 "pmysql.tab.c"
    break;

  case 261: /* expr: expr NOT IN '(' val_list ')'  */
#line 827 "pmysql.y"
                                     { emit("ISIN %d", (yyvsp[-1].intval)); emit("NOT"); }
#line 3636 "pmysql.tab.c"
    break;

  case 262: /* expr: expr IN '(' select_stmt ')'  */
#line 828 "pmysql.y"
                                     { emit("INSELECT"); }
#line 3642 "pmysql.tab.c"
    break;

  case 263: /* expr: expr NOT IN '(' select_stmt ')'  */
#line 829 "pmysql.y"
                                     { emit("INSELECT"); emit("NOT"); }
#line 3648 "pmysql.tab.c"
    break;

  case 264: /* expr: EXISTS '(' select_stmt ')'  */
#line 830 "pmysql.y"
                                     { emit("EXISTS"); if((yyvsp[-3].subtok))emit("NOT"); }
#line 3654 "pmysql.tab.c"
    break;

  case 265: /* expr: NAME '(' opt_val_list ')'  */
#line 833 "pmysql.y"
                                {  emit("CALL %d %s", (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 3660 "pmysql.tab.c"
    break;

  case 266: /* expr: FCOUNT '(' '*' ')'  */
#line 837 "pmysql.y"
                         { emit("COUNTALL"); }
#line 3666 "pmysql.tab.c"
    break;

  case 267: /* expr: FCOUNT '(' expr ')'  */
#line 838 "pmysql.y"
                         { emit(" CALL 1 COUNT"); }
#line 3672 "pmysql.tab.c"
    break;

  case 268: /* expr: FSUBSTRING '(' val_list ')'  */
#line 840 "pmysql.y"
                                  {  emit("CALL %d SUBSTR", (yyvsp[-1].intval));}
#line 3678 "pmysql.tab.c"
    break;

  case 269: /* expr: FSUBSTRING '(' expr FROM expr ')'  */
#line 841 "pmysql.y"
                                       {  emit("CALL 2 SUBSTR"); }
#line 3684 "pmysql.tab.c"
    break;

  case 270: /* expr: FSUBSTRING '(' expr FROM expr FOR expr ')'  */
#line 842 "pmysql.y"
                                                {  emit("CALL 3 SUBSTR"); }
#line 3690 "pmysql.tab.c"
    break;

  case 271: /* expr: FTRIM '(' val_list ')'  */
#line 843 "pmysql.y"
                         { emit("CALL %d TRIM", (yyvsp[-1].intval)); }
#line 3696 "pmysql.tab.c"
    break;

  case 272: /* expr: FTRIM '(' trim_ltb expr FROM val_list ')'  */
#line 844 "pmysql.y"
                                               { emit("CALL 3 TRIM"); }
#line 3702 "pmysql.tab.c"
    break;

  case 273: /* trim_ltb: LEADING  */
#line 847 "pmysql.y"
                  { emit("INT 1"); }
#line 3708 "pmysql.tab.c"
    break;

  case 274: /* trim_ltb: TRAILING  */
#line 848 "pmysql.y"
              { emit("INT 2"); }
#line 3714 "pmysql.tab.c"
    break;

  case 275: /* trim_ltb: BOTH  */
#line 849 "pmysql.y"
          { emit("INT 3"); }
#line 3720 "pmysql.tab.c"
    break;

  case 276: /* expr: FDATE_ADD '(' expr ',' interval_exp ')'  */
#line 852 "pmysql.y"
                                              { emit("CALL 3 DATE_ADD"); }
#line 3726 "pmysql.tab.c"
    break;

  case 277: /* expr: FDATE_SUB '(' expr ',' interval_exp ')'  */
#line 853 "pmysql.y"
                                              { emit("CALL 3 DATE_SUB"); }
#line 3732 "pmysql.tab.c"
    break;

  case 278: /* interval_exp: INTERVAL expr DAY_HOUR  */
#line 856 "pmysql.y"
                                     { emit("NUMBER 1"); }
#line 3738 "pmysql.tab.c"
    break;

  case 279: /* interval_exp: INTERVAL expr DAY_MICROSECOND  */
#line 857 "pmysql.y"
                                   { emit("NUMBER 2"); }
#line 3744 "pmysql.tab.c"
    break;

  case 280: /* interval_exp: INTERVAL expr DAY_MINUTE  */
#line 858 "pmysql.y"
                              { emit("NUMBER 3"); }
#line 3750 "pmysql.tab.c"
    break;

  case 281: /* interval_exp: INTERVAL expr DAY_SECOND  */
#line 859 "pmysql.y"
                              { emit("NUMBER 4"); }
#line 3756 "pmysql.tab.c"
    break;

  case 282: /* interval_exp: INTERVAL expr YEAR_MONTH  */
#line 860 "pmysql.y"
                              { emit("NUMBER 5"); }
#line 3762 "pmysql.tab.c"
    break;

  case 283: /* interval_exp: INTERVAL expr YEAR  */
#line 861 "pmysql.y"
                              { emit("NUMBER 6"); }
#line 3768 "pmysql.tab.c"
    break;

  case 284: /* interval_exp: INTERVAL expr HOUR_MICROSECOND  */
#line 862 "pmysql.y"
                                    { emit("NUMBER 7"); }
#line 3774 "pmysql.tab.c"
    break;

  case 285: /* interval_exp: INTERVAL expr HOUR_MINUTE  */
#line 863 "pmysql.y"
                               { emit("NUMBER 8"); }
#line 3780 "pmysql.tab.c"
    break;

  case 286: /* interval_exp: INTERVAL expr HOUR_SECOND  */
#line 864 "pmysql.y"
                               { emit("NUMBER 9"); }
#line 3786 "pmysql.tab.c"
    break;

  case 287: /* expr: CASE expr case_list END  */
#line 867 "pmysql.y"
                                        { emit("CASEVAL %d 0", (yyvsp[-1].intval)); }
#line 3792 "pmysql.tab.c"
    break;

  case 288: /* expr: CASE expr case_list ELSE expr END  */
#line 868 "pmysql.y"
                                        { emit("CASEVAL %d 1", (yyvsp[-3].intval)); }
#line 3798 "pmysql.tab.c"
    break;

  case 289: /* expr: CASE case_list END  */
#line 869 "pmysql.y"
                                        { emit("CASE %d 0", (yyvsp[-1].intval)); }
#line 3804 "pmysql.tab.c"
    break;

  case 290: /* expr: CASE case_list ELSE expr END  */
#line 870 "pmysql.y"
                                        { emit("CASE %d 1", (yyvsp[-3].intval)); }
#line 3810 "pmysql.tab.c"
    break;

  case 291: /* case_list: WHEN expr THEN expr  */
#line 873 "pmysql.y"
                                   { (yyval.intval) = 1; }
#line 3816 "pmysql.tab.c"
    break;

  case 292: /* case_list: case_list WHEN expr THEN expr  */
#line 874 "pmysql.y"
                                         { (yyval.intval) = (yyvsp[-4].intval)+1; }
#line 3822 "pmysql.tab.c"
    break;

  case 293: /* expr: expr LIKE expr  */
#line 877 "pmysql.y"
                     { emit("LIKE"); }
#line 3828 "pmysql.tab.c"
    break;

  case 294: /* expr: expr NOT LIKE expr  */
#line 878 "pmysql.y"
                        { emit("LIKE"); emit("NOT"); }
#line 3834 "pmysql.tab.c"
    break;

  case 295: /* expr: expr REGEXP expr  */
#line 881 "pmysql.y"
                       { emit("REGEXP"); }
#line 3840 "pmysql.tab.c"
    break;

  case 296: /* expr: expr NOT REGEXP expr  */
#line 882 "pmysql.y"
                          { emit("REGEXP"); emit("NOT"); }
#line 3846 "pmysql.tab.c"
    break;

  case 297: /* expr: CURRENT_TIMESTAMP  */
#line 885 "pmysql.y"
                        { emit("NOW"); }
#line 3852 "pmysql.tab.c"
    break;

  case 298: /* expr: CURRENT_DATE  */
#line 886 "pmysql.y"
                        { emit("NOW"); }
#line 3858 "pmysql.tab.c"
    break;

  case 299: /* expr: CURRENT_TIME  */
#line 887 "pmysql.y"
                        { emit("NOW"); }
#line 3864 "pmysql.tab.c"
    break;

  case 300: /* expr: BINARY expr  */
#line 890 "pmysql.y"
                               { emit("STRTOBIN"); }
#line 3870 "pmysql.tab.c"
    break;


#line 3874 "pmysql.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 893 "pmysql.y"


void
emit(char *s, ...)
{
  extern yylineno;

  va_list ap;
  va_start(ap, s);

  printf("rpn: ");
  vfprintf(stdout, s, ap);
  printf("\n");
}

void
yyerror(char *s, ...)
{
  extern yylineno;

  va_list ap;
  va_start(ap, s);

  fprintf(stderr, "%d: error: ", yylineno);
  vfprintf(stderr, s, ap);
  fprintf(stderr, "\n");
}

main(int ac, char **av)
{
  extern FILE *yyin;

  if(ac > 1 && !strcmp(av[1], "-d")) {
    yydebug = 1; ac--; av++;
  }

  if(ac > 1 && (yyin = fopen(av[1], "r")) == NULL) {
    perror(av[1]);
    exit(1);
  }

  if(!yyparse())
    printf("SQL parse worked\n");
  else
    printf("SQL parse failed\n");
} /* main */
