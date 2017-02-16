#include <iostream>

#define MAX 50

using namespace std;

int a[MAX][MAX];
int visited[MAX][MAX];
int dx[9] = { 0, 1, 1, 1, 0, -1, -1, -1 }; 
int dy[9] = { -1, -1, 0, 1, 1, 1, 0, -1 }; 
int width, height; 

void dfs(int y, int x, int& ans);

int main(void) {
	while (1) {
		cin >> width >> height;

		if (width == 0 && height == 0) {
			break;
		}

		for (int i = 0; i < height; i++) {
			for (int j = 0; j < width; j++) {
				cin >> a[i][j];
				visited[i][j] = 0;
			}
		}

		int ans = 0; 

		for (int i = 0; i < height; i++) {
			for (int j = 0; j < width; j++) {
				if (visited[i][j] == 0 && a[i][j] == 1) {
					dfs(i, j, ++ans); 
				} 
			} 
		} 
		cout << ans << endl;

	}

	return 0;
}

void dfs(int y, int x, int& ans) {
	visited[y][x] = ans;

	for (int i = 0; i < 9; i++) {
		int tx = x + dx[i];
		int ty = y + dy[i];

		if (0 <= tx && tx < width && 0 <= ty && ty < height) {
			if (a[ty][tx] == 1 && visited[ty][tx] == 0) {
				dfs(ty, tx, ans);
			}
		}
	}
}