
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     mc_prog = 258,
     mc_end = 259,
     mc_routine = 260,
     mc_endr = 261,
     mc_read = 262,
     mc_write = 263,
     mc_if = 264,
     mc_then = 265,
     mc_else = 266,
     mc_endif = 267,
     mc_dowhile = 268,
     mc_enddo = 269,
     mc_equivalence = 270,
     mul = 271,
     mc_call = 272,
     idf = 273,
     cst_int = 274,
     cst_real = 275,
     aff = 276,
     pvg = 277,
     vig = 278,
     po = 279,
     pf = 280,
     mc_err = 281,
     mc_reel = 282,
     cst_chaine = 283,
     mc_dimension = 284,
     mc_true = 285,
     mc_false = 286,
     moin = 287,
     plus = 288,
     divsep = 289,
     mc_integer = 290,
     mc_char = 291,
     mc_real = 292,
     mc_logical = 293,
     mc_ge = 294,
     mc_gt = 295,
     mc_le = 296,
     mc_lt = 297,
     mc_ne = 298,
     mc_eq = 299,
     mc_and = 300,
     mc_or = 301
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


