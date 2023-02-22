#include <bits/stdc++.h>
using namespace std;
int fibonaqie(int n) {
  if (n == 1 || n == 2)
    return 1;
  else
    return fibonaqie(n - 1) + fibonaqie(n - 2);
}
int main() {
  int t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    cout << fibonaqie(n) << endl;
  }
  return 0;
}