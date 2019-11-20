#include<stdio.h>
int adjecent_nibble(int num)
{
	int temp=0,i,odd=0,even=0;
	int result;
	for(i=0;i<32;i+=8)
	{
		temp=15<<i;
		odd=odd|temp;
	}
	even=~odd;
	printf("%x\n",odd);
	printf("%x\n",even);
	result=(((even&num)>>4)|((odd&num)<<4));
	return result;
}

int main()
{
	int num,result;
	printf("enter the number:");
	scanf("%d",&num);
	result=adjecent_nibble(num);
	printf("result is :%d",result);
}

/*
ramsai@TSHYD-015:~/Desktop/DS/bitwiseoperators/masking$ gcc -Wall -Werror adjecentnibble1.c 
ramsai@TSHYD-015:~/Desktop/DS/bitwiseoperators/masking$ ./a.out
enter the number:253
result is :223
ramsai@TSHYD-015:~/Desktop/DS/bitwiseoperators/masking$ ./a.out
enter the number:243
result is :63
*/
