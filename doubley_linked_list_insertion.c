// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
    
};

struct node *head=NULL;

void insert(int data)
{
    struct node *newnode = NULL;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->prev=NULL;
    newnode->next=NULL;
    
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
    }
}

void printfrwd()
{
    struct node * temp = head;
    
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}

void printbackwd()
{
    struct node * temp = head;
    
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->prev;
    }
}

struct node *head;

int main() {
    // Write C code here
    int n,data;
    printf("Enter the size : ");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
        printf("\nEnter the data : ");
        scanf("%d",&data);
        insert(data);
    }
    
    printfrwd();
    printf("\n");
    printbackwd();

    return 0;
}