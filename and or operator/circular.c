#include<stdio.h>
int front=-1;
int rear=-1;

void enqueue(int x,int n,int queue[])
{
    if(front==-1&&rear==-1)
    {
        front=rear=0;
        queue[rear]=x;
    }
    else if(((rear+1)%n)==front)
    {
        printf("queue is full");
    }
    else
    {
        rear=(rear+1)%n;
        // printf("\nrear:::%d",rear);
        queue[rear]=x;
    }
}
void dequeue(int queue[],int n)
{
    if(front == -1 && rear==-1)
    {
        printf("overflow");
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        printf("%d\n",queue[front]);
        front=(front+1)%n;
    }
}
void display(int queue[],int n)
{
    int i=front;
    if (front==-1&&rear==-1)
    {
        printf("data not found");
    }
    else
    {
        while (i!=rear)
        {
            printf("%d\t",queue[i]);
            i=(i+1)%n;
        }
        printf("%d",queue[rear]);
        printf("\n");
    }
}

int main(){
    int n=5;
    int arr[n];
    enqueue(10,n,arr);
    enqueue(20,n,arr);
    enqueue(30,n,arr);
    enqueue(40,n,arr);
    enqueue(50,n,arr);
    enqueue(60,n,arr);
    display(arr,n);
    dequeue(arr,n);
    enqueue(70,n,arr);

}