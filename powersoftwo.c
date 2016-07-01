/* Christopher Liu - I realized this could be done with a for loop instead. I'll include it too */
#include <stdio.h>

int main()
{
	int power = 2;

	/*while (power < 1000 )
	{
		printf("%d\n", power);
		power *= 2;

	}*/
	for (power = 2; power<1000; power*=2)
	{
		printf("%d\n",power);
	}

	return 0;
}
