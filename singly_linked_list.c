// Insert at front of the linked list
#include <stdio.h>
#include<stdlib.h>

struct node
{
    struct node *next;
    int data;
    
};

struct node *head=NULL;

void insert(int data)
{
    struct node *newnode = NULL;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        newnode->next=head;
        head=newnode;
    }
}

void print()
{
    struct node * temp = head;
    
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
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
    
    print();

    return 0;
}