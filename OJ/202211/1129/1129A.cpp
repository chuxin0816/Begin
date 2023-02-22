#include <bits/stdc++.h>
using namespace std;
int main() {
  int t, n, max, sum;
  cin >> t;
  while (t--) {
    cin >> n;
    int array[n][n];
    for (int j = 0; j < n; j++) {
      for (int k = 0; k < n; k++) cin >> array[j][k];
    }
    for (int j = 0; j < n; j++) {
      sum = 0;
      max = array[0][j];
      for (int k = 0; k < n; k++) {
        sum += array[k][j];
        if (array[k][j] > max) max = array[k][j];
      }
      cout << max << " " << sum << endl;
    }
  }
  return 0;
}
