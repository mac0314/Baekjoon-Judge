#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
	int n;
	vector<int> v;

	cin >> n;

	while(n>0){
		v.push_back(n%2);
		n /= 2;
	}

	//reverse(v.begin(), v.end());

	int result = 0;
	int len = v.size();
	
	for(int i=0; i<len; i++){
		result = result * 2 + v[i];
	}

	cout << result << endl;

	return 0;
}
