#include"array.h"
#define size 50
int arr[size];
int N;
void to_insert()
{ 	
	int pos,data;
	printf("enter the position and data of an array:\n");
	scanf("%d %d",&pos,&data);
	int c;
	for (c = N-1;c>pos-1; c--)		
		arr[c] = arr[c-1];
 		arr[pos-1] = data;
 	printf("Resultant array is:\n");
 	for (c = 0; c < N; c++)
      	printf("%d ", arr[c]);
 
}
void to_create()
{
	int i;
	printf("enter the size of an array:\n");
	scanf("%d",&N);	
	printf("enter the element of an array:\n");
	for(i=0;i<N;i++)
	{
		scanf("%d",&arr[i]);
	}	
}
void to_display()
{
	int i;
	printf("the array elements are:\n");
	for(i=0;i<N;i++)
	{
		printf("%d ",arr[i]);
	}
}
void to_sort()
{
	int i,j,temp;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			if(arr[i]<arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
}
void to_reverse()
{
	int i;
	printf("printing the array in reverse order:\n");
	for(i=N-1;i>=0;i--)
	{
		printf("%d ",arr[i]);	
	}
}
void to_elim_duplicate()
{
	int b[N];
	int count =0,c,d;
	for (c = 0;c < N; c++)
        {
        	for (d=0;d<count; d++)
        	{
          		if(arr[c] == b[d])
            		break;
        	}
        	if (d==count)
        	{
          		b[count] = arr[c];
          		count++;
        	}
      	}
	printf("\n");
	for(int i=0;i<count;i++)
	{
		arr[i]=b[i];
		printf(" %d",arr[i]);
	}
	N=count;
}
int to_fo_dup()
{
	int i,temp,j=1;
	for(i=0;i<N;i++)
	{
		temp=arr[i];
		for(j=i+1;j<N;j++)
		{
			if(arr[j]==temp)
				return j;
		}
	}
return 0;	
}

