#include <bits/stdc++.h>
using namespace std;
class Fraction {
  int numerator, denominator;
  int common_divisor();  // 计算最大公约数
  void contracted();     // 分数化简
 public:
  Fraction(int = 0, int = 1);
  Fraction(Fraction &);
  Fraction operator+(Fraction);
  Fraction operator-(Fraction);
  Fraction operator*(Fraction);
  Fraction operator/(Fraction);
  void Set(int = 0, int = 1);
  void disp() {
    cout << "fraction= " << numerator << "/" << denominator << endl;
  }
};
Fraction::Fraction(int t1, int t2) : numerator(t1), denominator(t2) {}
Fraction::Fraction(Fraction &x) {
  numerator = x.numerator;
  denominator = x.denominator;
}
Fraction Fraction::operator+( Fraction x) {
  return Fraction(numerator * x.denominator + denominator * x.numerator,
                  denominator * x.denominator);
}
Fraction Fraction::operator-(Fraction x) {
  return Fraction(numerator * x.denominator - denominator * x.numerator,
                  denominator * x.denominator);
}
Fraction Fraction::operator*(Fraction x) {
  return Fraction(numerator * x.numerator, denominator * x.denominator);
}
Fraction Fraction::operator/(Fraction x) {
  return Fraction(numerator * x.denominator, denominator * x.numerator);
}
void Fraction::Set(int t1, int t2) { numerator = t1, denominator = t2; }
int main() {
  int t1, t2;
  cin >> t1 >> t2;
  Fraction a(t1, t2);
  cin >> t1 >> t2;
  Fraction b(t1, t2);
  auto &&c = a + b;
  c.disp();
  c = a - b;
  c.disp();
  c = a * b;
  c.disp();
  c = a / b;
  c.disp();
  return 0;
}