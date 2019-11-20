#include"fib.h"
int fibonacci(int i)
{
	if(i==0)
	return 0;
	else if(i==1)
	return 1;
	else
	return fibonacci(i-1)+fibonacci(i-2);
}
int fib(int num)
{
	int i;
	printf("the fibonacci series: ");
	for(i=0;i<=num;i++)
	{
		printf("%d ",fibonacci(i));
	}
	return 0;
}
