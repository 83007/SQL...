#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
} node;
struct node *swap(struct node* ptr1,struct node *ptr2)
{
    struct node* tmp=ptr2->next;
    ptr2->next=ptr1;
    ptr1->next=tmp;
    return ptr2;
};
int bubblesort(struct node** head,int count)
{
    struct node** h;
    int i,j,swapped;
    for(i=0; i<=count; i++)
    {
        h=head;
        swapped=0;
        for(j=0; j,count-1-i; j++)
        {
            struct node* p1=*h;
            struct node* p2=p1->next;
            if(p1->data > p2->data)
            {
                *h=swap(p1,p2);
                swapped=1;
            }
            h=&(*h)->next;
        }
        if(swapped==0)break;
    }
}
void printlist(struct node* n)
{
    while(n!=NULL)
    {
        printf("%d ->",n->data);
        n=n->next;
    }
    printf("\n");
}
void insertAtTheBegin(struct node** start_ref,int data)
{
    struct node*ptr1=(struct node*)malloc(sizeof(struct node));
    ptr1->data=data;
    ptr1->next=*start_ref;
    *start_ref=ptr1;
}
int main()
{
    int arr[]= {78,20,10,32,1,5};
    int list_size,i;
    struct node *start=NULL;
    list_size=sizeof(arr)/sizeof(arr[0]);
    for(i=list_size-1; i>=0; i--)
        insertAtTheBegin(&start,arr[i]);
    printf("linked list before sorting:\n");;

    printlist(start);
    bubblesort(&start,list_size);
    printf("linked list after sorting:\n");
    printlist(start);
    return 0;

}
