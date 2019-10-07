/*
David Barko
This function finds the height of the tree 
*/
#include<stdio.h>
struct node{
	int data;
	struct node *left;
	struct node *right;
};

int height(struct node *root)
{
int countleft, countright;
	if(root==NULL)// if tree is mt
	 {
	  return -1;
	 }
	else
	 {
	  countleft = height(root->left);// recursive
	  countright = height(root->right);//recursive
	  if(countleft > countright)//compares the two heights
	   {
	    return (++countleft);//returns the left height plus one
	   }
	  else
	   {
	    return(++countright);// return the right height plus one 
	   }
	 }
} 

