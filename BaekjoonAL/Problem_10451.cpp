#include <iostream>

using namespace std;

int a[1001];
bool check[1001];

void dfs(int v){
	if(check[v]){
		return;
	}
	check[v] = true;
	dfs(a[v]);
}

int main(void){
	int t;

	cin >> t;

	for(int i=0; i<t; i++){
		int n;

		cin >> n;
		
		for(int j=1; j<=n; j++){
			int x;

			cin >> a[j];
			check[j] = false;
		}

		int result = 0;
		for(int j=1; j<=n; j++){
			if(!check[j]){
				dfs(j);
				result += 1;
			}
		}

		cout << result << endl;
	}

	return 0;
}
