#include<stdio.h>

int main(void) {
	int a, b; // A basket
	int c, d; // B basket
	int num;

	scanf("%d %d", &a, &b);
	scanf("%d %d", &c, &d);

	if ((a + d) > (b + c))
		num = b + c;
	else
		num = a + d;

	printf("%d\n", num);

	return 0;
}