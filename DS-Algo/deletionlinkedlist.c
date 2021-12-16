#include<stdio.h>
#include<stdlib.h>

typedef struct node 
{
    int data;
    struct node *next;

}node;

void traversal(node *ptr)
{
    while(ptr!=NULL)
    {
        printf("Element is: %d\n",ptr->data);
        ptr=ptr->next;
    }
}

struct node * deletehead(struct node *head)
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr=head;
    head=head->next;
    free(ptr);
    return head;
}

struct node * deleteindex(struct node *head, int index)
{
    struct node *p =head;
    struct node *q=head->next;

    for(int i=0;i<(index-1);i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}

struct node * deletelast(struct node *head)
{
    struct node *p=head;
    struct node *q=head->next;
    while(q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
}

int main()
{
  struct node *head;
  struct node *second;
  struct node *third;
  struct node *fourth;
  struct node *five;

  head=(struct node *)malloc(sizeof(struct node));  
  second=(struct node*)malloc(sizeof(struct node));
  third=(struct node*)malloc(sizeof(struct node));
  fourth=(struct node*)malloc(sizeof(struct node));
  five=(struct node*)malloc(sizeof(struct node));

  head->data=23;
  head->next=second;

  second->data=89;
  second->next=third;

  third->data=99;
  third->next=fourth;

  fourth->data=66;
  fourth->next=five;

  five->data=45;
  five->next=NULL;

traversal(head);
//printf("\n After deletion of head: \n");
//head = deletehead(head);

//printf("\nAfter deletion of given index\n");
//head= deleteindex(head,3);

printf("After deletion of the last node\n");
head=deletelast(head);

traversal(head);

return 0;
}