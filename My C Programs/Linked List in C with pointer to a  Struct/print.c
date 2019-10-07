/*
David Barko
Prints the list
*/
#include <stdio.h>
struct node {
	int data;
	struct node *next;
};

void print(struct node *list)//this functions take all the changes mdae to the LL and prints it out on the screen in order
{
struct node *temp;
temp = list -> next;
 if(list -> next == NULL) //checking if the sentinal node is pointing to nothing
  {
   printf("SORRY LIST SEEMS TO BE EMPTY!\n");
   return;
  }
        while(temp != NULL) // while we dont hit MYNULL in next
         {
          printf("%d ", temp -> data ); // prints the data in LL
          temp = temp -> next;// incremnts temp to print next node in list
         }
printf("END OF LINKED LIST\n");
return;// done printing
}
