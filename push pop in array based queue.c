
#include<stdio.h>
# define max 50
void push();
void pop();
void show();
int queue_arr[max];
int rear=-1,front=-1;
void main()
{
    int choice=0;
    printf("queue operations using array:\n");
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
    int add_item;
    if(rear==max-1)printf("overflow\n");
    else
    {
        if(front==-1)front=0;
        printf("insert the element in queue:");
        scanf("%d",&add_item);
        rear+=1;
        queue_arr[rear]=add_item;
    }
}
void pop()
{
    if(front==-1||front>rear)
    {
        printf("underflow\n");
        return;
    }
    else
    {
        printf("element deleted from queue is:%d\n",queue_arr[front]);
        front+=1;
    }
}
void show()
{
    int i;
    if(front==-1)printf("queue is empty\n");
    else
    {
        printf("queue is:\n");
        for(i=front; i<=rear; i++)
        {
            printf("%d",queue_arr[i]);
            printf("\n");
        }
    }

}
