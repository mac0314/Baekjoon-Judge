#include <cstdio>
#include <cmath>


int main(void){
	int r = 0;
	double uResult = 0;
	double tResult = 0;

	scanf("%d", &r);

	uResult = r * r * M_PI;
	tResult = r * r * 2;

	printf("%.6f\n", uResult);
	printf("%.6f\n", tResult);

	return 0;
}
