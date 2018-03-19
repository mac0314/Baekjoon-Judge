#include<iostream>
#include<algorithm>

using namespace std;
int main(void){
	ios::sync_with_stdio(false);
	long long n, m;
	long long r2 = 0;
	long long r5 = 0;

	cin >> n >> m;

	for(long long i=2; i <= n; i*=2){
		r2 += n / i;
	}

	for(long long i=2; i <= n-m; i*=2){
		r2 -= (n-m) / i;
	}

	for(long long i=2; i <= m; i*=2){
		r2 -= m / i;
	}

	for(long long i=5; i <= n; i*=5){
		r5 += n / i;
	}

	for(long long i=5; i <= n-m; i*=5) {
		r5 -= (n-m) / i;
	}

	for(long long i=5; i <= m; i*=5){
		r5 -= m / i;
	}

	cout << min(r2, r5) << endl;

	return 0;
}
