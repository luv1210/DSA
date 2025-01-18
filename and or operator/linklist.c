#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head=NULL;

void Insertend(int val)
{
    struct node *ptr=head;

    struct node*temp=malloc(sizeof(struct node));
    temp->data=val;
    temp->next=NULL;

    if (head=NULL)
    {
       head=temp;
       return;
    }
    
    while (ptr->next !=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=temp;
    return;

}

void Deleteend()
{
    struct node*ptr =head;
    struct node *p;

    if(head->next==NULL)
    {
        head=NULL;
        free(ptr);
        return;
    }

    while (ptr->next!=NULL)
    {
        p=ptr;
        ptr=ptr->next;
    }
    p->next=NULL;
    free(ptr);
    return;
    
}

void Insertfirst(int val)
{
    struct node *ptr=head;
    struct node *temp=malloc(sizeof(struct node));
    temp->data=val;
    temp->next=head;
    head=temp;
}

void deletefirst()
{
    struct node *ptr=head;
    head=ptr->next;
    free(ptr);
}

void insertmid(int num,int pos)
{
    struct node *ptr=head;
    struct node *p;

    struct node *temp=malloc(sizeof(struct node));
    temp->data=num;
    temp->next=NULL;

    while (ptr->data!=pos)
    {
        p=ptr;
        ptr=ptr->next;
    }
        p->next=temp;
        temp->next=ptr;
}

void Deletemid(int pos)
{
    struct node*ptr =head;
    struct node *p;

    while (ptr->data!=pos)
    {
        p=ptr;
        ptr=ptr->next;
    }
       p->next=ptr->next;
       free(ptr);
}

void display()
{
    struct node *ptr=head;

    if (head==NULL)
    {
        printf("the list is already empty..");
    }
    else
    {
        while (ptr!=NULL)
        {
            printf("%d",ptr->data);
            ptr=ptr->next;
        }
        
    }
    printf("\n\n");
}