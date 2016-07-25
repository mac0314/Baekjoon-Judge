#include<stdio.h>

int main(void) {
	int i, j, num;

	scanf("%d", &num);

	for (i = 1; i < num; i++) {
		for (j = num - i; j > 0; j--)
			printf(" ");
		for (j = 1; j < 2 * i; j++)
			printf("*");
		printf("\n");
	}

	for (i = 1; i <= num; i++) {

		for (j = 1; j<i; j++)
			printf(" ");
		for (j = 2 * (num - i) + 1; j>0; j--)
			printf("*");
		printf("\n");
	}

	return 0;
}