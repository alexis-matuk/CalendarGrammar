%{
#include "calendar.tab.hpp"
#include <iostream>
using namespace std;
%}

%option noyywrap

STRING \"(\\.|[^\\"])*\"
DIGIT [0-9]
PALABRA [A-Za-z]([A-Za-z])*

%%

Program  															{ return Program; }
identifier																	{ return identifier;}
calendar_id  														{ return calendar_id; }
event_id  															{ return event_id; }
declare       															{ return declare; }
calendario    		 												{ return calendario; }
user_id     														{ return user_id; }
permission															{ return permission; }
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
READ																{ return READ; }
WRITE																{ return WRITE; }

{PALABRA}															{ return ID;}
{STRING}															{ return STRING; }
{PALABRA}"/"{PALABRA}												{ return ZONA; }
{DIGIT}{DIGIT}":"{DIGIT}{DIGIT}":"{DIGIT}{DIGIT}					{ return HORA; }
{DIGIT}{DIGIT}"/"{DIGIT}{DIGIT}"/"{DIGIT}{DIGIT}{DIGIT}{DIGIT}		{ return FECHA ; }
{DIGIT}{DIGIT}" "{PALABRA}" "{DIGIT}{DIGIT}{DIGIT}{DIGIT}			{ return FECHA ; }
{DIGIT}+("."{DIGIT}+)*												{ return FLOAT ; }
({PALABRA})([A-Z]|[0-9]|[a-z]|"."|"_"|"%"|"+"|"-")+"@"({PALABRA})+("."{PALABRA}+)*"."[a-z]+		{ return MAIL; }

"{"																	{ return LLAVEABRE ; }
"}"																	{ return LLAVECIERRA ; }
"="																	{ return IGUAL ; }
"\""																{ return COMILLAS ; }
":" 																{ return DOSPUNTOS ; }
";"																	{ return PUNTOCOMA ; }
","																	{ return COMA ; }

[ \t\n]+ 															{ }
.       															{ cerr << "Unrecognized token!" << endl; exit(1); }
<<EOF>>																{return 0;}
%%
