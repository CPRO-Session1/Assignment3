/* Harry Brickner
   prints all powers of 2 less than 1000 */
#include <stdio.h>

int main(){
	int num = 1;
	while(num < 1000){
		printf("%d\n", num);
		num *= 2;
	}
	return 0;
}
