/*Rumeet Goradia - Half Diamond Program*/
#include <stdio.h>
int main()
{
	int length;
	int count;
	int stars;
	printf("Please input the number of stars in the middle row.\n");
	scanf("%d", &length);
	for (count=1; count<= length; count++)
	{
		for (stars=1; stars <=count; stars++)
		{
			printf("*");
		}
		printf(" \n");
	}
	for (count=(length-1); count>=1; count--)
	{
		for (stars=1; stars<=count; stars++)
		{
			printf("*");
		}
		printf(" \n");
	}
	return 0;
}
