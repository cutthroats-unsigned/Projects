/*
#######################################################################
# Name: David Barko						      
					      
# 2017/11/19						      
# Programming assignment 2       				      
# description: prints out 15 rows of pascals triangle	              
#######################################################################
*/
#include <stdio.h>

int main(void)
{
//<<<<<<<<<<<<<<<vairble declaration>>>>>>>>>>>>>>>>>
int i, row;
int calculation[20][20];// two demesional array
// <<<<<<<<<<<<<<<end>>>>>>>>>>>>>>

// <<<<<<<<<<<<<<<<<<Main calculations and row printing>>>>>>>>>>
        for(row=0; row < 20; row++)// does making 15 rows
        {
               for(i=0; i<= row; i++)// for every row calculation
                {
	         
                  if(row == i || i == 0)// printing out of 1's on bot sides of each row 
                   {
                     calculation[row][i] = 1;
		   }
                  else
                  {
                     calculation[row][i] = calculation[row-1][i-1] + calculation[row-1][i];// main algorithm
		  }
                  printf("%d ", calculation[row][i]);// printing the output
                  printf(" ");// spaces out the output  
                }
//<<<<<<<<<<<<<<<<<<<<<end of main calculations and printing>>>>>>>>>>>>>>
         printf("\n\n");
        
        }
return 0;
}
