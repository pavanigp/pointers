#include<stdio.h>
int adjecent_byte(int num)
{
	int res,temp1,temp2;
	temp1=0xFF00FF00;
	temp2=0x00FF00FF;
	res=(((num&temp1)>>8)|((num&temp2)<<8));
	return res;	
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
ramsai@TSHYD-015:~/Desktop/DS/bitwiseoperators/magic_number$ gcc -Wall -Werror adjecent_bytes.c 
ramsai@TSHYD-015:~/Desktop/DS/bitwiseoperators/magic_number$ ./a.out
enter the number:50
result is :12800
ramsai@TSHYD-015:~/Desktop/DS/bitwiseoperators/magic_number$ ./a.out
enter the number:28
result is :7168
*/
