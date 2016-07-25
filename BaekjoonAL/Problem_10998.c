#include<stdio.h>

int main() {
	int a, b;
	int mul;

	scanf("%d %d\n", &a, &b);

	if (a < 0)
		return 1;
	else if (b > 10)
		return 1;

	mul = a * b;

	printf("%d\n", mul);

	return 0;
}