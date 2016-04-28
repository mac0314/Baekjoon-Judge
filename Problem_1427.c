#include<stdio.h>

int main(void) {
	int numArr[10] = { 0 };
	int max = 10;
	signed int num;
	int i, j, idxCount;
	int temp;
	int result = 0;

	scanf("%d", &num);

	for (i = 0; i < max; i++) {
		idxCount = i;
		if (num / 10 == 0) {
			numArr[i] = num;
			break;
		}

		numArr[i] = num - (num / 10) * 10;
		num = num / 10;
		idxCount = i;
	}

	for (i = 0; i < max - 1; i++) {
		for (j = 0; j < max - 1 - i; j++) {
			if (numArr[j] < numArr[j + 1]) {
				temp = numArr[j + 1];
				numArr[j + 1] = numArr[j];
				numArr[j] = temp;
			}
		}
	}

	for (i = 0; i < idxCount + 1; i++) {
		result = (result * 10) + numArr[i];
	}

	printf("%d", result);

	return 0;
}

