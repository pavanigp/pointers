#include<stdio.h>
int adjecent_byte(int num)
{
	int temp=0,i,odd=0,even=0;
	int result;
	for(i=0;i<32;i+=16)
	{
		temp=255<<i;
		odd=odd|temp;
	}
	even=~odd;
	printf("%x\n",odd);
	printf("%x\n",even);
	result=(((even&num)>>8)|((odd&num)<<8));
	return result;
}

int main()
{
	int num,result;
	printf("enter the number:");
	scanf("%d",&num);
	result=adjecent_byte(num);
	printf("result is :%d",result);
}

/*
ramsai@TSHYD-015:~/Desktop/DS/bitwiseoperators/masking$ gcc -Wall -Werror adjecentbyte1.c 
ramsai@TSHYD-015:~/Desktop/DS/bitwiseoperators/masking$ ./a.out
enter the number:256
result is :1
ramsai@TSHYD-015:~/Desktop/DS/bitwiseoperators/masking$ ./a.out
enter the number:123
result is :31488
*/
