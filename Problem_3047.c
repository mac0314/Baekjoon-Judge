#include<stdio.h>

int main(void) {

	int numArr[3];
	char chaArr[3];
	int i, j;
	int idx;
	int max = 3;
	int temp;

	scanf("%d %d %d\n", &numArr[0], &numArr[1], &numArr[2]);

	scanf("%c%c%c", &chaArr[0], &chaArr[1], &chaArr[2]);

	for (i = 0; i < max; i++) {
		chaArr[i] -= 65;
	}

	for (i = 0; i < max - 1; i++) {
		for (j = 0; j < max - 1 - i; j++) {
			if (numArr[j] > numArr[j + 1]) {
				temp = numArr[j + 1];
				numArr[j + 1] = numArr[j];
				numArr[j] = temp;
			}
		}
	}

	for (i = 0; i < max; i++) {
		idx = (int)chaArr[i];
		printf("%d ", numArr[idx]);
	}

	return 0;
}
