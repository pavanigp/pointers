CC := gcc -c -g
CFLAGS := -Wall -Werror 
prog: main.o array.o airth.o
	gcc $(CFLAGS) -I. -o prog main.o array.o airth.o -lm
main.o: main.c
	$(CC) $(CFLAGS) -I. main.c
array.o: array.c
	$(CC) $(CFLAGS) -I. array.c
airth.o: airth.c
	$(CC) $(CFLAGS) -I. airth.c

clean: 
	rm -rf *.o
