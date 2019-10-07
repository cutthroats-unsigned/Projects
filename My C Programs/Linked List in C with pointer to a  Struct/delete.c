/*
David Barko
deletes a number that is already in the list
*/
#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node *next;
};


int delete(struct node *list, int num)// deletes any node specified by user as long as its in the linked list
{
struct node *prev;
struct node *curr;

prev = list;// sets prev to list
curr = list -> next;// sets curr to what list is pointing to

	while(curr != NULL)//goes until list->next hits null
	{
		if(curr -> data == num)// checks every node for the desired num
		{
	 	 prev -> next = curr -> next;//changes the next value of the deleted node
		 free(curr);// deletes the node
		 return 1;//for success
		}
         prev = curr;// incremetns each time number isnt found
         curr = curr -> next;
	}
return 0;// returns 0 if nothing is found
}
