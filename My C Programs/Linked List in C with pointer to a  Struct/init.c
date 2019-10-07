/*
David Barko
creates the first node known as the sentinel
*/
#include<stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node *next;
};

struct node *init()//creates the sentinel node
{
struct node *list;
list = malloc(sizeof(struct node));// allocating memory for list;
list -> data = 9384;//random number
list -> next = NULL;
return list;
}

