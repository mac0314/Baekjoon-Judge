#include<stdio.h>

int main() {
	int num;
	int i;
	int a, b;
	int sum;

	scanf("%d", &num);

	for (i = 0; i<num; i++) {
		scanf("%d %d", &a, &b);
		sum = a + b;
		printf("%d\n", sum);
	}

	return 0;
}