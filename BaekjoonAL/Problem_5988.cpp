#include <cstdio>
#include <cstring>

int main(void){
	int n;

	scanf("%d", &n);

	for(int i=0; i<n; i++){
		char k[61];

		scanf("%s", k);

		int len = strlen(k);

		if((k[len-1]-'0') % 2 == 0){
			printf("even\n");
		}else{
			printf("odd\n");
		}
	}

	return 0;
}
