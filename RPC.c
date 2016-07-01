/*Lloyd Page*/
/*Rock paper scissors vs computer(best of 5), menu for user decision, repeatability,*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	char y;
	do
	{
		int count=0;
		int scorec=0;
		int scoreu=0;
		do
		{
			srand(time(0));
			int comp=rand()%3+1;
			int user;
			printf("choose \n1.Rock\n2.Paper\n3.Scissors\n");
			if(scanf("%d",&user)==0)
			{
				while(getchar()!='\n') ;
				count++;
				scorec=5;
				printf("you lose this game due to invalid input\n");
				break;
			}
			else
				getchar();
			if(user==comp)
			{
				printf("draw for this round\n");
			}
			else
			{
				if(((user+1)==comp)||((user-2)==comp))
				{
					scorec++;
					printf("you lose this round\n");
				}
				else
				{
					scoreu++;
					printf("You win this round\n");
				}
			}
			count++;
		}while(count<5);
		if(scorec>scoreu)
			printf("you lose this game\n");
		else
		{
			if(scorec==scoreu)
				printf("draw\n");
			else
				printf("you win this game\n");
		}
	printf("would you like to play again?(y/n)");
	scanf("%c",&y);
	}while((y=='y')||(y=='Y'));
	return 0;
}
