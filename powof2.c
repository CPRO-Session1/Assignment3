/* Rumeet Goradia - Powers of 2 Program*/
#include <stdio.h>
int main()
{
	int n = 0;
	int pow = 1;
	while (n<=9){ /*limit is set to power of 9 because 2^9 is highest power of 2 that is less than 1000*/
		if (n==0){
			pow=1;
		}
		else {
			pow=pow*2;
		}
	
		printf("2^%d=%d\n", n, pow);
		n++;
	}
	return 0;
}
