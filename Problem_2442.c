#include<stdio.h>

int main(void) {
	int i, j, num;

	scanf("%d", &num);

	for (i = 1; i <= num; i++) {
		for (j = 0; j<num - i; j++)
			printf(" ");
		for (j = 1; j<2 * i; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}