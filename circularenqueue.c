// Circular queue implementation
#include <stdio.h>
#include<stdio.h>
#define max 10 //preprocessor  Macro substitution


/*
//abstract datatype
//showing operation
//hidding implemantation //array or linked list
*/

int Queue[max],front=-1.rear=-1;

//rear = (rear+1)%size
//

void enqueue(int value)
{
 if((rear==max-1)&&(front==0 || front==rear+1))
 {
     printf("Overflow");
 }
else
 {
     front=0;
     rear=(rear+1)%max;
     Queue[rear]=value;
 }
 
}



int main() {
    
    enqueue(77);
    enqueue(88);

    return 0;
}