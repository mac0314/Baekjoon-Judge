#include <stdio.h>
#include <stdlib.h>

long long* cableLength;
int cableNumHad;
int cableNumNeeded;
long long maxLength;

long long Bisect(long long start, long long end) {

	long long mid;
	long long cableCutNum;
	long long solution = 0;
	int i;

	while (start <= end) {
		cableCutNum = 0;
		mid = (start + end) / 2;

		for (i = 0; i < cableNumHad; i++)
			cableCutNum += (cableLength[i] / mid);

		if (cableCutNum >= cableNumNeeded) {

			if (mid > solution)
				solution = mid;

			start = mid + 1;
		}
		else {
			end = mid - 1;
		}
	}

	return solution;
}

int main()
{
	int i;

	maxLength = 0;

	scanf("%d %d", &cableNumHad, &cableNumNeeded);

	cableLength = (long long*)malloc(sizeof(long long) * cableNumHad);

	for (i = 0; i < cableNumHad; i++) {
		scanf("%lld", &cableLength[i]);

		if (maxLength < cableLength[i]) {
			maxLength = cableLength[i];
		}
	}

	maxLength = Bisect(0, maxLength);

	printf("%d", maxLength);

	free(cableLength);

	return 0;
}