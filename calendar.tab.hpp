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
     identifier = 259,
     calendar_id = 260,
     api_key = 261,
     event_id = 262,
     declare = 263,
     calendario = 264,
     user_id = 265,
     permissions = 266,
     crear = 267,
     consultar = 268,
     modificar = 269,
     eliminar = 270,
     evento = 271,
     nombre = 272,
     descripcion = 273,
     inicio = 274,
     fin = 275,
     zona = 276,
     recordatorio = 277,
     invitados = 278,
     lugar = 279,
     archivo = 280,
     READ = 281,
     WRITE = 282,
     ZONA = 283,
     HORA = 284,
     FECHA = 285,
     FLOAT = 286,
     MAIL = 287,
     LLAVEABRE = 288,
     LLAVECIERRA = 289,
     IGUAL = 290,
     DOSPUNTOS = 291,
     PUNTOCOMA = 292,
     COMA = 293,
     COMILLASIMPLE = 294,
     ID = 295,
     ALPHANUM = 296,
     AND = 297,
     URL = 298
   };
#endif
/* Tokens.  */
#define program 258
#define identifier 259
#define calendar_id 260
#define api_key 261
#define event_id 262
#define declare 263
#define calendario 264
#define user_id 265
#define permissions 266
#define crear 267
#define consultar 268
#define modificar 269
#define eliminar 270
#define evento 271
#define nombre 272
#define descripcion 273
#define inicio 274
#define fin 275
#define zona 276
#define recordatorio 277
#define invitados 278
#define lugar 279
#define archivo 280
#define READ 281
#define WRITE 282
#define ZONA 283
#define HORA 284
#define FECHA 285
#define FLOAT 286
#define MAIL 287
#define LLAVEABRE 288
#define LLAVECIERRA 289
#define IGUAL 290
#define DOSPUNTOS 291
#define PUNTOCOMA 292
#define COMA 293
#define COMILLASIMPLE 294
#define ID 295
#define ALPHANUM 296
#define AND 297
#define URL 298




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 14 "calendar.ypp"
{
  int val;
}
/* Line 1529 of yacc.c.  */
#line 139 "calendar.tab.hpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

