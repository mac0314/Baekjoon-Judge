#include <iostream>


#define SCHOOL_MAX 100
#define SCHOOL_NAME_MAX 21

using namespace std;

int main(void) {
	int t;
	int n;


	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> n;

		int max = 0;
		int idx = 0;

		int l[SCHOOL_MAX];
		char s[SCHOOL_MAX][SCHOOL_NAME_MAX];

		for (int j = 0; j < n; j++) {
			cin >> s[j] >> l[j];

			if (l[j] > max) {
				max = l[j];
				idx = j;
			}
		}

		cout << s[idx] << endl;
	}



	return 0;
}