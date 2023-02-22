#include <bits/stdc++.h>
using namespace std;
float _pjs(int n, float array[]) {
  float total = 0, pjs;
  for (int i = 0; i < n; i++) total += array[i];
  pjs = total / n;
  return pjs;
}
int main() {
  int n;
  float pjs;
  cin >> n;
  float array[n];
  for (int i = 0; i < n; i++) {
    cin >> array[i];
  }
  pjs = _pjs(n, array);
  cout<<fixed<<setprecision(2)<<pjs<<endl;
  printf("%.2f", pjs);
  return 0;
}
