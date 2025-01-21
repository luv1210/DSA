#include<stdio.h>
#include<stdlib.h>
 struct node
 {
    int data;
    struct node *next;
 };
 struct node *head=NULL;
 struct node *tail=NULL;

 void Insertend(int num)
 {
    struct node *temp=malloc(sizeof(struct node));
    temp->data=num;
    temp->next=head;

    if (head == NULL && tail == NULL)
    {
        head=temp;
        tail=temp;
        return;
    }
    tail->next=temp;
    tail=temp;
    
 }
 void Deleteend()
 {
    struct node *ptr=tail;
    struct node *p=head;
    
    if (head==NULL)
    {
        printf("\n\nthe list aiready empty!!");
    }
    if (head==tail)
    {
        head=tail=NULL;
        return;
    }
    while (p->next!=tail)
    {
        p=p->next;
    }
      p->next=head;
      tail=p;
      free(ptr);
 }

 void insertfirst(int value){
  struct node*temp = malloc(sizeof(struct node));
   temp->data=value;
  temp->next = head;
  if (head==NULL&&tail==NULL)
  {
   head = temp;
   tail = temp;
   temp->next = head;
   return;
  }else{
  head = temp;
  tail->next = head;
  }
}

void deletefirst(){
   struct node *ptr = head;
   if (head==NULL) {
    printf("List is empty");
   }else{
    if (head==tail){
     head = tail = NULL;
    }else{
      head = ptr->next;
     tail->next = head;
    }
  }
}


 void Insertmid(int num,int pos)
 {
    struct node *ptr=head;
    struct node *p;

    struct node *temp=malloc(sizeof(struct node));
    temp->data=num;

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
    struct node *ptr=head;
    struct node *p;
    while (ptr->data!=pos)
    {
        p=ptr;
        ptr=ptr->next;
    }
    
  }

  void display()
  {
  struct node*ptr = head;
  if (head==NULL)
  {
    printf("List is emty");
  }else
  {
    while (tail!=ptr)
    {
      printf("%d\t",ptr->data);
      ptr=ptr->next;
    }
      printf("%d\t",ptr->data);
    printf("\n");
  }
 }

 int main()
 {
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
                insertfirst(value);
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
    