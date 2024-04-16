// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>

struct node
{
    in data;  //4 byt
    //self refferential structure
    struct node *next; //it will have node pointer
};//one statement

//No bytes memory allocated.

//
struct node *front=NULL,*rear=NULL; //front is a pointer pointing node of structure

void enqueue(int value)
{
    struct node *newnode=NULL;
  //malloc() large byte of memory by specified size and it return starting address
  //malloc() will return genaric or void data type of starting address 
  newnode = (struct node *)malloc(sizeof(struct node));
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



int main() {
    
    enqueue(99); 
    return 0;
}