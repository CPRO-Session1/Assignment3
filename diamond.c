#include <stdio.h>
/*Jack Rosen. The purpose is to print a half diamond of astericks*/
int main()
{
	for (int i = 0; i < 8; i++)
	{
		for (int s = 0; s < i; s++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int i = 6; i > 0; i--)
	{
		for (int s = 0; s < i; s++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
