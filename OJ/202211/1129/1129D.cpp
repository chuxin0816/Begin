#include <bits/stdc++.h>
using namespace std;
int zs(int x) {
  int j;
  if (x < 2) return 0;
  for (j = 2; j * j <= x; j++) {
    if (x % j == 0) return 0;
  }
  return 1;
}
int main() {
  int maxn, minn, n, l, j, k, x, difference;
  char temp;
  string ans;
  cin >> n;
  while (n--) {
    maxn = minn = 0;
    cin >> ans;
    l = ans.size();
    for (j = 0; j < l; j++) {
      x = 0;
      temp = ans[j];
      for (k = 0; k < l; k++) {
        if (ans[k] == temp) x++;
      }
      if (x > maxn) maxn = x;
    }
    minn = maxn;
    for (j = 0; j < l; j++) {
      x = 0;
      temp = ans[j];
      for (k = 0; k < l; k++) {
        if (ans[k] == temp) x++;
      }
      if (x < minn) minn = x;
    }
    difference = maxn - minn;
    if (zs(difference) == 1)
      cout << "Lucky Word" << endl << difference << endl;
    else
      cout << "No Answer\n"
           << "0\n";
  }
}