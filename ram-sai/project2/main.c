#include<stdio.h>
#include"array.h"
#include"airth.h"
int main()
{
	enum arrayoperation{create=1,insert,display,sort,reverse,edup,fodup,exit};
	int ch,op,value;
	int index;
	do
	{
		printf("enter the number which operations you want?\n");
		printf("1.array operations 2.airthmatic operations\n");
		scanf("%d",&op);
		if(op!=1&&op!=2)
		printf("please enter the number between 1 or 2\n");
	}while(op>2);
	if(op==1)
	{
jump:		printf("\n1.create 2.insert 3.display 4.sort 5.reverse 6.elimimate duplicates 7.first ocuurence of duplicate 8.exit  \n");
		printf("enter the operation:\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case create:
			to_create();
			goto jump;
			case insert:
			to_insert();
			goto jump;
			case display:
			to_display();
			goto jump;
			case sort:
			to_sort();
			goto jump;
			case reverse:
			to_reverse();
			goto jump;
			case edup:
			to_elim_duplicate();
			goto jump;	
			case fodup:
			index=to_fo_dup();
			printf("array index is: %d\n",index);
			goto jump;
			case exit:
			break;
			default:
			printf("enter the correct operation:\n");
			goto jump;	
		}

	}
	else
	{
	lab:	printf("\n1.pallandrome 2.square root 3.square 4.Increment by 4 5.checking perfect number 6.checking strong number 7.checking armstrong number 8.exit \n");
		printf("enter the operation:\n");
		scanf("%d",&ch);
		printf("enter the number:\n");
		scanf("%d",&value);
		switch(ch)
		{
			case 1:
			pallandrome(value);
			goto lab;
			case 2:
			sqr(value);
			goto lab;
			case 3:
			square(value);
			goto lab;
			case 4:
			increment(value);
			goto lab;
			case 5:
			perfect_no(value);
			goto lab;
			case 6:
			strong_no(value);
			goto lab;	
			case 7:
			armstrong_no(value);
			goto lab;
			case 8:
			break;
			default:
			printf("enter the correct operation:\n");
			goto lab;	
		}
	}
return 0;
}


/*
ramsai@TSHYD-015:~/Desktop/projects/project2$ make
gcc -c -g -Wall -Werror  -I. main.c
gcc -c -g -Wall -Werror  -I. array.c
gcc -c -g -Wall -Werror  -I. airth.c
gcc -Wall -Werror  -I. -o prog main.o array.o airth.o -lm
ramsai@TSHYD-015:~/Desktop/projects/project2$ ./prog
enter the number which operations you want?
1.array operations 2.airthmatic operations
1

1.create 2.insert 3.display 4.sort 5.reverse 6.elimimate duplicates 7.first ocuurence of duplicate 8.exit  
enter the operation:
1
enter the size of an array:
5
enter the element of an array:
4
7
5
2
8

1.create 2.insert 3.display 4.sort 5.reverse 6.elimimate duplicates 7.first ocuurence of duplicate 8.exit  
enter the operation:
1
enter the size of an array:
5 
enter the element of an array:
5
7
9
4
6

1.create 2.insert 3.display 4.sort 5.reverse 6.elimimate duplicates 7.first ocuurence of duplicate 8.exit  
enter the operation:
2
enter the position and data of an array:
4
7
Resultant array is:
5 7 9 7 4 
1.create 2.insert 3.display 4.sort 5.reverse 6.elimimate duplicates 7.first ocuurence of duplicate 8.exit  
enter the operation:
3
the array elements are:
5 7 9 7 4 
1.create 2.insert 3.display 4.sort 5.reverse 6.elimimate duplicates 7.first ocuurence of duplicate 8.exit  
enter the operation:
4

1.create 2.insert 3.display 4.sort 5.reverse 6.elimimate duplicates 7.first ocuurence of duplicate 8.exit  
enter the operation:
3
the array elements are:
4 5 7 7 9 
1.create 2.insert 3.display 4.sort 5.reverse 6.elimimate duplicates 7.first ocuurence of duplicate 8.exit  
enter the operation:
5
printing the array in reverse order:
9 7 7 5 4 
1.create 2.insert 3.display 4.sort 5.reverse 6.elimimate duplicates 7.first ocuurence of duplicate 8.exit  
enter the operation:
7
array index is: 3

1.create 2.insert 3.display 4.sort 5.reverse 6.elimimate duplicates 7.first ocuurence of duplicate 8.exit  
enter the operation:
6

 4 5 7 9
1.create 2.insert 3.display 4.sort 5.reverse 6.elimimate duplicates 7.first ocuurence of duplicate 8.exit  
enter the operation:
3
the array elements are:
4 5 7 9 
1.create 2.insert 3.display 4.sort 5.reverse 6.elimimate duplicates 7.first ocuurence of duplicate 8.exit  
enter the operation:
8
ramsai@TSHYD-015:~/Desktop/projects/project2$ 
ramsai@TSHYD-015:~/Desktop/projects/project2$ ./prog
enter the number which operations you want?
1.array operations 2.airthmatic operations
2

1.pallandrome 2.square root 3.square 4.Increment by 4 5.checking perfect number 6.checking strong number 7.checking armstrong number 8.exit 
enter the operation:
1
enter the number:
454
It is a pallandrome!

1.pallandrome 2.square root 3.square 4.Increment by 4 5.checking perfect number 6.checking strong number 7.checking armstrong number 8.exit 
enter the operation:
2
enter the number:
81
the square root is:9.000000

1.pallandrome 2.square root 3.square 4.Increment by 4 5.checking perfect number 6.checking strong number 7.checking armstrong number 8.exit 
enter the operation:
3
enter the number:
8
the square of your number is:64
 
1.pallandrome 2.square root 3.square 4.Increment by 4 5.checking perfect number 6.checking strong number 7.checking armstrong number 8.exit 
enter the operation:
4
enter the number:
96
the result of increment by 4 value is: 100
1.pallandrome 2.square root 3.square 4.Increment by 4 5.checking perfect number 6.checking strong number 7.checking armstrong number 8.exit 
enter the operation:
5
enter the number:
145   
It is not a perfect number!

1.pallandrome 2.square root 3.square 4.Increment by 4 5.checking perfect number 6.checking strong number 7.checking armstrong number 8.exit 
enter the operation:
6
enter the number:
145
It is not a strong number!

1.pallandrome 2.square root 3.square 4.Increment by 4 5.checking perfect number 6.checking strong number 7.checking armstrong number 8.exit 
enter the operation:
7
enter the number:
1642
It is not a armstrong number!

1.pallandrome 2.square root 3.square 4.Increment by 4 5.checking perfect number 6.checking strong number 7.checking armstrong number 8.exit 
enter the operation:
7
enter the number:
535
It is not a armstrong number!

1.pallandrome 2.square root 3.square 4.Increment by 4 5.checking perfect number 6.checking strong number 7.checking armstrong number 8.exit 
enter the operation:
8
ramsai@TSHYD-015:~/Desktop/projects/project2$ 
*/

