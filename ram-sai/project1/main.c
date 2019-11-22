#include<stdio.h>
#include"fact.h"
#include"sum.h"
#include"rev.h"
#include"fib.h"
#include"sll.h"
int main()
{
	int input1,input2;
	input1=fact();
	printf("input1:%d\n",input1);
	input2=rev(input1);
	printf("input2:%d\n",input2);
	if(input2<input1)
		fib(input2);
	else if(input2>input1)
		sum(input2);
	else if(input1==input2)
	{
		printf("creating a linked list\n");
		create_sll(input2);
	}
	else
		return 0;
return 0;
	

}
/*
ramsai@TSHYD-015:~/Desktop/projects/project1$ make
gcc -c -g -Wall -Werror  -I. main.c
gcc -c -g -Wall -Werror  -I. fact.c
gcc -c -g -Wall -Werror  -I. rev.c
gcc -c -g -Wall -Werror  -I. fib.c
gcc -c -g -Wall -Werror  -I. sum.c 
gcc -c -g -Wall -Werror  -I. sll.c
gcc -Wall -Werror  -I. -o prog main.o fact.o rev.o sum.o fib.o sll.o
ramsai@TSHYD-015:~/Desktop/projects/project1$ ./prog
enter the number:
1
input1:1
input2:1
creating a linked list
1.insertion at end 2.display 3.delete from end 4.listed all elements? 5.exit
1
enter the data
11
1.insertion at end 2.display 3.delete from end 4.listed all elements? 5.exit
1
enter the data
12
1.insertion at end 2.display 3.delete from end 4.listed all elements? 5.exit
1
enter the data
11
1.insertion at end 2.display 3.delete from end 4.listed all elements? 5.exit
1
enter the data
15
1.insertion at end 2.display 3.delete from end 4.listed all elements? 5.exit
1
enter the data
12
1.insertion at end 2.display 3.delete from end 4.listed all elements? 5.exit
2
11
12
11
15
12
1.insertion at end 2.display 3.delete from end 4.listed all elements? 5.exit
4
the input is odd,so eliminated the duplicates in list
1.insertion at end 2.display 3.delete from end 4.listed all elements? 5.exit
2
11
12
15
1.insertion at end 2.display 3.delete from end 4.listed all elements? 5.exit
5
ramsai@TSHYD-015:~/Desktop/projects/project1$ 
ramsai@TSHYD-015:~/Desktop/projects/project1$ ./prog
enter the number:
2
input1:2
input2:2
creating a linked list
1.insertion at end 2.display 3.delete from end 4.listed all elements? 5.exit
1
enter the data
11
1.insertion at end 2.display 3.delete from end 4.listed all elements? 5.exit
1
enter the data
18
1.insertion at end 2.display 3.delete from end 4.listed all elements? 5.exit
1 
enter the data
19
1.insertion at end 2.display 3.delete from end 4.listed all elements? 5.exit
1
enter the data
23
1.insertion at end 2.display 3.delete from end 4.listed all elements? 5.exit
1
enter the data
14
1.insertion at end 2.display 3.delete from end 4.listed all elements? 5.exit
1
enter the data
12
1.insertion at end 2.display 3.delete from end 4.listed all elements? 5.exit
1
enter the data
17
1.insertion at end 2.display 3.delete from end 4.listed all elements? 5.exit
1
enter the data
15
1.insertion at end 2.display 3.delete from end 4.listed all elements? 5.exit
2
11
18
19
23
14
12
17
15
1.insertion at end 2.display 3.delete from end 4.listed all elements? 5.exit
4
the input is even,so deleted the prime numbers in list
1.insertion at end 2.display 3.delete from end 4.listed all elements? 5.exit
2
18
14
12
15
1.insertion at end 2.display 3.delete from end 4.listed all elements? 5.exit
5
ramsai@TSHYD-015:~/Desktop/projects/project1$ 
ramsai@TSHYD-015:~/Desktop/projects/project1$ ./prog
enter the number:
5
input1:120
input2:21
the fibonacci series: 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181 6765 10946 ramsai@TSHYD-015:~/Desktop/projects/project1$ 
enter the number:
4
input1:24
input2:42
sum is:6ramsai@TSHYD-015:~/Desktop/projects/project1$ 
*/
