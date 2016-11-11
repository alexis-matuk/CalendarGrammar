%{
#include "calendar.tab.hpp"
#include <iostream>
using namespace std;
%}

%option noyywrap

DIGIT [0-9]
ALPHANUMEVENTID [a-v|0-9]([a-v|0-9])*
PALABRA [a-z|A-z]([a-z|A-z])*
ALPHANUM [a-z|A-z|0-9|" "|","|"."|"-"|"_"]([a-z|A-z|0-9|" "]|","|"."|"-"|"_")*
STRING \"(\\.|[^\\"])*\"
URL [a-z|A-z|0-9|" "|","|"."|"-"|"_"|"/"|":"]([a-z|A-z|0-9|" "]|","|"."|"-"|"_"|"/"|":")*

%%
"'url="{URL}"'"  													{ 
																	yylval.lexema = strdup(yytext);
																	
																	return URL;
																	}
"&"  																{ 																	
																	
																	return AND;
																	}
program  															{ 																	
																	
																	return program;
																	}
api_key  															{ 																	
																	
																	return api_key;
																	}																	
calendar_id  														{ 																	
																	
																	return calendar_id;
																	}
event_id  															{ 																	
																	
																	return event_id;
																	}
declare       														{ 																	
																	
																	return declare;
																	}
calendario    		 												{ 
																	
																	return calendario;
																	}
user_id     														{ 
																	
																	return user_id;
																	}
permissions															{ 
																	
																	return permissions;
																	}
crear																{ 
																	
																	return crear;
																	}
consultar															{ 
																	
																	return consultar;
																	}
modificar															{ 
																	
																	return modificar;
																	}
eliminar															{ 
																	
																	return eliminar;
																	}
evento																{ 
																	
																	return evento;
																	}
nombre																{ 
																	
																	return nombre;
																	}
descripcion															{ 
																	
																	return descripcion;
																	}
inicio																{ 
																	
																	return inicio;
																	}
fin																	{ 
																	
																	return fin;
																	}
zona																{ 
																	
																	return zona;
																	}
recordatorio														{ 
																	
																	return recordatorio;
																	}
invitados															{ 
																	
																	return invitados;
																	}
lugar																{ ;
																	
																	return lugar;
																	}
archivo																{ 
																	
																	return archivo;
																	}
R																	{ 	
																	yylval.lexema = strdup(yytext);
																	
																	return READ;}
W																	{ 																	
																	yylval.lexema = strdup(yytext);
																	
																	return WRITE;}

{PALABRA}															{ 
																	yylval.lexema = strdup(yytext);
																	
																	return ID;}

"'"{ALPHANUM}"'"													{ 																	
																	yylval.lexema = strdup(yytext);
																	
																	return ALPHANUM;
																	}	
"\""{ALPHANUMEVENTID}"\""												{ 																	
																	yylval.lexema = strdup(yytext);
																	
																	return ALPHANUMEVENTID;
																	}																	

{PALABRA}"/"{PALABRA}												{ 
																	yylval.lexema = strdup(yytext);
																	
																	return ZONA;
																	}
{DIGIT}{DIGIT}":"{DIGIT}{DIGIT}":"{DIGIT}{DIGIT}					{ 																	
																	yylval.lexema = strdup(yytext);
																	
																	return HORA;
																	}
{DIGIT}{DIGIT}"/"{DIGIT}{DIGIT}"/"{DIGIT}{DIGIT}{DIGIT}{DIGIT}		{ 																	
																	yylval.lexema = strdup(yytext);															
																	
																	return FECHANUM;
																	}																
{DIGIT}{DIGIT}" "{PALABRA}" "{DIGIT}{DIGIT}{DIGIT}{DIGIT}			{ 																	
																	yylval.lexema = strdup(yytext);																	
																	
																	return FECHASTRING;
																	}																
{DIGIT}+("."{DIGIT}+)*												{ 
																	yylval.valF = atof(yytext);
																	
																	return FLOAT;
																	}
({PALABRA})([A-Z]|[0-9]|[a-z]|"."|"_"|"%"|"+"|"-")+"@"({PALABRA})+("."{PALABRA}+)*"."[a-z]+		{ 
																								yylval.lexema = strdup(yytext);
																								
																								return MAIL;
																								}

"{"																	{ 
																	return LLAVEABRE;}
"}"																	{ 
																	return LLAVECIERRA;}
"="																	{ 
																	return IGUAL;}
":" 																{ 
																	return DOSPUNTOS;}
";"																	{ 
																	return PUNTOCOMA;}
","																	{ 
																	return COMA;}
"'"																	{ 
																	return COMILLASIMPLE;}																	

[ \t\n]+ 															{}
.       															{ cerr << "Unrecognized token!" << endl; exit(1);}
<<EOF>>																{return 0;}
%%
