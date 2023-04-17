#include <bits/stdc++.h>
using namespace std;
class CTime;
class CDate {
 private:
  int year, month, day;

 public:
  CDate(int y, int m, int d) : year(y), month(m), day(d) {}
  friend void Display(CDate &date, CTime &time);
};
class CTime {
 private:
  int hour, minute, second;

 public:
  CTime(int h, int m, int s) : hour(h), minute(m), second(s) {}
  friend void Display(CDate &date, CTime &time);
};
void Display(CDate &date, CTime &time) {
  cout << date.year << '-';
  if (date.month < 10) cout << '0';
  cout << date.month << '-';
  if (date.day < 10) cout << '0';
  cout << date.day << ' ';
  if (time.hour < 10) cout << '0';
  cout << time.hour << ':';
  if (time.minute < 10) cout << '0';
  cout << time.minute << ':';
  if (time.second < 10) cout << '0';
  cout << time.second << endl;
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    int year, month, day, hour, min, second;
    cin >> year >> month >> day >> hour >> min >> second;
    CDate date(year, month, day);
    CTime time(hour, min, second);
    Display(date, time);
  }
  return 0;
}