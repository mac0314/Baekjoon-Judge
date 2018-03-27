#include <cstdio>

bool oneNum(int n){
	if(n == 1000){
		return false;
	}
	int a, b, c;
	a = n % 10;
	n /= 10;
	b = n % 10;
	n /= 10;
	c = n % 10;
	if(a-b==b-c){
		return true;
	}else{
		return false;
	}
}

int main(void){
	int n;
	int result = 0;
	bool flag = false;

	scanf("%d", &n);

	if(n>=100){
		result += 99;
		for(int i=n; i>=100; i--){
			bool check = oneNum(i);
			if(check){
				result++;
			}
		}
	}else{
		result = n;
	}

	printf("%d\n", result);

	return 0;
}
