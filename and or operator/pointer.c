#include<stdio.h>

int main(){
    int a=10;
    int b=20;
    int *c;
    int *d;

    c=&a;
    d=&b;

    printf("%d\n",*c);
    printf("%d\n",*d);

    *c=*c+*d;
    *d=*c-*d;
    *c=*c-*d;

    printf("%d and %d",*c,*d);
}
