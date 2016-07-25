#include <iostream>

#define ROW_MAX 9
#define COL_MAX 9

using namespace std;

int main(void) {
	int numArr[ROW_MAX][COL_MAX] = {0};
	int maxNum = 0;
	int row, col;
	int i, j;
	

	for (i = 0; i < ROW_MAX; i++) {
		for (j = 0; j < COL_MAX; j++) {
			cin >> numArr[i][j];
			
			if (maxNum < numArr[i][j]) {
				maxNum = numArr[i][j];
				row = i + 1;
				col = j + 1;
			}
		}
	}

	cout << maxNum << endl;
	cout << row << " " << col << endl;


	return 0;
}