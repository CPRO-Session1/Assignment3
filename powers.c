/* Matthew Danielson
*  6/30/16
*  powers.c
* all powers of 2 under 2k
*/
#include <stdio.h>

int math(int base, int interation){
	int sum = 1;
	for(int x = 0; x< interation; x++){
		sum *= base;}
	return sum;
}

int main(){
	int yesno = 1;
	int increment = 1;
	while(yesno){
		if(math(2,increment) > 1000){
			yesno = 0;
			break;
		}
	
		printf("%d \n", math(2,increment));
		increment++;

	}
	return 0;




}
