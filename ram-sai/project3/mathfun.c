#include"mathfun.h"
void fun(float value,int num)
{
	switch(num)
	{
		case 0:
		printf("floor(%f):%.1lf \n",value,floor(value));
		break;
		case 1:
		printf("ceil(%f):%.1lf \n",value,ceil(value));		
		break;
		case 2:
		printf("pow(%d %d):%d\n",(int)value,(int)value,(int)pow((int)value,(int)value));
		break;
		case 3:
		printf("abs(%d):%d \n",(int)value,(int)abs(value));
		break;
		case 4:
		printf("log(%d):%f \n",(int)value,log(value));
		break;
		default :
		break;	
	}
}
