#include<stdio.h>
#include<stdlib.h>
#define n 7
int binary(int arr[],int low,int high){
    int mid;
    int data;
    printf("enter data:");
    scanf("%d",&data);
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==data){
            return mid;
        }else if(arr[mid]<data){
            low=mid+1;
     

        }else
        high=mid-1;

        }
        if(arr[mid]!=data){
            return -1;
        }
    }

    int main(){
        int arr[7]={5,7,9,15,19,25,30};
        int low=0;
        int high=n-1;
        int result=binary(arr,low,high);
        if(result==-1)
        {
            printf("data is not found");
        }else

        printf("%d",result);
    }
