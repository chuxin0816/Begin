#include <bits/stdc++.h>
using namespace std;
class CFraction {
 private:
  int fz, fm;

 public:
  CFraction(int fz_val, int fm_val);
  CFraction add(const CFraction &r);
  CFraction sub(const CFraction &r);
  CFraction mul(const CFraction &r);
  CFraction div(const CFraction &r);
  int getGCD();  // 求对象的分子和分母的最大公约数
  void print();
};
CFraction::CFraction(int fz_val, int fm_val) : fz(fz_val), fm(fm_val) {}
CFraction CFraction::add(const CFraction &r) {
  fz = fz * r.fm + fm * r.fz;
  fm *= r.fm;
  int GCD = getGCD();
  fz /= GCD;
  fm /= GCD;
  if (fz > 0 && fm < 0) fz *= -1, fm *= -1;
  return *this;
}
CFraction CFraction::sub(const CFraction &r) {
  fz = fz * r.fm - fm * r.fz;
  fm *= r.fm;
  int GCD = getGCD();
  fz /= GCD;
  fm /= GCD;
  if (fz > 0 && fm < 0) fz *= -1, fm *= -1;

  return *this;
}
CFraction CFraction::mul(const CFraction &r) {
  fz *= r.fz;
  fm *= r.fm;
  int GCD = getGCD();
  fz /= GCD;
  fm /= GCD;
  if (fz > 0 && fm < 0) fz *= -1, fm *= -1;

  return *this;
}
CFraction CFraction::div(const CFraction &r) {
  fz *= r.fm;
  fm *= r.fz;
  int GCD = getGCD();
  fz /= GCD;
  fm /= GCD;
  if (fz > 0 && fm < 0) fz *= -1, fm *= -1;

  return *this;
}
int CFraction::getGCD() {
  int a = fz, b = fm;
  if (a < b) swap(a, b);
  int r = a % b;
  while (r) {
    a = b;
    b = r;
    r = a % b;
  }
  return b;
}
void CFraction::print() { cout << fz << '/' << fm << endl; }
int main() {
  int t, a1, b1, a2, b2;
  char x;
  cin >> t;
  while (t--) {
    cin >> a1 >> x >> b1 >> a2 >> x >> b2;
    CFraction cf1(a1, b1), cf2(a2, b2), temp(a1, b1);
    cf1.add(cf2);
    cf1.print();
    cf1 = temp;
    cf1.sub(cf2);
    cf1.print();
    cf1 = temp;
    cf1.mul(cf2);
    cf1.print();
    cf1 = temp;
    cf1.div(cf2);
    cf1.print();
    cf1 = temp;
    cout << endl;
  }
  return 0;
}