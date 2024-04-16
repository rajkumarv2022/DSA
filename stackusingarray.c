// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};

struct stack *x;

int isfull();
int isempty();

void init(int size)
{
    x=(struct stack*)malloc(sizeof(struct stack));
    
    x->size=size;
    x->arr=(int*)malloc(size*sizeof(int));
    x->top=-1;
}

void push()
{
    
    if(isfull())
    {
        printf("\nOver");
    }
    else
    {
    int data;
    printf("\nEnter the data : ");
    scanf("%d",&data);
    
    x->arr[++(x->top)]=data;
    }
    
}

void pop()
{
    if(isempty())
    {
        printf("\nUnder");
    }
    else
    {
        int data = x->arr[(x->top)--];
        printf("\nPoped data : %d",data);
    }
}

void peek()
{
    printf("\nPeek : %d",x->arr[x->top]);
}

int isfull()
{
    if(x->top==x->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isempty()
{
    if(x->top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

void disp()
{
    printf("\nData : ");
    for(int i=0;i<=x->top;i++)
    {
        printf("%d",x->arr[i]);
    }
}

int main() {
    // Write C code here
    int size;
    printf("Enter stack size : ");
    scanf("%d",&size);
    
    init(size);
    push();
    push();
    disp();
    pop();
    disp();
    
    return 0;
}