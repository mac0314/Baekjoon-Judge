#include<stdio.h>

int main() {
	int a, b;
	int sub;

	scanf("%d %d\n", &a, &b);

	if (a < 0)
		return 1;
	else if (b > 10)
		return 1;

	sub = a - b;

	printf("%d\n", sub);

	return 0;
}