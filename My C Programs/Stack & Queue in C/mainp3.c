/*
########################################################################################################################################
#NAME:  David Barko
#DATE: Winter 2018 Feb 12
#Programming Assingment #3
#PROGRAM DESCRIPTION: This program implements stacks and queues, allowing the user to switch between stack and queue, and enter
numbers in both stack and a queue. users also press p to remove from a stack or a queue. For the queue, the rule is first in 
first out, whereas stack the rule is first in last out.
########################################################################################################################################
*/
#include <stdio.h>
#include <stdlib.h>
struct queue{			//structure for queue
	int data;
	struct queue *next;
	struct queue *tail;
};

struct stack{		//structure for stack
	int data;
	struct stack *next;
};
////////////proto functions////////////
int mtq(struct queue *list);
int mts(struct stack *list);
struct queue *initq();
void insertq(struct queue *list, int num);
struct stack *inits();
void printstack(struct stack *list);
int pop(struct stack *list);
void push(struct stack* list, int num);
void printq(struct queue *list);
int removeq(struct queue *list);

/////start of main function...
int main(void)
{
struct queue *temp;// freeing mem later
struct stack *stemp; // for freeing all the memory later on
struct stack *stacklist;// list fot stack
struct queue *qlist;// list for queue
char input[100], var; // this is where the input is and the thing that holdes the input
int numin; // this is what the numbers inputed are stored in
int varcheck, numcheck; //this will be used for determininging if a number or a character is entered
int checkSQ=7; // this is the flag that determines wheather your in stack or queue, 7 means stack 8 means queue
stacklist=inits();//initializing stack sentinel
qlist=initq();//making Q sentinel

printf("please enter one of the following:\n# - to insert into a stack or a queue\np - to pop or remove a # from stack or queue\ns - print/switch to a stack\nq - print/switch to a queue\nQ - quit\n\n");

printf("IN STACK:\n");
        while (89 == 89)// infinite loop
        {
         printf("> ");
         fgets(input,100,stdin);// gets users input

	varcheck=sscanf(input,"%c", &var); // if input is a type Char then successully returns 1
	numcheck=sscanf(input,"%d", &numin); // if input is a int returns 1

	if(varcheck == 1 && numcheck == 0) // check weather a char was entered 
	 {
	   if(input[0]=='Q' || input[0]=='s' || input[0]=='p'|| input[0]=='q')// check if the char is a valid symbol
	    {
            	if(input[0]=='Q') // in Q then exit
		 {
		  break;
		 }
		if(input[0]=='s') // in s the switch and prints athe stack
		 {
		  printf("IN STACK:\n"); // prints stack on top
		  printstack(stacklist);// the actual stack
		  checkSQ=7;//sets the flag to 7
	   	 }
		if(input[0]=='p')// pops or removes the number from stack or queue
		 {
			if(checkSQ==7)// checks if in stack mode
		 	 {
			 int e = mts(stacklist); // makes sure list isnt empty
			  if(e==0)
			   {
			    printf("sorry stack is empty!\n");
			   }
			  else
			   {
			    int f = pop(stacklist);
			    printf("%d\n",f);
			   }
		 	 }
			else if(checkSQ==8) // checks if queue is empty
			 {
			 int h = mtq(qlist); //makes sure the list isnt empty
			  if(h==0)
			   {
			    printf("Sorry Queue is empty!\n");
			   }
			  else
			   {
			    int g = removeq(qlist);
			    printf("%d\n",g);
			   }
			 }
		 }
		if(input[0]=='q') // to switch and print the queue
		 {
		  printf("IN QUEUE:\n");
		  printq(qlist);// prints the q
		  checkSQ=8;//sets flag to 8
		 }
	    }
	   else//if invaldi character is printed
	    {
	     printf("please enter:\n# - to insert into a stack or a queue\np - to pop or remove a # from stack or queue\ns - print/switch to a stack\nq - print/switch to a queue\nQ - quit\n");
	    }
	 }	
	else if(numcheck == 1)// if input is a number
	 {
	  if(checkSQ==7)//checks if in stack to insert in stack
	   {
	   push(stacklist,numin);// inserts in stack
	   } 
	  else if(checkSQ==8)// checks if mode is in queue
	   {
	    insertq(qlist,numin);// adds into queue
	   }
	 }
	else
	 {
	  printf("please enter:\n# - to insert into a stack or a queue\np - to pop or remove a # from stack or queue\ns - print/switch to a stack\nq - print/switch to a queue\nQ - quit\n");
	 }
	}
 while(stacklist != NULL)// loop to free all the memory from stack
  {
   stemp = stacklist;
   stacklist = stacklist -> next;
   free(stemp);
  }
 while(qlist != NULL)// loop to free all the memory from queue
  {
   temp= qlist;
   qlist = qlist -> next;
   free(temp);
   
  }
}
