#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void traversal(struct node *fir)
{
    while (fir !=NULL)
    {
        printf("Element : %d\n",fir->data);
        fir=fir->next;
    }
}


 struct node * insertatfirst(struct node *head, int data)
    {
        struct node * ptr =(struct node *)malloc(sizeof(struct node));
        ptr->data=data;
        ptr->next=head;
        return ptr;
    }


int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    fourth=(struct node *)malloc(sizeof(struct node));

    head->data=7;
    head->next=second;

    second->data=11;
    second->next=third;

    third->data=41;
    third->next=fourth;

    fourth->data=64;
    fourth->next=NULL;

    
   head = insertatfirst(head, 45);
   traversal(head);
return 0;
}