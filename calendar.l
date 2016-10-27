%{
#include "calendar.tab.hpp"
#include <iostream>
using namespace std;
%}

%option noyywrap

DIGIT [0-9]
PALABRA [a-z|A-z]([a-z|A-z])*
ALPHANUM [a-z|A-z|0-9|" "|","|"."|"-"|"_"]([a-z|A-z|0-9|" "]|","|"."|"-"|"_")*
STRING \"(\\.|[^\\"])*\"
URL [a-z|A-z|0-9|" "|","|"."|"-"|"_"|"/"|":"]([a-z|A-z|0-9|" "]|","|"."|"-"|"_"|"/"|":")*

%%
"'url="{URL}"'"  															{ cout << "URL" << endl; 
																	return URL;}
"&"  															{ cout << "&" << endl; 
																	return AND;}
program  															{ cout << "program" << endl; 
																	return program;}
api_key  															{ cout << "api_key" << endl; 
																	return api_key;}																	
identifier															{ cout << "identifier" << endl; 
																	return identifier;}
calendar_id  														{ cout << "calendar_id" << endl; 
																	return calendar_id;}
event_id  															{ cout << "event_id" << endl; 
																	return event_id;}
declare       														{ cout << "declare" << endl; 
																	return declare;}
calendario    		 												{ cout << "calendario" << endl; 
																	return calendario;}
user_id     														{ cout << "user_id" << endl; 
																	return user_id;}
permissions															{ cout << "permissions" << endl; 
																	return permissions;}
crear																{ cout << "crear" << endl; 
																	return crear;}
consultar															{ cout << "consultar" << endl; 
																	return consultar;}
modificar															{ cout << "modificar" << endl; 
																	return modificar;}
eliminar															{ cout << "eliminar" << endl; 
																	return eliminar;}
evento																{ cout << "evento" << endl; 
																	return evento;}
nombre																{ cout << "nombre" << endl; 
																	return nombre;}
descripcion															{ cout << "descripcion" << endl; 
																	return descripcion;}
inicio																{ cout << "inicio" << endl; 
																	return inicio;}
fin																	{ cout << "fin" << endl; 
																	return fin;}
zona																{ cout << "zona" << endl; 
																	return zona;}
recordatorio														{ cout << "recordatorio" << endl; 
																	return recordatorio;}
invitados															{ cout << "invitados" << endl; 
																	return invitados;}
lugar																{ cout << "lugar" << endl; 
																	return lugar;}
archivo																{ cout << "archivo" << endl; 
																	return archivo;}
R																{ cout << "READ" << endl; 
																	return READ;}
W																{ cout << "WRITE;" << endl; 
																	return WRITE;}

{PALABRA}															{ cout << "ID" << endl; 
																	return ID;}
"'"{ALPHANUM}"'"															{ cout << "ALPHANUM" << endl; 
																	return ALPHANUM;}																	

{PALABRA}"/"{PALABRA}												{ cout << "ZONA" << endl; 
																	return ZONA;}
{DIGIT}{DIGIT}":"{DIGIT}{DIGIT}":"{DIGIT}{DIGIT}					{ cout << "HORA" << endl; 
																	return HORA;}
{DIGIT}{DIGIT}"/"{DIGIT}{DIGIT}"/"{DIGIT}{DIGIT}{DIGIT}{DIGIT}		{ cout << "FECHA" << endl; 
																	return FECHA;}																
{DIGIT}{DIGIT}" "{PALABRA}" "{DIGIT}{DIGIT}{DIGIT}{DIGIT}			{ cout << "FECHA" << endl; 
																	return FECHA;}																
{DIGIT}+("."{DIGIT}+)*												{ cout << "FLOAT" << endl; 
																	return FLOAT;}
({PALABRA})([A-Z]|[0-9]|[a-z]|"."|"_"|"%"|"+"|"-")+"@"({PALABRA})+("."{PALABRA}+)*"."[a-z]+		{ cout << "MAIL" << endl; 
																	return MAIL;}

"{"																	{ cout << "LLAVEABRE" << endl; 
																	return LLAVEABRE;}
"}"																	{ cout << "LLAVECIERRA" << endl; 
																	return LLAVECIERRA;}
"="																	{ cout << "IGUAL" << endl; 
																	return IGUAL;}
":" 																{ cout << "DOSPUNTOS" << endl; 
																	return DOSPUNTOS;}
";"																	{ cout << "PUNTOCOMA" << endl; 
																	return PUNTOCOMA;}
","																	{ cout << "COMA" << endl; 
																	return COMA;}
"'"																	{ cout << "COMILLASIMPLE" << endl; 
																	return COMILLASIMPLE;}																	

[ \t\n]+ 															{}
.       															{ cerr << "Unrecognized token!" << endl; exit(1);}
<<EOF>>																{return 0;}
%%
