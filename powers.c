//Bettina Benitez
#include <stdio.h>

int main () {
	int answer = 1;
	while(answer < 500) { //prints only up to 512
		answer =  2 * answer;
		printf("%d\n", answer);
	}
	return 0;
}
