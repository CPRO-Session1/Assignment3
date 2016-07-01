//Bettina Benitez
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
	int input;
	int compscore = 0;
	int userscore = 0;
	srand(time(0));
	while (compscore != 5 && userscore != 5) {
		printf("Choose between rock (0), paper (1), or scissors (2): \n");
		scanf("%d", &input);
		int r = rand()%3+1;
			if (r == input ) {
				printf("You drew this round!\n");
				printf("Computer, User: ");
				printf("%d %d\n", compscore, userscore);
			}	
			if ((r - 1) %3 == input) {
				printf("You lose this round\n");
				printf("Computer, User:");
				printf("%d %d\n", compscore, userscore);
				compscore++;
			}
			if ((r - 2) %3 == input) {
				printf("You win this round\n");
				printf("Computer, User: ");
				printf("%d %d\n", compscore, userscore);
				userscore++;
			}
	}
	if (compscore == 5)
		printf("You lose!");
	if (userscore == 5)
		printf("You Win!");
	return 0;
}
