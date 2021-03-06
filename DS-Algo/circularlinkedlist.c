#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next; 

}node;

void traversal(struct node *head)
{
    struct node *p=head;
    
   do {
        printf("Element is: %d\n",p->data);
        p=p->next;
    }while(p!=head);
}

struct node * insertatfirst(struct node *head,int data)
{
   struct node * ptr=(struct node *)malloc(sizeof(struct node));
   ptr->data=data;
   ptr->next=head->next;
   head->next=ptr;
   head=ptr;
   return head;
}

int main()
{
    struct node * head;
    node*second;
    node*third;
    node*fourth;
    node*five;

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    five=(struct node*)malloc(sizeof(struct node));

    head->data=23;
    head->next=second;

    second->data=99;
    second->next=third;

    third->data=98;
    third->next=fourth;

    fourth->data=12;
    fourth->next=five;

    five->data=23;
    five->next=head;

    traversal(head);
    printf("after instertion at head: \n");
    head=insertatfirst(head,987);
    traversal(head);
    
    return 0;

}