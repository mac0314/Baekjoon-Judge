#include <iostream>

#define MAX 50

using namespace std;

int field[MAX][MAX] = { 0 };
int visited[MAX][MAX] = { 0 };
int dx[5] = { 0, 1, 0, -1, 0 };
int dy[5] = { -1, 0, 1, 0, 0 };
int width, height;

void initializeField();
void checkField(int field[MAX][MAX], int width, int height);
void dfs(int y, int x, int& ans);

int main(void) {
	int testCaseNum;

	cin >> testCaseNum;

	for (int t = 0; t < testCaseNum; t++) {
		int cabbageNum;
		
		/*
		cout << "field" << endl;
		checkField(field, MAX, MAX);
		cout << "visited" << endl;
		checkField(visited, MAX, MAX);
		*/

		cin >> width >> height >> cabbageNum;

		for (int j = 0; j < cabbageNum; j++) {
			int x, y;

			cin >> x >> y;

			field[y][x] = 1;
		}

		int ans = 0;

		for (int i = 0; i < height; i++) {
			for (int j = 0; j < width; j++) {
				if (visited[i][j] == 0 && field[i][j] == 1) {
					dfs(i, j, ++ans);
				}
			}
		}
		/*
		cout << "field" << endl;
		checkField(field, width, height);
		cout << "visited" << endl;
		checkField(visited, width, height);
		*/
		cout << ans << endl;

		initializeField();
	}


	return 0;
}

void initializeField() {
	for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < MAX; j++) {
			field[i][j] = 0;
			visited[i][j] = 0;
		}
	}
}

void checkField(int field[MAX][MAX], int width, int height) {
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			cout << field[i][j] << " ";
		}
		cout << endl;
	}
}


void dfs(int y, int x, int& ans) {
	visited[y][x] = ans;

	for (int i = 0; i < 5; i++) {
		int tx = x + dx[i];
		int ty = y + dy[i];

		if (0 <= tx && tx < width && 0 <= ty && ty < height) {
			if (field[ty][tx] == 1 && visited[ty][tx] == 0) {
				dfs(ty, tx, ans);
			}
		}
	}
}