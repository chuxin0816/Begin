#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, j, k;
  cin >> n;
  int ans[501][501], dp[501][501];
  memset(ans,0,sizeof(ans));
  memset(dp,0,sizeof(dp));
  for (j = 1; j <= n; j++) {
    for (k = 1; k <= n; k++) cin >> ans[j][k];
  }
  dp[1][1] = ans[1][1];
  for (j = 2; j <= n; j++) {
    dp[j][1] = dp[j - 1][1] + ans[j][1];
    dp[1][j] = dp[1][j - 1] + ans[1][j];
  }
  for (j = 2; j <= n; j++) {
    for (k = 2; k <= n; k++) {
      dp[j][k] = ans[j][k] + max(dp[j - 1][k], dp[j][k - 1]);
    }
  }
  cout << dp[n][n] << endl;
}