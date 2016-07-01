/* Yael Kelmer.
   This code prints all the powers of 2 whose result is less than 1000. */

#include <stdio.h>

int main()
{
	int power = 0;
	int result = 1;
	while (power <= 9) {
		printf ("%d^%d = %d\n", 2, power, result); 
		power++;
		result *= 2;
	}
	return 0;
}
