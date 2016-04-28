#include<stdio.h>

int main(void) {
	int input[10];
	int rest[10];
	int diff[10];
	int i, j, n = 10;
	int count = 10;

	for (i = 0; i < n; i++) {
		scanf("%d", &input[i]);
		rest[i] = input[i] % 42;
	}

	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			if (rest[j] != 42) {
				if (rest[i] == rest[j]) {
					rest[j] = 42;
					count--;
				}
			}
		}

	}
	printf("%d\n", count);

	return 0;
}