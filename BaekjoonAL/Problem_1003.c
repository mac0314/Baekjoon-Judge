#include <stdio.h>

int main() {
	int testCaseNum;
	int n;
	int fiboCallNum[110][2] = { 0 };
	int i, j;

	scanf("%d", &testCaseNum);

	fiboCallNum[0][0] = 1;
	fiboCallNum[1][1] = 1;

	for (i = 0; i < testCaseNum; i++) {

		scanf("%d", &n);

		for (j = 2; j <= n; j++) {
			fiboCallNum[j][0] = fiboCallNum[j - 1][0] + fiboCallNum[j - 2][0];
			fiboCallNum[j][1] = fiboCallNum[j - 1][1] + fiboCallNum[j - 2][1];
		}

		printf("%d %d\n", fiboCallNum[n][0], fiboCallNum[n][1]);
	}

	return 0;
}