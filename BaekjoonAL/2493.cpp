#include <iostream>
#include <stack>
#include <cstring>

using namespace std;

int main(void) {
	int towerNum;
	int* towerSignaled;
	int* towerHeight;
	int i, j;
	stack<int> stTowerHeight;

	cin >> towerNum;

	towerSignaled = new int[towerNum];
	towerHeight = new int[towerNum];

	memset(towerSignaled, 0, towerNum * sizeof(int));

	for (i = 0; i < towerNum; i++) {
		cin >> towerHeight[i];
		stTowerHeight.push(towerHeight[i]);
	}

	/*
	for (i = 0; i < towerNum; i++) {
	cout << "Tower Height " << (i + 1) << " : " << towerHeight[i] << endl;
	}
	*/

	for (int height, i = towerNum - 1; i >= 0; i--) {
		height = stTowerHeight.top();

		for (j = i - 1; j >= 0; j--) {
			if ((towerHeight[j] >= height) && (i != j) && towerSignaled[j] == 0) {
				towerSignaled[i] = j + 1;
				break;
			}
		}

		stTowerHeight.pop();
	}


	for (i = 0; i < towerNum; i++) {
		cout << towerSignaled[i] << " ";
	}


	delete[] towerSignaled;
	delete[] towerHeight;
	towerSignaled = NULL;
	towerHeight = NULL;

	return 0;
}