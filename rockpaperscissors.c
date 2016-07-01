/* Yael Kelmer. 
   This code allows a user to play a game of rock, paper, scissors with the computer. It is best out of 5. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

	int numberGames;
	int userWins = 0;
	for (numberGames = 1; numberGames <= 5; numberGames++) {

		srand(time(0));
		int r = rand() %3;
	
		printf ("Choose and print one of the following numbers that correspond with rock, paper, or scissors in order to engage in a game of rock, paper, scissors.\n 0 = Rock \n 1 = Paper \n 2 = Scissors\n");
		int userChoice;
		scanf ("%d", &userChoice);

		if (r == 0 && userChoice == 0){
			printf ("You chose rock and computer chose rock. It's a tie!\n");
		}
		else if (r == 0 && userChoice == 1) {
			printf ("You chose paper and computer chose rock. You lose :(\n");
		}
		else if (r == 0 && userChoice == 2) {
			printf ("You chose scissors and computer chose rock. You win!\n");
			userWins++;
		}
		else if (r == 1 && userChoice == 0) {
			printf ("You chose rock and computer chose paper. You win!\n");
			userWins++;
		}
		else if (r == 1 && userChoice == 1) {
			printf ("You chose paper and computer chose paper. It's a tie!\n");
		}
		else if (r == 1 && userChoice == 2) {
			printf ("You chose scissors and computer chose paper. You lose :(\n");
		}
		else if (r == 2 && userChoice == 0) {
			printf ("You chose rock and computer chose scissors. You lose :(\n");
		}
		else if (r == 2 && userChoice == 1) {
			printf ("You chose paper and computer chose scissors. You win!\n");
			userWins++;
		}
		else if (r == 2 && userChoice == 2) {
			printf ("You chose scissors and computer chose scissors. It's a tie!\n");
		}
	}
		if ( userWins >= 3) {
			printf ("You won a best out of 5 game! Congrats!") ;
		}
		else {
			printf ("You lost a best out of 5 game :(\n" );
		}

	return 0;

}
