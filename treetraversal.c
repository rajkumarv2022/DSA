// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node * newNode(int data)
{
    struct node * newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}

struct node* inorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
    return root;
}

struct node* preorder(struct node *root)
{
    if(root!=NULL)
    {
  
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
    return root;
}

struct node* postorder(struct node *root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
    return root;
}

int main() {
    // Write C code here
    struct node *root = newNode(5);
    root->left=newNode(3);
    root->right=newNode(6);
    root->left->left=newNode(2);
    root->left->right=newNode(4);
    
    printf("\ninorder : ");
    inorder(root);
    printf("\npreorder : ");
    preorder(root);
    printf("\npostorder : ");
    postorder(root);
    
    
    getchar();

    return 0;
}