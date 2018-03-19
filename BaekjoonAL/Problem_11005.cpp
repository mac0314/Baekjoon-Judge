#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main(){
	int n, b;
	string s = "";

	cin >> n >> b;

	while(n > 0){
		int r = n % b;

		if(r < 10){
			s += (char)(r + '0');
		}else{
			s += (char)(r - 10 + 'A');
		}
		n /= b;
	}

	reverse(s.begin(), s.end());

	cout << s << endl;

	return 0;
}
