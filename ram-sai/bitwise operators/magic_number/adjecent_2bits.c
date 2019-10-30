#include<stdio.h>
int adjecent_2bits(int num)
{
	int res,temp1,temp2;
	temp1=0xcccccccc;
	temp2=0x33333333;
	res=(((num&temp1)>>2)|((num&temp2)<<2));
	return res;	
}
int main()
{
	int num,result;
	printf("\nenter the number:");
	scanf("%d",&num);
	result=adjecent_2bits(num);
	printf("\nresult is :%d",result);
}



/*
ramsai@TSHYD-015:~/Desktop/DS/bitwiseoperators/magic_number$ gcc -Wall -Werror adjecent_2bits.c 
ramsai@TSHYD-015:~/Desktop/DS/bitwiseoperators/magic_number$ ./a.out

enter the number:53

result is :197
ramsai@TSHYD-015:~/Desktop/DS/bitwiseoperators/magic_number$ ./a.out

enter the number:25

result is :70*/
