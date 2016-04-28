#include<stdio.h>

int main(void) {
	int i, num, a, b, sum;

	scanf("%d", &num);

	for (i = 0; i<num; i++) {
		scanf("%d, %d", &a, &b);
		sum = a + b;
		printf("%d\n", sum);
	}
	return 0;
}