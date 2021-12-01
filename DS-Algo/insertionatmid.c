#include<stdio.h>
#include<stdlib.h>
 
 struct node
 {
     int data;
     struct node * next;
};

void traversal(struct node *fir)
{
    while(fir !=NULL)
    {
        printf("Element : %d\n", fir->data);
        fir=fir->next;
    }
}
struct node * insetatmid(struct node * head, int data, int index)
{
    struct node * ptr=(struct node *)malloc(sizeof(struct node));
    struct node * p = head;
    int i = 0;

    while(i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
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

third->data=11;
third->next=fourth;

fourth->data=66;
fourth->next=NULL;

traversal(head);
head=insetatmid(head, 56, 1);
traversal(head);

}