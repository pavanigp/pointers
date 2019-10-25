CC := gcc -c -g
CFLAGS := -Wall -Werror 
prog: main.o fact.o rev.o fib.o sum.o sll.o 
	gcc $(CFLAGS) -I. -o prog main.o fact.o rev.o sum.o fib.o sll.o
main.o: main.c
	$(CC) $(CFLAGS) -I. main.c
fact.o: fact.c
	$(CC) $(CFLAGS) -I. fact.c
rev.o: rev.c
	$(CC) $(CFLAGS) -I. rev.c
sum.o: sum.c
	$(CC) $(CFLAGS) -I. sum.c 
sll.o:	sll.c
	$(CC) $(CFLAGS) -I. sll.c
fib.o: fib.c
	$(CC) $(CFLAGS) -I. fib.c

clean: 
	rm -rf *.o
