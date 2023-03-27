#include <bits/stdc++.h>
using namespace std;
class Point {
 private:
  double x, y;

 public:
  Point();
  Point(double x_value, double y_value);
  double getX();
  double getY();
  void setX(double x_value);
  void setY(double y_value);
  double distanceToAnotherPoint(Point p);
};
Point::Point() : x(0), y(0) {}
Point::Point(double x_value, double y_value) : x(x_value), y(y_value) {}
double Point::getX() { return x; }
double Point::getY() { return y; }
void Point::setX(double x_value) { x = x_value; }
void Point::setY(double y_value) { y = y_value; }
double Point::distanceToAnotherPoint(Point p) {
  return sqrt(pow((x - p.getX()), 2) + pow((y - p.getY()), 2));
}
int main() {
  int t;
  cin >> t;
  Point p1, p2;
  while (t--) {
    double x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    p1.setX(x1), p1.setY(y1), p2.setX(x2), p2.setY(y2);
    cout << fixed << setprecision(2) << "Distance of Point(" << x1 << ',' << y1
         << ") to Point(" << x2 << ',' << y2 << ") is "
         << p1.distanceToAnotherPoint(p2) << endl;
  }
  return 0;
}