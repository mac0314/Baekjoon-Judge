#include <stdio.h>
#include <string.h>

#define MAX 101

int main()
{
	char buf[MAX] = { 0 };
	while (fgets(buf, MAX - 1, stdin)) {
		printf("%s", buf);
		memset(buf, 0, sizeof(buf));
	}

	return 0;
}