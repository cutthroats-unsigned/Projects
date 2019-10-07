/*
David Barko
sentenel function for stack
*/
#include <stdio.h>
#include <stdlib.h>
struct stack{
        int data;
        struct stack *next;
};

struct stack *inits()
{
struct stack *list;
list = malloc(sizeof(struct stack));// allocating memory for stack;
list -> data = 9384;//random number
list -> next = NULL;//sets next to null
return list;// retuns sentinel

}
