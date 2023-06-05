#include <bits/stdc++.h>
using namespace std;
class CXGraph {
public:
  int n;
  CXGraph(int n = 0) : n(n) {}
  friend ostream &operator<<(ostream &os, CXGraph a) {
    for (int i = 1; i <= a.n; i++) {
      for (int j = 1; j <= a.n; j++) {
        int l = min(i, a.n - i + 1), r = max(i, a.n - i + 1);
        if (l <= j && j <= r)
          os << 'X';
        else if (j < r && j != a.n)
          os << ' ';
      }
      os << endl;
    }
    return os;
  }
  CXGraph &operator++() {
    if (n < 21)
      n += 2;
    return *this;
  }
  CXGraph operator++(int) {
    CXGraph tmp = *this;
    if (n < 21)
      n += 2;
    return tmp;
  }
  CXGraph &operator--() {
    if (n > 1)
      n -= 2;
    return *this;
  };
  CXGraph operator--(int) {
    CXGraph tmp = *this;
    if (n > 1)
      n -= 2;
    return tmp;
  }
};
int main() {
  int t, n;
  string command;
  cin >> n;
  CXGraph xGraph(n);
  cin >> t;
  while (t--) {
    cin >> command;
    if (command == "show++")
      cout << xGraph++ << endl;
    else if (command == "++show")
      cout << ++xGraph << endl;
    else if (command == "show--")
      cout << xGraph-- << endl;
    else if (command == "--show")
      cout << --xGraph << endl;
    else if (command == "show")
      cout << xGraph << endl;
  }
  return 0;
}