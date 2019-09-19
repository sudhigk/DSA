#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head= NULL;
void insertfirst();
void insertlast();
void search();
void deletenode();
void traverse();

void main()
{
    char ch='y';
    int op;

    while (ch=='y')
    {
        /* code */
        printf("\nSELECT THE OPERATION\n");
        printf("1.insert first\n2.insert last\n3.search list\n4.delete\n:");
        scanf("%d",&op);
        switch (op)
        {
        case 1:
            insertfirst();
            break;
        case 2:
            insertlast();
            break;
        case 3:
            search();
            break;
        case 5:
            deletenode();
            break;
        
        default:printf("invalid choice!!");
            break;
        }
        
        traverse();
        printf("\ndo you want to continue(y/n): ");
        scanf("%c",&ch);
        scanf("%c",&ch);
        
    }
    
}

void insertfirst()
{
    int x;
    printf("enter the data to be insert: ");
    scanf("%d",&x);
    struct node *temp;
    temp= (struct node*)malloc(sizeof(struct node));

    temp->data = x;
    temp->next = head;
    head = temp;
    temp = NULL;

}

void insertlast()
{
    int x;
    printf("enter the data to be insert: ");
    scanf("%d",&x);
    struct node *temp;
    struct node *current;
    temp= (struct node*)malloc(sizeof(struct node));

    temp->data = x;
    temp->next = NULL;
    current = head;
    if(head==NULL)
        head = temp;
    else
    {
        while (current->next !=NULL)
            current = current->next;
        current->next = temp;
    }
    temp = NULL;
    current = NULL;
}

void search()
{
    int x;
    printf("enter the data to search: ");
    scanf("%d",&x);
    struct node *current;
    current = head;
    while(current!= NULL && current->data != x)
        current = current->next;
    if(current == NULL)
        printf("element not found\n");
    else
        printf("\n%d found \n",x);
}

void deletenode()
{
    struct node *current;
    int x;

    printf("enter the element to be deleted :");
    scanf("%d",&x);
    if(head == NULL)
        return;
    current = head;
    if(head->data == x)
    {
        head = head->next;
        current->next = NULL;
        free (current);
        current = NULL;
        return;
    }
    while(current->next != NULL && current->next->data != x)
        current = current->next;
    if(current->next != NULL)
    {
        struct node *todelete;

        todelete = current->next;
        current->next = todelete->next;
        todelete->next =NULL;
        free (todelete);
        todelete = NULL;
    }
    current = NULL;
}

void traverse()
{
    struct node *temp;
    temp = head;

    if(temp==NULL)
    {
        printf("\nlinked list is empty");
        return;
    }
    while(temp->next != NULL)
    {
        printf("%d->",temp->data);
        temp = temp->next;

    }
    printf("%d",temp->data);
}