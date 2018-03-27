#include<cstdio>

bool ns[10000];

int getNSelfNum(int n){
	int result = n;

	while(n>0){
		result += (n % 10);
		n /= 10;
	}

	return result;
}

int main(void){
	for(int i=1; i<10000; i++){
		int idx = getNSelfNum(i);

		if(idx < 10000){
			ns[idx] = true;
		}
	}

	for(int i=1; i<10000; i++){
		if(!ns[i]){
			printf("%d\n", i);
		}
	}

	return 0;
}
