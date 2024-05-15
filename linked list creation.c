#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct node
{
    int data;
    struct node*next;
}*head;
void createlist(int n)
{
    struct node *newNode,*temp;
    int data,i;
    head=(struct node*)malloc(sizeof(struct node));

     temp=(struct node*)malloc(sizeof(struct node));

    printf("enter the data of node 1:");
    scanf("%d",&data);
    head->data=data;
    head->next=NULL;
    temp=head;
    for(i=2; i<=n; i++)
    {
        newNode=(struct node*)malloc(sizeof(struct node));
        printf("enter the data of node %d:",i);
        scanf("%d",&data);
        newNode->data=data;
        newNode->next=NULL;
        temp->next=newNode;
    }
     for(int i=0;i<n;i++)
    {
        printf("data=%d\n",temp->data);
        temp=temp->next;
    }
}
bool search(struct node*head,int x){
while(temp!=NULL){
    if(temp->data==x)return true;
    temp=temp->next;
}
return false;
}

   // struct node*tem;
    //tem=head;


int main()
{
    int n;
    printf("enter the total amount of nodes:");
    scanf("%d",&n);
    createlist(n);
    search(head,21)?printf("Yes"):printf("NO");

    return 0;
}
