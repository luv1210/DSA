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

    if (head==NULL)
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

void Insertmid(int num,int pos)
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

int main(){
    int choice, value, pos;
    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert at the end\n");
        printf("2. Delete from the end\n");
        printf("3. Insert at the beginning\n");
        printf("4. Delete from the beginning\n");
        printf("5. Insert after a specific value\n");
        printf("6. Delete a specific value\n");
        printf("7. Display the list\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter value to insert at the end:\n ");
                scanf("%d", &value);
                Insertend(value);
                break;
            case 2:
                Deleteend();
                break;
            case 3:
                printf("Enter value to insert at the beginning: ");
                scanf("%d", &value);
                Insertfirst(value);
                break;
            case 4:
                deletefirst();
                break;
            case 5:
                printf("Enter value to insert after: ");
                scanf("%d", &value);
                printf("Enter value to insert: ");
                scanf("%d", &pos);
                Insertmid(pos, value);
                break;
            case 6:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                Deletemid(value);
                break;
            case 7:
                display();
                break;
            case 8:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}