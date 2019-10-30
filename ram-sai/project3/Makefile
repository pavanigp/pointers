CC := gcc -c -g
CFLAGS := -Wall -Werror 
prog: main.o mathfun.o pattren.o  
	gcc $(CFLAGS) -I. -o prog main.o mathfun.o pattren.o -lm
main.o: main.c
	$(CC) $(CFLAGS) -I. main.c
mathfun.o: mathfun.c
	$(CC) $(CFLAGS) -I. mathfun.c
pattren.o: pattren.c
	$(CC) $(CFLAGS) -I. pattren.c


clean: 
	rm -rf *.o
