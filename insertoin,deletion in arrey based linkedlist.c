#include<stdio.h>
int stack[100],i,j,choice,n,top=-1,val;
void push()
void pop();
void show();
int main()
{
    printf("enter the number of elements in the stack:\n");
    scanf("%d",&n);
    printf("stack operations using array:\n");
    printf("choice one from the below options:");
    printf("\n1.push\n2.pop\n3.show\n4.exit\n");
    do
    {

        printf("enter your chice:\n");
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
    if(top>=n-1)
        printf("overflow");
    else
    {
        printf("enter the value:\n");
        scanf("%d",&val);
        top=top+1;
        stack[top]=val;
    }
}
void pop()
{
    if(top<=-1)
        printf("underflow");
    else {  printf("the poped element is %d\n",stack[top]);
            top=top-1;}
}
void show()
{  printf("the elements in the stack:");
    for(i=top; i>=0; i--)
    {
        printf("%d\n",stack[i]);

    }
    if(top==-1)
        printf("stack is empty");
}
