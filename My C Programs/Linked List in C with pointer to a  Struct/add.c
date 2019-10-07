/*
David Barko
Adds a number into the list
*/
#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

int search(struct node *list, int num);

int add(struct node* list, int num) // add function...
{
int look;
struct node *prev;
struct node *curr;
prev=list;
curr = list -> next;// sets curr to whatever the next is pointing to
look = search(list, num);// checks if number is already in list
if(look == 1)//chekcs if search returns a 1
{
return 0;
}
	while (curr!= NULL)// while list int NULL
	{
	 if (curr -> data > num)//checks where the number needs to be inserted in order
	  {
	   struct node *temp = malloc(sizeof(struct node));// creates new node
	   temp -> data = num;//sets the new node to the number inserted
	   temp -> next = prev -> next;// makes temp point to what prev was pointing to
	   prev -> next = temp;// sets next to point to the last node
	  return 1;
	  }
	 prev = curr;
	 curr = curr -> next;//increments the current.
	}// if check fails fo the whole list inserts number at the end
	 struct node *end = malloc(sizeof(struct node));// new node
	 end ->data = num;// sets new node to data 
	 prev -> next = end;// sets prev next to temp
	 end -> next = NULL;// sets next of temp to null
	return 1;
}

