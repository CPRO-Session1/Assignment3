// Christopher Liu. I imported an abs function just so I wouldn't have to repeat the same chunk of code except iterating down. it also has an extra newline at the start by accident. 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int height = 0;
	int i = 0, j = 0; /* i is line number, starting from negatives. i=0 is the maximum height. j is number of stars, height is max star number. (height - abs(i)) is number of stars to print. */
	printf("How wide is your pyramid? ");
	scanf("%d", &height);

	for (i = (-height); i < height; i++)
	{
		for (j = 0 ; j < (height - abs(i)); j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
	
