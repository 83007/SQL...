
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
void addlast(struct node **head,int value)
{
    struct node *newNode=malloc(sizeof(struct node));
    newNode->data=value;
    newNode->next=NULL;
    if(*head==NULL)*head=newNode;
    else
    {
        struct node *lastNode=*head;
        while(lastNode->next!=NULL)
        {
            lastNode=lastNode->next;
        }
        lastNode->next=newNode;
    }
}
void deleteNode(struct node**head,int key)
{
    struct node*temp;
    if((*head)->data==key)
    {
        temp=*head;
        *head=(*head)->next;
        free(temp);

    }
    else
    {
        struct node*current=*head;
        while(current->next!=NULL)
        {
            if(current->next->data==key)
            {
                temp=current->next;
                current->next=current->next->next;
                free(temp);
                break;
            }
            else current=current->next;
        }
    }
}
void printlist(struct node*head){
struct node *temp=head;
while(temp!=NULL){
    printf("%d->",temp->data);
    temp=temp->next;

}
printf("NULL\n");
}
int main(){
struct node *head=NULL;
addlast(&head,10);
addlast(&head,20);
addlast(&head,30);
printf("linked list elements:\n");
printlist(head);
deleteNode(&head,10);
printf("the new linked list:\n");
printlist(head);
}
