#include<stdio.h>
#include<stdlib.h>

void push();
void pop();
void show();
struct node
{
    int val;
    struct node* next;
};
struct node* head;
void main()
{
    int choice=0;
    printf("stack operations using array:\n");
    printf("choice one from the below options:");
    printf("\n1.push\n2.pop\n3.show\n4.exit\n");
    do
    {

        printf("enter your choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:

            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            show();
            break;
        case 4:
            printf("exiting...\n");
            break;
        default:
            printf("please enter valid choice:");
        }


    }
    while(choice!=4);
    return 0;
}
void push()
{
    int val;
    struct node*ptr=(struct node *)malloc(sizeof(struct node));
    if(ptr==NULL)printf("unable to push the element");
    else
    {
        printf("enter the value:");
        scanf("%d",&val);
        if(head==NULL)
        {
            ptr->val=val;
            ptr->next=NULL;
            head=ptr;
        }
        else
        {
            ptr->val=val;
            ptr->next=head;
            head=ptr;
        }
        printf("itempushed\n");

    }
}
void pop()
{
    int item;
    struct node* ptr;
    if(head==NULL)printf("underflow");
    else
    {
        item=head->val;
        ptr=head;
        head=head->next;
        free(ptr);
        printf("itempoped");
    }
}
void show()
{
    int i;
    struct node* ptr;
    ptr=head;
    if(ptr==NULL)printf("stack is empty");
    else
    {
        printf("printing stack elements:\n");
        while(ptr!=NULL)
        {
            printf("%d\n",ptr->val);
            ptr=ptr->next;
        }

    }
}
