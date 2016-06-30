//Olivier Gabison - This will keep adding numbers until the user enters 0;

#import <stdio.h>

int main(){

int sum = 0;
while(sum < 10000){
int number;
scanf("\n%d", &number);

if(number == 0){
  break;
} else {
  sum += 1;
  printf("%d\n", sum);
}
}
  return 0;

}
