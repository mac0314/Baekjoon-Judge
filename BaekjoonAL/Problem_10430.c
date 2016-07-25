#include<stdio.h>

int main() {
	int a, b, c;

	scanf("%d %d %d\n", &a, &b, &c);

	if (a<2 || a>10000)
		return 1;
	else if (b<2 || b>10000)
		return 1;
	else if (c<2 || c>10000)
		return 1;

	printf("%d\n", (a + b) % c);
	printf("%d\n", (a%c + b%c) % c);
	printf("%d\n", (a*b) % c);
	printf("%d\n", ((a%c) * (b%c)) % c);

	return 0;
}