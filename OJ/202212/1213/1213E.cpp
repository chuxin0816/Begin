#include <bits/stdc++.h>
using namespace std;
int shanglouti(int m) {
  if (m == 2)
    return 1;
  else if (m == 3)
    return 2;
  else
    return shanglouti(m - 1) + shanglouti(m - 2);
}
int main() {
  int n, m;
  cin >> n;
  while (n--) {
    cin >> m;
    cout << shanglouti(m) << endl;
  }
  return 0;
}