#include<stdio.h>
#include<stdlib.h>

int main(void) {

	int i;
	int maxScore;
	int num;
	float result = 0;
	float* numArr;

	scanf("%d", &num);

	numArr = (int*)malloc(sizeof(int) * num);

	for (i = 0; i < num; i++) {
		scanf("%f", &numArr[i]);
	}

	maxScore = numArr[0];

	for (i = 1; i < num; i++) {
		if (maxScore < numArr[i]) {
			maxScore = numArr[i];
		}
	}

	for (i = 0; i < num; i++) {
		result += (numArr[i] / maxScore * 100);
	}

	result = result / num;

	printf("%.2f", result);

	free(numArr);

	return 0;
}
