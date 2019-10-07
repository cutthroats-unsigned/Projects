/*
David Barko
Checks if queue is empty
*/
#include<stdio.h>

struct queue{
	int data;
	struct queue *next;
	struct queue *tail;
};

int mtq(struct queue *list)
{
if(list->next==NULL)
{
return 0;
}
return 1;
}
