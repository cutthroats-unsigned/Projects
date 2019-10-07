/*
David Barko
checks if stack is empty
*/
#include<stdio.h>

struct stack{
        int data;
        struct queue *next;
};

int mts(struct stack *list)
{
if(list->next==NULL)
{
return 0;
}
return 1;
}

