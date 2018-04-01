#include <cstdio>
#include <algorithm>

int cnt[10001];

using namespace std;

int main(void){
	int n;

	scanf("%d", &n);

	for(int i=0; i<n; i++){
		int x;

		scanf("%d", &x);

		cnt[x]++;
	}

	for(int i=1; i<=10000; i++){
		if(cnt[i]>0){
			for(int j=0; j<cnt[i]; j++){
				printf("%d\n", i);
			}
		}
	}

	return 0;
}
