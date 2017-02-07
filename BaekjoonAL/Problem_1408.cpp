#include <iostream>
#include <cstdio>


#define INPUT_MAX 3

using namespace std;

int main(void) {
	int currentHour = 0;
	int currentMin = 0;
	int currentSec = 0;
	int beginningHour = 0;
	int beginningMin = 0;
	int beginningSec = 0;
	int restHour = 0;
	int restMin = 0;
	int restSec = 0;


	scanf("%d:%d:%d", &currentHour, &currentMin, &currentSec);
	scanf("%d:%d:%d", &beginningHour, &beginningMin, &beginningSec);


	if (currentSec <= beginningSec) {
		restSec = beginningSec - currentSec;
	}
	else {
		beginningSec += 60;
		restSec = beginningSec - currentSec;

		if (beginningMin == 0) {
			if (beginningHour == 0) {
				beginningHour = 23;
			}
			else {
				beginningHour--;
			}
			beginningMin = 59;
		}
		else {
			beginningMin--;
		}
	}

	if (currentMin <= beginningMin) {
		restMin = beginningMin - currentMin;
	}
	else {
		beginningMin += 60;
		restMin = beginningMin - currentMin;

		if (beginningHour == 0) {
			beginningHour = 23;
		}
		else {
			beginningHour--;
		}
	}

	if (currentHour <= beginningHour) {
		restHour = beginningHour - currentHour;
	}
	else {
		beginningHour += 24;
		restHour = beginningHour - currentHour;
	}


	printf("%02d:%02d:%02d", restHour, restMin, restSec);

	return 0;
}
