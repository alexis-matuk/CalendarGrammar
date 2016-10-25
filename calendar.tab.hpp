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
     Program = 258,
     ID = 259,
     identifier = 260,
     calendar_id = 261,
     api_key = 262,
     event_id = 263,
     declare = 264,
     calendario = 265,
     user_id = 266,
     permission = 267,
     crear = 268,
     consultar = 269,
     modificar = 270,
     eliminar = 271,
     evento = 272,
     nombre = 273,
     descripcion = 274,
     inicio = 275,
     fin = 276,
     zona = 277,
     recordatorio = 278,
     fecha = 279,
     invitados = 280,
     lugar = 281,
     archivo = 282,
     READ = 283,
     WRITE = 284,
     STRING = 285,
     ZONA = 286,
     HORA = 287,
     FECHA = 288,
     FLOAT = 289,
     MAIL = 290,
     LLAVEABRE = 291,
     LLAVECIERRA = 292,
     IGUAL = 293,
     COMILLAS = 294,
     DOSPUNTOS = 295,
     PUNTOCOMA = 296,
     COMA = 297
   };
#endif
/* Tokens.  */
#define Program 258
#define ID 259
#define identifier 260
#define calendar_id 261
#define api_key 262
#define event_id 263
#define declare 264
#define calendario 265
#define user_id 266
#define permission 267
#define crear 268
#define consultar 269
#define modificar 270
#define eliminar 271
#define evento 272
#define nombre 273
#define descripcion 274
#define inicio 275
#define fin 276
#define zona 277
#define recordatorio 278
#define fecha 279
#define invitados 280
#define lugar 281
#define archivo 282
#define READ 283
#define WRITE 284
#define STRING 285
#define ZONA 286
#define HORA 287
#define FECHA 288
#define FLOAT 289
#define MAIL 290
#define LLAVEABRE 291
#define LLAVECIERRA 292
#define IGUAL 293
#define COMILLAS 294
#define DOSPUNTOS 295
#define PUNTOCOMA 296
#define COMA 297




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 14 "calendar.ypp"
{
  int val;
}
/* Line 1529 of yacc.c.  */
#line 137 "calendar.tab.hpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

