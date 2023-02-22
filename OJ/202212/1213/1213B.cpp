#include <bits/stdc++.h>
using namespace std;
int dianji(int a[], int b[], int n) {
  auto sum{0};
  for (auto i = 0; i < n; ++i) sum += a[i] * b[i];
  return sum;
}
int main() {
  int n;
  cin >> n;
  int a[n], b[n];
  for (auto i = 0; i < n; ++i) cin >> a[i];
  for (auto i = 0; i < n; ++i) cin >> b[i];
  cout << dianji(a, b, n) << endl;
  return 0;
}