/* Yael Kelmer.
   This code creates half of a diamond whose size is determined by the user */


#include <stdio.h>

int main()
{
	printf ("Please type in a number that will determine the size of a diamond made of asterisks\n");
	int amountStar;
	scanf ("%d", &amountStar);

	int x;
	for (x = 1; x <= amountStar; x++)
	{
		int new;
		for (new = 1; new <= x; new++) {
			printf ("*");
		}
		printf ("\n");
       	}

	for (x = amountStar - 1 ; x >= 1; x--) {
		int new;
		//for (new = x; new >= 1; new--) 
		for (new = 1; new <= x; new++) {
			printf ("*");
		}
		printf ("\n");
	}




	return 0;
}

