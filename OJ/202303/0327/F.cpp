#include <bits/stdc++.h>
using namespace std;
class Complex {
 public:
  Complex() : real(1), vir(1) {}
  Complex(int a, int b) : real(a), vir(b) {}
  void add(const Complex& x) {
    real += x.real;
    vir += x.vir;
    cout << "sum:";
    print();
  }
  void sub(const Complex& x) {
    real -= x.real;
    vir -= x.vir;
    cout << "remainder:";
    print();
  }
  void print() {
    if (real == 0) {
      if (vir == 0)
        cout << "0\n";
      else
        cout << vir << "i\n";
    } else {
      if (vir == 0)
        cout << real << endl;
      else if (vir > 0) {
        if (vir == 1)
          cout << real << '+' << "i\n";
        else
          cout << real << '+' << vir << "i\n";
      } else {
        if (vir == -1)
          cout << real << "-i\n";
        else
          cout << real << vir << "i\n";
      }
    }
  }

 private:
  int real, vir;
};
int main() {
  int t, a1, b1, a2, b2;
  cin >> t;
  while (t--) {
    cin >> a1 >> b1 >> a2 >> b2;
    Complex c1(a1, b1), c2(a2, b2), temp(a1, b1);
    c1.add(c2);
    c1 = temp;
    c1.sub(c2);
  }
  return 0;
}