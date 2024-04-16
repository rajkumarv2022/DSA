// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node * root=NULL;

struct node* create(int data)
{
   struct node *nn = (struct node*)malloc(sizeof(struct node));
    nn->data=data;
    nn->left=NULL;
    nn->right=NULL;
    return nn;
}

struct node*  insert(struct node *root,int data)
{
    if(root==NULL)
    {
        root=create(data);
    }
    else if(data < root->data)
    {
        root->left=insert(root->left,data);
    }
    else if(data>root->data)
    {
        root->right=insert(root->right,data);
    }
    
    return root;
    
}

struct node* inorder(struct node * root)
{
    if(root!=NULL)
    {
    root->left=inorder(root->left);
    printf("%d ",root->data);
    root->right=inorder(root->right);
    }
}

int main() {
    // Write C code here
    
    root = insert(root,5);
    insert(root,6);
    inorder(root);
    
    return 0;
}