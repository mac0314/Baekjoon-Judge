#include <iostream>

#define MAX 50

using namespace std;

void checkField(int field[MAX][MAX]);

int main(void) {
	int testCaseNum;

	cin >> testCaseNum;

	for (int i = 0; i < testCaseNum; i++) {
		int width, length, cabbageNum;
		int field[MAX][MAX] = {0};

		cin >> width >> length >> cabbageNum;

		for (int j = 0; j < cabbageNum; j++) {
			int x, y;

			cin >> x >> y;

			field[x][y] = 1;
		}

		//checkField(field);
		
	}


	return 0;
}

void checkField(int field[MAX][MAX]) {
	for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < MAX; j++) {
			cout << field[i][j] << " ";
		}
		cout << endl;
	}
}

void checkIsland(int field[MAX][MAX]) {
	int check[MAX][MAX] = {0};
	int tempNum = 1;

	for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < MAX; j++) {
			if (field[i][j] != 0) {
				check[i][j] = tempNum;
			}
		}
		tempNum++;
	}

	for (int j = 0; j < MAX; j++) {
		for (int i = 0; i < MAX; i++) {
			
		}
	}
}