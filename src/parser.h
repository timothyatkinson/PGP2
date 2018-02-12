/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 42 "parser.y" /* yacc.c:1909  */

#include "ast.h"

#line 48 "parser.h" /* yacc.c:1909  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    MAIN = 258,
    IF = 259,
    TRY = 260,
    THEN = 261,
    ELSE = 262,
    SKIP = 263,
    FAIL = 264,
    BREAK = 265,
    WEIGHTED = 266,
    SWEIGHTED = 267,
    JWEIGHTED = 268,
    WHERE = 269,
    EDGETEST = 270,
    INDEG = 271,
    OUTDEG = 272,
    _LENGTH = 273,
    INT = 274,
    CHARACTER = 275,
    STRING = 276,
    ATOM = 277,
    LIST = 278,
    INTERFACE = 279,
    _EMPTY = 280,
    INJECTIVE = 281,
    WEIGHT = 282,
    MARK = 283,
    ANY_MARK = 284,
    ARROW = 285,
    NEQ = 286,
    GTEQ = 287,
    LTEQ = 288,
    NUM = 289,
    DNUM = 290,
    STR = 291,
    PROCID = 292,
    ID = 293,
    ROOT = 294,
    BIDIRECTIONAL = 295,
    GP_PROGRAM = 296,
    GP_GRAPH = 297,
    GP_RULE = 298,
    OR = 299,
    AND = 300,
    NOT = 301,
    UMINUS = 302
  };
#endif
/* Tokens.  */
#define MAIN 258
#define IF 259
#define TRY 260
#define THEN 261
#define ELSE 262
#define SKIP 263
#define FAIL 264
#define BREAK 265
#define WEIGHTED 266
#define SWEIGHTED 267
#define JWEIGHTED 268
#define WHERE 269
#define EDGETEST 270
#define INDEG 271
#define OUTDEG 272
#define _LENGTH 273
#define INT 274
#define CHARACTER 275
#define STRING 276
#define ATOM 277
#define LIST 278
#define INTERFACE 279
#define _EMPTY 280
#define INJECTIVE 281
#define WEIGHT 282
#define MARK 283
#define ANY_MARK 284
#define ARROW 285
#define NEQ 286
#define GTEQ 287
#define LTEQ 288
#define NUM 289
#define DNUM 290
#define STR 291
#define PROCID 292
#define ID 293
#define ROOT 294
#define BIDIRECTIONAL 295
#define GP_PROGRAM 296
#define GP_GRAPH 297
#define GP_RULE 298
#define OR 299
#define AND 300
#define NOT 301
#define UMINUS 302

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 77 "parser.y" /* yacc.c:1909  */

  int num;   /* value of NUM token. */
  double dnum; /* value of DNUM token. */
  char *str; /* value of STRING and CHAR tokens. */
  char *id;  /* value of PROCID and ID tokens. */
  int mark;  /* enum MarkTypes, value of MARK token. */
#line 111 "parser.y" /* yacc.c:1909  */

  struct List *list;
  struct GPDeclaration *decl;
  struct GPCommand *command;
  struct GPProcedure *proc;
  struct GPRule *rule;
  struct GPGraph *graph;
  struct GPNode *node;
  struct GPEdge *edge;
  struct GPPos *pos;
  struct GPCondition *cond_exp;
  struct GPLabel *label;
  struct GPAtom *atom_exp;

  int list_type; /* enum ListType */
  int check_type; /* enum CondExpType */

#line 179 "parser.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);
/* "%code provides" blocks.  */
#line 47 "parser.y" /* yacc.c:1909  */

extern List *gp_program;
extern int yylineno;
extern string yytext;
extern FILE *yyin;
extern bool syntax_error;

#line 214 "parser.h" /* yacc.c:1909  */

#endif /* !YY_YY_PARSER_H_INCLUDED  */
