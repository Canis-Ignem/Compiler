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

#ifndef YY_YY_PARSER_HPP_INCLUDED
# define YY_YY_PARSER_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TIDENTIFIER = 258,
    TINTEGER = 259,
    TFLOAT = 260,
    TDFLOAT = 261,
    TDINT = 262,
    TVAR = 263,
    TMUL = 264,
    TRES = 265,
    TSUM = 266,
    TDIV = 267,
    TEQ = 268,
    TIN = 269,
    TOUT = 270,
    TINOUT = 271,
    TGREATER = 272,
    TLESSER = 273,
    TDIST = 274,
    TGREATEREQ = 275,
    TLESSEREQ = 276,
    TSEMIC = 277,
    TASSIG = 278,
    TLBRACE = 279,
    TRBRACE = 280,
    TDOTS = 281,
    TRBRACKET = 282,
    TLBRACKET = 283,
    TCOMA = 284,
    TLBLOCK = 285,
    TRBLOCK = 286,
    RPROGRAM = 287,
    RBEGIN = 288,
    RENDPROGRAM = 289,
    TPROC = 290,
    TIF = 291,
    TTHEN = 292,
    TWHILE = 293,
    TDO = 294,
    TUNTIL = 295,
    TELSE = 296,
    TSKIP = 297,
    TREAD = 298,
    TPRINT = 299,
    TFOR = 300,
    TTO = 301,
    TFROM = 302,
    TENDFOR = 303,
    TARR = 304,
    TNOT = 305,
    TOR = 306,
    TAND = 307
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 31 "parser.y" /* yacc.c:1909  */

     string *str ; 
    vector<string> *list ;
    varStruct *varS;
    expresionstruct *expr ;
    int number ;
    vector<int> *numlist; 

#line 116 "parser.hpp" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_HPP_INCLUDED  */
