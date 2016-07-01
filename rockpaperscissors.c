/* Rumeet Goradia - Rock Paper Scissors Game*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
int count;	
int wins=0;
int losses;
do{	
	for(count=1;count<=5;count++)
	{
		srand(time(0));
		int r = rand () % 3 + 1;
		int choice;
		printf("Please choose an option from the following menu:\n1 (ROCK)\n2 (PAPER)\n3 (SCISSORS)\n");
		scanf("%d", &choice);
		int difference = r - choice;
		if (difference<0)
			difference=difference*(-1);
		switch (difference)
		{	
			case 0:
				printf("It's a tie! Nobody wins! Play again!\n");
				count--;
				losses = count - wins;
				printf("Score: User - %d     Comp - %d\n", wins, losses);
				break;
			case 1:
				if (r>choice)
				{
					printf("Sorry, the computer won this round!\n");
					losses=count-wins;
					printf("Score: User - %d     Comp - %d\n", wins, losses);
				}
				else
				{
					printf("Congratulations, you won this round!\n");
					wins++;
					losses=count-wins;
					printf("Score: User - %d     Comp - %d\n", wins, losses);
				
				}
				break;
			case 2: 
				if (r>choice)
				{
					printf("Sorry, the computer won this round!\n");
					losses=count-wins;
					printf("Score: User - %d     Comp - %d\n", wins, losses);
				}
				else
				{
					printf("Congratulations, you won this round!\n");
					wins++;
					losses=count-wins;
					printf("Score: User - %d     Comp - %d\n", wins, losses);
				}
				break;
		}
	if (wins==3)
		count=6;
	}
	if (wins>=3)
		printf("Congratulations, you've won this five-game series of Rock, Paper, Scissors!\n");
	else
		printf("Sorry, since you didn't win best out of five games, you will have to play again until you do.\n");
}while(wins<3);
return 0;
}
