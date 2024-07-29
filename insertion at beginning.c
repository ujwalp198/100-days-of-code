#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* link;
};
int main()
{
 struct node*head=malloc(sizeof(struct node));
 head->data=12;
 head->link=NULL;
 
 struct node*current=malloc(sizeof(struct node));
 current->data=22;
 current->link=NULL;
 head->link=current;
 

 //inserting node at the beginning of the linked list.
struct node*ptr=malloc(sizeof(struct node));
ptr->data=32;
ptr->link=NULL;

ptr->link=head;
head=ptr;


//checking if the node is added by traversing
if(head==NULL)
    {
        printf("empty");

    }
    struct node *pt=NULL;
    pt=head;
    while(pt!=NULL)
    {
        printf("data=%d, link=%d\t",pt->data,pt->link);
        pt=pt->link;
    }

}