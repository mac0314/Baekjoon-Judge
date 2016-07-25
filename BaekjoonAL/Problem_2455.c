#include<stdio.h>

int main(void) {
	int stationPeople[4] = { 0 };
	int peopleOff[4] = { 0 }, peopleOn[4] = { 0 };
	int i, num = 4;
	int maxPeople = stationPeople[0];

	for (i = 0; i < num; i++) {
		scanf("%d %d", &peopleOff[i], &peopleOn[i]);

		if (i != 0) {
			stationPeople[i] = stationPeople[i - 1] - peopleOff[i];
			stationPeople[i] = stationPeople[i] + peopleOn[i];
		}
		else {
			stationPeople[i] -= peopleOff[i];
			stationPeople[i] += peopleOn[i];
		}

		if (maxPeople < stationPeople[i]) {
			maxPeople = stationPeople[i];
		}
	}

	printf("%d", maxPeople);

	return 0;
}