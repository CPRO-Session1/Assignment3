/*Lloyd Page*/
/*half diamond with asterics, user input for size, repeatable*/
#include <stdio.h>
int main()
{
	char y;
	do
	{
		int size=0;
		printf("What size would you like?\n");
		if(scanf("%d",&size)==0)
		{
			while(getchar()!='\n') ;
		}
		else
			getchar();
		for(int i=0;i<size;i++)
		{
			for(int j=0;j<i;j++)
			{
				printf("*");
			}
			printf("\n");
		}
		for(int i=size;i>0;i--)
		{
			for(int j=0;j<i;j++)
			{
				printf("*");
			}
			printf("\n");
		}
		printf("Would you like to run it again?(y/n)");
		if(scanf("%c",&y)==0)
		{
			while(getchar()!='\n') ;
		}
	}while((y=='y')||(y=='Y'));
	return 0;
}
