// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>

struct node
{
    int data;  //4 byt
    //self refferential structure
    struct node *next; //it will have node pointer
};//one statement

//No bytes memory allocated.

//
struct node *front=NULL,*rear=NULL; //front is a pointer pointing node of structure

void enqueue(int value) //enque = o(1) append = o(n)
{
    struct node *newnode=NULL;
  //malloc() large byte of memory by specified size and it return starting address
  //malloc() will return genaric or void data type of starting address 
  newnode = (struct node *)malloc(sizeof(struct node)); //8 bytes allocated
  newnode->data=value;
  newnode->next=NULL;
  
  if(front==NULL && rear==NULL)
  {
      front=rear=newnode;
  }
  else
  {
      rear->next=newnode;
      rear=newnode;
  }
  
}

void dequeue()
{
    if(front==NULL && rear==NULL)
    {
        printf("Queue is empty");
    }
    else if(front==rear)
    {
        front=rear=NULL;
    }
    else
    {
        struct node * temp=front;
        front=front->next;
        temp->next=NULL;
        free(temp);
    }
}

void disp()
{
    struct node * temp=front;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

int main() {
    
    enqueue(99);
    enqueue(99); 
    disp();
    printf("\n");
    dequeue();
    dequeue();
    enqueue(5);
    disp();
    printf("\n");
    
    //dequeue();
    return 0;
}