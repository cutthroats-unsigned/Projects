/*
Created by David Barko
The format for each node
*/
#include "headers.h"

struct ll *init()
{
struct ll *list;
list = malloc(sizeof(struct ll));// allocating memory for list;
list -> data = 'k';//random placeholder
list -> next = NULL;// no next nodes
list -> spce = 0;//placeholder
list -> underscore = '_';
return list;
}
