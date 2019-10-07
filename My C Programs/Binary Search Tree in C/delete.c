/*
David Barko
This deletes the specified number from the tree
*/

#include <stdio.h>
#include <stdlib.h>
struct node{
        int data;
        struct node *left;
        struct node *right;
};

int search(struct node *root, int num);

struct node *delete(struct node *root, int num)
{
int check = search(root,num);// checks if the number is in the tree
  if (check == 0)
   {
    printf("SORRY %d DNE IN TREE!\n",num);
    return root;// returns the unchanged tree
   }
if (root==NULL)
 {
 return root;
 }
        if(num < root->data)//if the num is smaller then root then check the left
         {
          root->left = delete(root->left,num);
         }
        else if(num > root->data)// if the num is bigger than root then check the right
         {
          root->right = delete(root->right, num);
         }
	else
	 {
                if(root->left==NULL)
                 {
                   struct node *temp=root->right;
                   free(root);
                   return temp;
                 }
                else if(root->right==NULL)
                 {
                    struct node *temp=root->left;
                    free(root);
                    return temp;                   
                 }
	        struct node *prev = root->left;
	  	while(prev->right!=NULL)
		 {
		  prev=prev->right;
	  	 }
	  root->data=prev->data;
	  root->left=delete(root->left,root->data);
	 }
return root;
}
