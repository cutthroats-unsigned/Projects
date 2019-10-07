/*
David Barko
sentinel function for the queue
*/
#include <stdio.h>
#include <stdlib.h>
struct queue{
        int data;
        struct queue *next;
	struct queue *tail;// adds a tail that point to the back of the queue
};

struct queue *initq()
{
struct queue *sent;
sent = malloc(sizeof(struct queue));// creating new node
sent->data=9092;// random data
sent->next=NULL;//sets next to null
sent->tail=NULL;// sets tail to null
return sent;// retunrs the sentinel
}
