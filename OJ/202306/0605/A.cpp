#include <bits/stdc++.h>
using namespace std;
class CSet {
public:
  int n;
  shared_ptr<int[]> data{new int[10010]};
  CSet() { n = 0; }
  friend ostream &operator<<(ostream &os, CSet &a) {
    for (int i = 0; i < a.n; i++) {
      os << a.data[i];
      if (i != a.n - 1)
        os << ' ';
    }
    return os;
  }
  CSet operator+(const CSet &b) {
    CSet c;
    for (int i = 0; i < n; i++) {
      bool unique = true;
      for (int j = 0; j < c.n; j++)
        if (c.data[j] == data[i])
          unique = false;
      if (unique)
        c.data[c.n++] = data[i];
    }
    for (int i = 0; i < b.n; i++) {
      bool unique = true;
      for (int j = 0; j < c.n; j++)
        if (c.data[j] == b.data[i])
          unique = false;
      if (unique)
        c.data[c.n++] = b.data[i];
    }
    return c;
  }
  CSet operator-(const CSet &b) {
    CSet c;
    for (int i = 0; i < n; i++) {
      bool unique = true;
      for (int j = 0; j < b.n; j++)
        if (data[i] == b.data[j])
          unique = false;
      if (unique)
        c.data[c.n++] = data[i];
    }
    return c;
  }
  CSet operator*(const CSet &b) {
    CSet c;
    for (int i = 0; i < n; i++) {
      bool unique = true;
      for (int j = 0; j < b.n; j++)
        if (data[i] == b.data[j])
          unique = false;
      if (!unique)
        c.data[c.n++] = data[i];
    }
    return c;
  }
};
int main() {
  int t;
  cin >> t;
  while (t--) {
    CSet a, b;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
      cin >> a.data[i];
    a.n = n;
    cin >> n;
    for (int i = 0; i < n; i++)
      cin >> b.data[i];
    b.n = n;
    cout << "A:" << a << endl;
    cout << "B:" << b << endl;
    auto c = a + b;
    cout << "A+B:" << c << endl;
    c = a * b;
    cout << "A*B:" << c << endl;
    c = (a - b) + (b - a);
    cout << "(A-B)+(B-A):" << c << endl;
    if (t != 0)
      cout << endl;
  }
  return 0;
}