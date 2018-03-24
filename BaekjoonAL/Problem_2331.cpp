#include <iostream>

using namespace std;
int check[1000000];

int pow(int x, int p){
	int result = 1;
	
	for(int i=0; i<p; i++){
		result = result * x;
	}

	return result;
}

int next(int a, int p){
	int result = 0;

	while(a > 0){
		result += pow(a % 10, p);
		a /= 10;
	}

	return result;
}

int length(int a, int p, int count){
	if(check[a] != 0){
		return check[a] - 1;
	}

	check[a] = count;
	
	int b = next(a, p);
	return length(b, p, count + 1);
}

int main(void){
	int a, p;

	cin >> a >> p;

	cout << length(a, p, 1) << endl;

	return 0;
}

