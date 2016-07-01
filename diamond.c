/* Harry Brickner
   Prints a diamond */
#include <stdio.h>
#include <stdlib.h>

int main(){
	int size;
	printf("What size do you want??\n");
	while(scanf("%d", &size) == 0){
		while(getchar() != '\n');
		printf("NaN. Try again\n");
	}
	int i = 0;
	for(; i < size * 2 - 1; i++){
		for(int j = 0; j <= size - 1 - abs(size - 1 - i); j++)printf("*");
		printf("\n");
	}
	return 0;
}
