flex ./lexicale.l
bison -d -v ./syntax.y
gcc -o test.exe lex.yy.c syntax.tab.c -lfl -ly 