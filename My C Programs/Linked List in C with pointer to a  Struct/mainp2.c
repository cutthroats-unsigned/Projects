/*
#################################################################################################################################################
#NAME:  David Barko																
															
#DATE: Winter 2018 Jan 26															
#Programming Assingment #2															
#PROGRAM DESCRIPTION: This program accepts a few commands from user. If User presses "i (number)" it inputs that number in a linked 
list. The user can search for a number by typing "s (number)" and it will return whether that number is in the linked list or not. Another	
input is the print linked list, you can accsess this comand by pressing "p". also yu can delete a number from the list by typing "d (number)".  
exit the program by pressing x.														        
#################################################################################################################################################
*/
#include <stdio.h>
#include <stdlib.h>
struct node{  
	int data;  
	struct node *next; 
};

//prototype functions
////////////////////////////////////////////////////
void print(struct node *list);
int add(struct node *list, int num);
int search(struct node *list, int num);
int delete(struct node *list, int num);
struct node *init();
/////////////////////////////////////////////////////
int main (void)// main function where every other fucntion comes together
{
struct node *temp;// for freeing all the memory later on
struct node *list;
list = init();// setting initializing the list and the sentinel node
char input[100], var;
int numin;
int check;
int look;

        while (89 == 89)// infinite loop
        {
         printf("> ");
         fgets(input,100,stdin);// gets users input
           if (input[0] == 'i' || input[0] == 's' || input[0] == 'p' || input[0] == 'x' || input[0] == 'd')//checks all values enter are valid
            {
             check=sscanf(input,"%c %d",&var, &numin);//makes sure that 2 args are given for i, s, & d.
                if (check == 2)
                 {
                  if(input[0]=='i')//add function
                   {
                    look=add(list,numin);//setting whatever add returns to detrmine the message at the same time reordering/ changing the list
                        if(look == 0)
                         {
                          printf("SORRY NUMBER IS ALREADY IN LIST!\n");
                         }
                        else
                         {
                          printf("INSERT SUCCESS!\n");
                         }
                   }
                  else if(input[0]=='s')// search function
                   {
                    look=search(list,numin); // sets look to whatever the search returns to determine the message
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
                         look = delete(list,numin);// sets the value return as well as alternating the list
                                if(look == 0)
                                {
                                 printf("NUMBER DOES NOT EXSIT IN LIST!\n");
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
                          print(list);// prints LL
                         }
                        else if(input[0]=='x')
                         {
                          break;// exits
                         }
                  }
		else// if two args arnt given
		{
printf("PLEASE ENTER THE FOLLOWING:\ns (number) - to search for a number\np - to print the list\ni (number) - to insert the number\nx - to exit\nd (number) - to delete a number\n");
		}
                }// instructions
                  else// if wrong input is given
                   {
                  printf("PLEASE ENTER THE FOLLOWING:\ns (number) - to search for a number\np - to print the list\ni (number) - to insert the number\n");
                  printf("x - to exit\nd (number) - to delete a number\n");
                   }
}
 while(list != NULL)// loop to free all the memory;
  {
   temp = list;
   list = list -> next;
   free(temp);
  }
return 0;
}
///////////////////////////////////////////////////
