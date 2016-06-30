#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand(time(NULL));
	int r; //random
	int i; //input
	int cs=0; //computer score
	int us=0; //user score
	printf("Best of five, [Rock:1,Papers:2,Scissors:3] \n");
	for(int t=1;t<=5;t++){ //time
		printf("Round %d \n",t);
		r=rand()%3+1;
		scanf("%d",&i);
		if((r==3&&i==2)||(r==2&&i==1)||(r==1&&i==3)){ //losing condition
			cs++;
			printf("You lost. The score is. \n Computer: %d \n User: %d \n ",cs,us);

		}else if (r==i){ //tie
			printf("You tied. The score is. \n Computer: %d \n User: %d \n ",cs,us);
		}else if ((r==2&&i==3)||(r==1&&i==2)||(r==3&&i==1)){ //win condition
			us++;
			printf("You won. The score is. \n Computer: %d \n User: %d \n ",cs,us);
		}
		if (us==3||cs==3){
			break;
		}
	}
	printf("The Final Score is. \n Computer: %d \n User: %d \n",cs,us);
	if(cs>us){
		printf("You lost the Best of Five. Better Luck next time. \n");
	}else if(us>cs){
		printf("You won the Best of Five! \n");
	}
	return 0;
}
