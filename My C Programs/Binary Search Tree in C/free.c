/*
David Barko
Frees all the Heaps
*/
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *left;
	struct node *right;
};

void freetree(struct node *root)
{
if(root!=NULL)// until the end
{
freetree(root->right);// recursion for right
freetree(root->left);// for left
free(root);// free thr root
}
}
