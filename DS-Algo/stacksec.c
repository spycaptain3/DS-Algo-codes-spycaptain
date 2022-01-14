#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};
   
   int isempty(struct stack *ptr)
   {
       if(ptr->top==-1)
       {
           return 1;
       }
       else
       {
           return 0;
       }
   }

   int isfull(struct stack *ptr)
   {
       if(ptr->top==ptr->size-1)
       {
           return 1;
       }
       else{
           return 0;
       }
   }

int main()
{
    struct stack s;// = //(struct stack*)malloc(sizeof(struct stack));
    s.size=5;
    s.top=-1;
    s.arr = (int*)malloc(s.size*sizeof(int));
    
    s.top++;
    s.arr[0]=44;

    s.top++;

    if(isempty(&s))
    {
        printf("It is empty stack\n");
    }
    else{
        printf("It is not empty stack\n");
    }
    if(isfull(&s)){
        printf("It is full stack\n");
    }
    else{
        printf("It is not full stack\n");
    }
    return 0;    
}