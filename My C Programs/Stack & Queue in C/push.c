/*
David Barko
ADDs a number into the top of the stack and pushes the rest of the numbers down
*/
#include <stdio.h>
#include <stdlib.h>
struct stack{
        int data;
        struct stack *next;
};


void push(struct stack *list, int num)
{
struct stack* temp;
temp = malloc(sizeof(struct stack));// creates new node
temp -> data=num;// sets the node data to the number entered
temp -> next = list -> next;//makes the next value point to whatever the last value was pointed to
list -> next = temp;// makes sent point to the new node
}
