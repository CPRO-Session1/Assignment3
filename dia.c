#include <stdio.h>


int main()
{
int i;
int d;


for(i=1; i<=5; i++){

	for(d=1; d<=i; d++){
		printf("*");
	
	}
	printf("\n");
}
for(i=5; i>=1; i--){

	for(d=1;d<i;d++){
		printf("*");

	}
	printf("\n");
}
return 0;
}
