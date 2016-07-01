//Emma
//Rock paper scissors
//I apologize for spelling opponent wrong in every single secion but once I started I just couldn't change them all. So sorry!

#include <stdlib.h>

#include <time.h>
#include <stdio.h>

int main(){

int rock, paper, scissor;


int scorep = 0;
int scorec = 0;

int i;

rock = 1;
paper =2;
scissor = 3;
int input;
int oponent;

	for(i=0;i<=4;i++){
		printf("Enter your choice \n 1 for rock \n 2 for paper \n 3 for scissors\n Choice: ");
		scanf("%d", &input);
		srand(time(NULL));
		int oponent = rand()%4;

	if(input==1){

		
		
		if(oponent == 1){
			printf("It's a tie!\n");

		}

		if(oponent==2){
			printf("Sorry! You lost this one\n");
			scorec++;
		}


		if(oponent == 3){
			printf("Nice one! You won!\n");
			scorep++;
		}
	}

	if(input ==2){
		if(oponent==1){
			printf("Computer wins :( \n");
			scorec++;
		}

		if(oponent==2){
			printf("It's a tie!\n");
		}

		if(oponent==3){
			printf("Keep it up! You won that round\n");
			scorep++;
		}
	}

	if(input ==3){
		if(oponent==1){
			printf("Nice one! You won!\n");
			scorep++;
		}

		if(oponent==2){
			printf("Ugh, you lost that one\n");
			scorec++;
		}

		if(oponent==3){
			printf("It's a tie!\n");
		}
	}
	

	if(scorep > scorec){
		if(i<3){
		printf("You're winning\n");
		}
		else
		printf("You won the game!!\n");
	}

	else{
		if(i<3){
		printf("You're losing\n");
		}
		else
		printf("Sorry you lost this one\n");
	}
	}

	
}
