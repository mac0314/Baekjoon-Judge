#include <iostream>
#include <vector>

using namespace std;

vector<int> a[20001];
int color[20001];

void dfs(int v, int c){
	color[v] = c;
	
	for(int i=0; i<a[v].size(); i++){
		int nextV = a[v][i];
		if(color[nextV] == 0){
			dfs(nextV, 3-c);
		}
	}
}

int main(void){
	int k;

	cin >> k;

	for(int i=0; i<k; i++){
		int v, e;

		cin >> v >> e;

		for(int i=1; i<= v; i++){
			a[i].clear();
			color[i] = 0;
		}

		for(int i=0; i < e; i++){
			int b, c;

			cin >> b >> c;

			a[b].push_back(c);
			a[c].push_back(b);
		}

		for(int i=1; i <= v; i++){
			if(color[i] == 0){
				dfs(i, 1);
			}
		}

		bool result = true;

		for(int i=1; i <= v; i++){
			for(int k=0; k < a[i].size(); k++){
				int j = a[i][k];
				if(color[i] == color[j]){
					result = false;
				}
			}
		}

		cout << (result ? "YES" : "NO") << endl;
	}
	return 0;
}
