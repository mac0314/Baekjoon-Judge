#include <iostream>
#include <vector>

using namespace std;

int n, m;
vector<int> a[1001];
bool check[1001];

void dfs(int v){
	check[v] = true;

	for(int i=0; i<a[v].size(); i++){
		int vNext = a[v][i];

		if(!check[vNext]){
			dfs(vNext);
		}
		
	}
}

int main(void){

	cin >> n >> m;

	for(int i=0; i<m; i++){
		int u, v;

		cin >> u >> v;

		a[u].push_back(v);
		a[v].push_back(u);
	}

	int compNum = 0;
	for(int i=1; i<=n; i++){
		if(!check[i]){
			dfs(i);
			compNum += 1;
		}
	}

	cout << compNum << endl;

	return 0;
}
