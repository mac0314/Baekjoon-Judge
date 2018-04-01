#include <cstdio>

#define MAX 10
#define N 9

int board[MAX][MAX];
bool check1[MAX][MAX];
bool check2[MAX][MAX];
bool check3[MAX][MAX];

int square(int x, int y){
	return (x/3) * 3 + (y/3);
}

bool fill(int z){
	if(z==81){
		for(int i=0; i<N; i++){
			for(int j=0; j<N; j++){
				printf("%d ", board[i][j]);
			}
			printf("\n");
		}
		return true;
	}

	int x = z/N;
	int y = z%N;

	if(board[x][y] > 0){
		return fill(z+1);
	}else{
		for(int i=1; i<=N; i++){
			if(check1[x][i] == false && check2[y][i] == false && check3[square(x, y)][i] == false){
				check1[x][i] = check2[y][i] = check3[square(x, y)][i] = true;
				board[x][y] = i;
				if(fill(z+1)){
					return true;
				}
				board[x][y] = 0;
				check1[x][i] = check2[y][i] = check3[square(x, y)][i] = false;
			}
		}
	}

	return false;
}

int main(void){
	for(int i=0; i < N; i++){
		for(int j=0; j < N; j++){
			scanf("%d", &board[i][j]);

			if(board[i][j] > 0){
				check1[i][board[i][j]] = true;
				check2[j][board[i][j]] = true;
				check3[square(i, j)][board[i][j]] = true;
			}
		}
	}

	fill(0);

	return 0;
}
