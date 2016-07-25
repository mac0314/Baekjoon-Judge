#include <iostream>

#define NEWSPAPER_NUM 5

using namespace std;

int main(void) {
	int l, p;
	int pNum;
	int num[NEWSPAPER_NUM];

	cin >> l >> p;
	pNum = l * p;

	for (int i = 0; i < NEWSPAPER_NUM; i++) {
		cin >> num[i];
	}

	for (int i = 0; i < NEWSPAPER_NUM; i++) {
		cout << num[i] - pNum << " ";
	}
	cout << endl;

	return 0;
}