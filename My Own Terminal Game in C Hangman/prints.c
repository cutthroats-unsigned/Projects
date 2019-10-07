/*
Created by David Barko
This function prints the letters out. However, if the letter isnt guessed, it will print a underscore instead.
*/
#include "headers.h"

void printll(struct ll *list)
{
struct ll *temp;

temp=list;
while(temp->next!=NULL)
{
	if(temp->spce==0 && temp->ftl == 0)// if the letter wasn't found yet
	{
	printf("%c ",temp->underscore);
	}

	else if(temp->spce==0 && temp->ftl==1)// if the letter was found
	{
	printf("%c ",temp->data);
	}
	else if(temp->spce==1 && temp->ftl == 1)// if its a space 
	{
	printf(" %c ",temp->data);
	}
	else
	{
	printf("sucks\n");
	}
temp=temp->next;// next node
}
printf("\n");


}
