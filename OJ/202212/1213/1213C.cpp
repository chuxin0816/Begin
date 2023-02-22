#include <bits/stdc++.h>
using namespace std;
auto nixugeshu(string a) {
  int cnt = 0;
  for (auto i = a.begin(); i < a.end() - 1; ++i) {
    if (*i > *(i + 1)) cnt++;
  }
  return cnt;
}
auto nixustring(string a) {
  for (auto i = a.begin(); i < a.end() - 1; ++i) {
    if (*i > *(i + 1)) cout << *i << " " << *(i + 1) << endl;
  }
}
int main() {
  int t;
  cin >> t;
  string a;
  while (t--) {
    cin >> a;
    cout << nixugeshu(a) << endl;
    nixustring(a);
  }
  return 0;
}