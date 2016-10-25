bison -d calendar.ypp
flex calendar.l
g++ calendar.tab.cpp lex.yy.c -o calendar