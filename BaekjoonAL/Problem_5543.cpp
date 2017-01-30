#include <iostream>
#include <vector>
#include <algorithm>

#define BURGER_MAX 3
#define BEVERAGE_MAX 2

using namespace std;

int main(void) {
	vector<int> vBurger(BURGER_MAX);
	vector<int> vBeverage(BEVERAGE_MAX);

	vector<int>::iterator iterator;

	int hBurgerPrice;
	int mBurgerPrice;
	int lBurgerPrice;
	int cokePrice;
	int spritePrice;

	int maxPriceBurger;
	int maxPriceBeverage;

	int minPriceSet;

	cin >> hBurgerPrice >> mBurgerPrice >> lBurgerPrice;
	cin >> cokePrice >> spritePrice;


	vBurger[0] = hBurgerPrice;
	vBurger[1] = mBurgerPrice;
	vBurger[2] = lBurgerPrice;

	sort(vBurger.begin(), vBurger.end());

	/*
	// Check value
	for (vector<int>::iterator iterator = vBurger.begin(); iterator != vBurger.end(); iterator++) {
		int temp = *(iterator);
		cout << temp << " ";
	}
	cout << endl;
	*/

	vBeverage[0] = cokePrice;
	vBeverage[1] = spritePrice;

	sort(vBeverage.begin(), vBeverage.end());

	/*
	// Check value
	for (vector<int>::iterator iterator = vBeverage.begin(); iterator != vBeverage.end(); iterator++) {
		int temp = *(iterator);
		cout << temp << " ";
	}
	cout << endl;
	*/

	minPriceSet = vBurger[0] + vBeverage[0] - 50;

	cout << minPriceSet << endl;

	return 0;
}