#include <bits/stdc++.h>
using namespace std;
class CDate {
 public:
  void print();
  void getWeekofDay();
  void set(int y, int m, int d) { year = y, month = m, day = d; }

 private:
  int month;
  int day;
  int year;
  int week;
};
void CDate::print() {
  cout << month << '/' << day << '/' << year << ", ";
  switch (week) {
    case 1:
      cout << "Monday" << endl;
      break;
    case 2:
      cout << "Tuesday" << endl;
      break;
    case 3:
      cout << "Wednesday" << endl;
      break;
    case 4:
      cout << "Thursday" << endl;
      break;
    case 5:
      cout << "Friday" << endl;
      break;
    case 6:
      cout << "Saturday" << endl;
      break;
    case 7:
      cout << "Sunday" << endl;
      break;
    default:
      break;
  }
}
void CDate::getWeekofDay() {
  if (month == 1 || month == 2) {
    month += 12;
    year -= 1;
  }
  week = (day + 2 * month + 3 * (month + 1) / 5 + year + year / 4 - year / 100 +
          year / 400) %
             7 +
         1;

  if (month > 12) {
    month -= 12;
    year += 1;
  }
}
int main() {
  int t, y, m, d;
  cin >> t;
  while (t--) {
    cin >> y >> m >> d;
    CDate cd;
    cd.set(y, m, d);
    cd.getWeekofDay();
    cd.print();
  }
  return 0;
}