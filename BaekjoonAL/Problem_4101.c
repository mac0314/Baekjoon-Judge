#include<stdio.h>
#include<stdbool.h>

int main(void) {
	int firstNum;
	int secondNum;

	while (true) {
		scanf("%d %d", &firstNum, &secondNum);

		if (firstNum == 0 && secondNum == 0) {
			break;
		}
		else if (firstNum > secondNum) {
			printf("Yes\n");
		}
		else {
			printf("No\n");
		}
	}

	return 0;
}

