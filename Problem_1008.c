#include<stdio.h>

int main() {
	int a, b;
	double div;

	scanf("%d %d\n", &a, &b);

	if (a < 0)
		return 1;
	else if (b > 10)
		return 1;

	div = (double)a / b;

	printf("%15.9f\n", div);

	return 0;
}