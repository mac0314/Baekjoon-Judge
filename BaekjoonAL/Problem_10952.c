#include<stdio.h>

int main(void) {
	int a, b;
	int sum;

	while (scanf("%d %d", &a, &b) == 2) {
		if (a == 0 && b == 0)
			break;
		sum = a + b;
		printf("%d\n", sum);
	}
	return 0;
}