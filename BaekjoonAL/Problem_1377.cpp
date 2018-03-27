#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main(void){
  int n;

  scanf("%d", &n);

  vector<pair<int, int>> a(n);

  for(int i=0; i<n; i++){
    scanf("%d", &a[i].first);
    a[i].second = i;
  }

  sort(a.begin(), a.end());
  int result = 0;

  for(int i=0; i<n; i++){
    if(result < a[i].second - i){
      result = a[i].second - i;
    }
  }
  printf("%d\n", result + 1);

  return 0;
}
