#include<stdio.h>
struct node
{
    int data;
    char cher;
    struct node *ptr;
};

int main(){
   struct node s1,s2,s3;

   s1.data=65;
   s1.cher='A';

   s2.data=97;
   s2.cher='a';

   s3.data=112;
   s3.cher='z';

   printf("%d;%c\n",s1.data,s1.cher);
   printf("%d;%c\n",s2.data,s2.cher);
   printf("%d;%c\n",s3.data,s3.cher);

   s1.ptr=&s2;
   s2.ptr=&s3;

   printf("after swapping\n");

   printf("%d,%c\n",s1.ptr->data,s1.ptr->cher);
   printf("%d,%c\n",s2.ptr->data,s2.ptr->cher);
}

