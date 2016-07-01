//Clarke Littlejohn
//2^n for when 2^n is less than 1000

#include<stdio.h>

int main(){

	int x=1;
	int tracker=0;
	while(x<1000){
		printf("2^%d=%d\t",tracker,x);
		tracker++;
		x*=2;
	}
	printf("\n");
	return 0;
}



