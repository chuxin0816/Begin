#include <bits/stdc++.h>
using namespace std;
class CTelNumber {
 public:
  char* str = new char[8];
  CTelNumber(string p) {
    for (int i = 0; i < 7; ++i) str[i] = p[i];
  }
  ~CTelNumber() { delete[] str; }
  CTelNumber(const CTelNumber& a) {
    switch (a.str[0]) {
      case '2':
      case '3':
      case '4':
        for (int i = 1; i <= 7; ++i) str[i] = a.str[i - 1];
        str[0] = '8';
        break;
      case '5':
      case '6':
      case '7':
      case '8':
        for (int i = 1; i <= 7; ++i) str[i] = a.str[i - 1];
        str[0] = '2';
        break;
      default:
        break;
    }
  }
  void print() {
    if (str[0] != '2' && str[0] != '8')
      cout << "Illegal phone number\n";
    else {
      for (int i = 0; i < 8; ++i) cout << str[i];
      cout << endl;
    }
  };
};
int main() {
  int n;
  cin >> n;
  while (n--) {
    string ans;
    cin >> ans;
    bool hefa = true;
    for (auto e : ans) {
      if (!isdigit(e)) {
        cout << "Illegal phone number\n";
        hefa = false;
        break;
      }
    }
    if (!hefa) continue;
    if (ans.size() != 7) {
      cout << "Illegal phone number\n";
      break;
    }
    CTelNumber a(ans);
    CTelNumber b(a);
    b.print();
  }
  return 0;
}