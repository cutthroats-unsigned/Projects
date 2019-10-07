/*
HANGMAN
DESIGNED AND DEVELOPED BY: DAVID BARKO

DESCRIPTION: THIS PROGRAM UTILIZES LINKNED LISTS TO ACHIVE FUN AND SIMPLE GAMEPLAY OF THE OLD 
CLASSIC GAME HANGMAN. THIS WAS DESIGNED FOR A LINUX TERMINAL.
*/

#include "headers.h"

int main(void)//BEGIN
{
//------------declarations---------------------------------1-----
struct bank phrase, final;
phrase.strike=0;
int wsc=0;
int seperate=0;
int badput;
int wlen, llen, letinphrase=0;
int flag=1;
char used[27]={0};
struct ll *list = init();//this is where the characters will be held it is a linked list which will be initialized at first
struct ll *temp;
int modeq, lagflag;//lagflag is the game mode
char mode[1000]={0};
int wordcheck;
int gamemode,lava,newgamemode;
system("clear");
printf("\n ###################################");
printf("\n ##########    HANGMAN    ##########");
printf("\n ###################################");
printf("\n			 @@@@@@@@@@@@@@@@@@@@@");
printf("\n			 @    DAVID BARKO    @");
printf("\n			 @@@@@@@@@@@@@@@@@@@@@");
printf("\n\n");

printf("Loading...\n");
sleep(3);

printf("\n");

printf("\n");

fflush(stdout);

fflush(stdin);


lagflag=2;

	
//=====================start of PvP gameplay============================================================
	if(lagflag==2)
	{
//-----------------------------input & check-----------------------------------3---------------------------
	 system("clear");
	 //printf("\nSince you have chosen to play against another player let the word picker pick their word\n");
	 printf("WELCOME! THE RULES ARE SIMPLE. ONE PERSON CHOOSES A WORD AND THE OTHER PERSON HAS TO GUESS THE WORD.\n\n");
	 printf("INPUT THE WORD OR WORDS THAT YOU WANT THE OTHER PERSON TO GUESS.\n");
	 printf("\n\nPLEASE NOTE THAT YOU CAN ONLY ENTER LETTERS, NO NUMBER, NO SYMBOLS OR SPECIAL CHARACTERS.\nMAX CHARACTER LENGTH: 1000\n");
	 printf(">");
	 fflush(stdin);
	 fflush(stdout);
	 fgets(phrase.word,1000,stdin);
	 int j;
for (int i = 0; i < strlen(phrase.word);i++)
{
 phrase.word[i] = tolower(phrase.word[i]);
    	if((phrase.word[i] >= 'a' && phrase.word[i]<='z')||(phrase.word[i]>='A' && phrase.word[i]<='Z')||(phrase.word[i]=='\0')||(phrase.word[i]==' ')||(phrase.word[i]=='\n'))
        {
  		if (i==0 && (phrase.word[i]=='\n' || phrase.word[i]==EOF))
	 	{
		 printf("ERROR: NO LETTERS DETECTED\n");
		 return 0;
	 	}
	}
	else
	{
 	 printf("ERROR: USE LETTERS ONLY\n");
	 return 0;
	}
}
//---------------------------------------------------------------------------end 3----------------------------


//-------Putting the word/s into the linked list & other mods to the Linked list----------4------
wlen=strlen(phrase.word);
wlen=wlen-1;//gets rid of the \n
putinlist(list, phrase.word);//puts in linked list
llen=orginlist(list, 0);//some initalizations + returns number of spaces
wlen=wlen-llen;//subtracts the number of spaces from the word count
printll(list);//prints the linked list
//-----------------------------------------------------------------------------------end 4-------

//#################################The Game part and calculations ###################################
system("clear");
	 printf("NOW THE PERSON THAT IS GUESSING THE WORD STARTS OFF WITH 0 STRIKES.\nAS SOON AS YOU GUESS A LETTER INCORRECTLY, YOU WILL GAIN +1 STRIKE.\n");
	 printf("ONCE YOU HIT 6 STRIKES YOU LOSE THE GAME AND THE MAN BEING HANGED DIES!\n");
	 printf("\n");
			
       while(flag==1)
	{
	system("clear");    
		if(wlen==0)
		{
		while (list->next!=NULL) //checks if entered letter is in word
                {
		 list->underscore=0;
                 list->ftl=1;
		 
                 list=list->next;
                }

		 drawboard(list,77);// if you won
		 printf("YOU WON!!!\nTHE WORD WAS: %s\n",phrase.word);
		 return 0;
		}
		temp=list;
		drawboard(temp,phrase.strike);// draws the corresponding graphics
		printf("\n");
		  
//------------------------Printing pattern of already used letters------------------5--------
	printf("LETTERS THAT WERE ALREADY GUESSED:\n\n");	  
          
		for(int q=0; q<strlen(used);q++)
		{	
		 printf("%c", used[q]);
		
                	if(q==3 || q==7 || q==11 || q==15 || q==19 || q==23 || q==25 || q==26)// for pretty display
                	{
                 	 printf("\n");
                	}
			else if(used[q+1]!=0)
			{
	       		 printf(", ");
			}
		}
//----------------------------------------------------------------------end 5-------
 printf("\n"); //UI seperation 2x
 printf("\n");

//--------------------------------Input check of letter guess and status-----------6---- 

  		printf("ENTER THE LETTER THAT YOU THINK MIGHT BE IN THE WORD OR PHRASE\n\n");
		printf("IF YOU THINK YOU KNOW THE WHOLE ENTIRE WORD, THEN ENTER THE CARET ( ^ ) CHARACTER & PRESS ENTER. \n");
		printf("NOTE: AFTER YOU ENTER CARET ( ^ ) YOU ONLY GET ONE SHOT, IF ITS WRONG, YOU AUTOMATICALLY LOSE\n\n\n");
		printf("THE NUMBER OF LETTERS REMAINING TO GUESS: %i\n",wlen);
		printf("THE NUMBER OF STRIKES YOU HAVE: %i/6\n\n",phrase.strike); 
		while(flag==1) // continues to go until correct input
		 {
		  badput=0;
		  printf("> ");
		  fgets(phrase.letter,27,stdin);
		 	
//////00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
                        if(phrase.letter[0]=='^')
                        {
        printf("ENTER THE WHOLE WORD OR PHRASE, IT MUST BE EXACTLY LIKE THE INPUTTED WORD THAT YOU'RE GUESSING\nMAKE SURE TO SPELL EVERYTHING CORRECTY AND NOT ADD ANY EXTRA SPACES,\nIF YOU GET THIS WRONG, YOU WILL LOSE!!!\n");
printf(">");
//-----------------------------------------------------------------
        fgets(final.word,1000,stdin);
        for (int i = 0; i < strlen(final.word);i++)
        {
        final.word[i] = tolower(final.word[i]);
                if(final.word[i] != phrase.word[i])
                {
                 phrase.strike=6;
			while (temp->next!=NULL) //checks if entered letter is in word
                	{

                 	temp->ftl=1;

                 	temp=temp->next;
                	}

		 drawboard(temp,phrase.strike);
		 printf("\nYOU LOST!!\nTHE WORD YOU GUESSED WAS: %s\n",final.word);
		 printf("HOWEVER THE WORD BEING GUESSED WAS: %s\n",phrase.word);
		 return 0;
                }
	flag=0;
        }
        if(phrase.strike!=6)
        {
         wlen=0;
        }
flag=0;
/////---------------------------------------------------------------

                        }

//////00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000

			else if (isalpha(phrase.letter[0])==0)
		 	{
		 	 printf("ERROR: INVALID INPUT\n");
			 flag = 1;
			}
			else
			{
				for(int r=0; r<strlen(used); r++)
				{	
                       	 		if(used[r]==phrase.letter[0])
                        		{
                         		 printf("ERROR: PLEASE ENTER A CHARCTER WHICH YOU HAVEN'T USED YET\n");
                        		 flag=1;
					 badput=2;
                       			 r=strlen(used);
                        		}
				}
				if(badput!=2)
				{	
				 phrase.letter[0]=tolower(phrase.letter[0]);// makes input into lowercase
			 	 used[wsc]=phrase.letter[0]; 
			 	 flag=0;
			 	 wsc++;
				}
			 
		 	}
		}
//--------------------------------------------------------------------------end 6--------        

//---------------------------Checks if letter has been entered/mods LL and changes status of graphics along with gameplay---------------7---------------------
letinphrase=0;
	while (temp->next!=NULL) //checks if entered letter is in word
	{
		if (phrase.letter[0] == temp->data)
		{			
		 letinphrase++;
		 temp->ftl=1;
		 temp->spce=0;
		 flag=1;
		}
	 temp=temp->next;
	}
		
wlen=wlen-letinphrase;
	if(letinphrase==0)
	{
	 phrase.strike++;
		if(phrase.strike==6)
		{
		 printf("YOU LOST\n");
		}
		else
		{
		flag=1;
		}
		}        
	}

	if(phrase.strike==6)
	{
	temp=list;
		while (temp->next!=NULL) //makes all letters visible
                {

                 temp->ftl=1;

                 temp=temp->next;
                }

	 drawboard(temp,phrase.strike);
	 printf("YOU LOST!!!\n");
	 printf("THE WORD(s) WAS: %s\n",phrase.word);
	}
}//main lagflag for PvP





//-----------------------------------------------end 7---------------------------------------------------------------

//###################################END PvP calculations and gameplay#########################################
//==================================END OF PvP gameMode========================================================
return 0;
}// MAIN PROGRAM END


