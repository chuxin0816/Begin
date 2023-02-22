#include <bits/stdc++.h>
using namespace std;
int GetPathNumber(int a, int b) {
  int n = b - a;
  if (n == 1)
    return 1;
  else if (n == 2)
    return 2;
  else
    return GetPathNumber(a, b - 1) + GetPathNumber(a, b - 2);
}
int main() {
  int t, a, b;
  cin >> t;
  while (t--) {
    cin >> a >> b;
    cout << GetPathNumber(a, b) << endl;
  }
  return 0;
}