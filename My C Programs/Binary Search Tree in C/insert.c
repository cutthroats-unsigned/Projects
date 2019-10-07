/*
David Barko 
inserts the number into tree 
*/
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *left;
	struct node *right;
};
int search(struct node *root, int num); //check to see if num is already in tree

struct node *insert(struct node *root, int num)
{
int check = search(root,num);//sets checks value to either 1 or 0
if(check==1)//checks if num is in tree
{
printf("SORRY! %d IS ALREADY IN TREE!\n",num);
return root;// ends
}

 if(root==NULL)// if tree mt
  {
  struct node *newnode=malloc(sizeof(struct node));//creeat new node
   newnode->data=num;//sets new nodes data to the number
   newnode->left=NULL;//sets the left to null
   newnode->right=NULL;//sets the right to null
   return newnode;//returns new node
  }
 if(root->data > num)// if num is smaller than the root
  {
   root->left = insert(root->left, num);// do it for every root to the left
   return root;
  }
 if(root->data<num)// if num is smaller than root
  {
   root->right=insert(root->right,num);// do it for evry root to the right
   return root;
  }
}
