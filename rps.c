/*Sean Kee*/
/*Rock Paper Scissors Game, Best of 5*/
#include <stdio.h>

int main()
{
	int playerScore = 0;
	int cpuScore = 0;
	char playerInput;
	int round = 1;

	printf("Play Rock Paper Scissors, Best of 5.\nR: Rock\nP: Paper\nS: Scissors\n\n");

	do
	{
		printf("#:");
		scanf("%c", &playerInput);
		
		switch(playerInput)
		{
			case 'r':
			case 'R':
				{
					playerScore++;
					printf("Result:\nYour Score: %d\n CPU Score: %d\n", playerScore, cpuScore);
					round++;
					break;
				}
			case 'p':
			case 'P':
				{
					cpuScore++;
					printf("Result:\nYour Score: %d\n CPU Score: %d\n", playerScore, cpuScore);
					round++;
					break;
				}
			case 's':
			case 'S':
				{
					cpuScore++;
					printf("Result:\nYour Score: %d\n CPU Score: %d\n", playerScore, cpuScore);
					round++;
					break;
				}
		}
	} while (round <= 5);

	if (playerScore > cpuScore)
		printf("Congrats! You Win!\n");
	else
		printf("You lost.\n");

	return 0;
}
