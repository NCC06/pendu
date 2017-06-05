CFLAGS = -Wall -Werror -Wextra

prog: main.c
	gcc $(CFLAGS) main.c -o prog
	open prog
