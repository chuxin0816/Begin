#include <bits/stdc++.h>
using namespace std;
float fact(int n) {
  float sum = 1;
  for (int i = 1; i <= n; i++) sum *= i;
  return sum;
}
int main() {
  int m, n;
  float sum = 0;
  cin >> m >> n;
  sum = fact(m) / (fact(n) * fact(m - n));
  cout << sum << endl;
}
