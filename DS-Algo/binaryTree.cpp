#include<iostream>
#include<stdlib.h>
 
using namespace std;

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

 struct node* nodecreater(int n){
    struct node *z =  (struct node*)malloc(sizeof(struct node));
    z->data=n;
    z->left=NULL;
    z->right=NULL;

    return z;
    }

void preorder(struct node* root)
{
    if(root!=NULL)
    {
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

int main()
{

    struct node *p = nodecreater(24);
    struct node *p1 = nodecreater(12);
    struct node *p2 = nodecreater(13);
    struct node *p11 = nodecreater(6);
    struct node *p12 = nodecreater(7);
    struct node *p21 = nodecreater(3);
    struct node *p22 = nodecreater(2);
   
   p->left=p1;
   p->right=p2;
   p1->left=p11;
   p1->right=p12;
   p2->left=p21;
   p2->right=p22;

   preorder(p);
   return 0;
   

}

