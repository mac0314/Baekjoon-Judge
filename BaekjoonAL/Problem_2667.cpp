#include <cstdio>
#include <algorithm>

int a[25][25];
int d[25][25];

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

int n;
int result[625];

using namespace std;

void dfs(int x, int y, int count){
	d[x][y] = count;
	for(int k=0; k<4; k++){
		int nx = x+dx[k];
		int ny = y+dy[k];
		if(0<=nx && nx<n && 0<=ny && ny<n){
			if(a[nx][ny] == 1 && d[nx][ny] == 0){
				dfs(nx, ny, count);
			}
		}
	}
}

int main(void){
	scanf("%d", &n);

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			scanf("%1d", &a[i][j]);
		}
	}

	int count = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(a[i][j] == 1 && d[i][j] == 0){
				dfs(i, j, ++count);
			}
		}
	}
	printf("%d\n", count);
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			result[d[i][j]] += 1;
		}
	}
	
	sort(result+1, result+count+1);

	for(int i=1; i<=count; i++){
		printf("%d\n", result[i]);
	}

	/*
	printf("-------\n");

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("%d", d[i][j]);
		}
		printf("\n");
	}
	*/

	return 0;
}
