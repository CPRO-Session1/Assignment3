//inefficient

#include<stdio.h>
int main(){
	int x=2;
	int n;
	printf("Please type in exponent n, for 2^n \n");
	scanf("%d",&n);
	while(n>0){
		printf("%d\n",x);
		n--;
		x=x*2;
		if (n==0||x>1000){
			return 0;
		}
	}
	while (n<0){
		x=1/x;
		printf("%d\n",x);
		n++;
		x=x*2;
		if (n==0){
			return 0;
		}
	}
}
