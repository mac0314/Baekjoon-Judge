#include <iostream>
#include <cstring>

#define DEC_NUM 10

using namespace std;

int main(void) {
	int testCaseNum;
	int* target;
	int nCount[DEC_NUM] = {0};
	int i, j;
	int beauty = 0;
	int eNum;
	int temp;

	cin >> testCaseNum;

	target = new int[testCaseNum];

	for (i = 0; i < testCaseNum; i++) {
		cin >> target[i];
	}

	for (i = 0; i < testCaseNum; i++) {
		temp = target[i];
		memset(nCount, 0, sizeof(int) * DEC_NUM);
		beauty = 0;

		for (beauty = 0; temp > 0; j++) {
			eNum = temp % DEC_NUM;
			temp /= DEC_NUM;
			nCount[eNum]++;
		}

		for (j = 0; j < DEC_NUM; j++) {
			if (nCount[j] != 0) {
				beauty++;
			}
		}
		cout << beauty << endl;
	}

	delete[] target;

	return 0;
}