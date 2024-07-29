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
 

 //inserting node at the given position  of the linked list.
 int pos=2;
struct node*ptr=head;
struct node*pt=malloc(sizeof(struct node));
pt->data=32;
pt->link=NULL;

pos--;
while(pos!=1)
{
    ptr=ptr->link;
    pos--;
}
pt->link=ptr->link;
ptr->link=pt;




//checking if the node is added by traversing
if(head==NULL)
    {
        printf("empty");

    }
    struct node *p=NULL;
    p=head;
    while(p!=NULL)
    {
        printf("data=%d, link=%d\t",p->data,p->link);
        p=p->link;
    }

}