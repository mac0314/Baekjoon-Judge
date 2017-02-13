#include <iostream>

using namespace std;

int getGcd(int p, int q);
int getLcm(int p, int q, int gcd);

int main(void) {
	int a, b;
	int gcd;
	int lcm;

	cin >> a >> b;

	gcd = getGcd(a, b);
	lcm = getLcm(a, b, gcd);

	cout << gcd << endl;
	cout << lcm << endl;


	return 0;
}

int getGcd(int p, int q){
	if (q == 0) return p;
	return getGcd(q, p%q);
}

int getLcm(int p, int q, int gcd) {
	int result = 1;
	int pTemp = p / gcd;
	int qTemp = q / gcd;

	result = pTemp * qTemp * gcd;

	return result;
}