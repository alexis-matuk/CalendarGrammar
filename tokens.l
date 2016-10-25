%{
#include <iostream>
using namespace std;
%}

DIGIT [0-9]
PALABRA [A-Z|a-z][A-Z|a-z]*
STRING [A-Z|a-z|0-9][A-Z|a-z|0-9]*

%%

program  															{ printf("program") ; }
calendar_id  														{ printf("calendar_id") ; }
event_id  															{ printf("event_id") ; }
set       															{ printf("set") ; }
calendario    		 												{ printf("calendario") ; }
user_id     														{ printf("user_id") ; }
permission															{ printf("permission") ; }
connect_to_calendar													{ printf("connect_to_calendar") ; }
crear																{ printf("crear") ; }
consultar															{ printf("consultar") ; }
modificar															{ printf("modificar") ; }
eliminar															{ printf("eliminar") ; }
evento																{ printf("evento") ; }
nombre																{ printf("nombre") ; }
descripcion															{ printf("descripcion") ; }
inicio																{ printf("inicio") ; }
fin																	{ printf("fin") ; }
zona																{ printf("zona") ; }
recordatorio														{ printf("recordatorio") ; }
fecha																{ printf("fecha") ; }
invitados															{ printf("invitados") ; }
lugar																{ printf("lugar") ; }
archivo																{ printf("archivo") ; }
read																{ printf("read") ; }
write																{ printf("write") ; }
{STRING}															{ printf("STRING") ; }
{PALABRA}"/"{PALABRA}												{ printf("ZONA") ; }
{DIGIT}{DIGIT}":"{DIGIT}{DIGIT}":"{DIGIT}{DIGIT}					{ printf("HORA") ; }
{DIGIT}{DIGIT}"/"{DIGIT}{DIGIT}"/"{DIGIT}{DIGIT}{DIGIT}{DIGIT}		{ printf("FECHA"); }
{DIGIT}{DIGIT}" "{PALABRA}" "{DIGIT}{DIGIT}{DIGIT}{DIGIT}			{ printf("FECHA"); }
{DIGIT}+("."{DIGIT}+)*												{ printf("FLOAT"); }
({STRING})([A-Z]|[0-9]|[a-z]|"."|"_"|"%"|"+"|"-")+"@"({STRING})+("."{STRING}+)*"."[a-z]+		{ printf("MAIL"); }
"{"																	{ printf("LLAVEABRE"); }
"}"																	{ printf("LLAVECIERRA"); }
"="																	{ printf("IGUAL"); }
"\""																{ printf("COMILLAS"); }
":" 																{ printf("DOSPUNTOS"); }
";"																	{ printf("PUNTOCOMA"); }
","																	{ printf("COMA"); }
[ \t\n]+ 															{ }
.       															{ printf("Unrecognized token!"); }
%%

int main( int argc, char **argv )
{
    ++argv, --argc;	/* skip over program name */
    if ( argc > 0 )
       yyin = fopen( argv[0], "r" );
    else
       yyin = stdin;
       yylex();
       return 0;
}