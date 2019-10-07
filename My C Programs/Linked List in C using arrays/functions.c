/*
NAME: David Barko
PROGRAMMING #1

These are all the functions that I used in main
*/
#include <stdio.h>
#define MYNULL -1
struct node{
 int data;
 int next;
 int valid;
}ll[100];

//MY proto FUNCTIONS
/////////////////////////////////////////////////
int delete(struct node *ll, int num);	       //
void release_node(struct node *ll, int num);   //
int search(struct node *ll, int num);	       //
int get_node(struct node *ll);			       //	
void init(struct node *ll);		               //
int add(struct node*ll, int num);	           //
void print(struct node *ll);		           //	
/////////////////////////////////////////////////
//--------------------------------------------------
void print(struct node *ll)//this functions take all the changes mdae to the LL and prints it out on the screen in order
{
int data, next;
 if(ll[0].next == MYNULL) //checking if the sentinal node is pointing to nothing
  {
   printf("SORRY LIST SEEMS TO BE EMPTY!\n");
   return;
  }

next=ll[0].next;
data=ll[next].data;

        while(ll[next].next != MYNULL) // while we dont hit MYNULL in next
         {
          printf("%d ", data); // prints the data in LL
          next=ll[next].next;  // Sends next equal the the next array in LL
          data=ll[next].data; // updates data to from new list with the different array
         }
printf("%d ", data);// prints the last list with data
printf("END OF LINKED LIST\n");
return;
}
//--------------------------------------------------
int add(struct node*ll, int num) // add function........... THIS FUNCTION TOOK ME SOOOOO LONG TO FIGURE OUT
{
int prev;// var declares
int next;
int temp;
int look;
look = search(ll,num);// checking if value exsists in LL by using search function
if (look == 1)
{
return 0;
}
if (ll[0].next == MYNULL)// checking if sentinal is still not pointing to anything for edge case of the first insert
{
ll[0].next =1;// makes the sentinal node point to next node
ll[1].data = num;// sets nexts node data to num that user entered
ll[1].valid = 1;// makes the node valid
ll[1].next=MYNULL;//and sets the next value to not point anywhere
return 1;// returns 1 for success
}

prev= 0;
next=ll[prev].next;
        while(96 == 96)// infinite loop
         {
           if(ll[next].data > num)//compares any prevois data with new to determine where is goes
            {
                temp = get_node(ll);// uses get node function to see what next node is availble
                  if (temp == MYNULL) // chek to make sure get node doest return -1
                   {
                    return 0;
                   }
                ll[temp].data = num; // sets new nodes data to num entered
                ll[temp].next=ll[prev].next; //makes the new next value = to previos next value
                ll[prev].next=temp; // sets prevoios to point at new next

        return 1;// success
             }
  if (next == MYNULL) // same thing
   {
      temp = get_node(ll);
        if(temp == MYNULL)
        {
        return 0;
        }
          ll[temp].data=num;
          ll[temp].next= ll[prev].next;
          ll[prev].next=temp;
return 1;
  }
    prev = next;// updates prev to nexts value
    next = ll[next].next;
}
}
//-----------------------------------------------
void init(struct node *ll)// basically creates a sentinol node
{
ll[0].data = -3662;// random data
ll[0].valid=1;
ll[0].next= MYNULL;
        for(int i=1; i<100;i++)
         {
          ll[i].valid=0;// sets every thing to zero 1 - 99
          ll[i].next=0;
          ll[i].data=0;
         }
return;
}
//-----------------------------------------------
int get_node(struct node *ll)// get node finds the next open value which means find any 0's
{
int i =0;

        for(i;i<100;i++)
         {
          if(ll[i].valid == 0)
           {
            ll[i].valid = 1;// sets zero to 1
            return i;// returns .next place value
           }
         }
return MYNULL;// finds nothing returns -1
}
//----------------------------------------------
int search(struct node *ll, int num)// finds any numbers that are already in list
{
        for(int i=0; i<100; i++)
         {
          if (ll[i].data == num && ll[i].valid == 1) // checks for valid and the data
           {
            return 1;
           }
         }
return 0;
}
//-----------------------------------------------
void release_node(struct node *ll, int num)// makes any deleted nodes value from 1 to 0
{
 ll[num].valid=0;
}
//------------------------
int delete(struct node *ll, int num)// deletes any node specified by user as long as its in the linked list
{
 int prev;
 int next;
 int look;
look = search(ll,num);// smae search used in add
  if(look==0)
   {
    return 0;
   }
prev = 0;
next = ll[prev].next;
        while (100 == 100) // infinite loop
         {
          if(ll[next].data== num)// checks if num machtes with the node data
           {
            ll[prev].next = ll[next].next;
            release_node(ll, next);// changes the 1 to 0
           return 1;// successfull deletion
           }
prev = next;
next = ll[next].next;

         }
 }
//------------------------
// end of David Functions.
