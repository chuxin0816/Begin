// 头文件和日期类声明
#include <iomanip>
#include <iostream>
using namespace std;

class TDate {
 private:
  int year, month, day;

 public:
  int getYear() { return year; }
  int getMonth() { return month; }
  int getDay() { return day; }
  void set(int y, int m, int d);
  void print();
  void addOneDay();
};

//----在以下区域完成部分成员函数的类外定义----
/********** Write your code here! **********/
void TDate::set(int y, int m, int d) { year = y, month = m, day = d; }
void TDate::print() {
  cout << year;
  if (month < 10) cout << '0';
  cout << month;
  if (day < 10) cout << '0';
  cout << day;
}
void TDate::addOneDay() {
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
/*******************************************/
// 主函数如下
int main() {
  int t, y, m, d;
  cin >> t;
  while (t--) {
    TDate d1;
    cin >> y >> m >> d;
    d1.set(y, m, d);
    cout << "Today-";
    d1.print();
    d1.addOneDay();
    cout << " Tomorrow-";
    d1.print();
    cout << endl;
  }
  return 0;
}
