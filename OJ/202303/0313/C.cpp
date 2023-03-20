#include <bits/stdc++.h>
using namespace std;
void paixu(int &a, int &b, int &c) {
  int sum = a + b + c;
  int Max = max(a, max(b, c));
  int Min = min(a, min(b, c));
  int Mid = sum - Max - Min;
  a = Max, b = Mid, c = Min;
}
int main() {
  int a, b, c, t;
  cin >> t;
  while (t--) {
    cin >> a >> b >> c;
    paixu(a, b, c);
    cout << a << ' ' << b << ' ' << c << endl;
  }
  return 0;
}