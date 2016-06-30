#include <stdio.h>

int main(){
	int power=1;
	while(power<1000){
	if(power<512){
		power= power*2;
		printf("%d\n",power);}
		continue;
	}
	return 0;
}


