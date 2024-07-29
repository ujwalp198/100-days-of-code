#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* link;
};
int main()
{
    struct node* head=malloc(sizeof(struct node));
    head->data=12;
    
    struct node*current=malloc(sizeof(struct node));
    current->data=32;
    current->link=NULL;
    head->link=current;

    current=malloc(sizeof(struct node));
    current->data=22;
    current->link=NULL;

    head->link->link=current;
    
    //traversing
    int count=0;
    if(head==NULL)
    {
        printf("empty");

    }
    struct node *ptr=NULL;
    ptr=head;
    while(ptr!=NULL)
    {
        count++;
        ptr=ptr->link;
    }
    printf("%d",count);
}