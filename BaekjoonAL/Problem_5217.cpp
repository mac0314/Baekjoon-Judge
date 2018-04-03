#include <iostream>

using namespace std;

int n[100];
bool c[13];

int main(void){
	int t;
	int idx=0;

	cin >> t;
	
	for(int k=0; k<t; k++){
		cin >> n[idx];
		
		c[n[idx]] = true;

		idx++;
	}

	for(int k=1; k<=12; k++){
		if(c[k]){
			cout << "Pairs for " << k << ":";

    	int cnt = 0;
    	for(int i=1; i<=12; i++){
    	  for(int j=1+i; j<=12-i; j++){
      	  if(cnt > 0){
        	  if(i+j == k){
          	  cout << ", " << i << " " << j;
            	cnt++;
   	       }
    	    }else{
      	    if(i+j == k){
        	    cout << " " << i << " " << j;
          	  cnt++;
         	 	}
      	 	}
     	 	}
    	}
    	cout << '\n';
		}
	}

	return 0;
}
