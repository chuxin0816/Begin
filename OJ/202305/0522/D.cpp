#include <bits/stdc++.h>
using namespace std;
class CDate {
 private:
  int year, month, day;

 public:
  CDate(int y = 0, int m = 0, int d = 0) : year(y), month(m), day(d) {}
  int getDiffDay(CDate t) {
    tm t1{0, 0, 0, day, month - 1, year - 1900};
    tm t2{0, 0, 0, t.day, t.month - 1, t.year - 1900};
    time_t time1 = mktime(&t1);
    time_t time2 = mktime(&t2);
    return (time2 - time1) / 86400;
  }
};
class Pet {
 protected:
  string name;  // 姓名

  float length;  // 身长

  float weight;  // 体重

  CDate current;  // 开始记录时间

 public:
  Pet(string n, float l, float w, CDate c)
      : name(n), length(l), weight(w), current(c) {}
  virtual void display(CDate day) = 0;  // 输出目标日期时宠物的身长和体重
};
class Cat : public Pet {
 public:
  Cat(string n, float l, float w, CDate c) : Pet(n, l, w, c) {}
  void display(CDate day) override {
    int t = day.getDiffDay(current);
    if (t < 0)
      cout << "error\n";
    else {
      length += t * 0.1, weight += t * 0.2;
      cout << name << " after " << t << " day: length=" << fixed
           << setprecision(2) << length << ",weight=" << fixed
           << setprecision(2) << weight << "\n";
    }
  }
};
class Dog : public Pet {
 public:
  Dog(string n, float l, float w, CDate c) : Pet(n, l, w, c) {}
  void display(CDate day) override {
    int t = day.getDiffDay(current);
    if (t < 0)
      cout << "error\n";
    else {
      length += t * 0.2, weight += t * 0.1;
      cout << name << " after " << t << " day: length=" << fixed
           << setprecision(2) << length << ",weight=" << fixed
           << setprecision(2) << weight << "\n";
    }
  }
};
int main() {
  int n, y, m, d;
  cin >> n >> y >> m >> d;
  CDate day(y, m, d);
  while (n--) {
    int type;
    string name;
    float length, weight;
    int y, m, d;
    cin >> type >> name >> length >> weight >> y >> m >> d;
    CDate current(y, m, d);
    if (type == 1) {
      Cat cat(name, length, weight, current);
      cat.display(day);
    } else if (type == 2) {
      Dog dog(name, length, weight, current);
      dog.display(day);
    }
  }
  return 0;
}