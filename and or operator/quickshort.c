#include<stdio.h>
int partition(int a[],int lb,int ub){
    int pivot=a[lb];
    int start=lb;
    int end=ub;
    int temp;

    while ( start < end )
    {
        while (a[start]<=pivot)
        {
            start++;
        }
        while (a[end]>pivot)
        {
            end--;
        }
        if (start<end)
        {
            temp=a[start];
            a[start]=a[end];
            a[end]=temp;
        }
    }
    temp=a[lb];
    a[lb]=a[end];
    a[end]=temp;

    return end;
}

void quickshort(int a[],int lb,int ub){
    if (lb<ub)
    {
        int loc=partition(a,lb,ub);
        quickshort(a,lb,loc-1);
        quickshort(a,loc+1,ub);

    }

}
int main(){
  int a[5]={20,10,8,30,25};
    for (int v = 0; v < 5; v++){
           printf("%d\t",a[v]);
    }
    printf("\n");
    quickshort(a,0,4);
    for (int v = 0; v <5; v++)
    {
        printf("%d\t",a[v]);
    }
    printf("\n");
    return 0; 

}