/* Julia Tan
   This program prints all the powers of 2 that are less than 1000.
*/
#include <stdio.h>

int main (){
	float ans = 2;
	while(ans < 1000){
		printf("%0.f\n",ans);
		ans *= 2;
	}
	return 0;
}
