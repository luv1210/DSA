#include<stdio.h>
#define e 5
int rear=-1;
int front=-1;
int enqueue(int arr[],int n){
    int x;
 printf("enter the value:");
 scanf("%d",&x);
 if(rear==n-1){
    printf("queue is full");
}else if (rear==-1&&front==-1)
{
    front=rear=0;
    arr[rear]=x;
}else{
    rear++;
    arr[rear]=x;

}
}
int dequeue(int arr[]){
    if(rear==-1&&front==-1){
        printf("queue is empty");
   
    }else if (rear==front)
    {
         front=rear=-1;
         
    }else{
     front++;
    }
}
void display(int arr[]){
  for(int i=front;i<rear+1;i++){
    printf("%d ",arr[i]);
  }
  printf("\n");
}


int main(){
int arr[e];
int x;
enqueue(arr,e);
enqueue(arr,e);
enqueue(arr,e);

display(arr);
dequeue(arr);
display(arr);

}