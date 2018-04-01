#include <iostream>
#include <algorithm>

int n[25];
int c[25];

using namespace std;

int main(void){
	ios::sync_with_stdio(false);

	int a, b, m;

	cin >> a >> b >> m;

	int num_10 = 0;
	for(int i=0; i<m; i++){
		cin >> n[i];
		num_10 = num_10 * a + n[i];
	}

	int result = 0;
	int idx = 0;
	while(num_10 > 0){
		c[idx] = num_10 % b;
		num_10 /= b;
		idx++;
	}

	reverse(c, c+idx);

	for(int i=0; i<idx; i++){
		cout << c[i] << " ";
	}

	return 0;
}
