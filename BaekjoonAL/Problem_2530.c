#include <stdio.h>
#include <string.h>

int main()
{
	int hour;
	int min;
	int sec;
	int cookingSec;

	scanf("%d %d %d", &hour, &min, &sec);
	scanf("%d", &cookingSec);

	sec += (cookingSec % 60);

	if (sec >= 60) {
		sec -= 60;
		min++;

		if (min == 60) {
			min = 0;
			hour++;

			if (hour == 24) {
				hour = 0;
			}
		}
	}

	min += (cookingSec % 3600) / 60;

	if (min >= 60) {
		min -= 60;
		hour++;

		if (hour == 24) {
			hour = 0;
		}
	}

	hour += cookingSec / 3600;

	if (hour >= 24) {
		hour = hour % 24;
	}

	printf("%d %d %d", hour, min, sec);

	return 0;
}