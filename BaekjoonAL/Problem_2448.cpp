#include <cstdio>

char arr[3072][6144];

void drawStar(int n, int x, int y){
	if(n == 3){
		arr[y][x] = '*';
		arr[y+1][x-1] = '*';
		arr[y+1][x+1] = '*';
		arr[y+2][x-2] = '*';
		arr[y+2][x-1] = '*';
		arr[y+2][x] = '*';
		arr[y+2][x+1] = '*';
		arr[y+2][x+2] = '*';
		return;
	}
	drawStar(n/2, x, y);
	drawStar(n/2, x - (n/2), y + (n/2));
	drawStar(n/2, x + (n/2), y + (n/2));
}

int main(void){
	int n;

	scanf("%d", &n);

	for(int i=0; i<n; i++){
		for(int j=0; j<2*n; j++){
			if(j == 2*n-1)
				arr[i][j] = '\0';
			else
				arr[i][j] = ' ';
		}
	}

	drawStar(n, n-1, 0);

	for(int i=0; i<n; i++){
		for(int j=0; j<2*n-1; j++){
			printf("%c", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}
