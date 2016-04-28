#include<stdio.h>

int main(void) {

	int num[9] = { 0 };
	int max = 9;
	int i, idx;
	int temp;

	for (i = 0; i < max; i++) {
		scanf("%d", &num[i]);
	}

	temp = num[0];
	idx = 0;

	for (i = 0; i < max - 1; i++) {
		if (temp < num[i + 1]) {
			temp = num[i + 1];
			idx = i + 1;
		}
	}

	printf("%d\n", num[idx]);
	printf("%d", idx + 1);

	return 0;
}
