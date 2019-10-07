/*
David Barko
This is the Breadth First Search (BFS) function, is basically traverses the tree by going through the nodes by depth
*/
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *left;
	struct node *right;
};

struct queue{
        struct node *treenode;//creats a struct node datatype withing queue node
        struct queue *next;
        struct queue *tail;
};

void insertq(struct queue *list, struct node *num)
{
if(list->next==NULL)// only does this once in every run
{
struct queue *temp;
temp = malloc(sizeof(struct queue));
temp->next=NULL;
temp->treenode=num;// sets the data in the new node
list->next=temp;// sets the next value to point to temp
list->tail=temp;//sets the tail equal to point to temp as well
}
else
{
struct queue *temp;
temp = malloc(sizeof(struct queue));
temp->treenode=num;//sets the node data to num
temp->next=NULL;// sets the next value to null
list->tail->next=temp;//sets te next vailue of the tails next value to point to temp
list->tail=temp;//sets tail to point to temp
}
}
////////////////////////////////
void removeq(struct queue *list)
{
if(list->next==NULL)
{
printf("The queue is empty\n");
return;
}
struct queue *temp;
temp=list->next;// sets temp to pont to the next value in list
printf("%d",temp->treenode->data);//prints the number
if(temp->next!=NULL)
{
printf(", ");
}
list->next=temp->next;//rearanges what list mnext points to to point around the removed node
free(temp);// removes the node
}
////////////////////////
struct queue *initq()
{
struct queue *sent;
sent = malloc(sizeof(struct queue));// creating new node
sent->next=NULL;//sets next to null
sent->tail=NULL;// sets tail to null
return sent;// retunrs the sentinel
}


void BFS(struct node *root)// this utilizes the queue to print out breadth first search
{
struct queue *list;
struct node *temp;
list=initq();// setting list to queue
temp=root;

if(root==NULL)// makes sure list isnt empty
{
printf(" ");
free(list);//frees mem
return;
}
insertq(list,temp);// puts the tree into the queue

	while(list->next!=NULL)//until end of list
	 {
	  temp=list->next->treenode;//iterrate tree
	  if(temp->left!=NULL)
	   {
	    insertq(list,temp->left);//insert left into queue
	   }
	  if(temp->right!=NULL)
	   {
	    insertq(list, temp->right);//insert right into queue
	   }
	removeq(list); // remove the numbers from tree from head
	
	}
free(list);//frees mem
}
