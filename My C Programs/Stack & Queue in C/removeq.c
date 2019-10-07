/*
David Barko
Removes the number closest to the head of the queue
*/
#include<stdio.h>
#include<stdlib.h>

struct queue{
	int data;
	struct queue *next;
	struct queue *tail;
};

int removeq(struct queue *list)
{
struct queue *temp;
int c;

c=list->next->data;//makes c equal to the number about to be removed
temp=list->next;// sets temp to pont to the next value in list
list->next=list->next->next;//rearanges what list mnext points to to point around the removed node
free(temp);// removes the node
return c;// returns the number removed for later use in main
}
