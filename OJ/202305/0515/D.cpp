#include <bits/stdc++.h>
using namespace std;
class Date {
 protected:
  int year, month, day;

 public:
  Date(int year, int month, int day) : year(year), month(month), day(day) {}
};
class Time {
 protected:
  int hour, minute, second;

 public:
  Time(int hour, int minute, int second)
      : hour(hour), minute(minute), second(second) {}
};
class Schedule : protected Date, protected Time {
 public:
  Schedule(int id = 0, int year = 0, int month = 0, int day = 0, int hour = 0,
           int minute = 0, int second = 0)
      : Date(year, month, day), Time(hour, minute, second), id(id) {}
  int id;
  friend bool before(const Schedule& s1, const Schedule& s2);
  void print() {
    cout << "The urgent schedule is No." << id << ": " << year << '/' << setw(2)
         << setfill('0') << month << '/' << setw(2) << setfill('0') << day
         << ' ' << setw(2) << setfill('0') << hour << ':' << setw(2)
         << setfill('0') << minute << ':' << setw(2) << setfill('0') << second
         << endl;
  }
};
bool before(const Schedule& s1, const Schedule& s2) {
  if (s1.year != s2.year) return s1.year < s2.year;
  if (s1.month != s2.month) return s1.month < s2.month;
  if (s1.day != s2.day) return s1.day < s2.day;
  if (s1.hour != s2.hour) return s1.hour < s2.hour;
  if (s1.minute != s2.minute) return s1.minute < s2.minute;
  if (s1.second != s2.second) return s1.second < s2.second;
  return s1.id < s2.id;
}
Schedule s[10010];
int main() {
  int id, year, month, day, hour, minute, second, cnt = 0;
  while (cin >> id) {
    if (id == 0) break;
    cin >> year >> month >> day >> hour >> minute >> second;
    s[cnt++] = Schedule(id, year, month, day, hour, minute, second);
  }
  sort(s, s + cnt, before);
  s[0].print();
  return 0;
}