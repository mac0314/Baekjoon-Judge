#include<stdio.h>
#include<stdlib.h>

int main(void) {

	int i, j;
	int temp;
	int max;
	int swapCount = 0;
	int* numArr;


	scanf("%d", &max);

	numArr = (int*)malloc(sizeof(int) * max);

	for (i = 0; i < max; i++) {
		scanf("%d", &numArr[i]);
	}

	for (i = 0; i < max - 1; i++) {
		for (j = 0; j < max - 1 - i; j++) {
			if (numArr[j] < numArr[j + 1]) {
				temp = numArr[j + 1];
				numArr[j + 1] = numArr[j];
				numArr[j] = temp;
				swapCount++;
			}
		}
	}

	printf("%d", swapCount);

	free(numArr);

	system("pause");
	return 0;