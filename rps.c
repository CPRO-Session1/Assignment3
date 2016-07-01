/* Harry Brickner
   plays rock paper scissors. */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

char *weapons[3] = {"rock", "paper", "scissors"};

int main(){
	int wins = 0;
	int losses = 0;
	for(int games = 0; games < 5; games++){
		printf("Game #%d Wins: %d Losses: %d\n0 - rock, 1 - paper, 2 - scissors\n", games + 1, wins, losses);
		int playerWeapon;
		while(scanf("%d", &playerWeapon) == 0){
			while(getchar() != '\n');
			printf("That's not a valid number. Try again.\n");
		}
		/* if the playerWeapon is out of the range, I could demand that the user give a number in the range, but if they can't put a correct value in the first time, they probably shouldn't be trusted with such decisions*/
		playerWeapon %= 3;
		srand(time(0));
		int compWeapon = rand() % 3;
		printf("the computer played %s on your %s\n", weapons[compWeapon], weapons[playerWeapon]);
		if(playerWeapon == compWeapon){
			printf("tie!\n");
		}else if((playerWeapon + 1) % 3 == compWeapon){
			printf("you lost!\n");
			losses++;
		}else{
			printf("you won!\n");
			wins++;
		}
		
		if(wins - losses > 4 - games){
			printf("you win!\n");
			return 0;
		}else if(losses - wins > 4 - games){
			printf("you lose!\n");
			return 0;
		}
	}
	printf("you tied!\n");	
	return 0;
}
