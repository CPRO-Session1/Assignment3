//Olivier Gabison - This will find the factorial of a number;

#import <stdio.h>

int main(){

printf("Please input a number\n");
int number;
scanf("\n%d",&number);

int sum = 1;
if(number > 0){
for(int i = number; i > 0; i--){
  sum *= i;
}
} else {
  for(int i = number; i < 0; i++){
    sum *= i;
  }
}

printf("The factorial of that number is %d\n", sum);
  return 0;
}
