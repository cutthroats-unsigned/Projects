/*
David Barko
function to insert into Queue
*/
#include <stdio.h>
#include <stdlib.h>

struct queue{
	int data;
	struct queue *next;
	struct queue *tail;
};

void insertq(struct queue *list, int num)
{
struct queue *temp;
temp = malloc(sizeof(struct queue));//makes new node
if(list->next==NULL)// only does this once in every run
{
temp->data=num;// sets the data in the new node
temp->next=list->next;// sets next to null
list->next=temp;// sets the next value to point to temp
list->tail=temp;//sets the tail equal to point to temp as well
return;
}
temp->data=num;//sets the node data to num
temp->next=NULL;// sets the next value to null
list->tail->next=temp;//sets te next vailue of the tails next value to point to temp
list->tail=temp;//sets tail to point to temp
}
