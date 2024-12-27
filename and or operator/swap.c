#include<stdio.h>
int main(){
    int arr[20];
    int n;
    printf("enter the value of n:");
     scanf("%d",&n);
     for(int i=0;i<=n;i++){
         printf("enter the value of index:%d:",i);
         scanf("%d",&arr[i]);
     }

     int a=arr[0];
     arr[0]=arr[n];
     arr[n]=a;
     for(int i=0;i<=n;i++){
        printf(" %d ",arr[i]);
     }
}