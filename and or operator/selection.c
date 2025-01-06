#include<stdio.h>
#include<stdlib.h>
#define n 6      

int arr[n];
int a;
int sort(){
    for(int i=0;i<n;i++){
        arr[i]=(rand()%50)+1;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[j]<arr[i]){
                a=arr[j];
                arr[j]=arr[i];
                arr[i]=a;
            }
        }
    }

printf("\n");
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}

    
}
int main(){
    sort();
}