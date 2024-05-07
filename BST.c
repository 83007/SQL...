#include<stdio.h>
#include<stdlib.h>
struct node
{
    int key;
    struct node *left,*right;
};

struct node* newNode(int value)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->key=value;
    temp->left=temp->right=NULL;
    return temp;
};
struct node* searchNode(struct node* root,int target)
{
    if(root==NULL || root->key==target)return root;
    if(root->key < target)return searchNode(root->right,target);
    return searchNode(root->left,target);
};
struct node* insertNode(struct node* Node,int value)
{
    if(Node==NULL)return newNode(value);
    if(value < Node->key)
        Node->left=insertNode(Node->left,value);
    else if(value > Node->key)
        Node->right=insertNode(Node->right,value);
    return Node;
};
void inOrder(struct node* root)
{
    if(root!=NULL)inOrder(root->left);
    printf(" %d ",root->key);
    inOrder(root->right);
}
struct node* findMin(struct node* root)
{
    if(root==NULL)return NULL;
    else if(root->left!=NULL)return findMin(root->left);
    return root;
};
struct node* delete(struct node* root,int x)
{
    if(root==NULL)return NULL;
    if(x > root->key)root->right=delete(root->right,x);
    else if  (x<root->key)root->left=delete(root->left,x);
    else
    {
        if(root->left==NULL&&root->right==NULL)
        {
            free(root);
            return NULL;
        }
        else if(root->left==NULL||root->right==NULL)
        {
            struct node* temp;
            if(root->left==NULL)temp=root->right;
            else
                temp=root->left;
            free(root);
            return temp;
        }
        else
        {
            struct node* temp=findMin(root->right);
            root->key=temp->key;
            root->right=delete(root->right,temp->key);
        }
    }
    return root;
};
int main()
{
    struct node* root=NULL;
    root=insertNode(root,50);
    insertNode(root,30);
    insertNode(root,20);
    insertNode(root,40);
    insertNode(root,70);
    insertNode(root,60);
    insertNode(root,80);
    inOrder(root);
    if(searchNode(root,60)!=NULL)printf("60 found\n");
    else printf("60 not found\n");
    struct node* temp=delete(root,70);
    printf("after delete:\n");
    inOrder(root);

}
