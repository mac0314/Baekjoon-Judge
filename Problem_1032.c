#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 51



int main(void) {

	int testCase, n, len;
	int i, j, k;
	char* fileName[MAX_LEN];
	char result[MAX_LEN] = "";

	scanf("%d", &testCase);
	for (i = 0; i < testCase; i++) {
		fileName[i] = (char*)malloc((sizeof(char) * MAX_LEN) * testCase);
	}

	for (i = 0; i < testCase; i++) {
		scanf("%s", fileName[i]);
	}

	/*
	// Input Test
	for (i = 0; i < testCase; i++) {
		printf("%s\n", fileName[i]);
	}
	*/

	len = strlen(fileName[0]);
	//printf("%d\n", len);

	strcpy(result, fileName[0]);

	for (i = 0; i < testCase - 1; i++) {
		for (j = 0; j < len; j++) {
			if (result[j] == fileName[i+1][j]) {
				result[j] = fileName[i+1][j];
			}
			else {
				result[j] = '?';
			}
		}
	}

	printf("%s\n", result);


	for (i = 0; i < testCase; i++) {
		free(fileName[i]);
	}

	return 0;
}
