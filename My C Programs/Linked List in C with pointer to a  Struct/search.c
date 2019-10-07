/*
David Barko
searches for any number that is alreadty in list
*/
#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

int search(struct node *list, int num)// finds any numbers that are already in list
{
struct node *temp;
temp = list -> next;// sets temp to equal the next value of list

	while(temp != NULL)
	{
		if(temp -> data == num)// checks if the node contains the number
		{
	 	 return 1;// found
	  	}
		else
		{
		 temp = temp -> next;// increments to the next node
		}
	}
return 0;// nothing found
}

