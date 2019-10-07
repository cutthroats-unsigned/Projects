/*
########################################################################################################################################
#NAME:  David Barko
#DATE: Winter 2018 jan 19
#Programming Assingment #1
#PROGRAM DESCRIPTION: TAKES any number and stores is int linked list. user is allowed to insert a number, print a number search for a number, 
or delete a number. takes any values in LL and stores in chronological order. 
########################################################################################################################################
*/
#include <stdio.h>
#define MYNULL -1
struct node{
 int data;
 int next;
 int valid;
};
/////////////////////////////////////
int delete(struct node *ll, int num);
void release_node(struct node *ll, int num);
int search(struct node *ll, int num);
int get_node(struct node *ll);
void init(struct node *ll);
int add(struct node*ll, int num);
void print(struct node *ll);
/////////////////////////////////////


int main(void)// main function where everything unites
{
struct node ll[100];
char input[100], var;
int numin;
int check;
int look;
init(ll);// setting init sentinal node
	while (89 == 89)// infinite loop
	{
	 printf("> ");
	 fgets(input,100,stdin);
	   if (input[0] == 'i' || input[0] == 's' || input[0] == 'p' || input[0] == 'x' || input[0] == 'd')// checks all values enter are valid
	    {
	     check=sscanf(input,"%c %d",&var, &numin);//makes sure that 2 args are given for i, s, & d.
	        if (check == 2)
	         {
		  if(input[0]=='i')//add function
		   {
		    look=add(ll,numin);// setting whatever add returns to detrmine the message at the same time reordering/ changing the list
		    	if(look == 0)
			 {
			  printf("SORRY NUMBER is ALREADY IN LIST!\n");
			 }
			else
			 {
			  printf("INSERT SUCCESS\n");
	 		 }
		   }
		  else if(input[0]=='s')// search function
		   {
 		    look=search(ll,numin); // sets look to whatever the search returns to determine the message
			if(look == 1)
			 {
			  printf("FOUND!\n");
			 }
			else
			 {
			  printf("NOT FOUND!\n");
		 	 }
		    }
		   else if(input[0]=='d')// delete function
			{
			 look = delete(ll,numin);// sets the value return as well as alternating the list
				if(look == 0)
				{
				 printf("NUMBER DOES NOT EXSIT IN LL\n");
				}
				else
				{
				 printf("DELETE SUCCESS!\n");
				}
			}
		   
		   }
		 else if(input[0]=='p' || input[0]=='x')// check for print functions and exit
		  {
		  	if(input[0]=='p')
                   	 {
                    	  print(ll);// prints LL
                   	 }
                  	else if(input[0]=='x')
                   	 {
                    	  return 0;// exits
                   	 }
		  }
		}// instructions
		  else
		   {
                  printf("PLEASE enter\n s (number) - to search for a number\n p - to print the list\n i (number)- to inserst the number\n");
                  printf("x - to exit\n d (number) - to delete a number\n ");
		   }	
}
}
//-------------------------------------------------
