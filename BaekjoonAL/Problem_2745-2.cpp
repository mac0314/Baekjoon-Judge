#include <iostream>
#include <string>

using namespace std;
int main(void){
	int n = 0;
	int b = 0;
	string s = "";

	cin >> s >> b;

	for(int i=0; i<s.size(); i++){
		if(s[i] >= 'A'){
			n = n * b + (s[i] - 'A' + 10);
		}else{
			n = n * b + (s[i] - '0');
		}
	}

	cout << n << endl;

	return 0;
}
