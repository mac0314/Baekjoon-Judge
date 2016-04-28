#include<stdio.h>

int main() {
	int a, b;

	scanf("%d %d\n", &a, &b);

	if (a<1)
		return 1;
	else if (b>10000)
		return 1;

	printf("%d\n", a + b);
	printf("%d\n", a - b);
	printf("%d\n", a * b);
	printf("%d\n", a / b);
	printf("%d\n", a % b);

	return 0;
}