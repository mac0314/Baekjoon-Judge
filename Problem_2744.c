#include<stdio.h>
#include<string.h>

int main(void) {

	char str[100];
	int len;
	int i, idx;

	scanf("%s", str);

	len = strlen(str);

	for (i = 0; i < len; i++) {
		if (str[i] < 97)
			str[i] = str[i] + 32;
		else
			str[i] = str[i] - 32;
	}

	printf("%s", str);

	return 0;
}

