#include <stdio.h>
/*The purpose is to find all the values of 2^n under 1000. Jack Rosen*/
int main()
{
	int product = 1;
	printf("%d\n",product);
	while (product <= 500)
	{
		product *=2 ;
		printf("%d\n",product);
	}
	return 0;
}
