#include <iostream>
#include <cstring>

#define MAX_INDEX 8

using namespace std;

int confuse5To6(char target[MAX_INDEX]);
int confuse6To5(char target[MAX_INDEX]);

int main(void) {
	int a, b;
	int max = 0;
	int min = 0;
	int maxIdx = 0;
	char aString[MAX_INDEX];
	char bString[MAX_INDEX];
	char tempString[MAX_INDEX];

	cin >> a >> b;

	sprintf(aString, "%d", a);
	sprintf(bString, "%d", b);


	max = confuse5To6(aString) + confuse5To6(bString);

	min = confuse6To5(aString) + confuse6To5(bString);


	cout << min << " " << max << endl;

	return 0;
}


int confuse5To6(char target[MAX_INDEX]) {
	char tempString[MAX_INDEX];
	int maxIdx = 0;
	int result = 0;

	strcpy(tempString, target);
	maxIdx = strlen(tempString);
	for (int i = 0; i < maxIdx; i++) {
		if (tempString[i] == 53) {
			tempString[i]++;
		}
	}

	result = atoi(tempString);

	return result;
}

int confuse6To5(char target[MAX_INDEX]) {
	char tempString[MAX_INDEX];
	int maxIdx = 0;
	int result = 0;

	strcpy(tempString, target);
	maxIdx = strlen(tempString);
	for (int i = 0; i < maxIdx; i++) {
		if (tempString[i] == 54) {
			tempString[i]--;
		}
	}

	result = atoi(tempString);

	return result;
}