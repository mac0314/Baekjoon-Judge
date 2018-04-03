#include <iostream>
#include <string>

using namespace std;

string n[5];
bool c[5];
int cnt;

int main(void){
	string p("FBI");
	for(int i=0; i<5; i++){
		getline(cin, n[i]);

		if(n[i].find(p) != string::npos){
			c[i] = true;
			cnt++;
		}
	}

	if(cnt == 0){
		cout << "HE GOT AWAY!";
	}

	for(int i=0; i<5; i++){
		if(c[i]){
			cout << i+1 << " ";
		}
	}
	cout << '\n';

	return 0;
}
