#include <bits/stdc++.h>
using namespace std;
const double pi = 3.1415926;
class Point {
  double x, y;

 public:
  Point() { x = 0, y = 0; }
  Point(double x_value, double y_value) : x(x_value), y(y_value) {}
  double getX() { return x; }  // 返回x的值
  double getY() { return y; }  // 返回y的值
  void setXY(double x1, double y1) { x = x1, y = y1; }
  void setx(double x_value) { x = x_value; }
  void setY(double y_value) { y = y_value; }
  double getDisTo(Point &p) {
    return sqrt(pow(x - p.x, 2) + pow(y - p.y, 2));
  }  // 计算当前点到参数点p的距离
  ~Point(){};
};
class Circle {
  Point centre;   // 圓心
  double radius;  // 半径
 public:
  Circle() {
    centre.setXY(0, 0);
    radius = 1;
  }  // 设置圆心位置为(0，0），半径为1
     // Circle(doublex,doubley.doubler)://设置园心位置为(x,y)，半径为r
  Circle(double x, double y, double r) {
    centre.setXY(x, y);
    radius = r;
  }
  double getArea() { return pi * radius * radius; }  // 返回圓的面积
  void movecentreTo(double x1, double y1) {
    centre.setXY(x1, y1);
  }  // 将圆心位置移动到(x1,y1)
  int contain(Point &p) {
    double dis = centre.getDisTo(p);
    if (dis <= radius)
      return 1;
    else
      return 0;
  }  // 判断圆与点p的关系，如果点p在圆内，返回1,否则返回0
};
int main() {
  double x, y, r;
  int n;
  cin >> x >> y >> r >> n;
  Circle c(x, y, r);
  Point p[n];
  for (int i = 0; i < n; ++i) {
    cin >> x >> y;
    p[i].setXY(x, y);
    if (c.contain(p[i]))
      cout << "inside\n";
    else
      cout << "outside\n";
  }
  cout << "after move the centre of circle:\n";
  cin >> x >> y;
  c.movecentreTo(x, y);
  for (int i = 0; i < n; ++i) {
    if (c.contain(p[i]))
      cout << "inside\n";
    else
      cout << "outside\n";
  }
  return 0;
}