#include <iostream>
#include <cstring>

#define PLAYER_NAME_MAX 21

using namespace std;

int main(void) {
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int p;

		cin >> p;

		int maxIdx = 0;
		int max = 0;

		char player[PLAYER_NAME_MAX];

		for (int j = 0; j < p; j++) {
			int c;
			char input[PLAYER_NAME_MAX];

			cin >> c >> input;

			if (c > max) {
				max = c;
				strcpy(player, input);
			}
		}

		cout << player << endl;
	}


	return 0;
}