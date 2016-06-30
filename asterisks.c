#include<stdio.h>
int main() {
	int r;
	for(r=1;r<=5;r++){
		printf("%.*s",r,"******");
		printf("\n");
	}
	r--;
	for(r=4;r>0;r--){
		printf("%.*s",r,"******");
		printf("\n");
	}
}
