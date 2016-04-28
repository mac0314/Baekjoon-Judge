#include<stdio.h>
#include<string.h>

int main(void) {

	int aNum;
	int bNum;
	int answer1, answer2, answer3, answer4;

	scanf("%d", &aNum);
	scanf("%d", &bNum);

	answer1 = aNum * (bNum % 10);
	answer2 = aNum * ((bNum / 10) % 10);
	answer3 = aNum * (bNum / 100);
	answer4 = answer3 * 100 + answer2 * 10 + answer1;

	printf("%d\n", answer1);
	printf("%d\n", answer2);
	printf("%d\n", answer3);
	printf("%d\n", answer4);

	return 0;
}
