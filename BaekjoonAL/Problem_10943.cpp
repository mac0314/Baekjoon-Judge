#include <iostream>
#include <cstdlib>
#include <ctime>

#define NUM_MAX 10

using namespace std;

int main(void) {
	int result = 0;

	srand(time(NULL));

	result = rand() % NUM_MAX + 1;

	cout << result << endl;

	return 0;
}