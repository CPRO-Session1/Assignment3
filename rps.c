#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int uIn = 0; //user input
	int cIn = 0; //computer's choice
	int pScore = 0; // player's score
	int cScore = 0; // computer's score
	srand(time(0));
	printf("This is a rock-paper-scissor game. The winner must win a best of 5 matches.\n");
	while (pScore < 5 && cScore < 5){
		printf("Pick (0)rock, (1)paper, or (2)scissors.\n");
		scanf("%d", &uIn);
		cIn = (rand()%3);
		printf("Computer chose ");
		switch (cIn)
		{
			case 0:
				printf("rock.\n");
				break;
			case 1:
				printf("paper.\n");
				break;
			case 2:
				printf("scissors.\n");
				break;
		}
		
		if ((uIn+2)%3 == cIn)
		{
			printf("You win!\n");
			pScore ++;
		}
		else if ((uIn+1)%3 == cIn)
		{
			printf("You lost.\n");
			cScore ++;
		}
		else if (uIn == cIn)
			printf("Draw.\n");
		else{
			printf("Invalid input.\n");

		}
	}
	printf("Game finished.\n");
	printf("Your score: %d\n", pScore);
	printf("Comp score: %d\n", cScore);
	return 0;

}
