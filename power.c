//Olivier Gabison - Prints the powers of 2 before 1000

#import <stdio.h>

int main(){

  int sum = 1;
  while(sum < 512){
    sum *= 2;
    printf("\n%d\n",sum);
  }
  return 0;
}
