#include<iostream>

#define MAX 1001 

using namespace std;
int main(void) {
	int n = 0; 
	int i = 0;
	int j = 0;
	int result = 0;
	int a[MAX] = {0};
	int d[MAX] = {0};


	cin >> n;


	for (i = 0; i < n; i++) {
		cin >> a[i];
	}



	for (i = 0; i < n; i++) {
		d[i] = 1;

		for (j = i - 1; j >= 0; j--) {
			if (a[i] < a[j] && d[i] <= d[j]) {
				d[i] = d[j] + 1;
			}
		}
	}

	for (i = 0; i < n; i++) {
		if (result < d[i]) {
			result = d[i];
		}
	}

	cout << result << endl;

	return 0;
}