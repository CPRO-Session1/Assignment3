#include <stdio.h>

/*print half diamond
  @author Aly Milich
  */

int main(){
	
	int i, j;

	for(i = 1; i<=5; i++){
		for(j = 1; j<=i; j++){
			printf("*");
		}
		printf("\n");
	}

	for(i = 5; i>=1; i--){
		for(j=1; j<i; j++){
			printf("*");
		}
		printf("\n");
	}

	return 0;

}
