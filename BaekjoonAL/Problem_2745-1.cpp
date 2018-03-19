#include <iostream>
#include <string>

using namespace std;

int main(void){
	string s;
	int b, n = 0;

	cin >> s >> b;
	
	int l = s.length();
	
	for(int i=0; i < l; i++){
		int t = 1;
		for(int j=0; j < i; j++){
			t *= b;
		}

		int a;
		if(s[l-1-i] >= 'A'){
			a = (int) (s[l-1-i] - 'A') + 10; 
		}else{
			a = (int) s[l-1-i] - '0';
		}
	
		n += a * t;
	}

	cout << n << endl;

	return 0;
}
