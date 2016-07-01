//Clarke Littlejohn
//Half Diamond program

#include<stdio.h>


int main(){


	int r;
	int i=0;
	printf("\nEnter a number. A half diamond will be printed the size will be based on the number you entered.\n");	
	scanf("%d",&r);
		
	for(;i<r;i++){
		int j=0;
		for(;j<i;j++){
			printf("*");
		}
		printf("\n");
	}

	for(;i>0;i--){
		int j=0;
		for(;j<i;j++){
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
