#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *pre;
    int data;
    struct node *next;
};
struct node *head = NULL;
struct node *tail = NULL;
void insert(int value)
{
    struct node *temp = malloc(sizeof(struct node));
    struct node *ptr = tail;
    temp->data = value;
    temp->next = NULL;
    if (head == NULL)
    {
        temp->pre = NULL;
        head = temp;
        tail = temp;
        return;
    }
    else
    {
        temp->pre = tail;
        tail->next = temp;
        tail = temp;
    }
}
void display()
{
    struct node *ptr = head;
    if (head == NULL)
    {
        printf("List is empty");
    }
    else
    {
        while (ptr->next != NULL)
        {
            printf("%d\t", ptr->data);
            ptr = ptr->next;
        }
        printf("%d\t", ptr->data);
        printf("\n");
    }
}
int main()
{
    insert(10);
    insert(20);
    insert(30);
    display();
}