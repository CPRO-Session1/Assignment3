#include <stdio.h>

int main(){
	int i,j,k;
	k=10-i;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
		printf("*");
		continue;
		}
		if(j=i+1){
			printf("\n");
		}
	}
	for(i=6;i<=9;i++){
		for(j=1;j<=k;j++){
			printf("*");
			continue;
		}
		if(j=k+1){
			printf("\n");
		}
	}
	
	return 0;
}
