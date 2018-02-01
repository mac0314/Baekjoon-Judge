#include <cstdio>
#include <map>
#include <string>

using namespace std;

string s[100002];
map<string, int> m;

int main(void){
	int n, p;

	scanf("%d %d", &n, &p);

	for(int i=1; i<=n; i++){
		char name[30];
		scanf("%s", name);

		s[i] = name;

		m.insert(map<string, int>::value_type(s[i], i));
	}

	for(int i=1; i<=p; i++){
		int num=0;
		char cc;
		string q;
		char key[30];

		scanf("%s", key);
		q = key;

		cc = q[0];

		if(cc >= '0' && cc <= '9'){
			num = stoi(q);

			printf("%s\n", s[num].c_str());
		}else{
			int result = m[q];
			printf("%d\n", result);
		}
	}

	return 0;
}
