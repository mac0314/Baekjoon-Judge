#include <cstdio>

int d[31];

int main(void){
	int n;

	scanf("%d", &n);

	d[0] = 1;
	for(int i=2; i<=n; i+=2){
		d[i] = d[i-2] * 3;
		for(int j=i-4; j>=0; j-=2){
			d[i] += d[j] * 2;
		}
	}

	printf("%d\n", d[n]);

	return 0;
}
