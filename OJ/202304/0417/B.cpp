#include <bits/stdc++.h>
using namespace std;
class Point {
 public:
  Point(double xx, double yy) : x(xx), y(yy) {}
  friend double Distance(Point &a, Point &b);

 private:
  double x, y;
};
double Distance(Point &a, Point &b) {
  return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}
int main() {
  int n, x, y;
  cin >> n;
  while (n--) {
    cin >> x >> y;
    Point a(x, y);
    cin >> x >> y;
    Point b(x, y);
    cout << (int)Distance(a, b) << endl;
  }
  return 0;
}