/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     program = 258,
     calendar_id = 259,
     api_key = 260,
     event_id = 261,
     declare = 262,
     calendario = 263,
     user_id = 264,
     permissions = 265,
     crear = 266,
     consultar = 267,
     modificar = 268,
     eliminar = 269,
     evento = 270,
     nombre = 271,
     descripcion = 272,
     inicio = 273,
     fin = 274,
     zona = 275,
     recordatorio = 276,
     invitados = 277,
     lugar = 278,
     archivo = 279,
     LLAVEABRE = 280,
     LLAVECIERRA = 281,
     IGUAL = 282,
     DOSPUNTOS = 283,
     PUNTOCOMA = 284,
     COMA = 285,
     COMILLASIMPLE = 286,
     ID = 287,
     AND = 288,
     FECHANUM = 289,
     FECHASTRING = 290,
     HORA = 291,
     ALPHANUM = 292,
     READ = 293,
     WRITE = 294,
     ZONA = 295,
     MAIL = 296,
     URL = 297,
     ALPHANUMEVENTID = 298,
     FLOAT = 299
   };
#endif
/* Tokens.  */
#define program 258
#define calendar_id 259
#define api_key 260
#define event_id 261
#define declare 262
#define calendario 263
#define user_id 264
#define permissions 265
#define crear 266
#define consultar 267
#define modificar 268
#define eliminar 269
#define evento 270
#define nombre 271
#define descripcion 272
#define inicio 273
#define fin 274
#define zona 275
#define recordatorio 276
#define invitados 277
#define lugar 278
#define archivo 279
#define LLAVEABRE 280
#define LLAVECIERRA 281
#define IGUAL 282
#define DOSPUNTOS 283
#define PUNTOCOMA 284
#define COMA 285
#define COMILLASIMPLE 286
#define ID 287
#define AND 288
#define FECHANUM 289
#define FECHASTRING 290
#define HORA 291
#define ALPHANUM 292
#define READ 293
#define WRITE 294
#define ZONA 295
#define MAIL 296
#define URL 297
#define ALPHANUMEVENTID 298
#define FLOAT 299




/* Copy the first part of user declarations.  */
#line 1 "calendar.ypp"

#include <iostream>
#include <stdio.h>
#include <string>
#include <cstdlib>
#include <map>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;

extern FILE *yyin;
int yylex(); 
int yyerror(const char *p) { cerr << "Error with source!" << endl; return 0; }

struct DateTime{
  int day;
  int month;
  int year;
  int hours;
  int minutes;
  int seconds;
  bool hasTime;
};

map<string,int> dateMap;
map<string, bool> parameterCounter;
map<string, int> variableCounter;
std::fstream file;
bool hasNombre, hasDescripcion, hasInicio, hasFin = false;
//{lugar, archivo, invitados, zona}


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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 35 "calendar.ypp"
{
  int val;
  char* lexema;
  float valF;
  struct dateTime{
    char* lexema;
    int type;
  } time; 

  struct ParametrosB{
    char* _nombre;    
    char* _descripcion;
    dateTime _inicio;
    dateTime _fin;
  }paramsB;

  struct ParametrosN{
    char* _nombre;
    char* _descripcion;
    dateTime _inicio;
    dateTime _fin;
    float _recordatorio;
    char* _event_id;
  } paramsN;

  struct ParametrosO{
    char* _lugar;
    char* _archivo;
    char* _invitados;
    char* _zona;    
  } paramsO;

  struct ParametrosCalendario{
    char* _nombre;
    char* _descripcion;
  }paramsC;

  struct Event{
    char* lexema;
    char* _calendar_id;
    char* _event_id;
  } event;  

}
/* Line 193 of yacc.c.  */
#line 262 "calendar.tab.cpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */
#line 91 "calendar.ypp"

  DateTime getDateFromString(string date, int type);
  bool isDateValid(YYSTYPE::dateTime start, YYSTYPE::dateTime end);
  int strpos(string haystack, char needle, int nth);
  bool isRealDate(int day, int month, int year);
  void initMap(std::map<string, int> & map);
  bool isLogicalDate(DateTime startDate, DateTime endDate);
  void openFile(std::fstream & _file, std::string route); 
  void split(const std::string &s, char delim, std::vector<std::string> &elems); 
  std::vector<std::string> split(std::string &s, char delim);
  string getTime(DateTime date);
  string getDate(string date);
  void freeStr(char **str);


/* Line 216 of yacc.c.  */
#line 289 "calendar.tab.cpp"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   151

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  40
/* YYNRULES -- Number of states.  */
#define YYNSTATES  166

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
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,    10,    12,    16,    34,    39,    40,    45,
      47,    50,    53,    55,    58,    61,    67,    71,    78,    83,
     112,   118,   124,   130,   138,   139,   148,   153,   156,   163,
     166,   169,   175,   181,   195,   196,   203,   206,   209,   212,
     215
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      46,     0,    -1,     3,    37,    25,    48,    64,    26,    -1,
      38,    -1,    38,    33,    39,    -1,     7,     9,    27,    37,
      29,     7,     5,    27,    37,    29,     7,    10,    27,    31,
      47,    31,    29,    -1,     4,    28,    37,    29,    -1,    -1,
       6,    28,    43,    29,    -1,    34,    -1,    34,    36,    -1,
      35,    36,    -1,    34,    -1,    34,    36,    -1,    35,    36,
      -1,    31,    41,    31,    30,    53,    -1,    31,    41,    31,
      -1,    15,    25,    49,    56,    57,    26,    -1,     8,    25,
      58,    26,    -1,     6,    28,    43,    29,    16,    28,    37,
      29,    17,    28,    37,    29,    18,    28,    31,    51,    31,
      29,    19,    28,    31,    52,    31,    29,    21,    28,    44,
      29,    -1,    23,    28,    37,    29,    57,    -1,    24,    28,
      42,    29,    57,    -1,    22,    28,    53,    29,    57,    -1,
      20,    28,    31,    40,    31,    29,    57,    -1,    -1,    16,
      28,    37,    29,    17,    28,    37,    29,    -1,    16,    28,
      37,    29,    -1,    13,    54,    -1,    14,    15,    25,    49,
      50,    26,    -1,    11,    54,    -1,    11,    55,    -1,    16,
      28,    37,    29,    62,    -1,    17,    28,    37,    29,    62,
      -1,    18,    28,    31,    51,    31,    29,    19,    28,    31,
      52,    31,    29,    62,    -1,    -1,    12,    15,    25,    49,
      62,    26,    -1,    63,    64,    -1,    61,    64,    -1,    59,
      64,    -1,    60,    64,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   107,   107,   142,   149,   156,   201,   209,   215,   222,
     230,   240,   250,   258,   268,   278,   286,   293,   397,   415,
     465,   502,   537,   573,   608,   611,   622,   629,   646,   659,
     675,   686,   723,   761,   810,   813,   953,   957,   961,   965,
     970
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "program", "calendar_id", "api_key",
  "event_id", "declare", "calendario", "user_id", "permissions", "crear",
  "consultar", "modificar", "eliminar", "evento", "nombre", "descripcion",
  "inicio", "fin", "zona", "recordatorio", "invitados", "lugar", "archivo",
  "LLAVEABRE", "LLAVECIERRA", "IGUAL", "DOSPUNTOS", "PUNTOCOMA", "COMA",
  "COMILLASIMPLE", "ID", "AND", "FECHANUM", "FECHASTRING", "HORA",
  "ALPHANUM", "READ", "WRITE", "ZONA", "MAIL", "URL", "ALPHANUMEVENTID",
  "FLOAT", "$accept", "PROGRAM", "PERMISSION", "SETUP", "CALENDARID",
  "EVENTID", "TIEMPOINICIO", "TIEMPOFIN", "REGLAMAIL", "EVENTO",
  "CALENDARIO", "PARAMETROSN", "PARAMETROSO", "PARAMETROSCALENDARIO",
  "MODIFICAR", "ELIMINAR", "CREAR", "PARAMETROSB", "CONSULTAR",
  "FUNCIONES", 0
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
       0,    45,    46,    47,    47,    48,    49,    49,    50,    51,
      51,    51,    52,    52,    52,    53,    53,    54,    55,    56,
      57,    57,    57,    57,    57,    58,    58,    59,    60,    61,
      61,    62,    62,    62,    62,    63,    64,    64,    64,    64,
      64
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     1,     3,    17,     4,     0,     4,     1,
       2,     2,     1,     2,     2,     5,     3,     6,     4,    28,
       5,     5,     5,     7,     0,     8,     4,     2,     6,     2,
       2,     5,     5,    13,     0,     6,     2,     2,     2,     2,
       0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,    40,     0,     0,
       0,     0,     0,    40,    40,    40,    40,     0,     0,     0,
       0,    29,    30,     0,    27,     0,    38,    39,    37,    36,
       2,     0,     0,     7,     7,     7,     0,     0,     0,     0,
       0,    34,     0,     0,     0,    18,     0,     0,    24,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    35,     0,    28,
       0,    26,     6,     0,     0,     0,     0,     0,    17,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    34,    34,     9,     0,     0,     8,     0,     0,     0,
       0,     0,    24,    24,    24,    31,    32,    10,    11,     0,
       0,     0,     0,     0,    16,    22,    20,    21,     0,     0,
      25,     0,    24,     0,     0,     0,     0,    23,    15,     0,
       0,     0,     0,     3,     0,     0,    12,     0,     0,     0,
       0,     0,    13,    14,     0,     4,     5,     0,    34,     0,
      33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    19
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,   134,     7,    40,    54,    95,   138,    88,    21,
      22,    48,    63,    38,    13,    14,    15,    52,    16,    17
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -101
static const yytype_int8 yypact[] =
{
       8,   -30,    21,     9,  -101,    25,    24,     2,    10,    -3,
      20,    23,    26,     2,     2,     2,     2,    13,    -1,    15,
      17,  -101,  -101,    18,  -101,    19,  -101,  -101,  -101,  -101,
    -101,    16,    30,    43,    43,    43,    41,    22,    27,    28,
      45,     7,    46,    44,    29,  -101,    31,    32,   -14,    33,
      34,    35,    38,    37,    47,    40,    42,    48,    11,    50,
      51,    52,    53,    49,    39,    54,    55,  -101,    12,  -101,
      56,    57,  -101,    58,    59,    61,    60,    62,  -101,    65,
      66,    -8,    67,    69,    71,    68,    63,    64,    72,    73,
      77,     7,     7,    36,    74,    76,  -101,    75,    78,    80,
      81,    82,   -14,   -14,   -14,  -101,  -101,  -101,  -101,    85,
      79,    87,    83,    88,    70,  -101,  -101,  -101,    90,    84,
    -101,    89,   -14,    61,    91,    92,   104,  -101,  -101,    93,
      94,    97,    -6,    95,    96,    98,    86,   100,    99,   101,
     102,   105,  -101,  -101,   108,  -101,  -101,   111,     7,   110,
    -101,   112,    -8,   113,   116,   107,   114,   115,    -6,   117,
     118,   120,   121,    14,   122,  -101
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -101,  -101,  -101,  -101,    -4,  -101,   -93,   -89,   -53,   128,
    -101,  -101,  -100,  -101,  -101,  -101,  -101,   -91,  -101,     4
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
     105,   106,   115,   116,   117,    19,    59,     3,    60,    61,
      62,     1,    20,     9,    10,    11,    12,    26,    27,    28,
      29,     4,   127,    49,    50,    51,    93,    94,   136,   137,
      41,    42,     6,     8,     5,    23,    31,    18,    20,    30,
      32,    25,    33,    34,    35,    36,    37,    39,    43,    55,
      44,    47,    53,    45,    73,    82,    46,   150,   164,   153,
      58,    64,    65,    66,    67,    68,    56,    70,    57,   159,
     128,    71,   107,    69,    84,    78,    79,    72,    74,    75,
      76,    77,   110,     0,    99,     0,    81,    85,     0,   119,
      86,    80,    87,    83,    91,    92,    96,    89,    97,    98,
     123,   102,   103,   100,    90,   101,   104,   109,   112,   124,
     108,   125,   113,   114,   118,   111,   120,   122,   126,   129,
     121,   131,   142,   130,   132,   135,   156,   140,   139,   149,
     144,   146,   133,     0,   147,   141,   143,   148,   151,    24,
     145,   162,   157,   152,   154,   155,   158,   161,   160,   163,
       0,   165
};

static const yytype_int16 yycheck[] =
{
      91,    92,   102,   103,   104,     8,    20,    37,    22,    23,
      24,     3,    15,    11,    12,    13,    14,    13,    14,    15,
      16,     0,   122,    16,    17,    18,    34,    35,    34,    35,
      34,    35,     7,     9,    25,    15,    37,    27,    15,    26,
      25,    15,    25,    25,    25,    29,    16,     4,     7,     5,
      28,     6,     6,    26,    43,    43,    28,   148,    44,   152,
      28,    28,    28,    28,    26,    28,    37,    27,    37,   158,
     123,    29,    36,    26,    17,    26,    37,    29,    28,    28,
      28,    28,     7,    -1,    16,    -1,    31,    29,    -1,    10,
      31,    37,    31,    37,    29,    29,    29,    37,    29,    28,
      30,    29,    29,    40,    42,    41,    29,    31,    28,    19,
      36,    27,    31,    31,    29,    37,    29,    29,    29,    28,
      37,    17,    36,    31,    31,    28,    19,    31,    33,    18,
      31,    29,    38,    -1,    29,    37,    36,    29,    28,    11,
      39,    21,    28,    31,    31,    29,    31,    29,    31,    28,
      -1,    29
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    46,    37,     0,    25,     7,    48,     9,    11,
      12,    13,    14,    59,    60,    61,    63,    64,    27,     8,
      15,    54,    55,    15,    54,    15,    64,    64,    64,    64,
      26,    37,    25,    25,    25,    25,    29,    16,    58,     4,
      49,    49,    49,     7,    28,    26,    28,     6,    56,    16,
      17,    18,    62,     6,    50,     5,    37,    37,    28,    20,
      22,    23,    24,    57,    28,    28,    28,    26,    28,    26,
      27,    29,    29,    43,    28,    28,    28,    28,    26,    37,
      37,    31,    43,    37,    17,    29,    31,    31,    53,    37,
      42,    29,    29,    34,    35,    51,    29,    29,    28,    16,
      40,    41,    29,    29,    29,    62,    62,    36,    36,    31,
       7,    37,    28,    31,    31,    57,    57,    57,    29,    10,
      29,    37,    29,    30,    19,    27,    29,    57,    53,    28,
      31,    17,    31,    38,    47,    28,    34,    35,    52,    33,
      31,    37,    36,    36,    31,    39,    29,    29,    29,    18,
      62,    28,    31,    51,    31,    29,    19,    28,    31,    52,
      31,    29,    21,    28,    44,    29
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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
#line 108 "calendar.ypp"
    {        
    file << "}" << std::endl;

    file << "function handleAuthClick(event) {" << std::endl;
    file << "      gapi.auth.authorize({" << std::endl;
    file << "          client_id: CLIENT_ID," << std::endl;
    file << "          scope: SCOPES," << std::endl;
    file << "          immediate: false" << std::endl;
    file << "        }," << std::endl;
    file << "        handleAuthResult);" << std::endl;
    file << "      return false;" << std::endl;
    file << "    }" << std::endl;
    file << "function appendPre(message) {" << std::endl;
    file << "      var pre = document.getElementById('output');" << std::endl;
    file << "      var textContent = document.createTextNode(message + '\\n');" << std::endl;
    file << "      pre.appendChild(textContent);" << std::endl;
    file << "    }" << std::endl;

    file << "  </script>" << std::endl;
    file << "  <script src=\"https://apis.google.com/js/client.js?onload=handleLoad\">" << std::endl;
    file << "  </script>" << std::endl;
    file << "</head>" << std::endl;    
    file << "<body>" << std::endl;
    file << "  <div id=\"authorize-div\" style=\"display: none\">" << std::endl;
    file << "    <span>Authorize access to Google Calendar API</span>" << std::endl;
    file << "    <button id=\"authorize-button\" onclick=\"handleAuthClick(event)\">" << std::endl;
    file << "      Authorize" << std::endl;
    file << "    </button>" << std::endl;
    file << "  </div>" << std::endl;
    file << "  <pre id=\"output\"></pre>" << std::endl;
    file << "</body>" << std::endl;
    file << "</html>" << std::endl;
    std::cout << "--program->program ALPHANUM {setup funciones}"<<std::endl;
  ;}
    break;

  case 3:
#line 143 "calendar.ypp"
    {      
                string res = "R";  
                (yyval.lexema) = new char[res.length()+1];
                strcpy((yyval.lexema), res.c_str());
                std::cout << "--Read permissions"<<std::endl;
              ;}
    break;

  case 4:
#line 150 "calendar.ypp"
    {  
                string res = "R W";
                (yyval.lexema) = new char[res.length()+1];
                strcpy((yyval.lexema), res.c_str());
                std::cout << "--Read, write permissions"<<std::endl;
              ;}
    break;

  case 5:
#line 159 "calendar.ypp"
    {
              string _user_id = string((yyvsp[(4) - (17)].lexema));
              string _api_key = string((yyvsp[(9) - (17)].lexema));              
              string _permission;
              if(string((yyvsp[(15) - (17)].lexema)) == "R")
                _permission = "\"https://www.googleapis.com/auth/calendar.readonly\"";
              else
                _permission = "\"https://www.googleapis.com/auth/calendar.readonly\", \"https://www.googleapis.com/auth/calendar\"";

              file << "<html>" << std::endl;
              file << " <head>" << std::endl;
              file << "   <script type=\"text/javascript\">" << std::endl;              
              file << "   var CLIENT_ID = "+_user_id+";" << std::endl;
              file << "   var API_KEY = "+_api_key+";" << std::endl;
              file << "   var SCOPES = ["+_permission+"];" << std::endl; 
              file << "function handleLoad() {" << std::endl;
              file << "      gapi.client.setApiKey(API_KEY);" << std::endl;
              file << "      checkAuth();" << std::endl;
              file << "    }" << std::endl;
              file << "function checkAuth() {" << std::endl;
              file << "      gapi.auth.authorize({" << std::endl;
              file << "        'client_id': CLIENT_ID," << std::endl;
              file << "        'scope': SCOPES.join(' ')," << std::endl;
              file << "        'immediate': true" << std::endl;
              file << "      }, handleAuthResult);" << std::endl;
              file << "    }" << std::endl;
              file << "function handleAuthResult(authResult) {" << std::endl;
              file << "      var authorizeDiv = document.getElementById('authorize-div');" << std::endl;
              file << "      if (authResult && !authResult.error) {" << std::endl;
              file << "        authorizeDiv.style.display = 'none';" << std::endl;
              file << "        gapi.client.load('calendar', 'v3').then(function() {" << std::endl;
              file << "          callFunctions();" << std::endl;
              file << "        });" << std::endl;
              file << "      } else {" << std::endl;
              file << "        authorizeDiv.style.display = 'inline';" << std::endl;
              file << "      }" << std::endl;
              file << "    }" << std::endl;    
              file << "function callFunctions() {" << std::endl;
              file << std::endl;
              std::cout << "@@@@@@@@@@@" << std::endl;              
              std::cout << "--Declare Setup"<<std::endl;
            ;}
    break;

  case 6:
#line 202 "calendar.ypp"
    {
                string res = string((yyvsp[(3) - (4)].lexema));
                (yyval.lexema) = new char[res.length()+1];
                strcpy((yyval.lexema), res.c_str());                
                std::cout << "--CalendarId"<<std::endl;
              ;}
    break;

  case 7:
#line 209 "calendar.ypp"
    {
                string res = "'primary'";
                (yyval.lexema) = new char[res.length()+1];
                strcpy((yyval.lexema), res.c_str()); 
                std::cout << "--Empty CalendarId"<<std::endl;
              ;}
    break;

  case 8:
#line 216 "calendar.ypp"
    {
              string _event_id = string((yyvsp[(3) - (4)].lexema));
              (yyval.lexema) = new char[_event_id.length()+1];
              strcpy((yyval.lexema), _event_id.c_str());
              std::cout << "--EventId"<<std::endl;
            ;}
    break;

  case 9:
#line 223 "calendar.ypp"
    {
            string res = string((yyvsp[(1) - (1)].lexema));
            (yyval.time).lexema = new char[res.length()+1];
            strcpy((yyval.time).lexema, res.c_str());
            (yyval.time).type = 1;
            std::cout << "--Fecha num"<<std::endl;            
          ;}
    break;

  case 10:
#line 231 "calendar.ypp"
    {
            string s1 = string((yyvsp[(1) - (2)].lexema));
            string s2 = string((yyvsp[(2) - (2)].lexema));
            string res = s1 + " " + s2;
            (yyval.time).lexema = new char[res.length()+1];
            strcpy((yyval.time).lexema, res.c_str());
            (yyval.time).type = 2;
            std::cout << "--Fecha num Hora"<<std::endl;
          ;}
    break;

  case 11:
#line 241 "calendar.ypp"
    {
            string s1 = string((yyvsp[(1) - (2)].lexema));
            string s2 = string((yyvsp[(2) - (2)].lexema));
            string res = s1 + " " + s2;
            (yyval.time).lexema = new char[res.length()+1];
            strcpy((yyval.time).lexema, res.c_str());           
            (yyval.time).type = 3;
            std::cout << "--Fecha string Hora"<<std::endl;
          ;}
    break;

  case 12:
#line 251 "calendar.ypp"
    {
            string res = string((yyvsp[(1) - (1)].lexema));
            (yyval.time).lexema = new char[res.length()+1];
            strcpy((yyval.time).lexema, res.c_str());            
            (yyval.time).type = 1;
            std::cout << "--Fecha num"<<std::endl;            
          ;}
    break;

  case 13:
#line 259 "calendar.ypp"
    {
            string s1 = string((yyvsp[(1) - (2)].lexema));
            string s2 = string((yyvsp[(2) - (2)].lexema));
            string res = s1 + " " + s2;
            (yyval.time).lexema = new char[res.length()+1];
            strcpy((yyval.time).lexema, res.c_str());            
            (yyval.time).type = 2;            
            std::cout << "--Fecha num Hora"<<std::endl;             
          ;}
    break;

  case 14:
#line 269 "calendar.ypp"
    {
            string s1 = string((yyvsp[(1) - (2)].lexema));
            string s2 = string((yyvsp[(2) - (2)].lexema));
            string res = s1 + " " + s2;
            (yyval.time).lexema = new char[res.length()+1];
            strcpy((yyval.time).lexema, res.c_str());           
            (yyval.time).type = 3;            
            std::cout << "--Fecha string Hora"<<std::endl;                                   
          ;}
    break;

  case 15:
#line 279 "calendar.ypp"
    {
              string current = string((yyval.lexema));
              current += string((yyvsp[(2) - (5)].lexema)) + ", ";
              (yyval.lexema) = new char[current.length()+1];
              strcpy((yyval.lexema), current.c_str());
              std::cout << "--Mail repetido"<<std::endl; 
            ;}
    break;

  case 16:
#line 287 "calendar.ypp"
    {                            
              string current = "'"+string((yyvsp[(2) - (3)].lexema))+"'";
              (yyval.lexema) = new char[current.length()+1];
              strcpy((yyval.lexema), current.c_str());
              std::cout << "--Mail"<<std::endl;    
            ;}
    break;

  case 17:
#line 294 "calendar.ypp"
    {   
            string _calendar_id = string((yyvsp[(3) - (6)].lexema));
            string _nombre = string((yyvsp[(4) - (6)].paramsN)._nombre);
            string _descripcion = string((yyvsp[(4) - (6)].paramsN)._descripcion);
            DateTime _inicio = getDateFromString((yyvsp[(4) - (6)].paramsN)._inicio.lexema, (yyvsp[(4) - (6)].paramsN)._inicio.type);
            DateTime _fin = getDateFromString((yyvsp[(4) - (6)].paramsN)._fin.lexema, (yyvsp[(4) - (6)].paramsN)._fin.type);                              
            string _event_id = string((yyvsp[(4) - (6)].paramsN)._event_id);
            ostringstream ss;            
            ss << "var event"<< variableCounter["event"] << " = {          " << std::endl;
            ss << "  'summary': "<< _nombre <<" ," << std::endl;
            ss << "  'description': "<< _descripcion << "," << std::endl;
            ss << "  'id': " << _event_id << "," << std::endl;
            ss << "  'start': {" << std::endl;

            if(_inicio.hasTime)
            {
              string actualTime = getTime(_inicio);
              ss << "    'dateTime': '"<< _inicio.year << "-" << _inicio.month << "-" << _inicio.day << "T" << actualTime <<"'," << std::endl;
            }
            else
            {
              ss << "    'date': '"<< _inicio.year << "-" << _inicio.month << "-" << _inicio.day << "'," << std::endl;
            }

            if((yyvsp[(5) - (6)].paramsO)._zona != NULL && strlen((yyvsp[(5) - (6)].paramsO)._zona) != 0)
            {
              ss << "    'timeZone': '"<< string((yyvsp[(5) - (6)].paramsO)._zona) << "'" << std::endl;
            }   
            else
            {
              ss << "    'timeZone': 'America/Mexico_City'" << std::endl;
            }         
            ss << "  }," << std::endl;
            ss << "  'end': {" << std::endl;
            if(_fin.hasTime)
            {
              string actualTime = getTime(_fin);
              ss << "    'dateTime': '"<< _fin.year << "-" << _fin.month << "-" << _fin.day << "T" << actualTime <<"'," << std::endl;
            }
            else
            {
              ss << "    'date': '"<< _fin.year << "-" << _fin.month << "-" << _fin.day << "'," << std::endl;
            }            
            if((yyvsp[(5) - (6)].paramsO)._zona != NULL && strlen((yyvsp[(5) - (6)].paramsO)._zona) != 0)
            {
              ss << "    'timeZone': '"<< string((yyvsp[(5) - (6)].paramsO)._zona) << "'" << std::endl;
            }   
            else
            {
              ss << "    'timeZone': 'America/Mexico_City'" << std::endl;
            }  
            ss << "  }";
            ss << ",";
            ss << "'reminders': {" << std::endl;
            ss << "    'useDefault': false," << std::endl;
            ss << "    'overrides': [" << std::endl;
            ss << "      {'method': 'email', 'minutes': "<< (yyvsp[(4) - (6)].paramsN)._recordatorio <<"*60}," << std::endl;
            ss << "    ]" << std::endl;
            ss << "  }";              
            if((yyvsp[(5) - (6)].paramsO)._invitados != NULL && strlen((yyvsp[(5) - (6)].paramsO)._invitados) != 0) 
            {
              string _invitados = string((yyvsp[(5) - (6)].paramsO)._invitados);
              std::vector<std::string> mails;
              if(_invitados.find(",") != std::string::npos)
                mails = split(_invitados, ',');
              else
                mails.push_back(_invitados);
              ss << "   ,";
              ss << "'attendees': [" << std::endl;
              for(int i = 0; i < mails.size(); i++)
              { 
                if(i+1 >= mails.size())
                  ss << "    {'email': " << mails[i] << "}" << std::endl;
                else
                  ss << "    {'email': " << mails[i] << "}," << std::endl;
              }
              ss << "  ]" << std::endl;
            } 
            if((yyvsp[(5) - (6)].paramsO)._archivo != NULL && strlen((yyvsp[(5) - (6)].paramsO)._archivo) != 0) 
            {
              ss << "   ,";
              ss << "'attachments':[" << std::endl;
              ss << "    {'fileUrl': 'https://drive.google.com/file/d/0B8TFgB_0zcIIZEFpbENoaVBYNlE/view'}" << std::endl;
            }                               
            ss << "  ]" << std::endl;
            ss << "};" << std::endl;

            (yyval.event).lexema = new char[ss.str().length()+1];
            strcpy((yyval.event).lexema, ss.str().c_str());            

            (yyval.event)._calendar_id = new char[_calendar_id.length()+1];
            strcpy((yyval.event)._calendar_id, _calendar_id.c_str());

            (yyval.event)._event_id = new char[_event_id.length()+1];
            strcpy((yyval.event)._event_id, _event_id.c_str());

            std::cout << "--Evento"<<std::endl;
            for(std::map<string, bool>::iterator it = parameterCounter.begin(); it != parameterCounter.end(); ++it)
            {
              it->second = false;
            }
          ;}
    break;

  case 18:
#line 398 "calendar.ypp"
    {
                string _nombre = string((yyvsp[(3) - (4)].paramsC)._nombre);
                ostringstream ss;               
                ss << " var resource"<< variableCounter["resource"] << " = {" << std::endl;
                ss << "   \"summary\": "<< _nombre;
                if((yyvsp[(3) - (4)].paramsC)._descripcion != NULL && strlen((yyvsp[(3) - (4)].paramsC)._descripcion) != 0)
                {
                  ss << "," << std::endl;
                  ss << "   \"description\": "<<string((yyvsp[(3) - (4)].paramsC)._descripcion);
                }            
                ss << std::endl;    
                ss << " };" << std::endl; 
                (yyval.lexema) = new char[ss.str().length()+1];
                strcpy((yyval.lexema), ss.str().c_str());
                std::cout << "--Calendario"<<std::endl;
              ;}
    break;

  case 19:
#line 421 "calendar.ypp"
    {
                if(isDateValid((yyvsp[(16) - (28)].time), (yyvsp[(22) - (28)].time)))
                {
                  string _nombre = string((yyvsp[(7) - (28)].lexema));
                  string _descripcion = string((yyvsp[(11) - (28)].lexema));                                  
                  YYSTYPE::dateTime _inicio = (yyvsp[(16) - (28)].time);
                  YYSTYPE::dateTime _fin = (yyvsp[(22) - (28)].time);
                  float _recordatorio = (yyvsp[(27) - (28)].valF);

                  (yyval.paramsN)._nombre = new char[_nombre.length()+1];
                  strcpy((yyval.paramsN)._nombre, _nombre.c_str());

                  (yyval.paramsN)._descripcion = new char[_descripcion.length()+1];
                  strcpy((yyval.paramsN)._descripcion, _descripcion.c_str());

                  (yyval.paramsN)._inicio.lexema = new char[string(_inicio.lexema).length()+1];                  
                  (yyval.paramsN)._inicio.type = _inicio.type;
                  (yyval.paramsN)._inicio.lexema = _inicio.lexema;

                  (yyval.paramsN)._fin.lexema = new char[string(_fin.lexema).length()+1];
                  (yyval.paramsN)._fin.lexema = _fin.lexema;
                  (yyval.paramsN)._fin.type = _fin.type;

                  (yyval.paramsN)._recordatorio = _recordatorio;    
                  string _event_id = string((yyvsp[(3) - (28)].lexema));   
                  if(_event_id.length() >= 5 && _event_id.length() <= 1024)
                  {
                    (yyval.paramsN)._event_id = new char[_event_id.length()+1];
                    strcpy((yyval.paramsN)._event_id, _event_id.c_str());
                  } 
                  else
                  {
                    std::cout << "'event id' debe ser de 5 a 1024 caracteres, de la a-v y de 0-9" << std::endl; 
                    exit(-1);
                  }
                  std::cout << "--InicioFin" << std::endl;  
                }   
                else
                {
                  std::cout << "ERROR => tiempo con límites incorrectos" << std::endl;                
                  exit(-1);
                }   
                std::cout << "--Parametros necesarios"<<std::endl;
              ;}
    break;

  case 20:
#line 466 "calendar.ypp"
    {
                  if(!parameterCounter["lugar"])
                  {           
                    string _lugar = string((yyvsp[(3) - (5)].lexema));                                                               

                    (yyval.paramsO)._lugar = new char[_lugar.length()+1];
                    strcpy((yyval.paramsO)._lugar, _lugar.c_str());

                    if((yyvsp[(5) - (5)].paramsO)._archivo != NULL && strlen((yyvsp[(5) - (5)].paramsO)._archivo) != 0)
                    {
                      (yyval.paramsO)._archivo = new char[string((yyvsp[(5) - (5)].paramsO)._archivo).length()+1];
                      (yyval.paramsO)._archivo = (yyvsp[(5) - (5)].paramsO)._archivo; 
                    }

                    if((yyvsp[(5) - (5)].paramsO)._zona != NULL && strlen((yyvsp[(5) - (5)].paramsO)._zona) != 0)
                    {
                      (yyval.paramsO)._zona = new char[string((yyvsp[(5) - (5)].paramsO)._zona).length()+1];
                      (yyval.paramsO)._zona = (yyvsp[(5) - (5)].paramsO)._zona; 
                    } 

                    if((yyvsp[(5) - (5)].paramsO)._invitados != NULL && strlen((yyvsp[(5) - (5)].paramsO)._invitados) != 0)
                    {
                      (yyval.paramsO)._invitados = new char[string((yyvsp[(5) - (5)].paramsO)._invitados).length()+1];
                      (yyval.paramsO)._invitados = (yyvsp[(5) - (5)].paramsO)._invitados;  
                    }              

                    parameterCounter["lugar"] = true;    
                    std::cout << string((yyval.paramsO)._lugar) << std::endl;                                   
                  }
                  else
                  {
                    std::cout << "'Lugar' no puede ser definido más de una vez" << std::endl;
                    exit(-1);
                  }
                  std::cout << "--(Opcional) lugar"<<std::endl;
                ;}
    break;

  case 21:
#line 503 "calendar.ypp"
    {
                  if(!parameterCounter["archivo"])
                  {       
                    string _archivo = string((yyvsp[(3) - (5)].lexema));                     
                    (yyval.paramsO)._archivo = new char[_archivo.length()+1];
                    strcpy((yyval.paramsO)._archivo, _archivo.c_str());                       
                    parameterCounter["archivo"] = true;    
                    std::cout << string((yyval.paramsO)._archivo) << std::endl;

                    if((yyvsp[(5) - (5)].paramsO)._lugar != NULL && strlen((yyvsp[(5) - (5)].paramsO)._lugar) != 0)
                    {
                      (yyval.paramsO)._lugar = new char[string((yyvsp[(5) - (5)].paramsO)._lugar).length()+1];
                      (yyval.paramsO)._lugar = (yyvsp[(5) - (5)].paramsO)._lugar; 
                    }

                    if((yyvsp[(5) - (5)].paramsO)._zona != NULL && strlen((yyvsp[(5) - (5)].paramsO)._zona) != 0)
                    {
                      (yyval.paramsO)._zona = new char[string((yyvsp[(5) - (5)].paramsO)._zona).length()+1];
                      (yyval.paramsO)._zona = (yyvsp[(5) - (5)].paramsO)._zona; 
                    } 

                    if((yyvsp[(5) - (5)].paramsO)._invitados != NULL && strlen((yyvsp[(5) - (5)].paramsO)._invitados) != 0)
                    {
                      (yyval.paramsO)._invitados = new char[string((yyvsp[(5) - (5)].paramsO)._invitados).length()+1];
                      (yyval.paramsO)._invitados = (yyvsp[(5) - (5)].paramsO)._invitados;  
                    }  
                  }
                  else
                  {
                    std::cout << "'Archivo' no puede ser definido más de una vez" << std::endl;
                    exit(-1);
                  }
                  std::cout << "--(Opcional) archivo"<<std::endl;
                ;}
    break;

  case 22:
#line 538 "calendar.ypp"
    {
                  if(!parameterCounter["invitados"])
                  {   
                    string _invitados = string((yyvsp[(3) - (5)].lexema));    
                    (yyval.paramsO)._invitados = new char[_invitados.length()+1];
                    strcpy((yyval.paramsO)._invitados, _invitados.c_str());     
                     
                    parameterCounter["invitados"] = true; 
                    std::cout << string((yyval.paramsO)._invitados) << std::endl;

                    if((yyvsp[(5) - (5)].paramsO)._archivo != NULL && strlen((yyvsp[(5) - (5)].paramsO)._archivo) != 0)
                    {
                      (yyval.paramsO)._archivo = new char[string((yyvsp[(5) - (5)].paramsO)._archivo).length()+1];
                      (yyval.paramsO)._archivo = (yyvsp[(5) - (5)].paramsO)._archivo; 
                    }

                    if((yyvsp[(5) - (5)].paramsO)._zona != NULL && strlen((yyvsp[(5) - (5)].paramsO)._zona) != 0)
                    {
                      (yyval.paramsO)._zona = new char[string((yyvsp[(5) - (5)].paramsO)._zona).length()+1];
                      (yyval.paramsO)._zona = (yyvsp[(5) - (5)].paramsO)._zona; 
                    } 

                    if((yyvsp[(5) - (5)].paramsO)._invitados != NULL && strlen((yyvsp[(5) - (5)].paramsO)._invitados) != 0)
                    {
                      (yyval.paramsO)._invitados = new char[string((yyvsp[(5) - (5)].paramsO)._invitados).length()+1];
                      (yyval.paramsO)._invitados = (yyvsp[(5) - (5)].paramsO)._invitados;  
                    }                
                  }
                  else
                  {
                    std::cout << "'Invitados' no puede ser definido más de una vez" << std::endl;
                    exit(-1);
                  }
                  std::cout << "--(Opcional) invitados"<<std::endl;
                ;}
    break;

  case 23:
#line 574 "calendar.ypp"
    {
                  if(!parameterCounter["zona"])
                  {    
                    string _zona = string((yyvsp[(4) - (7)].lexema));   
                    (yyval.paramsO)._zona = new char[_zona.length()+1];
                    strcpy((yyval.paramsO)._zona, _zona.c_str());                      
                    parameterCounter["zona"] = true;      
                    std::cout << string((yyval.paramsO)._zona) << std::endl; 

                    if((yyvsp[(7) - (7)].paramsO)._archivo != NULL && strlen((yyvsp[(7) - (7)].paramsO)._archivo) != 0)
                    {
                      (yyval.paramsO)._archivo = new char[string((yyvsp[(7) - (7)].paramsO)._archivo).length()+1];
                      (yyval.paramsO)._archivo = (yyvsp[(7) - (7)].paramsO)._archivo; 
                    }                    
                    if((yyvsp[(7) - (7)].paramsO)._zona != NULL && strlen((yyvsp[(7) - (7)].paramsO)._zona) != 0)
                    {
                      (yyval.paramsO)._zona = new char[string((yyvsp[(7) - (7)].paramsO)._zona).length()+1];
                      (yyval.paramsO)._zona = (yyvsp[(7) - (7)].paramsO)._zona; 
                    }

                    if((yyvsp[(7) - (7)].paramsO)._invitados != NULL && strlen((yyvsp[(7) - (7)].paramsO)._invitados) != 0)
                    {
                      (yyval.paramsO)._invitados = new char[string((yyvsp[(7) - (7)].paramsO)._invitados).length()+1];
                      (yyval.paramsO)._invitados = (yyvsp[(7) - (7)].paramsO)._invitados; 
                    }            
                  }
                  else
                  {
                    std::cout << "'Zona' no puede ser definido más de una vez" << std::endl;
                    exit(-1);
                  }
                  std::cout << "--(Opcional) zona"<<std::endl;
                ;}
    break;

  case 24:
#line 608 "calendar.ypp"
    {               
                  std::cout << "--(Opcional) empty parms"<<std::endl;
                ;}
    break;

  case 25:
#line 613 "calendar.ypp"
    {
                          string _nombre = string((yyvsp[(3) - (8)].lexema));
                          string _descripcion = string((yyvsp[(7) - (8)].lexema));
                          (yyval.paramsC)._nombre = new char[_nombre.length()+1];
                          (yyval.paramsC)._descripcion = new char[_descripcion.length()+1];
                          strcpy((yyval.paramsC)._nombre, _nombre.c_str());
                          strcpy((yyval.paramsC)._descripcion, _descripcion.c_str());
                          std::cout << "--Params calendario: Nombre y descripción"<<std::endl;
                        ;}
    break;

  case 26:
#line 623 "calendar.ypp"
    {
                          string _nombre = string((yyvsp[(3) - (4)].lexema));                          
                          (yyval.paramsC)._nombre = new char[_nombre.length()+1];                          
                          strcpy((yyval.paramsC)._nombre, _nombre.c_str());                          
                          std::cout << "--Params calendario: Nombre"<<std::endl;
                        ;}
    break;

  case 27:
#line 630 "calendar.ypp"
    {
                file << "   " <<string((yyvsp[(2) - (2)].event).lexema) << std::endl;
                file << "  var request"<< variableCounter["request"] <<" = gapi.client.calendar.events.update({" << std::endl;
                file << "    'calendarId': " << string((yyvsp[(2) - (2)].event)._calendar_id) << "," << std::endl;
                file << "    'eventId': " << string((yyvsp[(2) - (2)].event)._event_id) << std::endl;
                file << "    'supportsAttachments': true," << std::endl;
                file << "    'resource': event"<< variableCounter["event"] << std::endl;
                file << "  });" << std::endl;
                file << "  request"<< variableCounter["request"] <<".execute(function(event"<<variableCounter["event"]<<") {" << std::endl;
                file << "    appendPre('Event updated: ' + event"<< variableCounter["event"] <<".htmlLink);" << std::endl;
                file << "  });" << std::endl;
                file << std::endl;
                variableCounter["event"]++;
                variableCounter["request"]++;
                std::cout << "--Modificar evento"<<std::endl; 
              ;}
    break;

  case 28:
#line 647 "calendar.ypp"
    {    
              file << " var request"<< variableCounter["request"] <<" = gapi.client.calendar.events.delete({" << std::endl;
              file << "    'calendarId': "<< string((yyvsp[(4) - (6)].lexema)) <<"," << std::endl;
              file << "    'eventId': "<< string((yyvsp[(5) - (6)].lexema)) << std::endl;
              file << "  });" << std::endl;
              file << std::endl;
              file << "  request"<< variableCounter["request"] <<".execute(function(event) {" << std::endl;
              file << "    appendPre('Event deleted');" << std::endl;
              file << "  });" << std::endl;   
              variableCounter["request"]++;       
              std::cout << "--Eliminar evento"<<std::endl;
            ;}
    break;

  case 29:
#line 660 "calendar.ypp"
    {          
          file << "   " <<string((yyvsp[(2) - (2)].event).lexema) << std::endl;
          file << "  var request"<< variableCounter["request"] <<" = gapi.client.calendar.events.insert({" << std::endl;
          file << "    'calendarId': " << string((yyvsp[(2) - (2)].event)._calendar_id) << "," << std::endl;
          file << "    'supportsAttachments': true," << std::endl;
          file << "    'resource': event"<< variableCounter["event"] << std::endl;
          file << "  });" << std::endl;
          file << "  request"<< variableCounter["request"] <<".execute(function(event"<<variableCounter["event"]<<") {" << std::endl;
          file << "    appendPre('Event created: ' + event"<< variableCounter["event"] <<".htmlLink);" << std::endl;
          file << "  });" << std::endl;
          file << std::endl;
          variableCounter["event"]++;
          variableCounter["request"]++;
          std::cout << "--Crear evento"<<std::endl; 
        ;}
    break;

  case 30:
#line 676 "calendar.ypp"
    {
          file << string((yyvsp[(2) - (2)].lexema)) << std::endl;
          file << " gapi.client.calendar.calendars.insert(resource"<< variableCounter["resource"] <<").then(function(response"<< variableCounter["response"] <<"){" << std::endl;
          file << "   appendPre(\"Calendario\"+ \" 'response"<< variableCounter["response"] <<".summary' \" + \"creado\");" << std::endl;
          file << " });" << std::endl;
          file << std::endl;
          variableCounter["resource"]++;
          variableCounter["response"]++;
          std::cout << "--Crear calendario"<<std::endl;
        ;}
    break;

  case 31:
#line 687 "calendar.ypp"
    {    
                if(!parameterCounter["nombre_consulta"])   
                {
                  parameterCounter["nombre_consulta"] = true;
                  if(hasDescripcion)
                  {
                    (yyval.paramsB)._descripcion = new char[string((yyvsp[(5) - (5)].paramsB)._descripcion).length()+1];
                    (yyval.paramsB)._descripcion = (yyvsp[(5) - (5)].paramsB)._descripcion;
                  } 

                  if(hasInicio)
                  {
                    (yyval.paramsB)._inicio.lexema = new char[string((yyvsp[(5) - (5)].paramsB)._inicio.lexema).length()+1];
                    (yyval.paramsB)._inicio.lexema = (yyvsp[(5) - (5)].paramsB)._inicio.lexema;
                    (yyval.paramsB)._inicio.type = (yyvsp[(5) - (5)].paramsB)._inicio.type;
                  } 

                  if(hasFin)
                  {
                    (yyval.paramsB)._fin.lexema = new char[string((yyvsp[(5) - (5)].paramsB)._fin.lexema).length()+1];
                    (yyval.paramsB)._fin.lexema = (yyvsp[(5) - (5)].paramsB)._fin.lexema;
                    (yyval.paramsB)._fin.type = (yyvsp[(5) - (5)].paramsB)._fin.type;
                  } 

                  std::cout << "--Optional search nombre" << std::endl;
                  string _nombre = string((yyvsp[(3) - (5)].lexema));
                  (yyval.paramsB)._nombre = new char[_nombre.length()+1];
                  strcpy((yyval.paramsB)._nombre, _nombre.c_str());
                  hasNombre = true;                  
                }  
                else
                {
                  std::cout << "'nombre' no puede ser definido más de una vez" << std::endl;
                  exit(-1);
                }                                            
              ;}
    break;

  case 32:
#line 724 "calendar.ypp"
    {     
                if(!parameterCounter["descripcion_consulta"])
                {
                  parameterCounter["descripcion_consulta"] = true;
                  string _descripcion = string((yyvsp[(3) - (5)].lexema));                     
                  (yyval.paramsB)._descripcion = new char[_descripcion.length()+1];
                  strcpy((yyval.paramsB)._descripcion, _descripcion.c_str());                  
                  hasDescripcion = true;

                  if(hasNombre)
                  {
                    (yyval.paramsB)._nombre = new char[string((yyvsp[(5) - (5)].paramsB)._nombre).length()+1];
                    (yyval.paramsB)._nombre = (yyvsp[(5) - (5)].paramsB)._nombre;
                  } 

                  if(hasInicio)
                  {
                    (yyval.paramsB)._inicio.lexema = new char[string((yyvsp[(5) - (5)].paramsB)._inicio.lexema).length()+1];
                    (yyval.paramsB)._inicio.lexema = (yyvsp[(5) - (5)].paramsB)._inicio.lexema;
                    (yyval.paramsB)._inicio.type = (yyvsp[(5) - (5)].paramsB)._inicio.type;
                  } 

                  if(hasFin)
                  {
                    (yyval.paramsB)._fin.lexema = new char[string((yyvsp[(5) - (5)].paramsB)._fin.lexema).length()+1];
                    (yyval.paramsB)._fin.lexema = (yyvsp[(5) - (5)].paramsB)._fin.lexema;
                    (yyval.paramsB)._fin.type = (yyvsp[(5) - (5)].paramsB)._fin.type; 
                  }

                  std::cout << "--Optional search descripcion" << std::endl;
                } 
                else
                {
                  std::cout << "'descripcion' no puede ser definido más de una vez" << std::endl;
                  exit(-1);
                }               
              ;}
    break;

  case 33:
#line 763 "calendar.ypp"
    {   
                if(!parameterCounter["fecha_consulta"])
                {
                  if(isDateValid((yyvsp[(4) - (13)].time), (yyvsp[(10) - (13)].time)))
                  {     
                    string _inicio_string = string((yyvsp[(4) - (13)].time).lexema);                         
                    string _fin_string = string((yyvsp[(10) - (13)].time).lexema); 

                    (yyval.paramsB)._inicio.lexema = new char[_inicio_string.length()+1];                                  
                    strcpy((yyval.paramsB)._inicio.lexema, _inicio_string.c_str());
                    (yyval.paramsB)._inicio.type = (yyvsp[(4) - (13)].time).type;

                    (yyval.paramsB)._fin.lexema = new char[_fin_string.length()+1];                                
                    strcpy((yyval.paramsB)._fin.lexema, _fin_string.c_str());
                    (yyval.paramsB)._fin.type = (yyvsp[(10) - (13)].time).type;

                    hasInicio = true;
                    hasFin = true;                     
                    std::cout << "--InicioFin" << std::endl;

                    if(hasNombre)
                    {
                      (yyval.paramsB)._nombre = new char[string((yyvsp[(13) - (13)].paramsB)._nombre).length()+1];
                      (yyval.paramsB)._nombre = (yyvsp[(13) - (13)].paramsB)._nombre;
                    } 

                    if(hasDescripcion)
                    {
                      (yyval.paramsB)._descripcion = new char[string((yyvsp[(13) - (13)].paramsB)._descripcion).length()+1];
                      (yyval.paramsB)._descripcion = (yyvsp[(13) - (13)].paramsB)._descripcion;
                    }                 
                    std::cout << "--Optional search Inicio y Fin" << std::endl;

                    }                 
                  else
                  {
                    std::cout << "ERROR => tiempo con límites incorrectos" << std::endl;                
                    exit(-1);
                  }   
                } 
                else
                {
                  std::cout << "'inicio' y 'fin' no pueden ser definidos más de una vez" << std::endl;
                  exit(-1);
                }                                                                                      
              ;}
    break;

  case 34:
#line 810 "calendar.ypp"
    {   
                std::cout << "--Empty search params" << std::endl;
              ;}
    break;

  case 35:
#line 814 "calendar.ypp"
    {  
              if(hasNombre || hasDescripcion || hasInicio || hasFin) 
              {
                if(hasInicio && hasFin)
                {
                  if(variableCounter["fecha_consulta"] == 0)
                  {
                    file << std::endl;
                    file << " function checkDates(json, lower, upper){" << std::endl;
                    file << "   var item = JSON.parse(json);" << std::endl;
                    file << "   if(item.date)" << std::endl;
                    file << "   {" << std::endl;
                    file << "     var queryDateLower = new Date(lower);" << std::endl;
                    file << "     var queryDateUpper = new Date(upper);" << std::endl;
                    file << "     var result = new Date(item.date);" << std::endl;
                    file << "     if(result.getTime() >= queryDateLower.getTime() &&  result.getTime() <= queryDateUpper.getTime())" << std::endl;
                    file << "     {" << std::endl;
                    file << "       return true;" << std::endl;
                    file << "     }" << std::endl;
                    file << "   }" << std::endl;
                    file << "   else if(item.dateTime)" << std::endl;
                    file << "   {" << std::endl;
                    file << "     var queryDateLower = new Date(lower);" << std::endl;
                    file << "     var queryDateUpper = new Date(upper);" << std::endl;
                    file << "     var result = new Date(item.date);" << std::endl;
                    file << "     if(result.getTime() >= queryDateLower.getTime() &&  result.getTime() <= queryDateUpper.getTime())" << std::endl;
                    file << "     {" << std::endl;
                    file << "       return true;          " << std::endl;
                    file << "     }" << std::endl;
                    file << "   }" << std::endl;
                    file << " }" << std::endl;
                    file << std::endl;
                    variableCounter["fecha_consulta"]++;
                  }
                }

                if(hasDescripcion)
                {
                  if(variableCounter["descripcion_consulta"] == 0)
                  {
                    file << "  function checkDescription(json, substr){" << std::endl;
                    file << "   var item = JSON.parse(json); " << std::endl;
                    file << "   if(item.hasOwnProperty(\"description\")) " << std::endl;
                    file << "   {" << std::endl;
                    file << "    if(item.description.indexOf(substr) !== -1) " << std::endl;
                    file << "     {" << std::endl;
                    file << "       return true; " << std::endl;
                    file << "     }" << std::endl;
                    file << "   }  " << std::endl;
                    file << "   return false;  " << std::endl;
                    file << " }" << std::endl;
                    file << std::endl;

                    variableCounter["descripcion_consulta"]++;
                  }
                }

                if(hasNombre)
                {
                  if(variableCounter["nombre_consulta"] == 0)
                  {
                    file << " function checkName(json, substr){" << std::endl;
                    file << "   var item = JSON.parse(json); " << std::endl;
                    file << "   if(item.hasOwnProperty(\"summary\")) " << std::endl;
                    file << "   {" << std::endl;
                    file << "    if(item.summary.indexOf(substr) !== -1) " << std::endl;
                    file << "     {" << std::endl;
                    file << "       return true; " << std::endl;
                    file << "     }" << std::endl;
                    file << "   }  " << std::endl;
                    file << " }" << std::endl;
                    file << std::endl;
                    variableCounter["nombre_consulta"]++;
                  }
                }              
                file << " var query"<< variableCounter["query"] <<" ={" << std::endl;
                file << "   'calendarId':  "<< string((yyvsp[(4) - (6)].lexema)) << std::endl;
                file << " };" << std::endl;
                file << std::endl;
                file << " var request"<< variableCounter["request"] <<" = gapi.client.calendar.events.list(query"<< variableCounter["query"] <<");" << std::endl;
                file << " request"<< variableCounter["request"] <<".execute(function(event) {" << std::endl;

                string res = "Eventos encontrados con ";
                if(hasNombre)
                  res += string((yyvsp[(5) - (6)].paramsB)._nombre) +" en su nombre";
                if(hasDescripcion)
                  res += " y " + string((yyvsp[(5) - (6)].paramsB)._descripcion) +" en su descricpión";
                if(hasInicio && hasFin)
                  res += " y está entre " + string((yyvsp[(5) - (6)].paramsB)._inicio.lexema)+ " y " + string((yyvsp[(5) - (6)].paramsB)._fin.lexema);

                  file << "   appendPre(\""<< res <<"\");" << std::endl;
                file << "   for(var i = 0; i < event.items.length; i++)" << std::endl;
                file << "   {" << std::endl;
                if(hasNombre)
                  file << "     var NameValid = checkName(JSON.stringify(event.items[i]), "<< string((yyvsp[(5) - (6)].paramsB)._nombre) << ");" << std::endl;
                if(hasDescripcion)
                  file << "     var DescValid = checkDescription(JSON.stringify(event.items[i]), "<< string((yyvsp[(5) - (6)].paramsB)._descripcion) << ");" << std::endl;
                if(hasInicio && hasFin)
                {
                  DateTime _inicio = getDateFromString((yyvsp[(5) - (6)].paramsB)._inicio.lexema, (yyvsp[(5) - (6)].paramsB)._inicio.type);
                  DateTime _fin = getDateFromString((yyvsp[(5) - (6)].paramsB)._fin.lexema, (yyvsp[(5) - (6)].paramsB)._fin.type);

                  ostringstream s_inicio, s_fin;
                  s_inicio <<  _inicio.year << "-" << _inicio.month << "-" << _inicio.day;
                  s_fin << _fin.year << "-" << _fin.month << "-" << _fin.day;

                  string _inicio_format = getDate(s_inicio.str());
                  string _fin_format = getDate(s_fin.str());

                  file << "     var DateValid = checkDates(JSON.stringify(event.items[i].start), '"<< _inicio_format <<"', '"<< _fin_format <<"');" << std::endl;
                }
                string condition = "";
                std::vector<string> conditions;
                if(hasNombre)
                  conditions.push_back("NameValid");
                if(hasDescripcion)
                  conditions.push_back("DescValid");
                if(hasInicio && hasFin)
                  conditions.push_back("DateValid");

                for(int i = 0; i < conditions.size(); i++)
                {
                  if(i == 0)
                    condition += conditions[i];
                  else
                    condition += " && " + conditions[i];
                }
                file << "     if("<< condition <<")" << std::endl;
                file << "     {" << std::endl;
                file << "       appendPre(JSON.stringify(event.items[i], null, \"\\t\"));" << std::endl;
                file << "     }" << std::endl;
                file << "   }" << std::endl;
                file << " });" << std::endl;
                file << std::endl;
                variableCounter["query"]++;
                variableCounter["request"]++;
                std::cout << "--Consultar evento" << std::endl;
              }                          
            ;}
    break;

  case 36:
#line 954 "calendar.ypp"
    {
                std::cout << "--Consultar funciones" << std::endl;
              ;}
    break;

  case 37:
#line 958 "calendar.ypp"
    {
                std::cout << "--Crear funciones"<<std::endl;
              ;}
    break;

  case 38:
#line 962 "calendar.ypp"
    {
                std::cout << "--Modificar funciones"<<std::endl;
              ;}
    break;

  case 39:
#line 966 "calendar.ypp"
    {
                std::cout << "--Eliminar funciones"<<std::endl;
              ;}
    break;

  case 40:
#line 970 "calendar.ypp"
    {
                std::cout << "--Funciones empty"<<std::endl;
              ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2575 "calendar.tab.cpp"
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
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  if (yyn == YYFINAL)
    YYACCEPT;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
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


#line 973 "calendar.ypp"

//-- FUNCTION DEFINITIONS ---------------------------------

void initMap(std::map<string, int> & map)
{    
  map["Enero"] = 1;
  map["Febrero"] = 2;
  map["Marzo"] = 3;
  map["Abril"] = 4;
  map["Mayo"] = 5;
  map["Junio"] = 6;
  map["Julio"] = 7;
  map["Agosto"] = 8;
  map["Septiembre"] = 9;
  map["Octubre"] = 10;
  map["Noviembre"] = 11;
  map["Diciembre"] = 12;
}

int stringPos(string haystack, char needle, int nth)
{// Will return position of n-th occurence of a char in a string.
  string read;    // A string that will contain the read part of the haystack
  for (int i=1 ; i<nth+1 ; ++i)
  {
    std::size_t found = haystack.find(needle);
    read += haystack.substr(0,found+1); // the read part of the haystack is stocked in the read string
    haystack.erase(0, found+1);     // remove the read part of the haystack up to the i-th needle
    if (i == nth)
    {
      return read.size();
    }
  }
  return -1;
}

bool isRealDate(DateTime date)
{
  //STUB
  if(date.day <= 0 || date.day > 31)
    return false;
  if(date.month <= 0 || date.month > 12)
    return false;
  if(date.year <= 0)
    return false;
  return true;
}

std::ostream& operator << (std::ostream &o, const DateTime & date)
{
  o << "Day: " << date.day << std::endl;
  o << "Month: " << date.month << std::endl;
  o << "Year: " << date.year << std::endl;  
  o << "Hours: " << date.hours << std::endl;
  o << "Minutes: " << date.minutes << std::endl;
  o << "Seconds: " << date.seconds << std::endl;  
  o << "HasTime: " << date.hasTime << std::endl;
  return o;
}

bool operator == (const DateTime & startDate, const DateTime & endDate)
{
  return startDate.day == endDate.day && startDate.month == endDate.month && startDate.year == endDate.year && startDate.hours == endDate.hours && startDate.minutes == endDate.minutes && startDate.seconds == endDate.seconds;
}

bool operator < (const DateTime & startDate, const DateTime & endDate)
{ 
  if(startDate == endDate)
  {
    return true;
  }

  if(startDate.year > endDate.year)
  {  
    return false;
  }

  if(startDate.month > endDate.month)
  {
    return false;
  }

  if(startDate.day > endDate.day)
  { 
    return false;
  }

  if(startDate.hours > endDate.hours)
  {    
    return false;
  }

  if (startDate.minutes > endDate.minutes)
  {
    return false;
  }

  if(startDate.seconds > endDate.seconds)
  {
    return false;
  }
  
  return true;
}

bool isLogicalDate(DateTime startDate, DateTime endDate)
{
  // std::cout << "#############################" << std::endl;
  // startDate < endDate ? std::cout << "menor" << std::endl : std::cout << "mayor" << std::endl;
  return startDate < endDate;
}

DateTime getDateFromString(string date, int type)
{    
  struct DateTime res;
  size_t found = date.find("/");
  if(type == 1 || type == 2)
  {
    //fechanum
    int FirstDash = stringPos(date, '/', 1);
    int SecondDash = stringPos(date, '/', 2);
    int day = stoi(date.substr(0,FirstDash));
    int month = stoi(date.substr(FirstDash,SecondDash));
    int year = stoi(date.substr(SecondDash));    
    res.day = day;
    res.month = month;
    res.year = year;
    res.hours = 0;
    res.minutes = 0;
    res.seconds = 0;
    res.hasTime = false;    
    if(type == 2)
    {      
      //fechanum hora            
      int firstSpace = stringPos(date, ' ', 1);
      int firstColon = stringPos(date, ':', 1);
      int secondColon = stringPos(date, ':', 2);
      int hours = stoi(date.substr(firstSpace, firstColon));
      int minutes = stoi(date.substr(firstColon, secondColon));
      int seconds = stoi(date.substr(secondColon));
      res.hours = hours;
      res.minutes = minutes;
      res.seconds = seconds; 
      res.hasTime = true;
    }
  }
  else if(type == 3)
  {
    //fechastring  hora    
    int firstSpace = stringPos(date, ' ', 1);
    int secondSpace = stringPos(date, ' ', 2);    
    int thirdSpace = stringPos(date, ' ', 3);    
    int day = stoi(date.substr(0,firstSpace));     
    int month = dateMap[date.substr(firstSpace, secondSpace-firstSpace-1)];
    int year = stoi(date.substr(secondSpace, thirdSpace));    
    res.day = day;
    res.month = month;
    res.year = year;    
    int firstColon = stringPos(date, ':', 1);
    int secondColon = stringPos(date, ':', 2);
    int hours = stoi(date.substr(thirdSpace, firstColon));
    int minutes = stoi(date.substr(firstColon, secondColon));
    int seconds = stoi(date.substr(secondColon));
    res.hours = hours;
    res.minutes = minutes;
    res.seconds = seconds; 
    res.hasTime = true;
  }
  return res;
}

bool isDateValid(YYSTYPE::dateTime start_tok, YYSTYPE::dateTime end_tok)
{  
  string start = string(start_tok.lexema);  
  string end = string(end_tok.lexema);     
  size_t found = start.find("/");  
  struct DateTime startDate = getDateFromString(start, start_tok.type);
  struct DateTime endDate = getDateFromString(end, end_tok.type);  
  if(isRealDate(startDate) && isRealDate(endDate))
  {
    if (isLogicalDate(startDate, endDate))
    {
      return true;
    }
    return false;
  }
  else
  {
    std::cout << "Fecha no válida" << std::endl;
    return false;
  }
   
   
  return true;
}

void openFile(std::fstream & _file, std::string route)
{
  try
  {
    if (std::ofstream(route))
    {            
      _file.open(route, fstream::in | fstream::out);
      if(_file.fail())
      {
        std::cout << "Error reading file... aborting" << std::endl;
        throw 2;
      }
    }
    else
    {
      std::cout << "File not found... Aborting" << std::endl;
      throw 1;
    }
  }
  catch (int e)
  {
    std::cerr << "Error reading data... Exception " << e << " caught" << std::endl;
  }
}

void split(const std::string &s, char delim, std::vector<std::string> &elems) {
    std::stringstream ss;
    ss.str(s);
    std::string item;
    while (std::getline(ss, item, delim)) {
        elems.push_back(item);
    }
}


std::vector<std::string> split(std::string &s, char delim) {
    std::vector<std::string> elems;
    split(s, delim, elems);
    return elems;
}

string getDate(string date)
{
  int firstDash = stringPos(date, '-', 1);
  int secondDash = stringPos(date, '-', 2);

  string year = date.substr(0, firstDash-1);
  string month = date.substr(firstDash, secondDash-firstDash-1);
  string day = date.substr(secondDash);
  string resDay, resMonth, resYear = "";

  if(day.length() != 2)
    resDay = "0"+day;
  else
    resDay = day;

  if(month.length() != 2)
    resMonth = "0"+month;
  else
    resMonth = month;

  if(year.length() != 4)
    resYear = "0"+year;
  else
    resYear = year;  
  return resYear + "-" + resMonth + "-" + resDay;
}

string getTime(DateTime date)
{  
  ostringstream _hours;
  ostringstream _minutes;
  ostringstream _seconds;
  string resHours = "";
  string resMinutes = "";
  string resSeconds = "";
  _hours << date.hours;
  _minutes << date.minutes;
  _seconds << date.seconds;

  if(_hours.str().length() != 2)
    resHours = "0"+_hours.str();
  else
    resHours = _hours.str();

  if(_minutes.str().length() != 2)
    resMinutes = "0"+_minutes.str();
  else
    resMinutes = _minutes.str();

  if(_seconds.str().length() != 2)
    resSeconds = "0"+_seconds.str();
  else
    resSeconds = _seconds.str();

  return resHours + ":" + resMinutes + ":" + resSeconds;
}

void freeStr(char **str){
    free( *str );
    *str = NULL; 
}

int main( int argc, char **argv )
{
    ++argv, --argc;     /* skip over program name */
    if ( argc > 0 )
       yyin = fopen( argv[0], "r" );
    else
       yyin = stdin;
  parameterCounter["lugar"] = false;
  parameterCounter["archivo"] = false;
  parameterCounter["invitados"] = false;
  parameterCounter["zona"] = false;

  parameterCounter["nombre_consulta"] = false;
  parameterCounter["descripcion_consulta"] = false;
  parameterCounter["fecha_consulta"] = false;

  variableCounter["event"] = 1;
  variableCounter["request"] = 1;
  variableCounter["resource"] = 1;
  variableCounter["response"] = 1;
  variableCounter["query"] = 1;
  variableCounter["nombre_consulta"] = 0;
  variableCounter["descripcion_consulta"] = 0;
  variableCounter["fecha_consulta"] = 0;  
  initMap(dateMap);
  openFile(file, "output.html");  
  yyparse();  
  
  file.close();
  return 0;
}

