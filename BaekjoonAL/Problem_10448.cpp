#include <iostream>

int d[50];
bool result[100000];

using namespace std;

int main(void){
	int t;

	cin >> t;

	d[0] = 0;

	for(int i=1; i<50; i++){
		d[i] += (d[i-1] + i);
	}


	for(int i=1; i<50; i++){
		for(int j=1; j<50; j++){
			for(int k=1; k<50; k++){
				result[d[i] + d[j] + d[k]] = true;
			}
		}
	}

	while(t--){
		int n;

		cin >> n;
		
		if(result[n]){
			cout << 1 << endl;
		}else{
			cout << 0 << endl;
		}
	}

	return 0;
}
