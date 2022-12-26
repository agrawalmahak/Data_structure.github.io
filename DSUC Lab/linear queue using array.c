#include<stdio.h>
#include<stdlib.h>
int max=10;
struct queue
{
    int arr[10];
    int front,rear;


}q;
int main()
{
    q.rear=-1;
    q.front=-1;
    insertion_cq(10);
    insertion_cq(20);
    insertion_cq(30);
    traverse();
    deletion();
}
int insertion_cq(int data)
{
    if(q.rear==max-1)
        printf("overflow\n");
    else if(q.rear==-1)
    {
        q.front=0;
        q.rear=0;
    }
    else
        q.rear=q.rear+1;
    q.arr[q.rear]=data;

}
int traverse()
{
    int i;
    for(i=q.front;i<=q.rear;i++)
        printf("%d",q.arr[i]);
}
int deletion()
{
    if(q.front==-1)
        printf("underflow");
    if(q.front==q.rear)
    {
        q.front=-1;
        q.rear=-1;

    }
    else
        q.front=q.front+1;
}
