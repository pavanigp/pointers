#include<stdio.h>
int adjecent_2bits(int num)
{
	int temp=0,i,odd=0,even=0;
	int result;
	for(i=0;i<32;i+=4)
	{
		temp=3<<i;
		odd=odd|temp;
	}
	even=~odd;
	result=(((even&num)>>2)|((odd&num)<<2));
	return result;
}

int main()
{
	int num,result;
	printf("enter the number:");
	scanf("%d",&num);
	result=adjecent_2bits(num);
	printf("result is :%d",result);
}

/*
ramsai@TSHYD-015:~/Desktop/DS/bitwiseoperators/masking$ gcc -Wall -Werror adjecent2bits1.c
ramsai@TSHYD-015:~/Desktop/DS/bitwiseoperators/masking$ ./a.out
enter the number:52
result is :193
ramsai@TSHYD-015:~/Desktop/DS/bitwiseoperators/masking$ ./a.out
enter the number:63
result is :207
ramsai@TSHYD-015:~/Desktop/DS/bitwiseoperators/masking$
