#include <cstdio>
#include <cstring>

char* reverseString(const char* src, int size){
	int len = strlen(src);
	char* result = new char[sizeof(char)*len+1];

	for(int i=0; i<size; i++){
		result[i] = src[size-i-1];
	}

	for(int i=size; i<len; i++){
		result[i] = src[i];
	}

	result[len] = NULL;
	return result;
}

int main(void){
	char src[] = "1234567";
	char src2[] = "123456789";
	int size = strlen(src);
	int size2 = 3;

	char* result = reverseString(src, size);
	
	int len = strlen(src);
	printf("%d\n", len);

	printf("%s\n", result);

	result = reverseString(src2, size2);
	printf("%s\n", result);

	return 0;
}
