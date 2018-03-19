#include<iostream>

using namespace std;
int main(void){
	ios::sync_with_stdio(false);

	int n;
	int count = 0;

	cin >> n;

	for(int i=5; i<=n; i*=5){
		// cout << n / i << endl;
		count += n / i;
	}

	cout << count << endl;

	return 0;
}
