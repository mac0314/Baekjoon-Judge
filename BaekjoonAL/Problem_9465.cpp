#include <cstdio>
#include <algorithm>

int a[100001][2];
int d[100001][3];

using namespace std;

int main(void){
	int t, n;

	scanf("%d", &t);

	for(int i=0; i<t; i++){
		scanf("%d", &n); 

		for(int j=1; j<=n; j++){
			scanf("%d", &a[j][0]);
		}
		for(int j=1; j<=n; j++){
			scanf("%d", &a[j][1]);
		}
		d[0][0] = d[0][1] = d[0][2] = 0;


		for(int j=1; j<=n; j++){
			d[j][0] = max(d[j-1][0], max(d[j-1][1], d[j-1][2]));
			d[j][1] = max(d[j-1][0], d[j-1][2]) + a[j][0];
			d[j][2] = max(d[j-1][0], d[j-1][1]) + a[j][1];
		}
	
		int result = 0;

		for(int j=1; j<=n; j++){
			result = max(max(result, d[j][0]), max(d[j][1], d[j][2]));
		}

		printf("%d\n", result);
	}

	return 0;
}
