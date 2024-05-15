#include<stdio.h>
#include<stdlib.h>
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
}
void traverselist()
{
    struct node*temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("data=%d\n",temp->data);
        temp=temp->next;
    }
}
void push(struct node**head_ref,int new_data)
{
    struct node *new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=new_data;
    new_node->next=(*head_ref);
    (*head_ref)=new_node;
}

int main()
{
    int n;
    printf("enter the total amount of nodes:");
    scanf("%d",&n);
    createlist(n);
    printf("data in the list:\n");
    traverselist();
    push(head,5);
    return 0;
}

