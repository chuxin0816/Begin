#include <bits/stdc++.h>
using namespace std;
#define int double
class Equation {
 public:
  Equation() : a(1), b(1), c(0) {}
  Equation(int a, int b, int c) : a(a), b(b), c(c) {}
  void set(int a, int b, int c) { this->a = a, this->b = b, this->c = c; }
  void getRoot() {
    double delt = b * b - 4 * a * c;
    if (delt == 0)
      cout << fixed << setprecision(2) << "x1=x2=" << (-b / (2 * a)) << endl;
    else if (delt > 0)
      cout << fixed << setprecision(2) << "x1=" << ((-b + sqrt(delt)) / (2 * a))
           << " x2=" << ((-b - sqrt(delt)) / (2 * a)) << endl;
    else {
      delt *= -1;
      double real = -b / (2 * a), vir = sqrt(delt) / (2 * a);
      cout << "x1=";
      if (real == 0) {
        if (vir == 0)
          cout << "0 ";
        else
          cout << fixed << setprecision(2) << vir << "i ";
      } else {
        if (vir == 0)
          cout << fixed << setprecision(2) << real << endl;
        else if (vir > 0) {
          if (vir == 1)
            cout << fixed << setprecision(2) << real << '+' << "i ";
          else
            cout << fixed << setprecision(2) << real << '+' << vir << "i ";
        } else {
          if (vir == -1)
            cout << fixed << setprecision(2) << real << "-i ";
          else
            cout << fixed << setprecision(2) << real << vir << "i ";
        }
      }
      vir *= -1;
      cout << "x2=";
      if (real == 0) {
        if (vir == 0)
          cout << "0\n";
        else
          cout << fixed << setprecision(2) << vir << "i\n";
      } else {
        if (vir == 0)
          cout << fixed << setprecision(2) << real << endl;
        else if (vir > 0) {
          if (vir == 1)
            cout << fixed << setprecision(2) << real << '+' << "i\n";
          else
            cout << fixed << setprecision(2) << real << '+' << vir << "i\n";
        } else {
          if (vir == -1)
            cout << fixed << setprecision(2) << real << "-i\n";
          else
            cout << fixed << setprecision(2) << real << vir << "i\n";
        }
      }
    }
  }

 private:
  int a, b, c;
};
signed main() {
  int t, a, b, c;
  cin >> t;
  while (t--) {
    cin >> a >> b >> c;
    Equation eq(a, b, c);
    eq.getRoot();
  }
  return 0;
}