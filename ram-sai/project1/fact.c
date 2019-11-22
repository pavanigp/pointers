#include"fact.h"
int fact(void)
{
	int num,result;
	printf("enter the number:\n");
	scanf("%d",&num);
	result=factorial(num);
	return result;
}
int factorial(int num)
{
	if (num>=1)
		return num*factorial(num-1);
	else
		return 1;	
}
	

