#include <stdio.h>

int main()
{
	printf("This program prints an isosceles triangle of asterisks.\n");
	printf("Please input the length of the altitude.\n");
	int a;
	scanf("%d", &a);
	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 1; i < a; i++) {
		for (int j = 1; j <= a - i; j++) {
			printf("*");
		}
		printf("\n");
	}
return 0;
}
