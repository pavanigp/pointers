#include"pattren.h"
void pattren(int value,int num)
{
	switch(num)
	{
		case 0:
		pattren1(value);
		break;
		case 1:
		pattren2(value);		
		break;
		case 2:
		pattren3(value);
		break;
		case 3:
		pattren4(value);
		break;
		case 4:
		pattren5(value);
		break;
		default :
		pattren1(value);
		break;	
	}
}
void pattren1(int value)
{
	int temp=value;
	for(int i=1;i<=temp;i++)
        {
                for(int j=0;j<temp;j++)
                {
                    if(i==j+1)
                    printf("0 ");
                    else
                    printf("%d ",i);
                }
                printf("\n");
	}
}
void pattren2(int value)
{
	int temp=value;
	for(int i=1;i<=temp;i++)
        {
                for(int j=1;j<=temp-i;j++)
                printf("  ");
                for(int k=i;k>0;k--)
                printf("%d ",k);
            	printf("\n");
        }
}
void pattren3(int value)
{
	int temp=value;
	for(int i=1;i<=temp;i++)
        {       
                int l=i;
                for(int j=1;j<=i;j++)
                {
                    printf("%d ",l);
                    l=l+i;
                }
            printf("\n");
        }

}
void pattren4(int value)
{
	int temp=value;
	for(int i=1;i<=temp;i++)
        {    
                int pos=1;  
                for(int j=i;j>=i-temp;j--)
                {
                    if(pos<=i)
                    printf("%d ",j%2);
                    pos++;
                }
                printf("\n");
        }  
}
void pattren5(int value)
{
	int temp=value;
	for(int i=1;i<=temp;i++)
        {  
                for(int j=i;j<=temp-1;j++)
                printf(" ");
                for(int l=1;l<=i;l++)
                printf("* ");
                printf("\n");
        }
        for(int i=1;i<=temp;i++)
        {  
                for(int j=1;j<=i;j++)
                printf(" ");
                for(int l=i;l<temp;l++)
                printf("* ");
                printf("\n");
        }
}
