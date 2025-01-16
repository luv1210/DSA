#include<stdio.h>
#include<stdlib.h>
#define n 5

int main(){

    int arr[n] ;
    for (int i = 0; i < n; i++)
    {
        arr[i] = (rand() % 50);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    int user;
    int count = 0;
    printf("Enter value of finde:");
    scanf("%d",&user);

    for (int i = 0; i < 5; i++)
    {
        if (arr[i]==user)
        {
            printf("value is found\n");
            break;
        }else{
            count++;
        }
        
    }

if (arr[count]==user)
{
       printf("position is:%d\n", count);

}else
{
    printf("position not found");
}
}