#include <bits/stdc++.h>
using namespace std;
int main() {
  int t, n, j, k, a, temp, flat = 1;
  cin >> t;
  while (t--) {
    a = 0;
    cin >> n;
    int ans[n][n];
    for (j = 0; j < n; j++) {
      for (k = 0; k < n; k++) cin >> ans[j][k];
    }
    for (j = 0; j < n; j++) a += ans[j][j];
    for (j = 0; j < n; j++) {
      temp = 0;
      for (k = 0; k < n; k++) {
        temp += ans[j][k];
      }
      if (a != temp) flat = 0;
    }
    for (j = 0; j < n; j++) {
      temp = 0;
      for (k = 0; k < n; k++) {
        temp += ans[k][j];
      }
      if (a != temp) flat = 0;
    }
    temp = 0;
    for (j = 0; j < n; j++) temp += ans[j][n - 1 - j];
    if (a != temp) flat = 0;
    if (flat == 1)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
}