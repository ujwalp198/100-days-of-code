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
 

 //deleting the first node.
 if(head==NULL)
 {
    printf("linked list is already empty");
 }
 else
 {
    struct node*temp=head;
    head=head->link;
    free(temp);
    temp=NULL;
 }

//checking if the node is deleted
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