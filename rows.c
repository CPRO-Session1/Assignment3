/* Matthew Danielson
*  6/30/16
*  rows.c
*  prints rows based on user input
*/

#include <stdio.h>

int main(){
	printf("Please enter a size:\n ");
	int maxsize;
	scanf("%d", &maxsize);
	for(int x = 0; x< maxsize-1; x++){
		for(int y = 0; y< x; y++)
			printf("*");
		printf("\n");
	}
	for(int x = 0; x<maxsize; x++){
		for(int y = maxsize; y>x; y--)
			printf("*");
		printf("\n");
	}
	return 0;
}
