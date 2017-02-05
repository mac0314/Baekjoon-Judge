#include <iostream>

#define INF 9999999

using namespace std;

int main()
{
	int input;
	int min = INF;
	int result;
	int check;

	cin >> input;

	for (int y = 0; y <= (int)(input / 2); y++){
		if (((input - 2 * y) % 3) == 0){
			check = (input - 2 * y) / 3;

			if ((min > check) && (check >= y)) {
				min = check;
			}
		}
	}

	if (min == INF) {
		cout << -1 << endl;
	}
	else {
		cout << min << endl;
	}
}