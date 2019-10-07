/*
David Barko
Checks if the tree is balanced (one side is no more than one higher than the other side)
*/
#include<stdio.h>

struct node{
        int data;
        struct node *left;
        struct node *right;
};

int height(struct node *root);

int bal(struct node *root)
{
int count;
int countleft, countright;
if(root==NULL)// checks if mt
 {
  return 1;
 }
else
 {
  countleft=height(root->left);//stores the count of the left
  countright=height(root->right);//stores the count of the right
  count=countleft-countright;//subtracts the right from left
     if(count < 0)// this checks for a negitive and makes it a positive
      {
	count=count*-1;// makes thinsg postive if it was negitive
      }
   if(count <= 1 && bal(root->left)==1 && bal(root->right)==1)//cheks if tree is balanced
    {
     bal(root->left);//rpts for every left
     bal(root->right);//rpts for every right
     return 1;// yes
    }
   else
    {
     return 0;//no
    }
 }
}
