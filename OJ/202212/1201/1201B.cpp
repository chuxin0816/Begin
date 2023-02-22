#include <bits/stdc++.h>
using namespace std;
int _gys(int a, int b) {
  int gys = 1;
  for (int i = 1; i <= min(a, b); i++) {
    if (a % i == 0 && b % i == 0) gys = i;
  }
  return gys;
}
int _gbs(int a, int b) {
  int gbs;
  for (int i = max(a, b);; i++) {
    if (i % a == 0 & i % b == 0) {
      gbs = i;
      break;
    }
  }
  return gbs;
}
int main() {
  int n, a, b, gys, gbs;
  cin >> n;
  while (n--) {
    cin >> a >> b;
    gys = _gys(a, b);
    gbs = _gbs(a, b);
    cout << gys << ' ' << gbs << endl;
  }
  return 0;
}