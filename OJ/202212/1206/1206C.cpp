#include <bits/stdc++.h>
using namespace std;
bool isprime(int x) {
  int i;
  for (i = 2; i <= x; i++) {
    if (x % i == 0) break;
  }
  return i == x;
}
int main() {
  int m, n, sum = 0;
  cin >> m >> n;
  for (int i = m; i <= n; i++) {
    if (isprime(i)) sum += i;
  }
  cout << sum << endl;
}