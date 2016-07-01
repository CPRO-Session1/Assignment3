/* Julia Tan
   Program prints asterisks of different lengths to create a half diamond.
*/

#include <stdio.h>
int main(){
	int a;
	int b;
	int length;
	printf("How long do you want your half diamond to be?");
	scanf("%d", &length);
	for (a = 1; a <= length; a ++)
	{
		for (b = 0; b < a; b ++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (a = length-1; a >= 0; a --)
	{
		for (b = 0; b < a; b ++)
		{
			printf("*");
		}
		printf("\n");
	}
}
