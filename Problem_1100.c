#include<stdio.h>

#define MAX 8

int main(void) {
	char chessBoard[8][9] = { 0 };
	int i, j;
	int count = 0;

	for (i = 0; i < MAX; i++) {
		scanf("%s", &chessBoard[i]);
	}

	for (i = 0; i < MAX; i++) {
		for (j = 0; j < MAX; j++) {
			if ((i % 2 == 0) && (j % 2 == 0) && chessBoard[i][j] == 'F') {
				count++;
			}
			else if ((i % 2 == 1) && (j % 2 == 1) && chessBoard[i][j] == 'F') {
				count++;
			}
		}
	}

	printf("%d", count);

	return 0;
}
