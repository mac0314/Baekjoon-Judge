#include <cstdio>
#include <cstring>

#define MAX 16

int main(void){
	int data[] = {2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 9, 9, 9, 9};
	int result = 0;
	char pn[MAX];

	scanf("%s", pn);

	int len = strlen(pn);
	for(int i=0; i<len; i++){
		result += data[pn[i] - 'A'] + 1;
	}

	printf("%d\n", result);

	return 0;
}
