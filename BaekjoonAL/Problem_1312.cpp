#include <iostream>

using namespace std;

int main(void){
	int a, b, n;

	cin >> a >> b >> n;

	a %= b;
	for(int i=0; i<n-1; i++){
		a *= 10;
		a %= b;
	}
	a *= 10;
	cout << a/b << endl;

	return 0;
}
