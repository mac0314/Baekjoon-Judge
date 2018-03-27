#include <cstdio>
#include <cstring>

char w[1000001];
int c[26];

int main(void){
	scanf("%s", w);

	int len = strlen(w);

	//printf("%d\n", len);

	for(int i=0; i<len; i++){
		//printf("%c\n", w[i]);
		if(w[i] >= 97){
			c[w[i]-97]++;
		}else if(w[i] >= 65){
			c[w[i]-65]++;
		}
	}

	int max = 0;
	int idx = 0;
	bool check = false;

	for(int i=0; i<26; i++){
		if(c[i] > max){
			max = c[i];
			idx = i;
			check = false;
		}else if(c[i] == max){
			check = true;
		}
	}

	if(check){
		printf("?\n");
	}else{
		printf("%c\n", idx+65);
	}

	return 0;
}
