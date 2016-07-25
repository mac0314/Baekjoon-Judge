#include<stdio.h>

int main(void) {

	int lineArr[4];
	int i, j;
	int temp;
	int max = 4;
	int area;

	scanf("%d %d %d %d", &lineArr[0], &lineArr[1], &lineArr[2], &lineArr[3]);

	for (i = 0; i < max - 1; i++) {
		for (j = 0; j < max - 1 - i; j++) {
			if (lineArr[j] > lineArr[j + 1]) {
				temp = lineArr[j + 1];
				lineArr[j + 1] = lineArr[j];
				lineArr[j] = temp;
			}
		}
	}

	area = lineArr[0] * lineArr[2];

	printf("%d", area);

	return 0;
}