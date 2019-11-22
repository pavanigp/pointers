#include"sum.h"
void sum(int num)
{	
	int result=0,temp;
	while(num!=0)
	{
		temp=num%10;
		result=result+temp;
		num=num/10;
	}
	printf("sum is:%d",result);
}
