#include<stdio.h>

int main(){
    int arr1[20];
    int  arr2[20];
    int arr3[20];
    int n;
    int m;
    printf("Enter arr1 of size:");
    scanf("%d", &n);
     printf("Enter arr2 of size:");
    scanf("%d", &m);
    for (int i = 0; i <=n ; i++) {
     printf("Enter value of arr1 index:%d:", i);
        scanf("%d",& arr1[i]);
    }

    for (int i = 0; i <=m ; i++) {
     printf("Enter value of arr2 index:%d:", i);
        scanf("%d",& arr2[i]);
    }
  int a = 0;
    for (int i = 0; i <=n; i++,a++){
        arr3[a] = arr1[i];
    }

    for (int i = 0; i <=m; i++,a++){
        arr3[a] = arr2[i];
    }

    int p = n + m + 1;
    for (size_t i = 0; i <=p; i++)
    {
        printf("%d ",arr3[i]);
    }    
}