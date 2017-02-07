#include <cstdio>
#include <unordered_set>
#include <algorithm>


using namespace std;

int main(void) {
	int n = 0;
	int inputNumber = 0;
	unordered_set<int> set;

	scanf("%d", &n);

	
	for (int i = 0, temp = 0; i < n; i++) {
		scanf("%d", &temp);

		set.insert(temp);
	}
	
	scanf("%d", &inputNumber);

	for (int i = 0, temp = 0; i < inputNumber; i++) {
		scanf("%d", &temp);

		if (set.find(temp) == set.end()) {
			puts("0");
		}
		else {
			puts("1");
		}
	}

	return 0;
}