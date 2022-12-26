c:\flex-bison\win_bison -d -v c.y
c:\flex-bison\win_flex -v c.l
gcc c.tab.c lex.yy.c main.c -w -o cc