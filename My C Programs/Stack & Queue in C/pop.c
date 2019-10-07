/*
David Barko
This functions pops the top number off the stack
*/
#include <stdio.h>
#include <stdlib.h>

struct stack{
        int data;
        struct stack *next;
};

int pop(struct stack *list)
{
struct stack* temp;
int n;

temp = list->next;//sets temp to be the next value;
list->next = temp->next;//changing whatever list points to point to what the node next is pointing to
n=temp->data;//sets the int n to whatever number was poped
free(temp);// frees the node that was popped
return n;// returns the number that was poped for use in the main
}
