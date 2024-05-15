
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
struct node* front=NULL;
struct node* rear=NULL;
void main()
{
    int choice=0;
    printf("queue  operations using linked list:\n");
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

}
void push()
{
    int val;
    struct node*ptr=(struct node *)malloc(sizeof(struct node));

    printf("enter the value:");
    scanf("%d",&val);

    ptr->val=val;
    ptr->next=NULL;


    if ((front == NULL) && (rear == NULL))
    {
        front = rear = ptr;
    }
    else
    {
        rear -> next = ptr;
        rear = ptr;
    }
    printf("itempushed\n");


}
void pop() {
    if (front == NULL) {
        printf("\nUnderflow\n");
        return -1;
    } else {
        struct node * temp = front;
        int temp_data = front ->val;
        front = front -> next;
        free(temp);

    }
}
void show() {
    struct node * temp;
    if ((front == NULL) && (rear == NULL)) {
        printf("\nQueue is Empty\n");
    } else {
        printf("The queue is \n");
        temp = front;
        while (temp) {
            printf("%d--->", temp ->val);
            temp = temp -> next;
        }
        printf("NULL\n\n");
    }
}
