#include <iostream>
#include <algorithm>

int n, m;
int board[501][501];

using namespace std;

// 1 x 4, 4 X 1
int do1(){
	int result = 0;

	// 1 x 4
	for(int i=0; i<n; i++){
		for(int j=0; j<=m-4; j++){
			int sum = 0;

			for(int k=j; k<j+4; k++){
				sum += board[i][k];
			}

			result = max(result, sum);
		}
	}

	// 4 x 1
	for(int i=0; i<=n-4; i++){
		for(int j=0; j<m; j++){
			int sum = 0;
			
			for(int k=i; k<i+4; k++){
				sum += board[k][j];
			}
			result = max(result, sum);
		}
	}

	return result;
}

// 2 x 3, 3 x 2
int do2(){
	int result = 0;

	// 3 x 2
	for(int i=0; i<=n-3; i++){
		for(int j=0; j<=m-2; j++){
			int sum = 0;
			for(int k=i; k<i+3; k++){
				for(int l=j; l<j+2; l++){
					sum += board[k][l];
				}
			}

			/*
			 00
			 11
			 11
			 */
				result = max(sum - board[i][j] - board[i][j+1], result);

				/*
				 01
				 01
				 11
				 */
				result = max(sum - board[i][j] - board[i+1][j], result);

				/*
				 10
				 10
				 11
				 */
				result = max(sum - board[i][j+1] - board[i+1][j+1], result);

				/*
				 11
				 11
				 00
				 */
				result = max(sum - board[i+2][j] - board[i+2][j+1], result);

				/*
				 11
				 10
				 10
				 */
				result = max(sum - board[i+1][j+1] - board[i+2][j+1], result);

				/*
				 11
				 01
				 01
				 */
				result = max(sum - board[i+1][j] - board[i+2][j], result);

				/*
				 10
				 11
				 01
				 */
				result = max(sum - board[i][j+1] - board[i+2][j], result);

				/*
				 01
				 11
				 10
				 */
				result = max(sum - board[i][j] - board[i+2][j+1], result);

				/*
				 01
				 11
				 01
				 */
				result = max(sum - board[i][j] - board[i+2][j], result);

				/*
				 10
				 11
				 10
				 */
				result = max(sum - board[i][j+1] - board[i+2][j+1], result);

		}
	}

	// 2 x 3
	for(int i=0; i<=n-2; i++){
		for(int j=0; j<=m-3; j++){
			int sum = 0;
			for(int k=i; k<i+2; k++){
				for(int l=j; l<j+3; l++){
					sum += board[k][l];
				}
			}
			/*
			 111
			 001
			 */
			result = max(sum - board[i+1][j] - board[i+1][j+1], result);

			/*
			 001
			 111
			 */
			result = max(sum - board[i][j] - board[i][j+1], result);

			/*
			 011
			 011
			 */
			result = max(sum - board[i][j] - board[i+1][j], result);

			/*
			 110
			 110
			 */
			result = max(sum - board[i][j+2] - board[i+1][j+2], result);

			/*
			 100
			 111
			 */
			result = max(sum - board[i][j+1] - board[i][j+2], result);

			/*
			 111
			 100
			 */
			result = max(sum - board[i+1][j+1] - board[i+1][j+2], result);

			/*
			 011
			 110
			 */
			result = max(sum - board[i][j] - board[i+1][j+2], result);

			/*
			 110
			 011
			 */
			result = max(sum - board[i][j+2] - board[i+1][j], result);

			/*
			 010
			 111
			 */
			result = max(sum - board[i][j] - board[i][j+2], result);

			/*
			 111
			 010
			 */
			result = max(sum - board[i+1][j] - board[i+1][j+2], result);
		}
	}

	return result;
}

int answer(){
	return max(do1(), do2());
}

int main(void){
	cin >> n >> m;

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> board[i][j];
		}
	}

	cout << answer() << endl;

	return 0;
}
