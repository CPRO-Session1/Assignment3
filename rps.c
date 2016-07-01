//Anya Lauria
//Rock Paper Scizzorzzzzz 
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main ()
{

printf("You are about to play a VERY FUN GAME of rock paper scissors\n");	
int number= 4; 
int wins= 0;
int failures= 0; 
int pseudo;
do{

              srand(time(0));
              int r = (rand() % 3) + 1;
	      int menu; 
	      printf("Options: 1 for rock, 2 for paper, 3 for scissors\n");
              scanf("%d", &menu);

              switch (menu)
	      {
                 case 1:
			 if ( r = 2 )
			 {
				 printf("You lose!\n");
				 failures++;
				 pseudo++;
				 break;
			 } 
				
			 
			 else if  ( r = 3) 	
			 {
				 printf("You win!\n");
                                 wins++;
				 pseudo++;
				 break;
			 }      
			 	 
			 
		         else  
			 {
				 printf("It's a tie!\n");
				 pseudo++;
				 break;
			 }

                         
			 
	         case 2:
			 if ( r = 1 )
			 {
				 printf("You win!\n");
				 wins++;
				 pseudo++;
				 break;
			 }
			 
			 
			 else if  ( r = 3 )
			 {
				 printf("You lose!\n");
				 failures++;
				 pseudo++;
				 break;
			 }
			 	 
			 else  ( r = 2 );
			 {
				 printf("It's a tie!\n");
				 pseudo++;
				 break;
			 }

			 
		
	         case 3:
			 if ( r = 1 )
			 {
				 printf("You lose!\n");
				 failures++;
				 pseudo++;
				 break;
			 }
			         
		         
			 else if  ( r = 2 )
			 {
				 printf("You win!\n");
				 wins++;
				 pseudo++;
				 break;
			 }
			         

		         else  ( r = 3 );
			 {
				 printf("It's a tie!\n");
				 pseudo++;
				 break;
			 }

			 
			 
	      }
        } while (pseudo<=number);



if (wins>failures){
	printf("You won with these many games: %d\n", wins); 
}
else
{
printf("You lost with these many games: %d\n", failures);
}    

return 0;
}
