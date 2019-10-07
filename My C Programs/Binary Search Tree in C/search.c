/*
David Barko
Searches for the specified number in the tree
*/
#include<stdio.h>

struct node{
	int data;
	struct node *left;
	struct node *right;
};

int search(struct node *root, int num)
{
	if(root==NULL)//if the tree is mt
	 {
	  return 0;
	 }
	else if(root->data==num)//if the root is num
	 {
	  return 1;
	 }
	else if(root->data>num)//num less then root 
	 {
	  return search(root->left,num);//search sub trees in the left
	 }
	else if(root->data<num)// num bigger than root
	 {
	  return search(root->right,num);// search sub tree in the right
	 }
}
