#include <stdio.h>

#define MAX 100

int main(void) {
	int totalSeat[MAX] = { 0 };
	int seatWanted;
	int guestNum;
	int rejectCount = 0;
	int i;

	scanf("%d", &guestNum);

	for (i = 0; i < guestNum; i++) {
		scanf("%d", &seatWanted);

		if (totalSeat[seatWanted - 1] == 0) {
			totalSeat[seatWanted - 1]++;
		}
		else {
			rejectCount++;
		}
	}

	printf("%d", rejectCount);

	return 0;
}
