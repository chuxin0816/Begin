#include <bits/stdc++.h>
using namespace std;
int zs(int x) {
  if (x < 2) return 0;
  int i;
  for (i = 2; i * i <= x; i++) {
    if (x % i == 0) break;
  }
  if (i * i > x)
    return 1;
  else
    return 0;
}
int main() {
  int n, x;
  cin >> n;
  while (n--) {
    cin >> x;
    if (zs(x) == 1)
      cout << "prime\n";
    else
      cout << "not prime\n";
  }
  return 0;
}