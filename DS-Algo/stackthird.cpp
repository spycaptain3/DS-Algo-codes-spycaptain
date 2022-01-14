/*
1. push element
2. pop element
3. print top
4. isempty check
5. isfull check
6. display stack value
*/

#include<iostream>
using namespace std;

typedef struct stack
{
    int size;
    int top;
    int *arr;
}st;

int isempty(struct stack s)
{
    if(s.top==-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int isfull(struct stack s)
{
    if(s.top==s.size-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

void push(struct stack *s, int data)
{
    s->top++;
    s->arr[s->top]=data;  
}
void pop(struct stack *s)
{
    --s->top;
}

void disp(struct stack s)
{
     for(int i=0;i<=s.top;i++)
  {
      cout<<"value at "<<i<<" place is : "<<s.arr[i]<<endl;
  }
}

int main()
{

    struct stack s;
     s.top=-1;
     s.arr=(int*)malloc(s.size * sizeof(int));



   cout<<"Enter the size of the stack s : \n";
   cin>>s.size;
   cout<<"Enter how many elements you want to add in stack:\n";
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       int x;
       cout<<"Enter the value you want to push:\n";
       cin>>x;
   push(&s,x);
   }
  
  if(isempty(s))
  {
      cout<<"It is empty\n";
  }
  else{
      cout<<"It is not empty\n";
  }

  if(isfull(s))
  {
      cout<<"It is full\n";
  }
  else{
      cout<<"It is not full\n";
  }
  
  disp(s);
  cout<<"Do you want to pop, if yes then press 0 or not then press 1:\n";
  int o;
  cin>>o;
  if(o==0)
  {
      cout<<"Element poped is : "<<s.arr[s.top]<<endl;
      pop(&s);   
  }
  else{cout<<"Thank you!\n";}
  disp(s);
  return 0;

}