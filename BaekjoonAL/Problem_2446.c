#include<stdio.h>

int main(void) {

	int num;
	int i, j;

	scanf("%d", &num);

	for (i = 1; i <= num; i++) {
		for (j = 1; j < i; j++) {
			printf(" ");
		}

		for (j = 0; j < (num - i) * 2 + 1; j++) {
			printf("*");
		}

		printf("\n");
	}

	for (i = 1; i < num; i++) {
		for (j = num - i - 1; j > 0; j--) {
			printf(" ");
		}

		for (j = 0; j <= i * 2; j++) {
			printf("*");
		}

		printf("\n");
	}

	return 0;
}