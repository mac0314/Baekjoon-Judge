#include<stdio.h>

int main(void) {
	int a, b;
	int sum;

	scanf("%d", &a);
	scanf("%d", &b);

	sum = a + b;
	if (sum < 10)
		printf("%d", sum);

	return 0;
}