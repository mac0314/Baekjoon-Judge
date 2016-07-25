#include <stdio.h>

#define FRONT 0
#define BACK 1
#define MAX 3

int main(void) {
	int yutA[MAX];
	int yutB[MAX];
	int yutC[MAX];
	int yutD[MAX];
	int i, backCount = 0, frontCount = 0;
	char result;

	for (i = 0; i < MAX; i++) {
		scanf("%d %d %d %d", &yutA[i], &yutB[i], &yutC[i], &yutD[i]);
	}

	for (i = 0; i < MAX; i++) {
		if (yutA[i] == FRONT)
			frontCount++;
		else if (yutA[i] == BACK)
			backCount++;

		if (yutB[i] == FRONT)
			frontCount++;
		else if (yutB[i] == BACK)
			backCount++;

		if (yutC[i] == FRONT)
			frontCount++;
		else if (yutC[i] == BACK)
			backCount++;

		if (yutD[i] == FRONT)
			frontCount++;
		else if (yutD[i] == BACK)
			backCount++;

		if (frontCount == 1 && backCount == 3) {
			result = 'A';
		}
		else if (frontCount == 2 && backCount == 2) {
			result = 'B';
		}
		else if (frontCount == 3 && backCount == 1) {
			result = 'C';
		}
		else if (frontCount == 4) {
			result = 'D';
		}
		else if (backCount == 4) {
			result = 'E';
		}

		frontCount = 0;
		backCount = 0;

		printf("%c\n", result);
	}

	return 0;
}
