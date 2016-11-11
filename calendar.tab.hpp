/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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
/* Line 1529 of yacc.c.  */
#line 182 "calendar.tab.hpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

