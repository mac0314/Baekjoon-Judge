#include <cstdio>
#include <map>
#include <algorithm>

using namespace std;

int main(void){
	int n;

	scanf("%d", &n);

	map<long long, int> d;

	for(int i=0; i<n; i++){
		long long x;

		scanf("%lld", &x);

		d[x] += 1;
	}

	int max = 0;
	long long result = 0;

	for(auto &p : d){
		if(p.second > max){
			max = p.second;
			result = p.first;
		}else if(p.second == max && p.first < result){
			result = p.first;
		}
	}

	printf("%lld\n", result);

	return 0;
}
