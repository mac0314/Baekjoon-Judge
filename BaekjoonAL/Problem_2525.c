#include <stdio.h>

int main()
{
	int hour;
	int min;
	int cookingMin;

	scanf("%d %d", &hour, &min);
	scanf("%d", &cookingMin);


	min += cookingMin % 60;

	if (min >= 60) {
		min -= 60;
		hour++;

		if (hour == 24) {
			hour = 0;
		}
	}

	hour += cookingMin / 60;

	if (hour >= 24) {
		hour = hour % 24;
	}

	printf("%d %d", hour, min);

	return 0;
}