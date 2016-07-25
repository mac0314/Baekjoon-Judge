#include <stdio.h>

#define MAX 5

int main()
{
	int uniqueNum[MAX];
	int verificationNum = 0;
	int i;

	for (i = 0; i < MAX; i++) {
		scanf("%d", &uniqueNum[i]);
		verificationNum += uniqueNum[i] * uniqueNum[i];
	}

	verificationNum = verificationNum % 10;

	printf("%d", verificationNum);

	return 0;
}