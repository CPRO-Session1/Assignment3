#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*rock paper scissors with drop-down menu
  @author Aly Milich
  */

int main(){

	int choice, computer, tries = 0, rock =1, paper = 2, scissors = 3, yourscore = 0, compscore =0;

	do{

		printf("Press 1 for rock, 2 for paper, and 3 for scissors.\n");
		scanf("%d", &choice);
		srand(time(NULL));
		int computer = rand()%4;

		if(choice == 1){
			if(computer ==1){
				printf("you tied.\n");
				tries ++;
			}
			if (computer ==2){
				printf("you lost.\n");
				tries++;
				compscore++;
			}
			if(computer ==3){
				printf("you won!\n");
				tries ++;
				yourscore++;
			}
		}

		if(choice ==2){
			if(computer ==1){
				printf("you won!\n");
				tries++;
				yourscore++;
			}
			if(computer ==2){
				printf("you tied.\n");
				tries++;
			}
			if(computer ==3){
				printf("you lost.\n");
				tries++;
				compscore++;
			}
		}

		if(choice ==3){
			if(computer ==1){
				printf("you lost.\n");
				tries++;
				compscore++;
			}
			if(computer==2){
				printf("you won!\n");
				tries++;
				yourscore++;
			}
			if(computer ==3){
				printf("you tied.\n");
				tries++;
			}
		}

	} while(tries <6);


	if(yourscore > compscore)
		printf("you won the game!\n");

	if(compscore > yourscore)
		printf("you lost the game.\n");

	return 0;

}
