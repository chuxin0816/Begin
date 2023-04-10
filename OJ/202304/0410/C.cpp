#include <bits/stdc++.h>
using namespace std;
class Date {
 private:
  int year, month, day;

 public:
  Date(){};
  Date(int y, int m, int d) : year(y), month(m), day(d){};
  int getYear() { return year; }
  int getMonth() { return month; }
  int getDay() { return day; }
  void print() { cout << year << "年" << month << "月" << day << "日 "; };
};
class VIP {
 private:
  int id;
  Date birth;

 public:
  VIP(int id, Date date) : id(id), birth(date) {}
  double Discount(Date &today) {
    if (birth.getMonth() == today.getMonth() &&
        birth.getDay() == today.getDay())
      return 0.5;
    else
      return 0.95;
  }
};
int main() {
  int t, y, m, d, id;
  cin >> y >> m >> d >> t;
  Date today(y, m, d);
  while (t--) {
    cin >> id >> y >> m >> d;
    Date date(y, m, d);
    VIP jerry(id, date);
    double money;
    cin >> money;
    cout << id << "'s consumption is " << int(money * jerry.Discount(today))
         << endl;
  }
  return 0;
}