#include<stdio.h>
#include<string.h>

#define MAX 1001

int main(void) {
	char jaeCan[MAX];
	char docWant[MAX];
	int jLen;
	int dLen;

	scanf("%s", &jaeCan);
	scanf("%s", &docWant);

	jLen = strlen(jaeCan);
	dLen = strlen(docWant);

	if (jLen >= dLen) {
		printf("go");
	}
	else {
		printf("no");
	}

	return 0;
}