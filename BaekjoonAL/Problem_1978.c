#include <stdio.h>

#define MAX 100

int main()
{
	int numArr[MAX] = { 0 };
	int num = 0;
	int i, j;
	int primeCount = 0;
	int primeCheck = 0;

	scanf("%d", &num);

	for (i = 0; i < num; i++) {
		scanf("%d", &numArr[i]);
	}

	for (i = 0; i < num; i++) {
		for (j = 1; j <= numArr[i]; j++) {
			if (numArr[i] == 1) {
				break;
			}
			else if (numArr[i] % j == 0) {
				primeCheck++;
			}
		}

		if (primeCheck == 2) {
			primeCount++;
		}

		primeCheck = 0;
	}

	printf("%d", primeCount);

	return 0;
}