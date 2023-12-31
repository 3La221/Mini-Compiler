
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "./syntax.y"

    #include <stdio.h>
    #include<string.h>
    int yywrap(void);
    int yylex(void);
    int yyerror ( char*  msg )  ;
    void initialisation(); 
    void afficher();
    int rechercheNonDeclare(char* entite);
    void insererType(char* entite, char* type);
    int CompType (char* entite , char* type);
    int CompTypeBinoBin (char* entite1 , char* entite2);
    void insereLaTable(char* entite , int taille);
    char *intToString(int number) ;
    int  hatLaTaille(char entite []);
    void misajourint(char entite [] , int val) ;
    void insereLaMat(char entite [] , int taille1 , int taille2);
int hatLaTaille1Mat(char entite []) ;
int hatLaTaille2Mat(char entite []) ;
void quadr(char opr[],char op1[],char op2[],char res[]);
void ajour_quad(int num_quad, int colon_quad, char val []);
void afficher_qdr();
void misajourreal(char entite [] , float val ) ;
void misajourchar(char entite [] , char val []);
void insereChars(char entite [] , char val []) ;
    int sauvBOOL = -1 ;
    char sauvConstChar [20] ;
    char  sauvVar [20] ;
    int sauvTaille ;
    int sauvMat1 ; 
    int sauvMat2 ;
    extern int col ; 
    char sauvidfmat [20] ;
    extern int nb_ligne ;
    char* file_name = NULL;
    int tmp = -1 ;
    int sauvConstInt=-1;
	float sauvConstReal=-1;
    extern char sauvType [20];
    char sauvOpr [20];


int Fin_if=0,deb_else=0;
int qc=0;


FILE* yyin;


/* Line 189 of yacc.c  */
#line 123 "syntax.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


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
     cst_chaine = 281,
     mc_dimension = 282,
     mc_true = 283,
     mc_false = 284,
     moin = 285,
     plus = 286,
     divsep = 287,
     mc_integer = 288,
     mc_char = 289,
     mc_real = 290,
     mc_logical = 291,
     mc_ge = 292,
     mc_gt = 293,
     mc_le = 294,
     mc_lt = 295,
     mc_ne = 296,
     mc_eq = 297,
     mc_and = 298,
     mc_or = 299
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 50 "./syntax.y"

    int entier ;
    char* str ;
    float reel ;




/* Line 214 of yacc.c  */
#line 212 "syntax.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 224 "syntax.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   225

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  83
/* YYNRULES -- Number of states.  */
#define YYNSTATES  182

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   299

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,    12,    14,    16,    18,    20,    31,
      32,    36,    38,    40,    42,    44,    46,    48,    50,    52,
      62,    70,    80,    84,    91,    98,   100,   105,   110,   111,
     120,   124,   126,   132,   136,   140,   142,   144,   150,   153,
     154,   163,   174,   179,   180,   184,   186,   192,   196,   202,
     206,   214,   220,   222,   224,   226,   227,   232,   236,   240,
     244,   248,   252,   256,   260,   264,   268,   272,   276,   280,
     284,   286,   288,   293,   300,   302,   304,   306,   308,   310,
     312,   314,   318,   322
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      46,     0,    -1,    49,    47,    -1,     3,    18,    62,    61,
       4,    -1,    35,    -1,    33,    -1,    34,    -1,    36,    -1,
      48,     5,    18,    24,    50,    25,    62,    61,     6,    49,
      -1,    -1,    18,    23,    50,    -1,    18,    -1,    52,    -1,
      65,    -1,    54,    -1,    56,    -1,    60,    -1,    58,    -1,
      53,    -1,     9,    24,    66,    25,    10,    61,    11,    61,
      12,    -1,    13,    24,    66,    25,    61,    14,    22,    -1,
      15,    24,    55,    25,    23,    24,    55,    25,    22,    -1,
      18,    23,    55,    -1,    18,    24,    19,    25,    23,    55,
      -1,    18,    24,    20,    25,    23,    55,    -1,    18,    -1,
      18,    24,    19,    25,    -1,    18,    24,    20,    25,    -1,
      -1,    18,    21,    17,    18,    24,    57,    25,    22,    -1,
      18,    23,    57,    -1,    18,    -1,     8,    24,    59,    25,
      22,    -1,    18,    23,    59,    -1,    26,    23,    59,    -1,
      18,    -1,    26,    -1,     7,    24,    18,    25,    22,    -1,
      51,    61,    -1,    -1,    48,    18,    27,    24,    19,    25,
      22,    62,    -1,    48,    18,    27,    24,    19,    23,    19,
      25,    22,    62,    -1,    48,    63,    22,    62,    -1,    -1,
      18,    23,    63,    -1,    18,    -1,    18,    21,    64,    23,
      63,    -1,    18,    21,    64,    -1,    18,    16,    19,    23,
      63,    -1,    18,    16,    19,    -1,    18,    16,    19,    21,
      26,    23,    63,    -1,    18,    16,    19,    21,    26,    -1,
      26,    -1,    19,    -1,    20,    -1,    -1,    18,    21,    66,
      22,    -1,    66,    31,    66,    -1,    66,    30,    66,    -1,
      66,    16,    66,    -1,    66,    32,    66,    -1,    66,    37,
      66,    -1,    66,    38,    66,    -1,    66,    39,    66,    -1,
      66,    40,    66,    -1,    66,    41,    66,    -1,    66,    42,
      66,    -1,    66,    43,    66,    -1,    66,    44,    66,    -1,
      24,    66,    25,    -1,    67,    -1,    18,    -1,    18,    24,
      68,    25,    -1,    18,    24,    18,    23,    18,    25,    -1,
      19,    -1,    20,    -1,    26,    -1,    28,    -1,    29,    -1,
      18,    -1,    19,    -1,    18,    23,    19,    -1,    19,    23,
      19,    -1,    19,    23,    18,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    70,    70,    75,    80,    81,    82,    83,    87,    91,
      96,    97,   100,   101,   102,   103,   104,   105,   106,   108,
     115,   121,   124,   128,   132,   136,   141,   145,   148,   151,
     153,   153,   155,   157,   157,   157,   159,   161,   165,   165,
     168,   177,   188,   188,   191,   195,   199,   222,   244,   248,
     253,   258,   265,   266,   267,   267,   269,   305,   306,   307,
     308,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   325,   329,   337,   342,   347,   352,   357,   358,   360,
     364,   376,   380,   391
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "mc_prog", "mc_end", "mc_routine",
  "mc_endr", "mc_read", "mc_write", "mc_if", "mc_then", "mc_else",
  "mc_endif", "mc_dowhile", "mc_enddo", "mc_equivalence", "mul", "mc_call",
  "idf", "cst_int", "cst_real", "aff", "pvg", "vig", "po", "pf",
  "cst_chaine", "mc_dimension", "mc_true", "mc_false", "moin", "plus",
  "divsep", "mc_integer", "mc_char", "mc_real", "mc_logical", "mc_ge",
  "mc_gt", "mc_le", "mc_lt", "mc_ne", "mc_eq", "mc_and", "mc_or",
  "$accept", "S", "PROGRAM", "TYPE", "ROUTINE", "ARGS", "INST",
  "INST_COND", "INST_WHILE", "INST_EQUIVALENCE", "VAR_LIST", "INST_CALL",
  "IDF_LIST", "INST_WRITE", "SMTH", "INST_READ", "LIST_INST", "DEC",
  "LIST_IDF_DEC", "CST", "INST_AFF", "EXP_ARTH", "OPERANDE", "INDICE", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    45,    46,    47,    48,    48,    48,    48,    49,    49,
      50,    50,    51,    51,    51,    51,    51,    51,    51,    52,
      53,    54,    55,    55,    55,    55,    55,    55,    55,    56,
      57,    57,    58,    59,    59,    59,    59,    60,    61,    61,
      62,    62,    62,    62,    63,    63,    63,    63,    63,    63,
      63,    63,    64,    64,    64,    64,    65,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    67,    67,    67,    67,    67,    67,    67,    67,    68,
      68,    68,    68,    68
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     5,     1,     1,     1,     1,    10,     0,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     9,
       7,     9,     3,     6,     6,     1,     4,     4,     0,     8,
       3,     1,     5,     3,     3,     1,     1,     5,     2,     0,
       8,    10,     4,     0,     3,     1,     5,     3,     5,     3,
       7,     5,     1,     1,     1,     0,     4,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     1,     4,     6,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       9,     5,     6,     4,     7,     0,     0,     0,     1,     0,
       0,     2,     0,    43,     0,     0,    39,    11,     0,    45,
       0,     0,     0,     0,     0,     0,     0,    39,    12,    18,
      14,    15,    17,    16,     0,    13,     0,    43,     0,    55,
       0,     0,    43,     0,     0,     0,     0,    28,     0,    38,
       3,    10,    39,    49,    53,    54,    52,    47,    45,    44,
       0,    42,     0,    35,    36,     0,    71,    74,    75,     0,
      76,    77,    78,     0,    70,     0,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    39,    28,     0,     0,     0,    56,
       9,    51,    48,    46,     0,     0,    37,    33,    34,    32,
      79,    80,     0,    69,    59,    39,    58,    57,    60,    61,
      62,    63,    64,    65,    66,    67,    68,     0,    22,     0,
       0,     0,     0,     8,     0,     0,    43,     0,     0,    72,
       0,     0,    26,    27,    28,    31,     0,    50,     0,    40,
       0,    81,    83,    82,    39,    20,    28,    28,     0,     0,
       0,    43,    73,     0,    23,    24,     0,    30,    29,    41,
      19,    21
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,    11,    15,     7,    18,    27,    28,    29,    30,
      77,    31,   156,    32,    65,    33,    34,    16,    20,    57,
      35,    73,    74,   122
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -102
static const yytype_int16 yypact[] =
{
      97,  -102,  -102,  -102,  -102,     5,     9,    29,  -102,    23,
      30,  -102,    56,    97,    85,    86,    93,    94,    84,    -8,
      96,    92,    95,   104,   110,   112,   118,    93,  -102,  -102,
    -102,  -102,  -102,  -102,   136,  -102,    85,    97,   122,    -9,
     128,   123,    97,   130,    -2,   166,   166,   131,   154,  -102,
    -102,  -102,    93,    -3,  -102,  -102,  -102,   137,    26,  -102,
     140,  -102,   150,   138,   139,   151,   153,  -102,  -102,   166,
    -102,  -102,  -102,    -4,  -102,    51,    -1,   156,   161,    83,
     181,   162,   128,   128,     6,   167,    -2,    -2,   169,    25,
     113,   166,   183,   166,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   166,    93,   131,    59,   173,   174,  -102,
      97,   176,  -102,  -102,   178,   179,  -102,  -102,  -102,  -102,
     177,   180,   182,  -102,    31,    93,   126,   126,    31,     7,
       7,     7,     7,     7,     7,  -102,  -102,   188,  -102,   184,
     185,   187,   186,  -102,   128,   189,    97,    66,    68,  -102,
     194,   190,   192,   193,   131,   195,   196,  -102,   191,  -102,
     197,  -102,  -102,  -102,    93,  -102,   131,   131,   198,   186,
     202,    97,  -102,   205,  -102,  -102,   203,  -102,  -102,  -102,
    -102,  -102
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -102,  -102,  -102,     2,    98,   170,  -102,  -102,  -102,  -102,
    -101,  -102,    50,  -102,    10,  -102,   -27,   -36,   -37,  -102,
    -102,   -39,  -102,  -102
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      49,    52,     6,    59,   138,     8,    61,    75,    38,    79,
      54,    55,    91,    39,     9,    40,    63,    56,    81,    41,
      82,    92,   105,   106,    64,    80,    93,    94,    95,   114,
      90,   115,    10,    96,    97,    98,    99,   100,   101,   102,
     103,    12,    38,   120,   121,   112,   113,    39,    13,    40,
     102,   103,   124,   168,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   174,   175,    91,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   137,   139,   140,
      14,    93,    94,    95,   160,   161,   162,   163,    96,    97,
      98,    99,   100,   101,   102,   103,   117,   118,   150,    91,
      21,    22,    23,    17,    19,   109,    24,   157,    25,    37,
     159,    26,     6,    93,    94,    95,    43,    36,    42,    44,
      96,    97,    98,    99,   100,   101,   102,   103,    45,    91,
       1,     2,     3,     4,    46,   179,    47,   173,   123,    48,
      50,    53,    91,    93,    94,    95,    58,    60,    62,    76,
      96,    97,    98,    99,   100,   101,   102,   103,    95,    84,
      83,    86,    87,    96,    97,    98,    99,   100,   101,   102,
     103,    78,    66,    67,    68,    85,    88,    89,    69,   108,
      70,   107,    71,    72,    66,    67,    68,   110,   111,   116,
      69,   119,    70,   125,    71,    72,   141,   145,   142,   144,
     147,   146,   151,   148,   155,   164,    51,   149,   143,   152,
     153,   154,   165,   171,   158,   166,   167,   180,   169,   177,
       0,   170,   172,   176,   178,   181
};

static const yytype_int16 yycheck[] =
{
      27,    37,     0,    40,   105,     0,    42,    46,    16,    48,
      19,    20,    16,    21,     5,    23,    18,    26,    21,    27,
      23,    25,    23,    24,    26,    52,    30,    31,    32,    23,
      69,    25,     3,    37,    38,    39,    40,    41,    42,    43,
      44,    18,    16,    18,    19,    82,    83,    21,    18,    23,
      43,    44,    91,   154,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   166,   167,    16,    37,    38,
      39,    40,    41,    42,    43,    44,    25,   104,    19,    20,
      24,    30,    31,    32,    18,    19,    18,    19,    37,    38,
      39,    40,    41,    42,    43,    44,    86,    87,   125,    16,
       7,     8,     9,    18,    18,    22,    13,   144,    15,    25,
     146,    18,   110,    30,    31,    32,    24,    23,    22,    24,
      37,    38,    39,    40,    41,    42,    43,    44,    24,    16,
      33,    34,    35,    36,    24,   171,    24,   164,    25,    21,
       4,    19,    16,    30,    31,    32,    18,    24,    18,    18,
      37,    38,    39,    40,    41,    42,    43,    44,    32,    19,
      23,    23,    23,    37,    38,    39,    40,    41,    42,    43,
      44,    17,    18,    19,    20,    25,    25,    24,    24,    18,
      26,    25,    28,    29,    18,    19,    20,     6,    26,    22,
      24,    22,    26,    10,    28,    29,    23,    19,    24,    23,
      23,    22,    14,    23,    18,    11,    36,    25,   110,    25,
      25,    24,    22,    22,    25,    23,    23,    12,    23,   169,
      -1,    25,    25,    25,    22,    22
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    33,    34,    35,    36,    46,    48,    49,     0,     5,
       3,    47,    18,    18,    24,    48,    62,    18,    50,    18,
      63,     7,     8,     9,    13,    15,    18,    51,    52,    53,
      54,    56,    58,    60,    61,    65,    23,    25,    16,    21,
      23,    27,    22,    24,    24,    24,    24,    24,    21,    61,
       4,    50,    62,    19,    19,    20,    26,    64,    18,    63,
      24,    62,    18,    18,    26,    59,    18,    19,    20,    24,
      26,    28,    29,    66,    67,    66,    18,    55,    17,    66,
      61,    21,    23,    23,    19,    25,    23,    23,    25,    24,
      66,    16,    25,    30,    31,    32,    37,    38,    39,    40,
      41,    42,    43,    44,    25,    23,    24,    25,    18,    22,
       6,    26,    63,    63,    23,    25,    22,    59,    59,    22,
      18,    19,    68,    25,    66,    10,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    61,    55,    19,
      20,    23,    24,    49,    23,    19,    22,    23,    23,    25,
      61,    14,    25,    25,    24,    18,    57,    63,    25,    62,
      18,    19,    18,    19,    11,    22,    23,    23,    55,    23,
      25,    22,    25,    61,    55,    55,    25,    57,    22,    62,
      12,    22
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 70 "./syntax.y"
    { 
    printf("\n --------------------------- \n");
    printf("\n Compilation reussie !.\n");
    printf("\n --------------------------- \n");;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 75 "./syntax.y"
    {;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 80 "./syntax.y"
    { strcpy(sauvType,"REAL"); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 81 "./syntax.y"
    { strcpy(sauvType,"INTEGER"); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 82 "./syntax.y"
    { strcpy(sauvType,"CHARACTER"); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 83 "./syntax.y"
    { strcpy(sauvType,"LOGICAL"); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 87 "./syntax.y"
    {
			if (rechercheNonDeclare((yyvsp[(3) - (10)].str))== 0) {insererType((yyvsp[(3) - (10)].str),sauvType);}
			else {printf("Erreur semantique 'double declaration' a la ligne %d,la variable %s est deja declaree \n", nb_ligne, (yyvsp[(3) - (10)].str));}

		;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 124 "./syntax.y"
    {
            if(rechercheNonDeclare((yyvsp[(1) - (3)].str)) == 0) {printf("Erreur semantique a la ligne %d : variable %s Non declaree  \n", nb_ligne, (yyvsp[(1) - (3)].str));}
           
;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 128 "./syntax.y"
    {
            if(rechercheNonDeclare((yyvsp[(1) - (6)].str)) == 0) {printf("Erreur semantique a la ligne %d : variable %s Non declaree  \n", nb_ligne, (yyvsp[(1) - (6)].str));}
           
;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 132 "./syntax.y"
    {
            if(rechercheNonDeclare((yyvsp[(1) - (6)].str)) == 0) {printf("Erreur semantique a la ligne %d : variable %s Non declaree  \n", nb_ligne, (yyvsp[(1) - (6)].str));}
           
;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 136 "./syntax.y"
    {
            if(strcmp(sauvType,"CHARACTER") == 0) {insereChars((yyvsp[(1) - (1)].str),"");}
            if(rechercheNonDeclare((yyvsp[(1) - (1)].str)) == 0) {printf("Erreur semantique a la ligne %d : variable %s Non declaree  \n", nb_ligne, (yyvsp[(1) - (1)].str));}
           
;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 141 "./syntax.y"
    {
            if(rechercheNonDeclare((yyvsp[(1) - (4)].str)) == 0) {printf("Erreur semantique a la ligne %d : variable %s Non declaree  \n", nb_ligne, (yyvsp[(1) - (4)].str));}
           
;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 145 "./syntax.y"
    {
            if(rechercheNonDeclare((yyvsp[(1) - (4)].str)) == 0) {printf("Erreur semantique a la ligne %d : variable %s Non declaree  \n", nb_ligne, (yyvsp[(1) - (4)].str));}
           
;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 157 "./syntax.y"
    {
                if(rechercheNonDeclare((yyvsp[(1) - (1)].str)) == 0 ) {printf("Erreur semantique a la ligne %d : variable %s Non declaree  \n", nb_ligne, (yyvsp[(1) - (1)].str));}
;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 161 "./syntax.y"
    {   
             if(rechercheNonDeclare((yyvsp[(3) - (5)].str)) == 0 ) {printf("Erreur semantique a la ligne %d : variable %s Non declaree  \n", nb_ligne, (yyvsp[(1) - (5)].str));}
;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 168 "./syntax.y"
    {
            if((yyvsp[(5) - (8)].entier) <= 0) {
			 printf("Erreur semantique  a la ligne %d,la dimension ne peut pas etre negative ou zero \n", nb_ligne);
            }
			if (rechercheNonDeclare((yyvsp[(2) - (8)].str))== 0){insererType((yyvsp[(2) - (8)].str),sauvType);}
			else {printf("Erreur semantique 'double declaration' a la ligne %d,la variable %s est deja declaree \n", nb_ligne, (yyvsp[(2) - (8)].str));}
            insereLaTable((yyvsp[(2) - (8)].str),(yyvsp[(5) - (8)].entier)) ;
            sauvTaille = (yyvsp[(5) - (8)].entier) ;
		;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 177 "./syntax.y"
    {
            // if($5 <= 0 || $7 <=0) {

			//  printf("Erreur semantique  a la ligne %d,la dimension ne peut pas etre negative ou zero \n", nb_ligne);
             

            // }
			// if (rechercheNonDeclare($2)== 0) {insererType($2,sauvType);}
			// else {printf("Erreur semantique 'double declaration' a la ligne %d,la variable %s est deja declaree \n", nb_ligne, $2);}
            // insereLaMat($2,$5,$7) ;
		;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 191 "./syntax.y"
    {
			if (rechercheNonDeclare((yyvsp[(1) - (3)].str))== 0) {insererType((yyvsp[(1) - (3)].str),sauvType);}
			else {printf("Erreur semantique 'double declaration' a la ligne %d,la variable %s est deja declaree \n", nb_ligne, (yyvsp[(1) - (3)].str));}
		;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 195 "./syntax.y"
    {
			if (rechercheNonDeclare((yyvsp[(1) - (1)].str))==0) {insererType((yyvsp[(1) - (1)].str),sauvType); }
			else {printf("Erreur semantique 'double declaration' a la ligne %d,la variable %s est deja declaree \n", nb_ligne, (yyvsp[(1) - (1)].str));}
		;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 199 "./syntax.y"
    {
			if (rechercheNonDeclare((yyvsp[(1) - (5)].str))==0) {insererType((yyvsp[(1) - (5)].str),sauvType); 
            switch(tmp) {
                    case 0 :
                        misajourint((yyvsp[(1) - (5)].str),sauvConstInt);
                    break;
                    case 1 :
                         misajourreal((yyvsp[(1) - (5)].str),sauvConstReal);
                    break;
                    case 2 :
                         misajourchar((yyvsp[(1) - (5)].str),sauvConstChar);
                    break;
                    case 3 :
                        misajourint((yyvsp[(1) - (5)].str),sauvBOOL) ;
                    break ;



                }
            
            }
			else {printf("Erreur semantique 'double declaration' a la ligne %d,la variable %s est deja declaree \n", nb_ligne, (yyvsp[(1) - (5)].str));}
		;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 222 "./syntax.y"
    {
            switch(tmp) {
                    case 0 :
                        misajourint((yyvsp[(1) - (3)].str),sauvConstInt);
                    break;
                    case 1 :
                         misajourreal((yyvsp[(1) - (3)].str),sauvConstReal);
                    break;
                    case 2 :
                         misajourchar((yyvsp[(1) - (3)].str),sauvConstChar);
                    break;
                    case 3 :
                        misajourint((yyvsp[(1) - (3)].str),sauvBOOL) ;
                    break ;



                }
			if (rechercheNonDeclare((yyvsp[(1) - (3)].str))==0) {insererType((yyvsp[(1) - (3)].str),sauvType);}
			else {printf("Erreur semantique 'double declaration' a la ligne %d,la variable %s est deja declaree \n", nb_ligne, (yyvsp[(1) - (3)].str));}

		;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 244 "./syntax.y"
    {
			if (rechercheNonDeclare((yyvsp[(1) - (5)].str))==0) {insererType((yyvsp[(1) - (5)].str),sauvType);}
			else {printf("Erreur semantique 'double declaration' a la ligne %d,la variable %s est deja declaree \n", nb_ligne, (yyvsp[(1) - (5)].str));}
		;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 248 "./syntax.y"
    {
            
			if (rechercheNonDeclare((yyvsp[(1) - (3)].str))==0) {insererType((yyvsp[(1) - (3)].str),sauvType);}
			else {printf("Erreur semantique 'double declaration' a la ligne %d,la variable %s est deja declaree \n", nb_ligne, (yyvsp[(1) - (3)].str));}
		;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 253 "./syntax.y"
    {
            
			if (rechercheNonDeclare((yyvsp[(1) - (7)].str))==0) {insererType((yyvsp[(1) - (7)].str),sauvType);}
			else {printf("Erreur semantique 'double declaration' a la ligne %d,la variable %s est deja declaree \n", nb_ligne, (yyvsp[(1) - (7)].str));}
		;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 258 "./syntax.y"
    {
            
			if (rechercheNonDeclare((yyvsp[(1) - (5)].str))==0) {insererType((yyvsp[(1) - (5)].str),sauvType);}
			else {printf("Erreur semantique 'double declaration' a la ligne %d,la variable %s est deja declaree \n", nb_ligne, (yyvsp[(1) - (5)].str));}
		;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 265 "./syntax.y"
    {strcpy(sauvConstChar,(yyvsp[(1) - (1)].str)); tmp=2;;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 266 "./syntax.y"
    { sauvConstInt = (yyvsp[(1) - (1)].entier) ; tmp = 0 ; ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 267 "./syntax.y"
    { sauvConstInt = (yyvsp[(1) - (1)].reel); tmp = 1;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 269 "./syntax.y"
    {
            if(rechercheNonDeclare((yyvsp[(1) - (4)].str)) == 0) {printf("Erreur semantique a la ligne %d : variable %s Non declaree  \n", nb_ligne, (yyvsp[(1) - (4)].str));}
            else {
                if(!CompTypeBinoBin((yyvsp[(1) - (4)].str),sauvVar)){
				printf("Erreur semantique a la ligne %d : ICOMPATIBILITE DE TYPE de la variable %s \n", nb_ligne, (yyvsp[(1) - (4)].str)); 
                
                
            }
            else {
                switch(tmp) {
                    case 0 :
                        misajourint((yyvsp[(1) - (4)].str),sauvConstInt);
                    break;
                    case 1 :
                         misajourreal((yyvsp[(1) - (4)].str),sauvConstReal);
                    break;
                    case 2 :
                        // printf("OOF") ;
                         misajourchar((yyvsp[(1) - (4)].str),sauvConstChar);
                    break;
                    case 3 :
                        misajourint((yyvsp[(1) - (4)].str),sauvBOOL) ;
                    break ;



                }
            }
            }
            

            
;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 308 "./syntax.y"
    {

            if(sauvConstInt == 0){printf("Erreur semantique 'division par zero' a la ligne %d \n",nb_ligne); }

           ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 325 "./syntax.y"
    {
    strcpy(sauvVar,(yyvsp[(1) - (1)].str));          
   if(rechercheNonDeclare((yyvsp[(1) - (1)].str)) == 0 ) {printf("Erreur semantique a la ligne %d : variable %s Non declaree  \n", nb_ligne, (yyvsp[(1) - (1)].str));}
;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 329 "./syntax.y"
    {
            

            if(rechercheNonDeclare((yyvsp[(1) - (4)].str)) == 0 ) {printf("Erreur semantique a la ligne %d : variable %s Non declaree  \n", nb_ligne, (yyvsp[(1) - (4)].str));}
            
            

;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 337 "./syntax.y"
    {strcpy(sauvVar,(yyvsp[(1) - (6)].str));            
         
          if(rechercheNonDeclare((yyvsp[(1) - (6)].str)) == 0 ) {printf("Erreur semantique a la ligne %d : variable %s Non declaree  \n", nb_ligne, (yyvsp[(1) - (6)].str));}

;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 342 "./syntax.y"
    {
            strcpy(sauvVar,intToString((yyvsp[(1) - (1)].entier))); 
            sauvConstInt = (yyvsp[(1) - (1)].entier) ;
            tmp = 0 ; // integer
         ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 347 "./syntax.y"
    {
            strcpy(sauvVar,intToString((yyvsp[(1) - (1)].reel))); 
            sauvConstReal = (yyvsp[(1) - (1)].reel) ;
            tmp = 1 ; // real
         ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 352 "./syntax.y"
    {
            strcpy(sauvVar,(yyvsp[(1) - (1)].str)); 
            strcpy(sauvConstChar,(yyvsp[(1) - (1)].str)) ;
            tmp = 2 ; // char
         ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 357 "./syntax.y"
    {sauvBOOL = 1 ; tmp = 3 ; strcpy(sauvVar,"LOGICAL");;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 358 "./syntax.y"
    {sauvBOOL = 0 ; tmp = 3 ; strcpy(sauvVar,"LOGICAL");;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 360 "./syntax.y"
    {          
    
      if(rechercheNonDeclare((yyvsp[(1) - (1)].str)) == 0 ) {printf("Erreur semantique a la ligne %d : variable %s Non declaree  \n", nb_ligne, (yyvsp[(1) - (1)].str));}
;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 364 "./syntax.y"
    {
        if((yyvsp[(1) - (1)].entier) > sauvTaille) {
            printf("Erreur semantique a la ligne %d : indice > La taille de tableau  \n", nb_ligne);
        }
        if ((yyvsp[(1) - (1)].entier) < 0 ) {
            printf("Erreur semantique a la ligne %d : indice  < 0   \n", nb_ligne);
        }




      ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 376 "./syntax.y"
    {
                    if(rechercheNonDeclare((yyvsp[(1) - (3)].str)) == 0 ) {printf("Erreur semantique a la ligne %d : variable %s Non declaree  \n", nb_ligne, (yyvsp[(1) - (3)].str));}

      ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 380 "./syntax.y"
    {
        // if ($1 > hatLaTaille1Mat(sauvidfmat) || $3 > hatLaTaille2Mat(sauvidfmat)) {
        //                 printf("Erreur semantique a la ligne %d : indice > La taille de tableau  \n", nb_ligne);

        // }

        //  if ($1 < 0 || $3 < 0) {
        //     printf("Erreur semantique a la ligne %d : indice  < 0   \n", nb_ligne);
        // }
        
      ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 391 "./syntax.y"
    {
                    if(rechercheNonDeclare((yyvsp[(3) - (3)].str)) == 0 ) {printf("Erreur semantique a la ligne %d : variable %s Non declaree  \n", nb_ligne, (yyvsp[(1) - (3)].entier));}

      ;}
    break;



/* Line 1455 of yacc.c  */
#line 2089 "syntax.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 400 "./syntax.y"


int main (int argc, char *argv[])
{
   initialisation();

   yyparse(); 
   printf("\n");
   afficher();
   afficher_qdr();
 }
 int yywrap ()
 {}
int yyerror ( char*  msg )  
{
    printf ("Erreur Syntaxique a la ligne %d a la colonne %d %s \n", nb_ligne,col);
} 
