//Olivier Gabison - Prints stars based on your input

#include <stdio.h>

int main(){

printf("Please input the number of stars in the middle row\n");
int length;
scanf("\n%d", &length);

  for(int i = 0; i <= length; i++){
    for(int j = 0; j <= i; j++){
      printf("*");
    }
    printf("\n");
  }

  for(int i = length-1; i > 0; i--){
    for(int j = 1; j <=i; j++){
      printf("*");
    }
    printf("\n");
  }

  return 0;
}
