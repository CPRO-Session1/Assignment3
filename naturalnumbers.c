//Olivier Gabison - This will find the sum of the numbers up to the number you inputed.

#import <stdio.h>

int main(){

printf("Please input a number\n");
int number;
scanf("\n%d",&number);
int sum = 0;

for(int i = 1; i <= number; i++){
  sum += i;
}

printf("The sum is %d\n", sum);

  return 0;
}
