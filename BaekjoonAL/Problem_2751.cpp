#include <cstdio>

int a[1000001];
int b[1000001];

void swap(int &a, int &b){
  int t = a;
  a = b;
  b = t;
}

void merge(int s, int e){
  int m = s + (e-s) / 2;
  int i = s;
  int j = m + 1;
  int k = 0;

  while(i <= m && j <= e){
    if(a[i] <= a[j]){
      b[k++] = a[i++];
    }else{
      b[k++] = a[j++];
    }
  }

  while(i <= m){
    b[k++] = a[i++];
  }
  while(j <= e){
    b[k++] = a[j++];
  }

  for(int i=s; i<=e; i++){
    a[i] = b[i-s];
  }
}

void sort(int s, int e){
  if(s == e){
    return;
  }
  int m = s + (e-s) / 2;

  sort(s, m);
  sort(m+1, e);
  merge(s, e);
}

int main(void){
  int n;

  scanf("%d", &n);

  for(int i=1; i<=n; i++){
    scanf("%d", &a[i]);
  }

  sort(1, n);


  for(int i=1; i<=n; i++){
    printf("%d\n", a[i]);
  }

  return 0;
}
