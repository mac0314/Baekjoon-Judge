#include <iostream>

using namespace std;

int s[301];
int d[301];

int main(void){
	int n;

	cin >> n;

	for(int i=1; i<=n; i++){
		cin >> s[i];
	}

	d[0] = s[0];
	d[1] = s[1];
	d[2] = max(s[1] + s[2], s[2]);
	for(int i=3; i<=n; i++){
		d[i] = max(d[i-3] + s[i-1] + s[i], d[i-2] + s[i]);		
	}

	cout << d[n] << endl;

	return 0;
}
