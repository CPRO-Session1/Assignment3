//Emma L
//powers below n^2


#include <stdio.h>
#include <math.h>
int main(){
	printf("squares numbers under 1000\n");

	int x;

	x=0;
	int square;
	while(square<1000){
		square = pow(2,x);
		printf("%d\n", square);
		x++;
	}

return 0;
}
