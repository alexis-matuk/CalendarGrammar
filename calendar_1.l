%{
#include "calendar.tab.hpp"
#include <iostream>
using namespace std;
%}

%option noyywrap

DIGIT [0-9]
PALABRA [A-Za-z][A-Za-z]*
STRING [A-Za-z0-9][A-Za-z0-9]*

%%

program  															{ return program; }
set       															{ return set; }
calendario    		 												{ return calendario; }
user_id     														{ return user_id; }
permission															{ return permission; }
connect_to_calendar													{ return connect_to_calendar; }
crear																{ return crear; }
consultar															{ return consultar; }
modificar															{ return modificar; }
eliminar															{ return eliminar; }
evento																{ return evento; }
nombre																{ return nombre; }
descripcion															{ return descripcion; }
inicio																{ return inicio; }
fin																	{ return fin; }
zona																{ return zona; }
recordatorio														{ return recordatorio; }
fecha																{ return fecha; }
invitados															{ return invitados; }
lugar																{ return lugar; }
archivo																{ return archivo; }
read																{ return read; }
write																{ return write; }
{PALABRA}"/"{PALABRA}												{ return ZONA; }
{DIGIT}{DIGIT}":"{DIGIT}{DIGIT}":"{DIGIT}{DIGIT}					{ return HORA; }
{DIGIT}{DIGIT}"/"{DIGIT}{DIGIT}"/"{DIGIT}{DIGIT}{DIGIT}{DIGIT}		{return FECHANUM; }
{DIGIT}{DIGIT}" "{PALABRA}" "{DIGIT}{DIGIT}{DIGIT}{DIGIT}			{return FECHASTRING; }
{DIGIT}+("."{DIGIT}+)*												{return FLOAT; }
([A-Z]|[0-9]|[a-z])([A-Z]|[0-9]|[a-z]|"."|"_"|"%"|"+"|"-")+"@"([0-9]|[a-z])+("."[a-z|[0-9]]+)*"."[a-z]+		{return MAIL; }
"{"																	{ return LLAVEABRE; }
"}"																	{ return LLAVECIERRA; }
"="																	{ return IGUAL; }
"\"" 																{ return COMILLAS; }
":" 																{ return DOSPUNTOS; }
";"																	{ return PUNTOCOMA; }
","																	{ return COMA; }
<<EOF>>  															{ return 0; }
[ \t\n]+ 															{ }
.       															{ cerr << "Unrecognized token!" << endl; exit(1); }
%%

