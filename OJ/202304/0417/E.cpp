#include <bits/stdc++.h>
using namespace std;
class Time {
 private:
  int hour, minute, second;

 public:
  Time(int h, int m, int s) : hour(h), minute(m), second(s) {}
  int GetHour() { return hour; }
  int GetMinute() { return minute; }
  int GetSecond() { return second; }
  friend void TimeDiff(Time *t1, Time *t2);
};
void TimeDiff(Time *t1, Time *t2) {
  int time1 = t1->hour * 3600 + t1->minute * 60 + t1->second;
  int time2 = t2->hour * 3600 + t2->minute * 60 + t2->second;
  cout << t1->hour << "时" << t1->minute << "分" << t1->second << "秒--"
       << t2->hour << "时" << t2->minute << "分" << t2->second << "秒时间差为"
       << abs(time1 - time2) << "秒\n";
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    int h, m, s;
    cin >> h >> m >> s;
    Time t1(h, m, s);
    cin >> h >> m >> s;
    Time t2(h, m, s);
    TimeDiff(&t1, &t2);
  }
  return 0;
}