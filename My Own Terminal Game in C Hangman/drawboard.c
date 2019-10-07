/*
Created by David Barko
This is the drawings of the game, lots of pipes and hyphens!
*/
#include "headers.h"

void drawboard(struct ll *list, int num){
system("clear");

//wordbank();
//Start of game, no strikes
if(num == 0)
{
         printf("\033[22;34mNOW THE PERSON THAT IS GUESSING THE WORD STARTS OFF WITH 0 STRIKES.\nAS SOON AS YOU GUESS A LETTER INCORRECTLY, YOU WILL GAIN +1 STRIKE.\033[0m\n");
         printf("ONCE YOU HIT 6 STRIKES YOU LOSE THE GAME AND THE MAN BEING HANGED DIES!\n");
         printf("\n");

	// printf("okay, so now the player who chose the word for you just sits back and watches as you struggle to geuss the word\n");
        // printf("you have to try to guess the word with as fast as possible with less mistakes\n");
         //printf("on your sixth mistake you lose and the poor man dies!\n");

printf("               |-------------                     \n");
printf("               |            |                     \n");
printf("               |                                  \n");
printf("               |                                  \n");
printf("               |                                  \n");
printf("               |                                  \n");
printf("               |                                  \n");
printf("               |                                  \n");
printf("               |                                  \n");
printf("               |                                  \n");
printf("               |                                  \n");
printf("               |                                  \n");
printf("               |                                  \n");
printf("               |                                  \n");
printf("               |                                  \n");
printf("               |                                  \n");
printf("               |                                  \n");
printf("               |                                  \n");
printf("  {-------------------------}                     \n");
printf("  {------------|------------}                     \n");
printf("  {============|============}                     \n");
printf("\n");
printll(list);
printf("\n");
printf("\n");
/*
printf("                                            ##########################            \n");
printf("                                            #                        #            \n");
printf("                                            #                        #            \n");
printf("                                            #                        #            \n");
printf("                                            #                        #            \n");
printf("                                            #                        #            \n");
printf("                                            ##########################            \n");

*/
}
//system("clear");
//Strike 1
if(num == 1){
system("clear");
printf("\n");
printf("               |-------------                     \n");
printf("               |            |                     \n");
printf("               |        #########                 \n");
printf("               |        #(|) (|)#                 \n");
printf("               |        #   >   #                 \n");
printf("               |        #  WWW  #                 \n");
printf("               |        #########                 \n");
printf("               |                                  \n");
printf("               |                                  \n");
printf("               |                                  \n");
printf("               |                                  \n");
printf("               |                                  \n");
printf("               |                                  \n");
printf("               |                                  \n");
printf("               |                                  \n");
printf("               |                                  \n");
printf("               |                                  \n");
printf("               |                                  \n");
printf("  {-------------------------}                     \n");
printf("  {------------|------------}                     \n");
printf("  {============|============}                     \n");
printf("\n");

printll(list);
printf("\n");
printf("\n");
}
//system("clear");

//strike 2
if (num == 2){
printf("\n");
printf("               |-------------                     \n");
printf("               |            |                     \n");
printf("               |        #########                 \n");
printf("               |        #(|) (|)#                 \n");
printf("               |        #   >   #                 \n");
printf("               |        #  WWW  #                 \n");
printf("               |        #########                 \n");
printf("               |            |                     \n");
printf("               |            |                     \n");
printf("               |            |                     \n");
printf("               |            |                     \n");
printf("               |            |                     \n");
printf("               |            |                     \n");
printf("               |            |                     \n");
printf("               |            |                     \n");
printf("               |                                  \n");
printf("               |                                  \n");
printf("               |                                  \n");
printf("  {-------------------------}                     \n");
printf("  {------------|------------}                     \n");
printf("  {============|============}                     \n");
printf("\n");
printll(list);
printf("\n");
printf("\n");
}
//system("clear");

//strike 3
if (num == 3){
printf("\n");
printf("               |-------------                     \n");
printf("               |            |                     \n");
printf("               |        #########                 \n");
printf("               |        #(|) (|)#                 \n");
printf("               |        #   >   #                 \n");
printf("               |        #  WWW  #                 \n");
printf("               |        #########                 \n");
printf("               |            |                     \n");
printf("               |            |                     \n");
printf("               |            |                     \n");
printf("               |    00000000|00000000                     \n");
printf("               |            |                     \n");
printf("               |            |                     \n");
printf("               |            |                     \n");
printf("               |            |                     \n");
printf("               |                                  \n");
printf("               |                                  \n");
printf("               |                                  \n");
printf("  {-------------------------}                     \n");
printf("  {------------|------------}                     \n");
printf("  {============|============}                     \n");
printf("\n");
printll(list);
printf("\n");
printf("\n");
}
//system("clear");

//strike 4
if (num == 4){
printf("\n");
printf("               |-------------                     \n");
printf("               |            |                     \n");
printf("               |        #########                 \n");
printf("               |        #(|) (|)#                 \n");
printf("               |        #   >   #                 \n");
printf("               |        #  WWW  #                 \n");
printf("               |        #########                 \n");
printf("               |            |                     \n");
printf("               |            |                     \n");
printf("               |            |                    \n");
printf("               |    00000000|00000000                   \n");
printf("               |            |                     \n");
printf("               |            |                     \n");
printf("               |            |                     \n");
printf("               |            |                     \n");
printf("               |           0 0                     \n");
printf("               |          0   0                    \n");
printf("               |         0     0                   \n");
printf("               |        0       0                  \n");
printf("               |       0         0                 \n");
printf("  {----------------------------------}                     \n");
printf("  {------------|---------------------}                     \n");
printf("  {============|=====================}                     \n");
printf("\n");
printll(list);
printf("\n");
printf("\n");
}
//system("clear");


//strike 5
if (num == 5){
printf("\n");
printf("               |-------------        ***************************  \n");
printf("               |            |        *I Have a family to feed! * \n");
printf("               |        #########    *Please, Dont let me die! *  \n");
printf("               |        #(|) (|)#    ***************************             \n");
printf("               |        #   >   #   /              \n");
printf("               |        #  WWW  #  /               \n");
printf("               |        #########                \n");
printf("               |            |                     \n");
printf("               |            |                     \n");
printf("               |            |                    \n");
printf("               |    00000000|00000000                   \n");
printf("               |            |                     \n");
printf("               |            |                     \n");
printf("               |            |                     \n");
printf("               |            |                     \n");
printf("               |           0 0                     \n");
printf("               |          0   0                  \n");
printf("               |         0     0                  \n");
printf("               |        0       0                 \n");
printf("               |       0         0                 \n");
printf("  {----------------------------------}                     \n");
printf("  {------------|---------------------}                     \n");
printf("  {============|=====================}                     \n");
printf("\n");
printll(list);
printf("\n");
printf("\n");
}
//system("clear");
//dead
if (num == 6){
printf("\n");
printf("               |-------------                     \n");
printf("               |            |                     \n");
printf("               |            |                 \n");
printf("               |        #########              \n");
printf("               |        #(X) (X)#                \n");
printf("               |        #   >   #                   \n");
printf("               |        #  ---  #                  \n");
printf("               |        #########                           \n");
printf("               |            |                     \n");
printf("               |            |                       \n");
printf("               |            |                 \n");
printf("               |           0|0                \n");
printf("               |          0 | 0           \n");
printf("               |         0  |  0       \n");
printf("               |        0   |   0               \n");
printf("               |       0    |    0                    \n");
printf("               |           0 0                     \n");
printf("               |          0   0                      \n");
printf("               |          0   0                       \n");
printf("               |          0   0                      \n");
printf("               |          0   0                          \n");
printf("  {------------|                   \n");
printf("  {============|                     \n");
printf("\n");
printll(list);
printf("\n");
printf("\n");
}
// if you won
if (num == 77){
printf("\n");
printf("               |-------------        						**************\n");
printf("               |            |        					    *	I Live!  *\n");
printf("               |            |				   #########    * Thank you! *\n");
printf("               |            |				   #(|) (|)#    **************\n");
printf("               |           					   #   >   #   /              \n");
printf("               |        					   #  WWW  #                  \n");
printf("               |        					   #########                  \n");
printf("               |            					   |                      \n");
printf("               |            					   |                      \n");
printf("               |            			    	   |                      \n");
printf("               |    					   00000000|00000000              \n");
printf("               |            				       |                      \n");
printf("               |        				   	       |                      \n");
printf("               |        						   |                      \n");
printf("               |         						   |                      \n");
printf("               |       							  0 0                     \n");
printf("               |           						 0   0                    \n");
printf("               |       							0     0                   \n");
printf("               |      				  	       0       0                  \n");
printf("               |     						  0         0                 \n");
printf("  {----------------------------------}    ||==================||          \n");
printf("  {------------|---------------------}                     \n");
printf("  {============|=====================}                     \n");
printf("\n");
printll(list);
printf("\n");
printf("\n");
}


return;
}
