# Gramática en Bison para la generación de scripts para Calendar API

## Compilación
bison -d calendar.ypp
flex calendar.l
g++ calendar.tab.cpp lex.yy.c -o calendar

O

./makefile

##Ejecutable

./calendar testFile.txt