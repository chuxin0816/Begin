#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m, t, Min, Max;
  cin >> t;
  while (t--) {
    cin >> n >> m;
    int **ans = new int *[n];
    for (int i = 0; i < n; ++i) {
      ans[i] = new int[m];
      for (int j = 0; j < m; ++j) cin >> ans[i][j];
    }
    Min = Max = ans[0][0];
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
        Min = min(Min, ans[i][j]);
        Max = max(Max, ans[i][j]);
      }
    }
    cout << Min << ' ' << Max << endl;
    for (int i = 0; i < n; ++i) {
      delete[] ans[i];
    }
    delete[] ans;
  }
  return 0;
}