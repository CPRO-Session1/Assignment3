#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*Jack Rosen. The purpose is to play a game of rock, paper, scissors five times*/
int main()
{	int r,i = 0;
	char input;
	srand(time(0));
	while (i < 5)
	{
		printf("Enter R for rock, P for paper, or S for scissors: \n");
		scanf("%c", &input);
		if (input == '\n')
		{
		input = getchar();
		}
		r = (rand() % 3) + 1;
		if ((input == 'R' || input == 'r') && r == 1)
		{
			printf("It is a tie.\n");
		}
		if ((input == 'R' || input == 'r') && r == 2)
		{
			printf("Paper beats rock so you lose.\n");
		}
		if ((input == 'R' || input == 'r') && r == 3)
		{
			printf("Rock beats scissors so you win.\n");
		}
		if ((input == 'S' || input == 's') && r == 1)
		{
			printf("Rock beats scissors so you lose.\n");
		}
		if ((input == 'S' || input == 's') && r == 2)
		{
			printf("Scissors beats paper so you win.\n");
		}
		if ((input == 'S' || input == 's') && r == 3)
		{
			printf("It is a tie.\n");
		}
		if ((input == 'p' || input == 'p') && r == 1)
		{
			printf("Paper beats rock so you win.\n");
		}
		if ((input == 'P' || input == 'p') && r == 2)
		{
			printf("It is a tie.\n");
		}
		if ((input == 'P' || input == 'p') && r == 3)
		{
			printf("Scissors beats paper so you lose.\n");
		}
		i++;
	}
	return 0;
}
