/*
David Barko
Prints the stack
*/
#include <stdio.h>

struct stack{
        int data;
        struct stack *next;
};

void printstack(struct stack *list)
{
struct stack *prev;
prev=list->next;// makes prev equal to the next value that the sent pooints to
	if(list->next==NULL)// cheacks if stack is empty
	 {
	  printf("TOP OF STACK ---->\n");
	  return;
	 }
printf("TOP OF STACK ----> ");
	while(prev != NULL)
	 {
 	  printf("%d ", prev->data);// prints the data
	  prev = prev->next;//increments the prev to the next node
 	 }
printf("\n");
}
