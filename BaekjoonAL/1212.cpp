#include <iostream>
#include <cstdlib>
#include <algorithm>

int binarySearch(int arr[], int size, int target);

using namespace std;

int main(void) {
	int testCaseNum;
	int n, m;
	int* nNum = (int*)malloc(sizeof(int) * 1);
	int* mNum = (int*)malloc(sizeof(int) * 1);
	int i, j;

	cin >> testCaseNum;

	for (i = 0; i < testCaseNum; i++) {
		cin >> n;
		nNum = (int*)realloc(nNum, sizeof(int) * n);

		for (j = 0; j < n; j++) {
			cin >> nNum[j];
		}

		sort(nNum, nNum + n);
	
		cin >> m;
		mNum = (int*)realloc(mNum, sizeof(int) * m);

		for (j = 0; j < m; j++) {
			cin >> mNum[j];
		}

		for (j = 0; j < m; j++) {
			int result = binarySearch(nNum, n, mNum[j]);

			cout << result << endl;
		}
	}

	return 0;
}

int binarySearch(int arr[], int size, int target) {
	int low = 0, high = size - 1, mid;

	while (low <= high) {
		mid = (low + high) / 2;

		if (arr[mid] > target) {
			high = mid - 1;
		}
		else if (arr[mid] < target) {
			low = mid + 1;
		}
		else {
			return 1;
		}
	}

	return 0;
}