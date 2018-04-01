#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Person{
	string name;
	int kor;
	int eng;
	int math;
};

int main(void){
	ios::sync_with_stdio(false);
	int n;

	cin >> n;

	vector<Person> data(n);

	for(int i=0; i<n; i++){
		cin >> data[i].name >> data[i].kor >> data[i].eng >> data[i].math;
	}

	sort(data.begin(), data.end(), [](Person u, Person v){
		return (u.kor > v.kor) || (u.kor == v.kor && u.eng < v.eng) || (u.kor == v.kor && u.eng == v.eng && u.math > v.math) || (u.kor == v.kor && u.eng == v.eng && u.math == v.math && u.name < v.name);
			});

	for(auto p : data){
		cout << p.name << '\n';
	}

	return 0;
}
