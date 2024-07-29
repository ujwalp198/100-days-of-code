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
 

 //inserting node at the end of the linked list.
struct node*ptr,*temp;
ptr=head;
temp=malloc(sizeof(struct node));
temp->data=32;
temp->link=NULL;

while(ptr->link!=NULL)
{
    ptr=ptr->link;
}
ptr->link=temp;


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