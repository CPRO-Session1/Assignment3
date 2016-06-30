//factorial

#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int f=1;
	while(n>1){
		f=f*n;
		n--;
	}
	printf("%d",f);
}
