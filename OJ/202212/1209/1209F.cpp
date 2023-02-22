#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, n, m, x, ans1[100], sc[100];
  cin >> a >> n >> m >> x;
  ans1[1] = a, ans1[2] = a, sc[1] = a;
  if (x == 1 || x == 2)
    cout << a << endl;
  else {
    for (int k = 0; k <= m; k++) {
      sc[2] = k;
      for (int i = 3; i < n; i++) {
        sc[i] = sc[i - 1] + sc[i - 2];
        ans1[i] = ans1[i - 1] + sc[i] - sc[i - 1];
      }
      if (ans1[n - 1] == m) {
        cout << ans1[x] << endl;
        break;
      }
    }
  }
  return 0;
}
