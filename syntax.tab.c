
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
void ajour_quad(int num_quad, int colon_quad, char val []);
void afficher_qdr();
void misajourreal(char entite [] , float val ) ;
void misajourchar(char entite [] , char val []);
void insereChars(char entite [] , char val []) ;
int nbrArgOfR(char entite [] );
void insereRoutine(char entite [] , int val);
void addArgs(char entite [] , int nb) ;
void quadr(char opr[],char op1[],char op2[],char res[]);
void ajour_quad(int num_quad, int colon_quad, char val []);
int n = 0 ;
    int sauvBOOL = -1 ;
    char sauvConstChar [20] ;
    char  sauvVar [20] ;
    int sauvTaille ;
    int sauvMat1 ; 
    int sauvMat2 ;
    extern int col ; 
    char sauvidfmat [20] ;
    char ope1 [20] , ope2 [20];
    extern int nb_ligne ;
    char* file_name = NULL;
    int tmp = -1 ;
    int sauvConstInt=-1;
	float sauvConstReal=-1;
    extern char sauvType [20];
    char sauvOpr [20];
    int nbr = 0 ;
    int h = 0 ;
    int sauvBz = 0 , sauvBr = 0 , fin = 0 ,sauvDeb = 0; 


int Fin_if=0,deb_else=0;
int qc=0;


FILE* yyin;


/* Line 189 of yacc.c  */
#line 132 "syntax.tab.c"

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
#line 59 "./syntax.y"

    int entier ;
    char* str ;
    float reel ;




/* Line 214 of yacc.c  */
#line 221 "syntax.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 233 "syntax.tab.c"

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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   238

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  95
/* YYNRULES -- Number of states.  */
#define YYNSTATES  198

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
       0,     0,     3,     6,    12,    14,    16,    18,    20,    23,
      24,    32,    36,    40,    42,    44,    46,    48,    50,    52,
      54,    56,    60,    63,    68,    72,    77,    82,    84,    94,
      98,   105,   112,   114,   119,   124,   125,   134,   138,   140,
     144,   146,   150,   154,   156,   162,   166,   170,   172,   174,
     180,   183,   184,   193,   204,   209,   210,   214,   216,   222,
     226,   232,   236,   244,   250,   252,   254,   256,   257,   262,
     266,   270,   274,   278,   282,   286,   290,   294,   298,   302,
     306,   310,   314,   316,   318,   323,   330,   332,   334,   336,
     338,   340,   342,   344,   348,   352
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      46,     0,    -1,    49,    47,    -1,     3,    18,    69,    68,
       4,    -1,    35,    -1,    33,    -1,    34,    -1,    36,    -1,
      50,    49,    -1,    -1,    51,    24,    52,    25,    69,    68,
       6,    -1,    48,     5,    18,    -1,    18,    23,    52,    -1,
      18,    -1,    54,    -1,    72,    -1,    61,    -1,    63,    -1,
      67,    -1,    65,    -1,    58,    -1,    55,    68,    12,    -1,
      56,    11,    -1,    57,    25,    10,    68,    -1,     9,    24,
      73,    -1,    59,    68,    14,    22,    -1,    60,    24,    73,
      25,    -1,    13,    -1,    15,    24,    62,    25,    23,    24,
      62,    25,    22,    -1,    18,    23,    62,    -1,    18,    24,
      19,    25,    23,    62,    -1,    18,    24,    20,    25,    23,
      62,    -1,    18,    -1,    18,    24,    19,    25,    -1,    18,
      24,    20,    25,    -1,    -1,    18,    21,    17,    18,    24,
      64,    25,    22,    -1,    18,    23,    64,    -1,    18,    -1,
      19,    23,    64,    -1,    19,    -1,    20,    23,    64,    -1,
      26,    23,    64,    -1,    26,    -1,     8,    24,    66,    25,
      22,    -1,    18,    23,    66,    -1,    26,    23,    66,    -1,
      18,    -1,    26,    -1,     7,    24,    18,    25,    22,    -1,
      53,    68,    -1,    -1,    48,    18,    27,    24,    19,    25,
      22,    69,    -1,    48,    18,    27,    24,    19,    23,    19,
      25,    22,    69,    -1,    48,    70,    22,    69,    -1,    -1,
      18,    23,    70,    -1,    18,    -1,    18,    21,    71,    23,
      70,    -1,    18,    21,    71,    -1,    18,    16,    19,    23,
      70,    -1,    18,    16,    19,    -1,    18,    16,    19,    21,
      26,    23,    70,    -1,    18,    16,    19,    21,    26,    -1,
      26,    -1,    19,    -1,    20,    -1,    -1,    18,    21,    73,
      22,    -1,    73,    31,    73,    -1,    73,    30,    73,    -1,
      73,    16,    73,    -1,    73,    32,    73,    -1,    73,    37,
      73,    -1,    73,    38,    73,    -1,    73,    39,    73,    -1,
      73,    40,    73,    -1,    73,    41,    73,    -1,    73,    42,
      73,    -1,    73,    43,    73,    -1,    73,    44,    73,    -1,
      24,    73,    25,    -1,    74,    -1,    18,    -1,    18,    24,
      75,    25,    -1,    18,    24,    18,    23,    18,    25,    -1,
      19,    -1,    20,    -1,    26,    -1,    28,    -1,    29,    -1,
      18,    -1,    19,    -1,    18,    23,    19,    -1,    19,    23,
      19,    -1,    19,    23,    18,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    79,    79,    84,    89,    90,    91,    92,    96,    96,
      97,    99,   107,   108,   111,   112,   113,   114,   115,   116,
     117,   119,   122,   125,   130,   137,   141,   146,   152,   155,
     159,   163,   167,   172,   176,   179,   182,   207,   207,   208,
     209,   210,   211,   212,   214,   216,   216,   216,   218,   220,
     224,   224,   227,   236,   247,   247,   250,   254,   258,   281,
     303,   307,   312,   317,   324,   325,   326,   326,   328,   375,
     380,   384,   388,   396,   400,   404,   408,   412,   416,   420,
     424,   428,   429,   432,   438,   446,   451,   458,   464,   469,
     470,   472,   476,   488,   492,   503
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
  "$accept", "S", "PROGRAM", "TYPE", "ROUTINE", "A", "B", "ARGS", "INST",
  "INST_COND", "C", "D", "F", "INST_WHILE", "G", "H", "INST_EQUIVALENCE",
  "VAR_LIST", "INST_CALL", "IDF_LIST", "INST_WRITE", "SMTH", "INST_READ",
  "LIST_INST", "DEC", "LIST_IDF_DEC", "CST", "INST_AFF", "EXP_ARTH",
  "OPERANDE", "INDICE", 0
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
      50,    51,    52,    52,    53,    53,    53,    53,    53,    53,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      62,    62,    62,    62,    62,    62,    63,    64,    64,    64,
      64,    64,    64,    64,    65,    66,    66,    66,    66,    67,
      68,    68,    69,    69,    69,    69,    70,    70,    70,    70,
      70,    70,    70,    70,    71,    71,    71,    71,    72,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    74,    74,    74,    74,    74,    74,    74,
      74,    75,    75,    75,    75,    75
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     5,     1,     1,     1,     1,     2,     0,
       7,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     2,     4,     3,     4,     4,     1,     9,     3,
       6,     6,     1,     4,     4,     0,     8,     3,     1,     3,
       1,     3,     3,     1,     5,     3,     3,     1,     1,     5,
       2,     0,     8,    10,     4,     0,     3,     1,     5,     3,
       5,     3,     7,     5,     1,     1,     1,     0,     4,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     4,     6,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       9,     5,     6,     4,     7,     0,     0,     0,     9,     0,
       1,     0,     0,     2,     8,     0,    11,    55,    13,     0,
       0,    51,     0,    55,    57,     0,     0,     0,     0,    27,
       0,     0,    51,    14,    51,     0,     0,    20,    51,     0,
      16,    17,    19,    18,     0,    15,    12,    51,     0,    67,
       0,     0,    55,     0,     0,     0,    35,     0,    50,     0,
      22,     0,     0,     0,     3,     0,    61,    65,    66,    64,
      59,    57,    56,     0,    54,     0,    47,    48,     0,    83,
      86,    87,     0,    88,    89,    90,    24,    82,    32,     0,
       0,     0,    21,    51,     0,     0,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    35,
       0,     0,     0,    68,    23,    25,    26,    63,    60,    58,
       0,     0,    49,    45,    46,    44,    91,    92,     0,    81,
      71,    70,    69,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    29,     0,     0,     0,     0,     0,     0,    55,
       0,     0,    84,    33,    34,    35,    38,    40,     0,    43,
       0,    62,     0,    52,     0,    93,    95,    94,    35,    35,
       0,     0,     0,     0,     0,     0,    55,    85,    30,    31,
       0,    37,    39,    41,    42,    36,    53,    28
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,    13,    20,     7,     8,     9,    19,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    89,    41,   170,
      42,    78,    43,    44,    21,    25,    70,    45,    86,    87,
     138
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -101
static const yytype_int16 yypact[] =
{
      64,  -101,  -101,  -101,  -101,    14,    18,    27,    64,    15,
    -101,    26,    29,  -101,  -101,    67,  -101,    64,    84,    77,
     119,    33,    67,    64,   -10,   105,   120,   129,   130,  -101,
     131,   135,    33,  -101,    33,   146,   133,  -101,    33,   136,
    -101,  -101,  -101,  -101,   157,  -101,  -101,    33,   143,    57,
     158,   153,    64,   160,   -14,   167,   162,   155,  -101,   170,
    -101,   178,   175,   167,  -101,   184,    22,  -101,  -101,  -101,
     169,    80,  -101,   179,  -101,   172,   171,   176,   177,   180,
    -101,  -101,   167,  -101,  -101,  -101,   108,  -101,    82,   181,
     182,    -6,  -101,    33,   183,    50,  -101,   185,   158,   158,
      61,   186,   -14,   -14,   187,   107,    79,   167,   167,   167,
     167,   167,   167,   167,   167,   167,   167,   167,   167,   162,
     109,   189,   190,  -101,  -101,  -101,  -101,   192,  -101,  -101,
     188,   191,  -101,  -101,  -101,  -101,   193,   194,   195,  -101,
      30,   127,   127,    30,    87,    87,    87,    87,    87,    87,
    -101,  -101,  -101,   196,   197,   199,     2,   158,   200,    64,
     114,   116,  -101,   201,   203,   162,   204,   205,   206,   207,
     208,  -101,   209,  -101,   210,  -101,  -101,  -101,   162,   162,
     211,     2,     2,     2,     2,   212,    64,  -101,  -101,  -101,
     215,  -101,  -101,  -101,  -101,  -101,  -101,  -101
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -101,  -101,  -101,     7,   202,  -101,  -101,   216,  -101,  -101,
    -101,  -101,  -101,  -101,  -101,  -101,  -101,  -100,  -101,   -69,
    -101,    39,  -101,   -29,   -23,   -49,  -101,  -101,   -55,  -101,
    -101
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      47,    72,    91,    58,    76,    59,    48,     6,    95,    62,
     107,    49,    77,    50,    10,     6,   123,    51,    65,   152,
     166,   167,   168,    11,   108,   109,   110,   106,   169,    74,
      12,   111,   112,   113,   114,   115,   116,   117,   118,    15,
      26,    27,    28,    97,    16,    98,    29,    17,    30,   128,
     129,    31,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   124,   180,   107,   111,   112,   113,
     114,   115,   116,   117,   118,   126,    67,    68,   188,   189,
     108,   109,   110,    69,   130,    18,   131,   111,   112,   113,
     114,   115,   116,   117,   118,   107,    48,     1,     2,     3,
       4,    49,    23,    50,   139,   119,   120,    22,   171,   108,
     109,   110,   191,   192,   193,   194,   111,   112,   113,   114,
     115,   116,   117,   118,   107,   136,   137,    52,   153,   154,
     117,   118,   174,   175,   176,   177,   173,    24,   108,   109,
     110,   133,   134,   107,    53,   111,   112,   113,   114,   115,
     116,   117,   118,    54,    55,    56,    57,    60,    61,   110,
      63,    64,    66,   196,   111,   112,   113,   114,   115,   116,
     117,   118,    90,    79,    80,    81,    71,    73,    75,    82,
      88,    83,    92,    84,    85,    79,    80,    81,    93,    94,
      96,    82,    99,    83,   102,    84,    85,   101,   100,   103,
     122,     0,   104,     0,   105,   125,   121,   158,   132,   135,
      14,   127,   155,   159,   156,   157,   160,   161,     0,     0,
     162,   163,   164,   165,   178,   172,   179,   181,   182,   183,
     184,   186,     0,   185,   195,   187,   190,   197,    46
};

static const yytype_int16 yycheck[] =
{
      23,    50,    57,    32,    18,    34,    16,     0,    63,    38,
      16,    21,    26,    23,     0,     8,    22,    27,    47,   119,
      18,    19,    20,     5,    30,    31,    32,    82,    26,    52,
       3,    37,    38,    39,    40,    41,    42,    43,    44,    24,
       7,     8,     9,    21,    18,    23,    13,    18,    15,    98,
      99,    18,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,    93,   165,    16,    37,    38,    39,
      40,    41,    42,    43,    44,    25,    19,    20,   178,   179,
      30,    31,    32,    26,    23,    18,    25,    37,    38,    39,
      40,    41,    42,    43,    44,    16,    16,    33,    34,    35,
      36,    21,    25,    23,    25,    23,    24,    23,   157,    30,
      31,    32,   181,   182,   183,   184,    37,    38,    39,    40,
      41,    42,    43,    44,    16,    18,    19,    22,    19,    20,
      43,    44,    18,    19,    18,    19,   159,    18,    30,    31,
      32,   102,   103,    16,    24,    37,    38,    39,    40,    41,
      42,    43,    44,    24,    24,    24,    21,    11,    25,    32,
      24,     4,    19,   186,    37,    38,    39,    40,    41,    42,
      43,    44,    17,    18,    19,    20,    18,    24,    18,    24,
      18,    26,    12,    28,    29,    18,    19,    20,    10,    14,
       6,    24,    23,    26,    23,    28,    29,    25,    19,    23,
      18,    -1,    25,    -1,    24,    22,    25,    19,    22,    22,
       8,    26,    23,    22,    24,    23,    23,    23,    -1,    -1,
      25,    25,    25,    24,    23,    25,    23,    23,    23,    23,
      23,    22,    -1,    25,    22,    25,    25,    22,    22
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    33,    34,    35,    36,    46,    48,    49,    50,    51,
       0,     5,     3,    47,    49,    24,    18,    18,    18,    52,
      48,    69,    23,    25,    18,    70,     7,     8,     9,    13,
      15,    18,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    63,    65,    67,    68,    72,    52,    69,    16,    21,
      23,    27,    22,    24,    24,    24,    24,    21,    68,    68,
      11,    25,    68,    24,     4,    68,    19,    19,    20,    26,
      71,    18,    70,    24,    69,    18,    18,    26,    66,    18,
      19,    20,    24,    26,    28,    29,    73,    74,    18,    62,
      17,    73,    12,    10,    14,    73,     6,    21,    23,    23,
      19,    25,    23,    23,    25,    24,    73,    16,    30,    31,
      32,    37,    38,    39,    40,    41,    42,    43,    44,    23,
      24,    25,    18,    22,    68,    22,    25,    26,    70,    70,
      23,    25,    22,    66,    66,    22,    18,    19,    75,    25,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    62,    19,    20,    23,    24,    23,    19,    22,
      23,    23,    25,    25,    25,    24,    18,    19,    20,    26,
      64,    70,    25,    69,    18,    19,    18,    19,    23,    23,
      62,    23,    23,    23,    23,    25,    22,    25,    62,    62,
      25,    64,    64,    64,    64,    22,    69,    22
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
#line 79 "./syntax.y"
    { 
    printf("\n --------------------------- \n");
    printf("\n Compilation reussie !.\n");
    printf("\n --------------------------- \n");;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 84 "./syntax.y"
    {;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 89 "./syntax.y"
    { strcpy(sauvType,"REAL"); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 90 "./syntax.y"
    { strcpy(sauvType,"INTEGER"); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 91 "./syntax.y"
    { strcpy(sauvType,"CHARACTER"); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 92 "./syntax.y"
    { strcpy(sauvType,"LOGICAL"); ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 99 "./syntax.y"
    {
            strcpy(sauvVar,(yyvsp[(3) - (3)].str)); 
			if (rechercheNonDeclare((yyvsp[(3) - (3)].str))== 0) { insererType((yyvsp[(3) - (3)].str),sauvType); insereRoutine((yyvsp[(3) - (3)].str),n);}
			else {printf("Erreur semantique 'double declaration' a la ligne %d,la variable %s est deja declaree \n", nb_ligne, (yyvsp[(3) - (3)].str));}


		;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 107 "./syntax.y"
    {n++; printf("N = %d\n",n) ;;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 108 "./syntax.y"
    {n++; printf("N = %d\n",n) ; addArgs(sauvVar,n+2); n = 0 ;;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 119 "./syntax.y"
    {
    ajour_quad(sauvBr,1,intToString(qc));
;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 122 "./syntax.y"
    {
    ajour_quad(sauvBz,1,intToString(qc)) ;
;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 125 "./syntax.y"
    {
    quadr("BR","" , "TMP","");
    sauvBr = qc-1;

;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 130 "./syntax.y"
    {
    quadr("BZ","" ,"TMP","");
    sauvBz = qc -1; 
;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 137 "./syntax.y"
    {
        quadr("BR",intToString(sauvDeb),"","");
        ajour_quad(sauvBz,1,intToString(qc));
;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 141 "./syntax.y"
    {
    quadr("BZ","","TMP","");
    sauvBz = qc-1 ;

;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 146 "./syntax.y"
    {
    sauvDeb = qc; 
;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 155 "./syntax.y"
    {
            if(rechercheNonDeclare((yyvsp[(1) - (3)].str)) == 0) {printf("Erreur semantique a la ligne %d : variable %s Non declaree  \n", nb_ligne, (yyvsp[(1) - (3)].str));}
           
;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 159 "./syntax.y"
    {
            if(rechercheNonDeclare((yyvsp[(1) - (6)].str)) == 0) {printf("Erreur semantique a la ligne %d : variable %s Non declaree  \n", nb_ligne, (yyvsp[(1) - (6)].str));}
           
;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 163 "./syntax.y"
    {
            if(rechercheNonDeclare((yyvsp[(1) - (6)].str)) == 0) {printf("Erreur semantique a la ligne %d : variable %s Non declaree  \n", nb_ligne, (yyvsp[(1) - (6)].str));}
           
;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 167 "./syntax.y"
    {
            if(strcmp(sauvType,"CHARACTER") == 0) {insereChars((yyvsp[(1) - (1)].str),"");}
            if(rechercheNonDeclare((yyvsp[(1) - (1)].str)) == 0) {printf("Erreur semantique a la ligne %d : variable %s Non declaree  \n", nb_ligne, (yyvsp[(1) - (1)].str));}
           
;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 172 "./syntax.y"
    {
            if(rechercheNonDeclare((yyvsp[(1) - (4)].str)) == 0) {printf("Erreur semantique a la ligne %d : variable %s Non declaree  \n", nb_ligne, (yyvsp[(1) - (4)].str));}
           
;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 176 "./syntax.y"
    {
            if(rechercheNonDeclare((yyvsp[(1) - (4)].str)) == 0) {printf("Erreur semantique a la ligne %d : variable %s Non declaree  \n", nb_ligne, (yyvsp[(1) - (4)].str));}
           
;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 182 "./syntax.y"
    {
    printf("N lhna = %d\n",n) ;
    if (nbrArgOfR((yyvsp[(4) - (8)].str)) < n) {
        printf("Erreur semantique a la ligne %d : manque d'arguments \n", nb_ligne);
    
        
        
    }else if (nbrArgOfR((yyvsp[(4) - (8)].str)) > n) {
        printf("Erreur semantique a la ligne %d : args >  \n", nb_ligne);
    
        
        
    }
    if(!CompTypeBinoBin((yyvsp[(1) - (8)].str),(yyvsp[(4) - (8)].str))){
				printf("Erreur semantique a la ligne %d : ICOMPATIBILITE DE TYPE de la variable %s \n", nb_ligne, (yyvsp[(1) - (8)].str)); 
                
                
            }
    if(rechercheNonDeclare((yyvsp[(1) - (8)].str)) == 0) {printf("Erreur semantique a la ligne %d : variable %s Non declaree  \n", nb_ligne, (yyvsp[(1) - (8)].str));}
    if(rechercheNonDeclare((yyvsp[(4) - (8)].str)) == 0) {printf("Erreur semantique a la ligne %d : routine %s Non declaree  \n", nb_ligne, (yyvsp[(4) - (8)].str));}

    n = 0 ;

;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 207 "./syntax.y"
    { n++ ; ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 207 "./syntax.y"
    {n++;;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 208 "./syntax.y"
    { n++ ; ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 209 "./syntax.y"
    {  n++ ; ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 210 "./syntax.y"
    { n++ ; ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 211 "./syntax.y"
    { n++ ; ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 212 "./syntax.y"
    { n++ ; ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 216 "./syntax.y"
    {
                if(rechercheNonDeclare((yyvsp[(1) - (1)].str)) == 0 ) {printf("Erreur semantique a la ligne %d : variable %s Non declaree  \n", nb_ligne, (yyvsp[(1) - (1)].str));}
;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 220 "./syntax.y"
    {   
             if(rechercheNonDeclare((yyvsp[(3) - (5)].str)) == 0 ) {printf("Erreur semantique a la ligne %d : variable %s Non declaree  \n", nb_ligne, (yyvsp[(1) - (5)].str));}
;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 227 "./syntax.y"
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

  case 53:

/* Line 1455 of yacc.c  */
#line 236 "./syntax.y"
    {
            // if($5 <= 0 || $7 <=0) {

			//  printf("Erreur semantique  a la ligne %d,la dimension ne peut pas etre negative ou zero \n", nb_ligne);
             

            // }
			// if (rechercheNonDeclare($2)== 0) {insererType($2,sauvType);}
			// else {printf("Erreur semantique 'double declaration' a la ligne %d,la variable %s est deja declaree \n", nb_ligne, $2);}
            // insereLaMat($2,$5,$7) ;
		;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 250 "./syntax.y"
    {
			if (rechercheNonDeclare((yyvsp[(1) - (3)].str))== 0) {insererType((yyvsp[(1) - (3)].str),sauvType);}
			else {printf("Erreur semantique 'double declaration' a la ligne %d,la variable %s est deja declaree \n", nb_ligne, (yyvsp[(1) - (3)].str));}
		;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 254 "./syntax.y"
    {
			if (rechercheNonDeclare((yyvsp[(1) - (1)].str))==0) {insererType((yyvsp[(1) - (1)].str),sauvType); }
			else {printf("Erreur semantique 'double declaration' a la ligne %d,la variable %s est deja declaree \n", nb_ligne, (yyvsp[(1) - (1)].str));}
		;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 258 "./syntax.y"
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

  case 59:

/* Line 1455 of yacc.c  */
#line 281 "./syntax.y"
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

  case 60:

/* Line 1455 of yacc.c  */
#line 303 "./syntax.y"
    {
			if (rechercheNonDeclare((yyvsp[(1) - (5)].str))==0) {insererType((yyvsp[(1) - (5)].str),sauvType);}
			else {printf("Erreur semantique 'double declaration' a la ligne %d,la variable %s est deja declaree \n", nb_ligne, (yyvsp[(1) - (5)].str));}
		;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 307 "./syntax.y"
    {
            
			if (rechercheNonDeclare((yyvsp[(1) - (3)].str))==0) {insererType((yyvsp[(1) - (3)].str),sauvType);}
			else {printf("Erreur semantique 'double declaration' a la ligne %d,la variable %s est deja declaree \n", nb_ligne, (yyvsp[(1) - (3)].str));}
		;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 312 "./syntax.y"
    {
            
			if (rechercheNonDeclare((yyvsp[(1) - (7)].str))==0) {insererType((yyvsp[(1) - (7)].str),sauvType);}
			else {printf("Erreur semantique 'double declaration' a la ligne %d,la variable %s est deja declaree \n", nb_ligne, (yyvsp[(1) - (7)].str));}
		;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 317 "./syntax.y"
    {
            
			if (rechercheNonDeclare((yyvsp[(1) - (5)].str))==0) {insererType((yyvsp[(1) - (5)].str),sauvType);}
			else {printf("Erreur semantique 'double declaration' a la ligne %d,la variable %s est deja declaree \n", nb_ligne, (yyvsp[(1) - (5)].str));}
		;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 324 "./syntax.y"
    {strcpy(sauvConstChar,(yyvsp[(1) - (1)].str)); tmp=2;;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 325 "./syntax.y"
    { sauvConstInt = (yyvsp[(1) - (1)].entier) ; tmp = 0 ; ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 326 "./syntax.y"
    { sauvConstInt = (yyvsp[(1) - (1)].reel); tmp = 1;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 328 "./syntax.y"
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
                        if(h) quadr("=","TMP","",(yyvsp[(1) - (4)].str)); else quadr("=",intToString(sauvConstInt),"",(yyvsp[(1) - (4)].str));
                        h = 0 ;
                    break;
                    case 1 :
                         misajourreal((yyvsp[(1) - (4)].str),sauvConstReal);
                         printf("\n REAL : %s \n",sauvVar);
                         if(h) quadr("=","TMP","",(yyvsp[(1) - (4)].str)); else quadr("=",sauvVar,"",(yyvsp[(1) - (4)].str));
                         h = 0 ;
                         
                    break;
                    case 2 :
                        // printf("OOF") ;
                         misajourchar((yyvsp[(1) - (4)].str),sauvConstChar);
                         quadr("=",sauvConstChar,"",(yyvsp[(1) - (4)].str));
                    break;
                    case 3 :
                        
                        misajourint((yyvsp[(1) - (4)].str),sauvBOOL) ;
                        if(sauvBOOL) quadr("=","TRUE","",(yyvsp[(1) - (4)].str)); else quadr("=","FALSE","",(yyvsp[(1) - (4)].str));
                    break ;

                    



                }
            }
            }
            

            
;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 375 "./syntax.y"
    {
            tmp = 1;
            quadr("+",ope1,ope2,"TMP");
            h = 1 ;
         ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 380 "./syntax.y"
    {
            tmp = 1;
            quadr("-",ope1,ope2,"TMP");h = 1 ;
         ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 384 "./syntax.y"
    {
            tmp = 1;
            quadr("*",ope1,ope2,"TMP");h = 1 ;
         ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 388 "./syntax.y"
    {
tmp = 1;
            if(sauvConstInt == 0){printf("Erreur semantique 'division par zero' a la ligne %d \n",nb_ligne); }
                else{
                 quadr("/",ope1,ope2,"TMP");h = 1 ;

                }
           ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 396 "./syntax.y"
    {
            tmp = 1;
            quadr("GE",ope1,ope2,"TMP");h = 1 ;
         ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 400 "./syntax.y"
    {
            tmp = 1;
            quadr("GT",ope1,ope2,"TMP");h = 1 ;
         ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 404 "./syntax.y"
    {
            tmp = 1;
            quadr("LE",ope1,ope2,"TMP");h = 1 ;
         ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 408 "./syntax.y"
    {
            tmp = 1;
            quadr("LT",ope1,ope2,"TMP");h = 1 ;
         ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 412 "./syntax.y"
    {
            tmp = 1;
            quadr("NEQ",ope1,ope2,"TMP");h = 1 ;
         ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 416 "./syntax.y"
    {
            tmp = 1;
            quadr("EQ",ope1,ope2,"TMP");h = 1 ;
         ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 420 "./syntax.y"
    {
            tmp = 1;
            quadr("AND",ope1,ope2,"TMP");h = 1 ;
         ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 424 "./syntax.y"
    {
            tmp = 1;
            quadr("OR",ope1,ope2,"TMP");h = 1 ;
         ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 432 "./syntax.y"
    {
    nbr++;
    if(nbr == 1 ) strcpy(ope1,(yyvsp[(1) - (1)].str)) ; else {strcpy(ope2,(yyvsp[(1) - (1)].str)) ; nbr=0;}
    strcpy(sauvVar,(yyvsp[(1) - (1)].str));          
   if(rechercheNonDeclare((yyvsp[(1) - (1)].str)) == 0 ) {printf("Erreur semantique a la ligne %d : variable %s Non declaree  \n", nb_ligne, (yyvsp[(1) - (1)].str));}
;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 438 "./syntax.y"
    {
            

            if(rechercheNonDeclare((yyvsp[(1) - (4)].str)) == 0 ) {printf("Erreur semantique a la ligne %d : variable %s Non declaree  \n", nb_ligne, (yyvsp[(1) - (4)].str));}
            
            

;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 446 "./syntax.y"
    {strcpy(sauvVar,(yyvsp[(1) - (6)].str));            
         
          if(rechercheNonDeclare((yyvsp[(1) - (6)].str)) == 0 ) {printf("Erreur semantique a la ligne %d : variable %s Non declaree  \n", nb_ligne, (yyvsp[(1) - (6)].str));}

;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 451 "./syntax.y"
    {
            nbr++;
    if(nbr == 1 ) strcpy(ope1,intToString((yyvsp[(1) - (1)].entier))) ; else {strcpy(ope2,intToString((yyvsp[(1) - (1)].entier))) ; nbr=0;}
            strcpy(sauvVar,intToString((yyvsp[(1) - (1)].entier))); 
            sauvConstInt = (yyvsp[(1) - (1)].entier) ;
            tmp = 0 ; // integer
         ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 458 "./syntax.y"
    {
            // strcpy(sauvVar,intToString($1)); 
            sprintf(sauvVar,"%f",(yyvsp[(1) - (1)].reel));
            sauvConstReal = (yyvsp[(1) - (1)].reel) ;
            tmp = 1 ; // real
         ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 464 "./syntax.y"
    {
            strcpy(sauvVar,(yyvsp[(1) - (1)].str)); 
            strcpy(sauvConstChar,(yyvsp[(1) - (1)].str)) ;
            tmp = 2 ; // char
         ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 469 "./syntax.y"
    {sauvBOOL = 1 ; tmp = 3 ; strcpy(sauvVar,"LOGICAL");;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 470 "./syntax.y"
    {sauvBOOL = 0 ; tmp = 3 ; strcpy(sauvVar,"LOGICAL");;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 472 "./syntax.y"
    {          
    
      if(rechercheNonDeclare((yyvsp[(1) - (1)].str)) == 0 ) {printf("Erreur semantique a la ligne %d : variable %s Non declaree  \n", nb_ligne, (yyvsp[(1) - (1)].str));}
;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 476 "./syntax.y"
    {
        if((yyvsp[(1) - (1)].entier) > sauvTaille) {
            printf("Erreur semantique a la ligne %d : indice > La taille de tableau  \n", nb_ligne);
        }
        if ((yyvsp[(1) - (1)].entier) < 0 ) {
            printf("Erreur semantique a la ligne %d : indice  < 0   \n", nb_ligne);
        }




      ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 488 "./syntax.y"
    {
                    if(rechercheNonDeclare((yyvsp[(1) - (3)].str)) == 0 ) {printf("Erreur semantique a la ligne %d : variable %s Non declaree  \n", nb_ligne, (yyvsp[(1) - (3)].str));}

      ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 492 "./syntax.y"
    {
        // if ($1 > hatLaTaille1Mat(sauvidfmat) || $3 > hatLaTaille2Mat(sauvidfmat)) {
        //                 printf("Erreur semantique a la ligne %d : indice > La taille de tableau  \n", nb_ligne);

        // }

        //  if ($1 < 0 || $3 < 0) {
        //     printf("Erreur semantique a la ligne %d : indice  < 0   \n", nb_ligne);
        // }
        
      ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 503 "./syntax.y"
    {
                    if(rechercheNonDeclare((yyvsp[(3) - (3)].str)) == 0 ) {printf("Erreur semantique a la ligne %d : variable %s Non declaree  \n", nb_ligne, (yyvsp[(1) - (3)].entier));}

      ;}
    break;



/* Line 1455 of yacc.c  */
#line 2407 "syntax.tab.c"
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
#line 512 "./syntax.y"


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
