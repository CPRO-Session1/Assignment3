//Clarke Littlejohn
// Rock Paper Scissors Game.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

	srand(time(0));
	int r;
	int userIn;
	int wins=0, losses=0, ties=0;
	int i=0;

	printf("\n Rock Paper Scissors! Lets see if you can beat the computerin a best of 5. Enter 1 for Rock, 2 for Paper, and 3 for Scissors.\n");
	printf("      BOARD\n YOU    vs.   COMPUTER\n");

	while(i<5){

		r=rand()%3+1;
		scanf("%d",&userIn);
		
		switch(userIn){
			  case 1:
				 switch(r){
					 case 1: 
						ties++;
						i++;
						printf(" ROCK         ROCK\n");
					 	break;
					 case 2:
						losses++;
						i++;
						printf(" ROCK         PAPER\n");
						break;
					 case 3:
						wins++;
						i++;
						printf(" ROCK         SCISSORS\n");
						break;
					}
				 break;
			  case 2:
				 switch(r){
					 case 1: 
						wins++;
						i++;
						printf(" PAPER        ROCK\n");
					 	break;
					 case 2:
						ties++;
						i++;
						printf(" PAPER        PAPER\n");
						break; 
					 case 3:
						losses++;
						i++;
						printf(" PAPER        SCISSORS\n");
						break;
					}
				 break;
			  case 3:
				 switch(r){
					 case 1: 
						losses++;
						i++;
						printf(" SCISSORS     ROCK\n");
					 	break;
					 case 2:
						wins++;
						i++;
						printf(" SCISSORS     PAPER\n");
						break;
					 case 3:
						ties++;
						i++;
						printf(" SCISSORS     SCISSORS\n");
						break;
					}
				 break;
		 }

	}

	 if(wins>losses){
		 printf("You won! You had %d wins, %d losses, %d ties\n",wins,losses,ties);
	 }  else{
		 if(wins<losses)
			 printf("You lost. You had %d wins, %d losses, %d ties\n",wins,losses,ties);
		   else
			 printf("You tied. You had %d wins, %d losses, %d ties\n",wins,losses,ties);

	 }	
return 0;
}
