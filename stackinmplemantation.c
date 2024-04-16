// Online C compiler to run C program online
#include <stdio.h>

int stack[100];
int top=-1;
int size;

void push()
{
    int data;
    printf("\nEnter the data : ");
    scanf("%d",&data);
    
    if(top==size-1)
    {
        printf("\nOver");
    }
    else
    {
        stack[++top]=data;
    }
}
void pop()
{
     if(top==-1)
     {
         printf("\nUnder");
     }
     else
     {
      int popped = stack[top--];  
      printf("%d",popped);
     }
}
void peek()
{
     printf("\npeek");
}
void disp()
{
    for(int i=0;i<=top;i++)
    {
        printf("%d ",stack[i]);
    }
}

int main() {
    // Write C code here
    
    
    printf("\nEnter Size : ");
    scanf("%d",&size);
    
    push();
    push();
    disp();
    

    return 0;
}