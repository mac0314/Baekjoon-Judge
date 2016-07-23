#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {
	int testCaseNum;
	bool** IsDoorOpen;
	int* roomNum;
	int i, j, k, len;
	int result;

	scanf("%d", &testCaseNum);

	IsDoorOpen = (bool**)malloc(sizeof(bool*) * testCaseNum);
	roomNum = (int*)malloc(sizeof(int) * testCaseNum);

	for (i = 0; i < testCaseNum; i++) {
		scanf("%d", &roomNum[i]);
		len = roomNum[i];

		//printf("%d\n", len);

		IsDoorOpen[i] = (bool*)malloc(sizeof(bool) * len);
		for (j = 0; j < len; j++) {
			IsDoorOpen[i][j] = false; // Door close
		}
	}



	for (i = 0; i < testCaseNum; i++) {
		len = roomNum[i];

		for (j = 0; j < len; j++) {
			for (k = 0; k < len; k++) {
				int currentPosition = (j + 1) * (k + 1) - 1;

				if (currentPosition < len) {
					if (IsDoorOpen[i][currentPosition]) {
						IsDoorOpen[i][currentPosition] = false;
					}
					else { // if door close
						IsDoorOpen[i][currentPosition] = true;
					}
				}
				else {
					break;
				}
			}

		}

	}

	for (i = 0; i < testCaseNum; i++) {
		len = roomNum[i];
		result = 0;

		for (j = 0; j < len; j++) {
			if (IsDoorOpen[i][j]) {
				result++;
			}
		}
		printf("%d\n", result);
	}


	for (i = 0; i < testCaseNum; i++) {
		free(IsDoorOpen[i]);
	}
	free(IsDoorOpen);
	free(roomNum);

	return 0;
}