#include <bits/stdc++.h>
using namespace std;
struct date {
  int year, month, day;
  bool operator<(const date& a) {
    if (year < a.year)
      return true;
    else if (year > a.year)
      return false;
    else {
      if (month < a.month)
        return true;
      else if (month > a.month)
        return false;
      else {
        if (day < a.day)
          return true;
        else
          return false;
      }
    }
  }
};
bool cmp(date a, date b) { return a < b; }
date students[10010];
int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> students[i].year >> students[i].month >> students[i].day;
  }
  sort(students, students + n, cmp);
  cout << students[1].year << '-' << students[1].month << '-' << students[1].day
       << endl;
  return 0;
}