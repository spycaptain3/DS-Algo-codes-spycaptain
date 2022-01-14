#include<stdio.h>
#include<stdlib.h>

struct stack
{
   int size;
   int top;
   int *arr;
};

void pop(struct stack *s)
{

}
void push(struct stack *s, int data)
{
   s->top++;
   s->arr[s->top]=data;
}


int main()
{
   struct stack s;
   s.size=80;
   s.top=-1;
   s.arr=(int*)malloc(s.size*sizeof(int));
 
  printf("Data to the stack:\n");
  push(&s,54);
  push(&s,65);
  push(&s,43);
  push(&s,66);
  push(&s,98);
  push(&s,12);

  for(int i=s.top;i>=0;i--) {  
   printf("\nvalue is %d\n",s.arr[i]);
  }
  return 0;


}