//Bettina Benitez
#include <stdio.h>

int main () {
	int x;
	int y;
	int z;
	printf("How many asterisks do you want?: ");
	scanf("%d", &z);
	for (x = 1; x <= z; x++) {
		for(y = 0; y < x; y++) {
			printf("*");
		}
		printf("\n");
	}
	for (x = (z-1); x >= 0; x--){
		for (y = 0; y < x; y++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
