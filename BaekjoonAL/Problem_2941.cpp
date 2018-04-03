#include <cstdio>
#include <cstring>

#define MAX 101

char input[MAX];

int main(void){
	int result = 0;
	scanf("%s", input);

	int len = strlen(input);

	for(int i=0; i<len; i++){
		if(input[i] == 'c' && (input[i+1] == '=' || input[i+1] == '-')){
			i++;
		}else if(input[i] == 'd'){
			if(input[i+1] == '-'){
				i++;
			}else if(input[i+1] == 'z' && input[i+2] == '='){
				i += 2;
			}
		}else if((input[i] == 'l' || input[i] == 'n') && input[i+1] == 'j'){
			i++;
		}else if((input[i] == 's' || input[i] == 'z') && input[i+1] == '='){
			i++;
		}

		result++;
	}

	printf("%d\n", result);

	return 0;
}
