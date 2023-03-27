#include <bits/stdc++.h>
using namespace std;
class Date {
  int year, month, day;

 public:
  Date();
  Date(int y, int m, int d);
  int getYear();
  int getMonth();
  int getDay();
  void setDate(int y, int m, int d);
  void print();
  void addOneDay();
};
Date::Date() : year(1900), month(1), day(1) {}
Date::Date(int y, int m, int d) : year(y), month(m), day(d) {}
int Date::getYear() { return year; }
int Date::getMonth() { return month; }
int Date::getDay() { return day; }
void Date::setDate(int y, int m, int d) { year = y, month = m, day = d; }
void Date::print() {
  cout << year << '/';
  if (month < 10) cout << '0';
  cout << month << '/';
  if (day < 10) cout << '0';
  cout << day << endl;
}
void Date::addOneDay() {
  if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
    switch (month) {
      case 2:
        if (day == 29) {
          day = 1;
          if (month == 12) {
            month = 1;
            year++;
          } else
            month++;
        } else
          day++;
        break;
      case 1:
      case 3:
      case 5:
      case 7:
      case 8:
      case 10:
      case 12:
        if (day == 31) {
          day = 1;
          if (month == 12) {
            month = 1;
            year++;
          } else
            month++;
        } else
          day++;
        break;
      default:
        if (day == 30) {
          day = 1;
          if (month == 12) {
            month = 1;
            year++;
          } else
            month++;
        } else
          day++;
        break;
    }
  } else {
    switch (month) {
      case 2:
        if (day == 28) {
          day = 1;
          if (month == 12) {
            month = 1;
            year++;
          } else
            month++;
        } else
          day++;
        break;
      case 1:
      case 3:
      case 5:
      case 7:
      case 8:
      case 10:
      case 12:
        if (day == 31) {
          day = 1;
          if (month == 12) {
            month = 1;
            year++;
          } else
            month++;
        } else
          day++;
        break;
      default:
        if (day == 30) {
          day = 1;
          if (month == 12) {
            month = 1;
            year++;
          } else
            month++;
        } else
          day++;
        break;
    }
  }
}

int main() {
  int t, cnt = 0, y, m, d;
  cin >> t;
  while (t--) {
    cnt++;
    cin >> y >> m >> d;
    if (cnt % 2) {
      Date date1(y, m, d);
      cout << "Today is ";
      date1.print();
      date1.addOneDay();
      cout << "Tomorrow is ";
      date1.print();
    } else {
      Date date1;
      date1.setDate(y, m, d);
      cout << "Today is ";
      date1.print();
      date1.addOneDay();
      cout << "Tomorrow is ";
      date1.print();
    }
  }
  return 0;
}