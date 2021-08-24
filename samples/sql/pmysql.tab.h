/* A Bison parser, made by GNU Bison 3.7.6.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PMYSQL_TAB_H_INCLUDED
# define YY_YY_PMYSQL_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    NAME = 258,                    /* NAME  */
    STRING = 259,                  /* STRING  */
    INTNUM = 260,                  /* INTNUM  */
    BOOL = 261,                    /* BOOL  */
    APPROXNUM = 262,               /* APPROXNUM  */
    USERVAR = 263,                 /* USERVAR  */
    ASSIGN = 264,                  /* ASSIGN  */
    ANDOP = 265,                   /* ANDOP  */
    IS = 266,                      /* IS  */
    COMPARISON = 267,              /* COMPARISON  */
    SHIFT = 268,                   /* SHIFT  */
    UMINUS = 269,                  /* UMINUS  */
    ADD = 270,                     /* ADD  */
    ALL = 271,                     /* ALL  */
    ALTER = 272,                   /* ALTER  */
    ANALYZE = 273,                 /* ANALYZE  */
    AND = 274,                     /* AND  */
    ANY = 275,                     /* ANY  */
    AS = 276,                      /* AS  */
    ASC = 277,                     /* ASC  */
    AUTO_INCREMENT = 278,          /* AUTO_INCREMENT  */
    BEFORE = 279,                  /* BEFORE  */
    BETWEEN = 280,                 /* BETWEEN  */
    BIGINT = 281,                  /* BIGINT  */
    BINARY = 282,                  /* BINARY  */
    BIT = 283,                     /* BIT  */
    BLOB = 284,                    /* BLOB  */
    BOTH = 285,                    /* BOTH  */
    BY = 286,                      /* BY  */
    CALL = 287,                    /* CALL  */
    CASCADE = 288,                 /* CASCADE  */
    CASE = 289,                    /* CASE  */
    CHANGE = 290,                  /* CHANGE  */
    CHAR = 291,                    /* CHAR  */
    CHECK = 292,                   /* CHECK  */
    COLLATE = 293,                 /* COLLATE  */
    COLUMN = 294,                  /* COLUMN  */
    COMMENT = 295,                 /* COMMENT  */
    CONDITION = 296,               /* CONDITION  */
    CONSTRAINT = 297,              /* CONSTRAINT  */
    CONTINUE = 298,                /* CONTINUE  */
    CONVERT = 299,                 /* CONVERT  */
    CREATE = 300,                  /* CREATE  */
    CROSS = 301,                   /* CROSS  */
    CURRENT_DATE = 302,            /* CURRENT_DATE  */
    CURRENT_TIME = 303,            /* CURRENT_TIME  */
    CURRENT_TIMESTAMP = 304,       /* CURRENT_TIMESTAMP  */
    CURRENT_USER = 305,            /* CURRENT_USER  */
    CURSOR = 306,                  /* CURSOR  */
    DATABASE = 307,                /* DATABASE  */
    DATABASES = 308,               /* DATABASES  */
    DATE = 309,                    /* DATE  */
    DATETIME = 310,                /* DATETIME  */
    DAY_HOUR = 311,                /* DAY_HOUR  */
    DAY_MICROSECOND = 312,         /* DAY_MICROSECOND  */
    DAY_MINUTE = 313,              /* DAY_MINUTE  */
    DAY_SECOND = 314,              /* DAY_SECOND  */
    DECIMAL = 315,                 /* DECIMAL  */
    DECLARE = 316,                 /* DECLARE  */
    DEFAULT = 317,                 /* DEFAULT  */
    DELAYED = 318,                 /* DELAYED  */
    DELETE = 319,                  /* DELETE  */
    DESC = 320,                    /* DESC  */
    DESCRIBE = 321,                /* DESCRIBE  */
    DETERMINISTIC = 322,           /* DETERMINISTIC  */
    DISTINCT = 323,                /* DISTINCT  */
    DISTINCTROW = 324,             /* DISTINCTROW  */
    DIV = 325,                     /* DIV  */
    DOUBLE = 326,                  /* DOUBLE  */
    DROP = 327,                    /* DROP  */
    DUAL = 328,                    /* DUAL  */
    EACH = 329,                    /* EACH  */
    ELSE = 330,                    /* ELSE  */
    ELSEIF = 331,                  /* ELSEIF  */
    ENCLOSED = 332,                /* ENCLOSED  */
    END = 333,                     /* END  */
    ENUM = 334,                    /* ENUM  */
    ESCAPED = 335,                 /* ESCAPED  */
    EXISTS = 336,                  /* EXISTS  */
    EXIT = 337,                    /* EXIT  */
    EXPLAIN = 338,                 /* EXPLAIN  */
    FETCH = 339,                   /* FETCH  */
    FLOAT = 340,                   /* FLOAT  */
    FOR = 341,                     /* FOR  */
    FORCE = 342,                   /* FORCE  */
    FOREIGN = 343,                 /* FOREIGN  */
    FROM = 344,                    /* FROM  */
    FULLTEXT = 345,                /* FULLTEXT  */
    GRANT = 346,                   /* GRANT  */
    GROUP = 347,                   /* GROUP  */
    HAVING = 348,                  /* HAVING  */
    HIGH_PRIORITY = 349,           /* HIGH_PRIORITY  */
    HOUR_MICROSECOND = 350,        /* HOUR_MICROSECOND  */
    HOUR_MINUTE = 351,             /* HOUR_MINUTE  */
    HOUR_SECOND = 352,             /* HOUR_SECOND  */
    IF = 353,                      /* IF  */
    IGNORE = 354,                  /* IGNORE  */
    IN = 355,                      /* IN  */
    INDEX = 356,                   /* INDEX  */
    INFILE = 357,                  /* INFILE  */
    INNER = 358,                   /* INNER  */
    INOUT = 359,                   /* INOUT  */
    INSENSITIVE = 360,             /* INSENSITIVE  */
    INSERT = 361,                  /* INSERT  */
    INT = 362,                     /* INT  */
    INTEGER = 363,                 /* INTEGER  */
    INTERVAL = 364,                /* INTERVAL  */
    INTO = 365,                    /* INTO  */
    ITERATE = 366,                 /* ITERATE  */
    JOIN = 367,                    /* JOIN  */
    KEY = 368,                     /* KEY  */
    KEYS = 369,                    /* KEYS  */
    KILL = 370,                    /* KILL  */
    LEADING = 371,                 /* LEADING  */
    LEAVE = 372,                   /* LEAVE  */
    LEFT = 373,                    /* LEFT  */
    LIKE = 374,                    /* LIKE  */
    LIMIT = 375,                   /* LIMIT  */
    LINES = 376,                   /* LINES  */
    LOAD = 377,                    /* LOAD  */
    LOCALTIME = 378,               /* LOCALTIME  */
    LOCALTIMESTAMP = 379,          /* LOCALTIMESTAMP  */
    LOCK = 380,                    /* LOCK  */
    LONG = 381,                    /* LONG  */
    LONGBLOB = 382,                /* LONGBLOB  */
    LONGTEXT = 383,                /* LONGTEXT  */
    LOOP = 384,                    /* LOOP  */
    LOW_PRIORITY = 385,            /* LOW_PRIORITY  */
    MATCH = 386,                   /* MATCH  */
    MEDIUMBLOB = 387,              /* MEDIUMBLOB  */
    MEDIUMINT = 388,               /* MEDIUMINT  */
    MEDIUMTEXT = 389,              /* MEDIUMTEXT  */
    MINUTE_MICROSECOND = 390,      /* MINUTE_MICROSECOND  */
    MINUTE_SECOND = 391,           /* MINUTE_SECOND  */
    MOD = 392,                     /* MOD  */
    MODIFIES = 393,                /* MODIFIES  */
    NATURAL = 394,                 /* NATURAL  */
    NOT = 395,                     /* NOT  */
    NO_WRITE_TO_BINLOG = 396,      /* NO_WRITE_TO_BINLOG  */
    NULLX = 397,                   /* NULLX  */
    NUMBER = 398,                  /* NUMBER  */
    ON = 399,                      /* ON  */
    ONDUPLICATE = 400,             /* ONDUPLICATE  */
    OPTIMIZE = 401,                /* OPTIMIZE  */
    OPTION = 402,                  /* OPTION  */
    OPTIONALLY = 403,              /* OPTIONALLY  */
    OR = 404,                      /* OR  */
    ORDER = 405,                   /* ORDER  */
    OUT = 406,                     /* OUT  */
    OUTER = 407,                   /* OUTER  */
    OUTFILE = 408,                 /* OUTFILE  */
    PRECISION = 409,               /* PRECISION  */
    PRIMARY = 410,                 /* PRIMARY  */
    PROCEDURE = 411,               /* PROCEDURE  */
    PURGE = 412,                   /* PURGE  */
    QUICK = 413,                   /* QUICK  */
    READ = 414,                    /* READ  */
    READS = 415,                   /* READS  */
    REAL = 416,                    /* REAL  */
    REFERENCES = 417,              /* REFERENCES  */
    REGEXP = 418,                  /* REGEXP  */
    RELEASE = 419,                 /* RELEASE  */
    RENAME = 420,                  /* RENAME  */
    REPEAT = 421,                  /* REPEAT  */
    REPLACE = 422,                 /* REPLACE  */
    REQUIRE = 423,                 /* REQUIRE  */
    RESTRICT = 424,                /* RESTRICT  */
    RETURN = 425,                  /* RETURN  */
    REVOKE = 426,                  /* REVOKE  */
    RIGHT = 427,                   /* RIGHT  */
    ROLLUP = 428,                  /* ROLLUP  */
    SCHEMA = 429,                  /* SCHEMA  */
    SCHEMAS = 430,                 /* SCHEMAS  */
    SECOND_MICROSECOND = 431,      /* SECOND_MICROSECOND  */
    SELECT = 432,                  /* SELECT  */
    SENSITIVE = 433,               /* SENSITIVE  */
    SEPARATOR = 434,               /* SEPARATOR  */
    SET = 435,                     /* SET  */
    SHOW = 436,                    /* SHOW  */
    SMALLINT = 437,                /* SMALLINT  */
    SOME = 438,                    /* SOME  */
    SONAME = 439,                  /* SONAME  */
    SPATIAL = 440,                 /* SPATIAL  */
    SPECIFIC = 441,                /* SPECIFIC  */
    SQL = 442,                     /* SQL  */
    SQLEXCEPTION = 443,            /* SQLEXCEPTION  */
    SQLSTATE = 444,                /* SQLSTATE  */
    SQLWARNING = 445,              /* SQLWARNING  */
    SQL_BIG_RESULT = 446,          /* SQL_BIG_RESULT  */
    SQL_CALC_FOUND_ROWS = 447,     /* SQL_CALC_FOUND_ROWS  */
    SQL_SMALL_RESULT = 448,        /* SQL_SMALL_RESULT  */
    SSL = 449,                     /* SSL  */
    STARTING = 450,                /* STARTING  */
    STRAIGHT_JOIN = 451,           /* STRAIGHT_JOIN  */
    TABLE = 452,                   /* TABLE  */
    TEMPORARY = 453,               /* TEMPORARY  */
    TEXT = 454,                    /* TEXT  */
    TERMINATED = 455,              /* TERMINATED  */
    THEN = 456,                    /* THEN  */
    TIME = 457,                    /* TIME  */
    TIMESTAMP = 458,               /* TIMESTAMP  */
    TINYBLOB = 459,                /* TINYBLOB  */
    TINYINT = 460,                 /* TINYINT  */
    TINYTEXT = 461,                /* TINYTEXT  */
    TO = 462,                      /* TO  */
    TRAILING = 463,                /* TRAILING  */
    TRIGGER = 464,                 /* TRIGGER  */
    UNDO = 465,                    /* UNDO  */
    UNION = 466,                   /* UNION  */
    UNIQUE = 467,                  /* UNIQUE  */
    UNLOCK = 468,                  /* UNLOCK  */
    UNSIGNED = 469,                /* UNSIGNED  */
    UPDATE = 470,                  /* UPDATE  */
    USAGE = 471,                   /* USAGE  */
    USE = 472,                     /* USE  */
    USING = 473,                   /* USING  */
    UTC_DATE = 474,                /* UTC_DATE  */
    UTC_TIME = 475,                /* UTC_TIME  */
    UTC_TIMESTAMP = 476,           /* UTC_TIMESTAMP  */
    VALUES = 477,                  /* VALUES  */
    VARBINARY = 478,               /* VARBINARY  */
    VARCHAR = 479,                 /* VARCHAR  */
    VARYING = 480,                 /* VARYING  */
    WHEN = 481,                    /* WHEN  */
    WHERE = 482,                   /* WHERE  */
    WHILE = 483,                   /* WHILE  */
    WITH = 484,                    /* WITH  */
    WRITE = 485,                   /* WRITE  */
    XOR = 486,                     /* XOR  */
    YEAR = 487,                    /* YEAR  */
    YEAR_MONTH = 488,              /* YEAR_MONTH  */
    ZEROFILL = 489,                /* ZEROFILL  */
    FSUBSTRING = 490,              /* FSUBSTRING  */
    FTRIM = 491,                   /* FTRIM  */
    FDATE_ADD = 492,               /* FDATE_ADD  */
    FDATE_SUB = 493,               /* FDATE_SUB  */
    FCOUNT = 494                   /* FCOUNT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 20 "pmysql.y"

	int intval;
	double floatval;
	char *strval;
	int subtok;

#line 310 "pmysql.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PMYSQL_TAB_H_INCLUDED  */
