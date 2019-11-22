#include"airth.h"
void sqr(int value)
{
	printf("the square root is:%lf\n",sqrt(value));
}

void pallandrome(int value)
{	
	int temp,res=0;
	temp=value;
	while(temp!=0)
	{
		res=res*10+temp%10;
		temp=temp/10;
	}
	if(res==value)
	printf("It is a pallandrome!\n");
	else
	printf("It is not a pallandrome!\n");
}
void square(int value)
{
	value=value*value;
	printf("the square of your number is:%d\n ",value);
}
void increment(int value)
{
	value=value+4;
	printf("the result of increment by 4 value is: %d",value);
}
void perfect_no(int value)
{
	int temp,res=0;
	temp=value;
	for(int i=1;i<temp;i++)
	{
		if(temp%i==0);
		res=res+i;
	}
	if(res==value)
	printf("It is a perfect number!\n");
	else
	printf("It is not a perfect number!\n");
}
void strong_no(int value)
{
	int temp,r=1,res=0;
	temp=value;
	while(temp!=0)
	{
		for(int i=(temp%10);i>=1;i--)
			r=r*i;				
		
		res=res+r;
		temp=temp/10;
	}
	if(res==value)
	printf("It is a strong number!\n");
	else
	printf("It is not a strong number!\n");
}
void armstrong_no(int value)
{	
	int count=0,r=0;
	int temp;
	temp=value;
	while(temp!=0)
	{
		temp=temp/10;
		count++;
	}
	while(value!=0)
	{	
		temp=value%10;
		r=r+pow(temp,count);
		value=value/10;
	}
	if(r==value)
	printf("It is a armstrong number!\n");
	else
	printf("It is not a armstrong number!\n");
	
}
