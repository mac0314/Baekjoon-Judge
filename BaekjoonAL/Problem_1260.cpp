#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

int n, m, v;
bool check[1001], graph[1001][1001];

void dfs(int k){
	//cout << "dfs" << endl;

	check[k] = true;

	cout << k << " ";

	for(int i=1; i<=n; i++){
		if(!check[i] && graph[k][i]){
			dfs(i);
		}
	}
}

void bfs(int k){
	//cout << "bfs" << endl;

	queue<int> q;

	q.push(k);
	check[k] = true;

	while(!q.empty()){
		int front = q.front();
		q.pop();

		cout << front << " ";

		for(int i=1; i<=n; i++){
			if(!check[i] && graph[front][i]){
				q.push(i);
				check[i] = true;
			}
		}
	}
}

int main(void){
	cin >> n >> m >> v;

	for(int i=0; i<m; i++){
		int a, b;

		cin >> a >> b;

		graph[a][b] = graph[b][a] = true;
	}

	dfs(v);

	cout << endl;

	memset(check, false, sizeof(check));

	bfs(v);

	cout << endl;

	return 0;
}
