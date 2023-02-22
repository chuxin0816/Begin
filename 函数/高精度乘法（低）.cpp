#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  int b, jinwei = 0;
  vector<int> a;
  cin >> s >> b;
  for (int i = 0; i < s.size(); ++i) {
    a.push_back(s[s.size() - i - 1] - '0');
  }
  for (int i = 0; i < a.size(); ++i) {
    a[i] = a[i] * b + jinwei;
    jinwei = a[i] / 10;
    a[i] %= 10;
  }
  while (jinwei != 0) {
    a.push_back(jinwei % 10);
    jinwei /= 10;
  }
  for (int i = a.size() - 1; i >= 0; --i) {
    cout << a[i];
  }
  cout << endl;
  return 0;
}