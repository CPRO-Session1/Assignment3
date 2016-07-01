/* Matthew Danielson
*  6/30/16
*  Rock Paper Scissors
*  Computer vs player best of 5
* 1= rock, 2= paper, 3 =scissors
 */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
	int yesno = 1;
	int pchoice;
	int cchoice;
	int pscore = 0;
	int compscore = 0;
	printf("Welcome to Rock Paper Scissors!");
	while(yesno){
		printf("Enter 1 for Rock, 2 for Paper, or 3 for Scissors: \n");
		srand(time(NULL));
		scanf("%d", &pchoice);
		cchoice = (rand()%3)+1;
		if(pchoice==1&&cchoice==1||pchoice ==2&&cchoice ==2||pchoice==3&&cchoice==3)
			printf("Tie!\n");
		if(pchoice == 1 && cchoice == 2 ||pchoice==2 &&cchoice==3 || pchoice==3&&cchoice==1){
			printf("The computer won that round!\n");
			compscore++;
		}
		if(cchoice ==1 && pchoice == 2||cchoice==2 &&pchoice==3||cchoice==3&&pchoice==1){
			printf("You won!\n");
			pscore++;
		}
		
		if(pscore == 3){
			printf("You won the match!\n");
			yesno= 0;
		}
		if(compscore==3){
			printf("The computer won the match!\n");
			yesno=0;
		}
	}

						



}

