#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <unordered_map>

#define INPUT_NUMBER_MAX 3
#define INPUT_LENGTH_MAX 10

using namespace std;

enum INPUT { BLACK = 0, BROWN, RED, ORANGE, YELLOW, GREEN, BLUE, VIOLET, GREY, WHITE };
typedef std::unordered_map<string, INPUT> MyMap;

// http://stackoverflow.com/questions/201593/is-there-a-simple-way-to-convert-c-enum-to-string/11586083#11586083
// String switch to Enum
struct colorInputMap : public MyMap
{
	colorInputMap()
	{
		this->operator[]("black") = BLACK;
		this->operator[]("brown") = BROWN;
		this->operator[]("red") = RED;
		this->operator[]("orange") = ORANGE;
		this->operator[]("yellow") = YELLOW;
		this->operator[]("green") = GREEN;
		this->operator[]("blue") = BLUE;
		this->operator[]("violet") = VIOLET;
		this->operator[]("grey") = GREY;
		this->operator[]("white") = WHITE;
	};
	~colorInputMap() {}
};


int main(void) {
	
	unordered_map<string, INPUT> colorMap;

	MyMap::hasher hfn = colorMap.hash_function();

	string inputString[INPUT_NUMBER_MAX] = {};
	int inputData[INPUT_NUMBER_MAX] = {};
	long long resistorValue;

	for (int i = 0; i < INPUT_NUMBER_MAX; i++) {
		getline(cin, inputString[i]);
		//cout << inputString[i] << endl;

		transform(inputString[i].begin(), inputString[i].end(), inputString[i].begin(), ::tolower);
		colorInputMap colorInputMap;
		//cout <<colorInputMap[inputString[i]] << endl;
		inputData[i] = colorInputMap[inputString[i]];

	}

	resistorValue = (inputData[0] * 10 + inputData[1]) * powl(10, inputData[2]);
	
	cout << resistorValue << endl;

	return 0;
}