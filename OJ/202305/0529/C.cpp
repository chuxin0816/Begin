#include <bits/stdc++.h>
using namespace std;
class Student {
 public:
  string name;
  int year, month, day;

  Student(string name = "", int year = 0, int month = 0, int day = 0)
      : name(name), year(year), month(month), day(day) {}
  int operator-(const Student &x) {
    tm t1{0, 0, 0, day, month - 1, year - 1900},
        t2{0, 0, 0, x.day, x.month - 1, x.year - 1900};
    time_t time1 = mktime(&t1), time2 = mktime(&t2);
    return difftime(time1, time2) / (24 * 60 * 60);
  }
};
Student students[10010];
int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    string name;
    int year, month, day;
    cin >> name >> year >> month >> day;
    students[i] = {name, year, month, day};
  }
  sort(students, students + n, [](Student a, Student b) {
    return (a.year < b.year) || (a.year == b.year && a.month < b.month) ||
           (a.year == b.year && a.month == b.month && a.day < b.day);
  });
  cout << students[0].name << "和" << students[n - 1].name << "年龄相差最大，为"
       << students[n - 1] - students[0] << "天。\n";
  return 0;
}