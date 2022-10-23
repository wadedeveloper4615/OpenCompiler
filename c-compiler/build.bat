del c.tab.c
del lex.yy.c
del c.tab.h
c:\flex-bison\win_bison -d -v c.y
c:\flex-bison\win_flex -v c.l
gcc c.tab.c lex.yy.c symtab.c -o cc