#include<stdio.h>

#define n 5
int sum(int arr[],int m,int target){
    for(int i=0;i<m;i++){
        for (int  j = i+1; j < m; j++)
        {
            if ((arr[i]+arr[j])==target)
            {
                printf("%d,%d",i,j);
            }   
        }   
    }
}
int main(){
    int arr[5]={2,4,6,8,10};
   sum(arr,5,18);
}