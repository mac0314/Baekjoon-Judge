#include<stdio.h>
#include<stdbool.h>

int main(void) {
	int inputYear;
	bool Isleapyear = false;

	scanf("%d", &inputYear);

	if ((inputYear % 4 == 0 && inputYear % 100 != 0) || inputYear % 400 == 0) {
		Isleapyear = true;
	}

	printf("%d", Isleapyear);

	return 0;
}
