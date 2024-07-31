#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* link;
};

struct node* head = NULL;



void Insert_at_beginning() 
{
    int num1;
    printf("Enter the number to insert: ");
    scanf("%d", &num1);
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    if (!ptr) {
        printf("Memory allocation failed\n");
        return;
    }
    ptr->data = num1;
    ptr->link = head;
    head = ptr;
}
void Insert_at_position() 
{
    int pos, num1;
    printf("Enter the position to insert into linked list: ");
    scanf("%d", &pos);
    printf("Enter the number to insert: ");
    scanf("%d", &num1);

    struct node* ptr = head;
    struct node* pt = (struct node*)malloc(sizeof(struct node));
    if (!pt) {
        printf("Memory allocation failed\n");
        return;
    }
    pt->data = num1;
    pt->link = NULL;

    if (pos == 1) {
        pt->link = head;
        head = pt;
        return;
    }

    pos--;
    while (pos > 1 && ptr != NULL) {
        ptr = ptr->link;
        pos--;
    }
    if (ptr == NULL) {
        printf("Position out of range\n");
        free(pt);
        return;
    }
    pt->link = ptr->link;
    ptr->link = pt;
}
void Insert_at_end() 
{
    int num1;
    printf("Enter number to insert: ");
    scanf("%d", &num1);
    struct node* ptr = head;
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    if (!temp) {
        printf("Memory allocation failed\n");
        return;
    }
    temp->data = num1;
    temp->link = NULL;

    if (head == NULL) {
        head = temp;
        return;
    }

    while (ptr->link != NULL) {
        ptr = ptr->link;
    }
    ptr->link = temp;
}
void Deletion_at_beginning() 
{
    if (head == NULL) {
        printf("Linked list is already empty\n");
    } else {
        struct node* temp = head;
        head = head->link;
        free(temp);
        temp = NULL;
    }
}


void Deletion_at_position() 
{
    int pos;
    printf("Enter the position to delete a node in linked list: ");
    scanf("%d", &pos);

    if (head == NULL || pos < 1) {
        printf("List is empty or invalid position\n");
        return;
    }

    struct node* ptr = head;
    if (pos == 1) {
        head = head->link;
        free(ptr);
        return;
    }

    pos--;
    while (pos > 1 && ptr->link != NULL) {
        ptr = ptr->link;
        pos--;
    }

    if (ptr->link != NULL) {
        struct node* temp = ptr->link;
        ptr->link = ptr->link->link;
        free(temp);
    } else {
        printf("Position out of range\n");
    }
}
void Deletion_at_end() 
{
    if (head == NULL) {
        printf("Linked list is already empty\n");
        return;
    }

    struct node* temp = head;
    struct node* temp2 = NULL;

    if (head->link == NULL) {
        free(head);
        head = NULL;
        return;
    }

    while (temp->link != NULL) {
        temp2 = temp;
        temp = temp->link;
    }
    temp2->link = NULL;
    free(temp);
    temp = NULL;
}



void count_nodes() 
{
    int count = 0;
    struct node* ptr = head;
    while (ptr != NULL) {
        count++;
        ptr = ptr->link;
    }
    printf("Number of nodes: %d\n", count);
}

void print_data() 
{
    if (head == NULL) {
        printf("Empty list\n");
        return;
    }
    struct node* ptr = head;
    while (ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->link;
    }
    printf("NULL\n");
}
void search_data() {
    int num, pos = 1;
    printf("Enter the number to search: ");
    scanf("%d", &num);
    struct node* ptr = head;
    while (ptr != NULL) {
        if (ptr->data == num) {
            printf("Number found at position: %d\n", pos);
            return;
        }
        ptr = ptr->link;
        pos++;
    }
    printf("Number not found in the list\n");
}




void insertion() {
    int num;
    while (1) {
        printf("Select operations to perform on the linked list\n"
               "1: Insertion at the beginning of the linked list\n"
               "2: Insertion at the end of the linked list\n"
               "3: Insertion at the given position of the linked list\n"
               "4: Deletion of the node at the beginning\n"
               "5: Deletion of the node at the end\n"
               "6: Deletion of the node at the given position\n"
               "7: Counting number of nodes\n"
               "8: Printing the data of the linked list\n"
               "9: Search the given element\n"
               "10: EXIT\n");

        printf("Enter your choice: ");
        scanf("%d", &num);

        switch (num) {
            case 1:
                Insert_at_beginning();
                break;
            case 2:
                Insert_at_end();
                break;
            case 3:
                Insert_at_position();
                break;
            case 4:
                Deletion_at_beginning();
                break;
            case 5:
                Deletion_at_end();
                break;
            case 6:
                Deletion_at_position();
                break;
            case 7:
                count_nodes();
                break;
            case 8:
                print_data();
                break;
            case 9:
                search_data();
                break;
            case 10:
                return;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}

int main() {
    insertion();
    return 0;
}
