/*
David Barko
Function that prints the Queue
*/
#include <stdio.h>
#include <stdlib.h>
struct queue{
        int data;
        struct queue *next;
	struct queue *tail;
};
void printq(struct queue *list)
{
struct queue *prev;
prev=list->next;//sets prev to whatever the sent is pointing to

printf("HEAD----> ");
        while(prev != NULL)//checks that prev doesnt equal sent or the end of the queue
         {
          printf("%d ", prev->data);//prints the num
          prev = prev->next;//increments prev to the next node
         }
printf(" <----TAIL");
printf("\n");
}

