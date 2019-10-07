/*
########################################################################################################################################
#NAME:  David Barko
#DATE: Winter 2018 MAR 1
#Programming Assingment #4
#PROGRAM DESCRIPTION: This program allows user to insert numbers into a Binary search tree and also allows user to search for a number
and delete a number. Also you can print the tree to see whats inside of it and in the different orders. Basic commands are X, to print the tree info.
Q which quits the program. d# deletes the number. s# searches for number. # inserts a number. I learned a lot about how trees work from this Project and the BFS taught me
how to implement queues with trees.
########################################################################################################################################
*/
#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node *left;
	struct node *right;
};


////////////proto functions////////////
struct node *insert(struct node *root, int num);
void NLR(struct node *root);
void LNR(struct node *root);
void LRN(struct node *root);
int search(struct node *root, int num);
int height(struct node *root);
int bal(struct node *root);
struct node *delete(struct node *root, int num);
void freetree(struct node *root);
void BFS(struct node *root);
/////start of main function...
int main(void)
{
struct node *tree=NULL;// sets to null so its not random 
char input[100000];
int varcheck, numin, intree, high;
int numcheck;
char var;

printf("Press (?) for help\n");
        while (89 == 89)// infinite loop
        {
         printf(": ");
         fgets(input,100000,stdin);// gets users input
        varcheck=sscanf(input,"%c %d", &var, &numin); // if input is a type Char then successully returns 1
	numcheck=sscanf(input,"%d",&numin);// checks if only a num was entered
    
          if(numcheck == 1)
           {
            tree=insert(tree,numin);// insert into the tree
           }

    else if(varcheck == 2) // check weather a char and num was entered
         {
           if(input[0]=='s' || input[0]=='d')// check if the char is a valid symbol
            {
             if(input[0]=='s')// search 
	      {
	       intree=search(tree,numin);// sets intree to 1 or 0
		if(intree==0)
		 {
		  printf("NOT FOUND!\n");
		 }
		else
		 {
		  printf("FOUND!\n");
		 }
	      }
	     else if(input[0]=='d')// delete 
	      {
	       tree=delete(tree,numin);// deletes from tree
	      }
            }
	 } 
	else// if not 1 or 2 
	 {
	  if(input[0]=='X')// print all the info
	   {
	      high =  height(tree);//sets hight as number
              printf("NLR: ");
	      NLR(tree);// prints NLR
	      printf("\n");
	      printf("LNR: ");
              LNR(tree);//prints LNR
	      printf("\n");
	      printf("LRN: ");
	      LRN(tree);//prints LRN
	      printf("\n");
              printf("BFS: ");
              BFS(tree);// prints BFS
              printf("\n");
	      printf("Height: %d", high);// prints the height
	      printf("\n");
	      printf("BALANCED: ");
	      int g = bal(tree);//checks if balanced
		if(g==1)
		 {
		   printf("YES\n");
		 }
		else
	  	 {
		  printf("NO\n");
		 }
	   }
	  else if(input[0]=='Q')// quit the program and free mem
	   {
	    printf("Exiting freeing all memory...\n");
	    break;
	   }
	  else if(input[0]=='?')// print the info for user 
	   {
	    printf("d # - to delete a number from tree\n# - to insert a number in the tree\ns # - to search for the number in the tree\nX - to print the info\nQ - to Quit\n");
	   }
	  else// if all cases fail
	   {
	    printf("Please enter (?) for all the instructions\n");
	   }
	 }

}
freetree(tree);//frees mem

}

