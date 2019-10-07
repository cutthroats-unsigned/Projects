/*David Barko
prints all the following orders: NLR,LNR and LRN
*/
#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *left;
	struct node *right;
};

void printcoma(struct node *root)// prints the comas
{
if(root != NULL)
{
printf(", ");
}
}

void NLR(struct node *root)// prints NLR
{
	if(root==NULL)// if tree mt
	 {
	  return;
         }

	printf("%d",root->data);//print the number
	printcoma(root->left);//print the coma
	NLR(root->left);//rpts for left
	printcoma(root->right);//prints coma
	NLR(root->right);//rpts for right
}

void LNR(struct node *root)
{
        if(root==NULL)// if mt
         {
          return;
         }
 
	LNR(root->left);//prints left tree
	printcoma(root->left);//print coma
        printf("%d",root->data);//print data
	printcoma(root->right);//print coma
        LNR(root->right);//print right tree
}


void LRN(struct node *root)
{
        if(root==NULL) // if mt
         {
          return;
         }

        LRN(root->left);// pritn left tree
	printcoma(root->left);//print coma
        LRN(root->right);//print right tree
	printcoma(root->right);// print coma
	printf("%d",root->data);//print data
}

