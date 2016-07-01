/*Ava N.*/
/*A game of rock, paper, scissors between the user and computer with a total of 5 rounds.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
int r=1; /*rock*/
int p=2; /*paper*/
int s=3; /*scissors*/
int i;
int comp_score=0; /*Computer's Score*/
int user_score=0; /*User's Score*/
int rounds=user_score+comp_score; /*# of rounds in game*/
int computer;
printf("To play the game, for rock type 1, for paper 2, and for scissors 3. \n");
/*srand(time(0));*/
int d; /*user's decision*//*
printf("Enter a number: \n");*/
scanf("%d",&d);
  
 for(rounds=1; rounds<=5; rounds++); {
   int computer=rand()%3+1;
   /*printf("Enter a number: \n");*/
      if(d==1){
		if(computer==1){
			printf("You both chose the same action. \n");
			printf("Computer's score: %d . ", comp_score);
			printf("Your score: %d \n", user_score );
			/*continue;*/
		}
		else if (computer==2){
			printf("The computer chose paper, you lost that round.");
			comp_score=comp_score + 1;
			printf("Computer's score: %d . ", comp_score);
			printf("Your score: %d \n", user_score );
			/*continue;*/
		}
		else (computer==3);{
			printf("The computer chose scissors, you won that round!");
			user_score=user_score + 1;
			printf("Computer's score: %d . ", comp_score);
			printf("Your score: %d \n", user_score );
			/*continue;*/
  		 }
	}
	if(d==2){
		if(computer==1){
			printf("The computer chose rock, you won that round! \n");
			user_score=user_score + 1;
			printf("Computer's score: %d . ", comp_score);
			printf("Your score: %d \n", user_score );
			/*break;*/
		}
		else if (computer==2){
			printf("You both chose the same action. \n");
			printf("Computer's score: %d . ", comp_score);
			printf("Your score: %d \n", user_score );
			/*break;*/
		}
		else (computer==3);{
			printf("The computer chose scissors, you lost that round. \n");
			comp_score=comp_score + 1;	 
			printf("Computer's score: %d . ", comp_score);
			printf("Your score: %d \n", user_score );
			/*break;*/
		}
	}
	if(d==3){
		if(computer==3){
			printf("You both chose the same action. \n");
			printf("Computer's score: %d . ", comp_score);
			printf("Your score: %d \n", user_score );
			/*break;*/
		}
		else if (computer==2){
			printf("The computer chose paper, you won that round.");
			user_score=user_score + 1;
			printf("Computer's score: %d . ", comp_score);
			printf("Your score: %d \n", user_score );
			/*break;*/		
		}
		else (computer==1);{
			printf("The computer chose scissors, you lost that round!");
			comp_score=comp_score + 1;
			printf("Computer's score: %d . ", comp_score);
			printf("Your score: %d \n", user_score );
			/*break;*/
  		 }
	}

	if (user_score>=3 && comp_score<user_score){
		printf("You beat the computer!");
	}
	
	if(comp_score>=3 && user_score<comp_score){
		printf("You did not win. Play again and try to win next time!");
	}
 }
	/*printf("%d %d", comp_score, user_score);*/
	return 0;
}
