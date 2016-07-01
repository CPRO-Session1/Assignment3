#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	printf("It's time to play Rock, Paper, Scissors\n");
	printf("First one to win 3 wins!\n");
	int uwin = 0, cwin = 0;
	while (uwin != 3 && cwin != 3) {
		srand(time(NULL));
		int r = rand() % 3;
		char cpu;
		switch (r) {
			case 0:
				cpu = 'r';
				break;
			case 1:
				cpu = 'p';
				break;
			case 2:
				cpu = 's';
				break;
		}
		int user;
		printf("Rock (1), Paper (2), or Scissors (3)?\n");
		scanf("%d", &user);
		if (cpu == 'r') {
			if (user == 1) {
				printf("Tie!\n");
			}
			if (user == 2) {
				printf("You won this round!\n");
				uwin++;
			}
			if (user == 3) {
				printf("You lost this round.\n");
				cwin++;
			}
		}if (cpu == 'p') {
			if (user == 1) {
				printf("You lost this round.\n");
				cwin++;
			}
			if (user == 2) {
				printf("Tie!\n");
			}
			if (user == 3) {
				printf("You won this round!\n");
				uwin++;
			}
		} if (cpu == 's') {
			if (user == 1) {
				printf("You won this round!\n");
				uwin++;
			} if (user == 2) {
				printf("You lost this round.\n");
				cwin++;
			} if (user == 3) {
				printf("Tie!\n");
			}
		}
	}
	if (cwin > uwin)
		printf("You lose. Better luck next time!\n");
	else
		printf("You win. Congratulations!\n");
return 0;
}
