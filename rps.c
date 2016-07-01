/*Christopher Liu - I don't know if this is the most efficient but I wanted it to be readable and it is the best I could do*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int choice,
	    com_ch = (rand() % 3)+1,
	    won = 0,
	    round = 0;


	while (round < 5)
	{
		printf("1.ROCK  2.PAPER  3.SCISSORS\n");
		scanf("%d", &choice);

	    	com_ch = (rand() % 3)+1,
		printf("COMPUTER'S CHOICE: %d\n", com_ch);

		if (com_ch==choice)
		{
			printf("TIE");
		}
		else if (com_ch >= choice && !(com_ch == 3 && choice == 1))
		{
			printf("WON");
			won++;
			round++;
		}
		else
		{
			printf("LOST");
			round++;
		}

		printf("\nWON [%d] of [%d] ROUNDS\n", won, round);

	}
	if (won > 2) printf("WON [%d] OUT OF 5 ROUNDS. YOU WON.\n", won);
	else { printf("WON [%d] OUT OF 5 ROUNDS. YOU LOST.\n", won); }
	return 0;
}
