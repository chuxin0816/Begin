#include <bits/stdc++.h>
#include <iostream>
#include <ostream>
using namespace std;
class CPoint {
private:
  int x, y;

public:
  CPoint(int x = 0, int y = 0) : x(x), y(y) {}
  int getX() { return x; }
  int getY() { return y; }
  friend ostream &operator<<(ostream &os, CPoint &p) {
    os << p.x << ' ' << p.y;
    return os;
  }
};
class CRectangle {
public:
  CPoint p1, p2;
  int area;
  operator int() {
    return abs(p1.getX() - p2.getX()) * abs(p1.getY() - p2.getY());
  }
  CRectangle(int x1, int y1, int x2, int y2) : p1(x1, y1), p2(x2, y2) {}
  friend ostream &operator<<(ostream &os, CRectangle &rect) {
    os << rect.p1 << ' ' << rect.p2;
    return os;
  }
  bool operator==(CRectangle &rect) {
    return p1.getX() == rect.p1.getX() && p1.getY() == rect.p1.getY() &&
           p2.getX() == rect.p2.getX() && p2.getY() == rect.p2.getY();
  }
  bool operator>(CPoint &p) {
    return p.getX() >= p1.getX() && p.getX() <= p2.getX() &&
           p.getY() <= p1.getY() && p.getY() >= p2.getY();
  }
  bool operator>(CRectangle &rect) {
    return *this > rect.p1 && *this > rect.p2;
  }
  bool operator*(CRectangle &rect) {
    return max(p1.getX(), rect.p1.getX()) <= min(p2.getX(), rect.p2.getX()) &&
           min(p1.getY(), rect.p1.getY()) >= max(p2.getY(), rect.p2.getY());
  }
};
int main() {
  int t, x1, x2, y1, y2;
  cin >> t;
  while (t--) {
    cin >> x1 >> y1 >> x2 >> y2;
    CRectangle rect1(x1, y1, x2, y2);
    cin >> x1 >> y1 >> x2 >> y2;
    CRectangle rect2(x1, y1, x2, y2);
    cout << "矩形1:" << rect1 << ' ' << (int)rect1 << endl;
    cout << "矩形2:" << rect2 << ' ' << (int)rect2 << endl;
    if (rect1 == rect2)
      cout << "矩形1与矩形2相等" << endl;
    else if (rect2 > rect1)
      cout << "矩形2包含矩形1" << endl;
    else if (rect1 > rect2)
      cout << "矩形1包含矩形2" << endl;
    else if (rect1 * rect2)
      cout << "矩形1和矩形2相交" << endl;
    else
      cout << "矩形1和矩形2不相交" << endl;
    cout << endl;
  }
  return 0;
}