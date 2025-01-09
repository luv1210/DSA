#include<stdio.h>
#define size 5
int deque[size];
int f=-1,r=-1;
void insertfront(int x)
{
    if ((f==0&&r==size-1)||(f==r+1))
    {
        printf("\noverflow");
    }else if ((f==-1)&&(r==-1))
    {
        f=r=0;
        deque[f]=x;
    }else if (f==0)
    {
        f=size-1;
        deque[f]=x;
    }else{
        f=f-1;
        deque[f]=x; 
    }
}
void insertrear(int x){
    if ((f==0&&r==size-1)||(f==r+1))
    {
        printf("\n overflow");
    }else if ((f==-1)&&(r==-1))
    {
        r=0;
        deque[r]=x;
    }else if (r==size-1)
    {
        r=0;
        deque[r]=x;
    }else{
        r++;
        deque[r]=x;
    }
}

void display(){
    int i=f;
    printf("\nelements in a deque are:");
    while(i!=r){
        printf("%d",deque[i]);
        i=(i+1)%size;
    }
    printf("%d",deque[r]);
}

void deletefront(){
    if ((f==-1)&&(r==-1))
    {
        printf("deque is empty");
    }else if (f==r)
    {
        printf("\nthe deleted element is %d ",deque[f]);
        f=-1;
        r=-1;
    }else if (f==(size-1))
    {
        printf("\nthe deleted element is %d ",deque[f]);
        f=0;
    }else{
        printf("\nthe deleted element is %d ",deque[f]);
        f=f+1;
    }
    
}
void deleterear(){
    if ((f==-1)&&(r==-1))
    {
        printf("deque is empty");
    }else if(f==r){
        printf("\nthe deleted element is %d ",deque[r]);
        f=-1;
        r=-1;
    }else if(r==0){
        printf("\nthe deleted element is %d ",deque[r]);
        r=size-1;
    }else{
        printf("\nthe deleted element is %d ",deque[r]);
        r=r-1;
    }
}
int main()
{
    insertfront(20);
    insertfront(10);
    insertfront(40);
    display();
    insertrear(30);
    insertrear(50);
    display();
    deletefront();
    deleterear();
    display();
    return 0;
}