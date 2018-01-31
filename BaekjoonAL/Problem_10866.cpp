#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main(void){
	deque <int> d;
	int n, x;
	int r;

	cin >> n;

	for(int i=0; i<n; i++){
		string c;

		cin >> c;

		if(c=="push_back"){
			cin >> x;
			d.push_back(x);
		}else if(c=="push_front"){
			cin >> x;
			d.push_front(x);
		}else if(c=="pop_front"){
			if(d.empty()){
				cout << "-1" << endl;
			}else{
				cout << d.front() << endl;
				d.pop_front();
			}
		}else if(c=="pop_back"){
			if(d.empty()){
				cout << "-1" << endl;
			}else{
				cout << d.back() << endl;
				d.pop_back();
			}
		}else if(c=="size"){
			cout << d.size() << endl;
		}else if(c=="empty"){
			if(d.empty()){
				cout << "1" << endl;
			}else{
				cout << "0" << endl;
			}
		}else if(c=="front"){
			if(d.empty()){
				cout << "-1" << endl;
			}else{
				cout << d.front() << endl;
			}
		}else if(c=="back"){
			if(d.empty()){
				cout << "-1" << endl;
			}else{
				cout << d.back() << endl;
			}
		}
	}


	return 0;
}
