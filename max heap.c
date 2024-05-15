#include<stdio.h>
int size=0;
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void heapify(int arr[],int size,int i)
{
    if(size==1)printf("single element in the heap\n");
    else
    {
        int largest=i;
        int l=2*i+1;
        int r=2*i+2;
        if(l<size&&arr[l]>arr[largest])largest=l;
        if(r<size&&arr[r]>arr[largest])largest=r;
        if(largest!=i)
        {
            swap(&arr[i],&arr[largest]);
            heapify(arr,size,largest);
        }
    }

}
void insert(int arr[],int newNum)
{
    if(size==0)
    {
        arr[0]=newNum;
        size+=1;
    }

    else
    {
        arr[size]=newNum;
        size+=1;

        for(int i=size/2-1; i>=0; i--)
        {
            heapify(arr,size,i);
        }
    }
}
void deleteRoot(int arr[],int num)
{
    int i;
    for(i=0; i<size; i++)
    {
        if(num==arr[i])break;
    }
    swap(&arr[i],&arr[size-1]);
    size-=1;
    for(i=size/2-1; i>=0; i--)heapify(arr,size,i);

}
void printArray(int arr[],int size)
{
    for(int i=0; i<size; ++i)printf("%d ",arr[i]);
    printf("\n");

}
int main()
{
    int arr[10];
    insert(arr,3);
    insert(arr,4);
    insert(arr,9);
    insert(arr,5);
    insert(arr,2);
    printf("Max heap array:\n");
    printArray(arr,size);
    deleteRoot(arr,4);
    printf("after deleting an element:\n");
    printArray(arr,size);
}
