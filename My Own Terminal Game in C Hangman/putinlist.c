/*
Created by David Barko
This function creates a Linked list out of the word that the user inputed.
*/
#include "headers.h"

void putinlist(struct ll *list, char word[1000])
{
struct ll *temp;
int i =0;
temp=list;
int len = strlen(word);

for(i; i<len; i++)//going through the phrase
{
if(word[i]=='\n')//if it hits new line then stop creating new nodes
{
return;
}
struct ll *add = malloc(sizeof(struct ll));
add->next = temp->next;
temp->next= add;
temp->data=word[i];// adds the letter into the node
temp->underscore='_';// adds a underscore for unguessed letters
temp=temp->next; // goes to the next node
}

}
