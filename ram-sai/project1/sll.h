#include <stdio.h>
#include<stdlib.h>
int create_sll(int input);
struct node
{
    int data;
    struct node *next;
};

//struct node **base;
void insert_at_end(struct node **,int);
void display(struct node **);
void delete_from_end(struct node **);
void delete_prime_nos(struct node **);
void eliminate_dup(struct node **);
