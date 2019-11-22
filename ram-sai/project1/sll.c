#include"sll.h"
 int create_sll(int input2)
{
    int ch,data,temp;
struct node *start=NULL;
  //  base=&start;
  jump:  printf("1.insertion at end 2.display 3.delete from end 4.listed all elements? 5.exit\n");
    scanf("%d",&ch);
    switch (ch)
    {
        case 1:
        printf("enter the data\n");
        scanf("%d",&data);
        insert_at_end(&start,data);
        goto jump; 
	case 2:
	display(&start);
	goto jump;
        case 3:
        delete_from_end(&start);
        goto jump;
        case 4:
	temp=input2%2;
	if(temp==0)
	{
		printf("the input is even,so deleted the prime numbers in list\n");
		delete_prime_nos(&start);
	}
	else
	{	printf("the input is odd,so eliminated the duplicates in list\n");
		eliminate_dup(&start);
	}
	goto jump;	
	case 5:
	exit(0);
        
       default:printf("enter the number between 1-9");
        goto jump;
        
    }

    return 0;
}

void insert_at_end(struct node **base,int data)
{
	struct node *temp,*n;
	temp=*base;
	if(temp==NULL)
	{
		temp= (struct node *)malloc(sizeof(struct node));
		temp->data=data;
		temp->next=NULL;
		*base=temp;	
	}
	else
	{
		while(temp->next !=NULL)
			temp=temp->next;
		n=(struct node *)malloc(sizeof(struct node));
		n->data=data;
		n->next=NULL;
		temp->next=n;		
	}
}

void delete_from_end(struct node **base)
{
	struct node *temp,*temp1;
	temp=*base;
	if(temp==NULL)
	{
		printf("No elements ro delete");	
	}
	else
	{
		while(temp->next !=NULL)
			{
				temp1=temp;
				temp=temp->next;
			}
		 free(temp);
		 temp1->next=NULL;
		 temp=*base;		
	}
}
void display(struct node **base)
{
	struct node *temp;
	temp=*base;
	if(temp==NULL)
	printf("no elements to display");
	else
	{ 
		while (temp->next!=NULL)
		{
			printf("%d\n",temp->data);
			temp=temp->next;
		}
		printf("%d\n",temp->data);
	}

}

void delete_prime_nos(struct node **base)
{
	struct node *temp,*prev;
	int check,status=0;
	temp=prev=*base;
	if(prev==NULL)
	printf("no elemets in the list");
	else
	{
		while (temp!=NULL)
		{
			check=temp->data;
			for(int i=2;i<=check/2;i++)
			{
				if(check%i==0)
				{
					status=1;
				}	
			}	
			if(status==0)
			{
				if(prev==temp)
				{	
					temp=temp->next;
					free(prev);
					prev=temp;
					*base=temp;					
				}
				else
				{
					prev->next=temp->next;
					free(temp);
					temp=prev->next;
			
				}	
			}
			else
			{
				if(prev==temp)
					temp=temp->next;
				else
				{
					temp=temp->next;
					prev=prev->next;
				}
			}
			status=0;
				
		}
		
	}
}
/*void eliminate_dup(struct node **base) 
{ 
    struct node* current;
	current= *base; 
    struct node* next_next;  
    if (current == NULL)  
       return;  
    while (current->next != NULL)  
    { 
       
       if (current->data == current->next->data)  
       { 
          
           next_next = current->next->next; 
           free(current->next); 
           current->next = next_next;   
       } 
       else 
       { 
          current = current->next;  
       } 
    } 
}*/

void eliminate_dup(struct node **base)
{
	struct node *ptr1, *ptr2, *duplicate;
	ptr1 = *base;

	while (ptr1 != NULL && ptr1->next != NULL)
	{
		ptr2 = ptr1;
		while (ptr2->next != NULL)
		{
			if (ptr1->data == ptr2->next->data)
			{
				duplicate = ptr2->next;
				ptr2->next = ptr2->next->next;
				free(duplicate);
			}
			else
				ptr2 = ptr2->next;
		}
		ptr1 = ptr1->next;
	}
} 
		
        


