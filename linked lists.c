//creating node of linked list  
#include<stdio.h>
int main()
{
    struct node
    {
        int data;
        struct node* next;
    };
    struct node* head, *newnode;
    head=0;
    newnode=(struct node*) malloc(sizeof(struct node));
    printf("add data: ");
    scanf("%d",&newnode->data);
    newnode->next=0;
    head=newnode;
}