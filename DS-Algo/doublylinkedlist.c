#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

void traversalforward(struct node *ptr)
{
    while(ptr!=NULL)
    {
        printf("Element is : %d\n",ptr->data);
        ptr=ptr->next;  
    }
}

void traversalbackward(struct node *p)
{
    while(p!=NULL)
    {
        printf("Element is: %d\n",p->data);
        p=p->prev;
    }
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));

    head->prev=NULL;
    head->data=21;
    head->next=second;

    second->prev=head;
    second->data=89;
    second->next=third;

    third->prev=second;
    third->data=34;
    third->next=fourth;

    fourth->prev=third;
    fourth->data=98;
    fourth->next=NULL;

traversalforward(head);
printf("\n After forward now backward traversal of doubly linkedlist:\n");
traversalbackward(fourth);
return 0;

}