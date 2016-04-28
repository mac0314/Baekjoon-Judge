#include<stdio.h>

int main(void) {

	int num;
	int i, j;

	scanf("%d", &num);

	for (i = 1; i <= num; i++) {
		for (j = 0; j < num - i; j++) {
			printf(" ");
		}

		for (j = 0; j < i; j++) {
			printf("*");
		}

		printf("\n");
	}

	for (i = 1; i <= num; i++) {
		for (j = 0; j < i; j++) {
			printf(" ");
		}

		for (j = num - i; j > 0; j--) {
			printf("*");
		}

		printf("\n");
	}

	return 0;
}