#include<stdio.h>
int main(){
    int a[10],i,pos,val,n;
    printf("enter value of n:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("enter the number:");
        scanf("%d",&a[i]);
    }
    printf("\nenter position to insert:");
    scanf("%d",&pos);
    printf("\nenter value to insert:");
    scanf("%d",&val);
    
    for(i=n;i>=pos-1;i--)
    a[i+1]=a[i];
    a[pos-1]=val;
    printf("after insert is=");
    for(i=0;i<n;i++)
    printf("\n%d",a[i]);
    return 0;
    
}