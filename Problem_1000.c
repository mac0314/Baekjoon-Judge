#include<stdio.h>

int main() {
	int a, b;
	int sum;

	scanf("%d %d\n", &a, &b);

	if (a < 0)
		return 1;
	else if (b > 10)
		return 1;

	sum = a + b;

	printf("%d\n", sum);

	return 0;
}