#include <bits/stdc++.h>
using namespace std;
const double pi = 3.14;
class CPoint {
 public:
  double x, y;
};
class CCircle : public CPoint {
 public:
  double r;
  void getArea() {
    cout << "Circle:(" << x << ',' << y << ")," << r << endl
         << "Area:" << pi * r * r << endl;
  }
};
class CCylinder : public CCircle {
 public:
  double h;
  void getVolume() {
    cout << "Cylinder:(" << x << ',' << y << ")," << r << ',' << h << endl
         << "Volume:" << pi * r * r * h << endl;
  }
};
int main() {
  double x, y, r, h;
  cin >> x >> y >> r;
  CCircle circle{x, y, r};
  circle.getArea();
  cin >> x >> y >> r >> h;
  CCylinder cylinder{x, y, r, h};
  cylinder.getVolume();
  return 0;
}