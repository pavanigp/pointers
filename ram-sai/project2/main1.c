#include<stdio.h>
#include<math.h>
void armstrong_no(int value);
void strong_no(int value);
void perfect_no(int value);
void increment(int value);
void square(int value);
void pallandrome(int value);
void sqr(int value);
int main(int argc,char *argv[])
{
	//enum airthoperation{pal=1,root,squ,inc,cpn,ns,asn,exit};
//	enum airthoperation num;
	int value;
		printf("enter the number:\n");
		scanf("%d",&value);
			#ifdef op1
			pallandrome(value);
			#elif op2
			square(value);
			#elif op3
			sqr(value);
			#elif op4
			increment(value);
			#elif op5
			perfect_no(value);
			#elif op6
			strong_no(value);
			#elif op7
			armstrong_no(value);
			#else	
			#endif
	
return 0;
}
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



/*
ramsai@TSHYD-015:~/Desktop/projects/project2$ gcc main1.c -lm -Dop1=1
ramsai@TSHYD-015:~/Desktop/projects/project2$ ./a.out
enter the number:
454
It is a pallandrome!
ramsai@TSHYD-015:~/Desktop/projects/project2$ gcc main1.c -lm -Dop2=1
ramsai@TSHYD-015:~/Desktop/projects/project2$ ./a.out
enter the number:
8
the square of your number is:64
 ramsai@TSHYD-015:~/Desktop/projects/project2$ gcc main1.c -lm -Dop3=1
ramsai@TSHYD-015:~/Desktop/projects/project2$ ./a.out
enter the number:
91
the square root is:9.539392
ramsai@TSHYD-015:~/Desktop/projects/project2$ gcc main1.c -lm -Dop4=1
ramsai@TSHYD-015:~/Desktop/projects/project2$ ./a.out
enter the number:
96
the result of increment by 4 value is: 100ramsai@TSHYD-015:~/Desktop/projects/project2$ gcc main1.c -lm -Dop5=1
ramsai@TSHYD-015:~/Desktop/projects/project2$ ./a.out
enter the number:
875
It is not a perfect number!
ramsai@TSHYD-015:~/Desktop/projects/project2$ gcc main1.c -lm -Dop6=1
ramsai@TSHYD-015:~/Desktop/projects/project2$ ./a.out
enter the number:
587
It is not a strong number!
ramsai@TSHYD-015:~/Desktop/projects/project2$ gcc main1.c -lm -Dop7=1
ramsai@TSHYD-015:~/Desktop/projects/project2$ ./a.out
enter the number:
1654
It is not a armstrong number!
ramsai@TSHYD-015:~/Desktop/projects/project2$ 
*/
