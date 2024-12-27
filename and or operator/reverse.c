#include<stdio.h>

int main(){

    int arr[20];
    int n;
    printf("Enter arr of size:");
    scanf("%d", &n);
    for (int i = 0; i <=n; i++)
    {
        printf("Enter value of index:%d:", i);
        scanf("%d",& arr[i]);
    }

    for (int i = n; i >=0; i--)
    {
        printf("%d ",arr[i]);
    }
    
    
}