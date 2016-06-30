#include<stdio.h>
int main (){
	int n=1;
	int sum=0;
	printf("Type in numbers to add, type 0 to finish calculation \n");
	while(n!=0){
		scanf("%d", &n);
		sum= sum+n;
	}
	printf("%d",sum);
}
