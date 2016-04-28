#include<stdio.h>

int main(void) {
	int row, column;
	int i, j;
	int temp[10][10] = { 0 };
	int result[10][10] = { 0 };

	scanf("%d %d", &row, &column);

	for (i = 0; i < row; i++) {
		for (j = 0; j < column; j++) {
			scanf("%1d", &temp[i][j]);
		}
	}

	for (i = 0; i < row; i++) {
		for (j = 0; j < column; j++) {
			result[i][column - 1 - j] = temp[i][j];
		}
	}

	for (i = 0; i < row; i++) {
		for (j = 0; j < column; j++) {
			printf("%d", result[i][j]);
		}
		printf("\n");
	}

	return 0;
}