#include<stdio.h>
#define n 5
int i;
int top=-1;
int arr[n];

void push(int a){
    if(top>=n-1){
        printf("your array is full");
    }else{
        top++;
        arr[top]=a;
    }    
}

void pop(){
    if(top==-1){
        printf("your array is empty");
        }else{
            top--;
        }
}

void display(){
 if(top<0){
    printf("your array is empty");
 }else{
    for(int i=0;i<=top;i++){
        printf("%d\t",arr[i]);

    }
    printf("\n");
 }
}

int main(){
 push(10);
 push(20);
 push(30);
 display();
 pop();
 display();


}