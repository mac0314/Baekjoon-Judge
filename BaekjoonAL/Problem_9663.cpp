#include <cstdio>

#define MAX 15

int n;
int result;
bool b[MAX][MAX];

bool check(int row, int col){
	for(int i=0; i<n; i++){
		if(i == row){
			continue;
		}

		if(b[i][col]){
			return false;
		}
	}

	int x = row - 1;
	int y = col - 1;
	while(x>=0 && y>=0){
		if(b[x][y]){
			return false;
		}
		x--;
		y--;
	}
	
	x = row - 1;
	y = col + 1;
	while(x>=0 && y<n){
		if(b[x][y]){
			return false;
		}
		x--;
		y++;
	}

	return true;
}

void calc(int row){
	if(row == n){
		result++;
	}

	for(int col=0; col<n; col++){
		b[row][col] = true;
		if(check(row, col)){
			calc(row+1);
		}
		b[row][col] = false;
	}
}

int main(void){
	scanf("%d", &n);

	calc(0);

	printf("%d\n", result);

	return 0;
}
