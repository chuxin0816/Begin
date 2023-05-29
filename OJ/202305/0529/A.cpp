#include <bits/stdc++.h>
using namespace std;
class Complex {
 private:
  int real, image;

 public:
  Complex(int real = 0, int image = 0) : real(real), image(image) {}
  Complex operator+(Complex x) {
    return Complex(real + x.real, image + x.image);
  }
  Complex operator-(Complex x) {
    return Complex(real - x.real, image - x.image);
  }
  Complex operator*(Complex x) {
    return Complex(real * x.real - image * x.image,
                   image * x.real + real * x.image);
  }
  void print() { cout << "Real=" << real << " Image=" << image << endl; }
};
int main() {
  int real, vir;
  cin >> real >> vir;
  Complex a(real, vir);
  cin >> real >> vir;
  Complex b(real, vir);
  auto &&c = a + b;
  c.print();
  c = a - b;
  c.print();
  c = a * b;
  c.print();
  return 0;
}