#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	char gamer;
	int game;
	int computer;
	int result;
	int winGamer=0;
	int winComputer=0;

	while(winGamer<=5&winComputer<=5&winGamer+winComputer<=9){

	printf("Please choose an action:\n");
	printf("A:rock\nB:paper\nC:scissors\n");
	scanf("%c%*c",&gamer);

	switch(gamer){
		case65: /*A*/
		case97: /*a*/
			game=4;
		case66: /*B*/
		case98: /*b*/
			game=7;
		case67: /*C*/
		case99: /*c*/
			game=10;
		default:
			printf("Your choice is wrong.");
			break;
	}

	srand(time(0));
	int r=rand();
	computer=rand()%3;
	result=game+computer;

	if(result==6||result==7||result==11){
		winGamer=winGamer+1;
		winComputer=winComputer;
	}else{
		winGamer=winGamer;
		winComputer=winComputer+1;
	}

	continue;

	}

	if(winGamer=5){
		printf("You win!");
	}
	if(winComputer=5){
		printf("You loss!");
	}

	return 0;

}





