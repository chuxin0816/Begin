#include <bits/stdc++.h>
using namespace std;
int ans[10];
void zhuheshu(auto n, auto r) {
  for (auto i = n; i > 0; --i) {
    ans[r] = i;
    if (r > 1)
      zhuheshu(i - 1, r - 1);
    else {
      for (auto i = ans[0]; i > 0; --i) cout << ans[i];
      cout << endl;
    }
  }
}
int main() {
  int n, r;
  cin >> n >> r;
  ans[0] = r;
  zhuheshu(n, r);
  return 0;
}