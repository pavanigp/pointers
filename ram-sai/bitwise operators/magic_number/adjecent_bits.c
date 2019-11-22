#include<stdio.h>
int adjecent_bits(int num)
{
	int res,temp1,temp2;
	temp1=0xAAAAAAAA;
	temp2=0x55555555;
	res=(((num&temp1)>>1)|((num&temp2)<<1));
	return res;	
}
int main()
{
	int num,result;
	printf("enter the number:");
	scanf("%d",&num);
	result=adjecent_bits(num);
	printf("result is :%d",result);
}

/*
ramsai@TSHYD-015:~/Desktop/DS/bitwiseoperators/magic_number$ gcc -Wall -Werror adjecent_bits.c
ramsai@TSHYD-015:~/Desktop/DS/bitwiseoperators/magic_number$ ./a.out
enter the number:53
result is :58
ramsai@TSHYD-015:~/Desktop/DS/bitwiseoperators/magic_number$ ./a.out
enter the number:24
result is :36
*/
