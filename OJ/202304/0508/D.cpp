#include <bits/stdc++.h>
using namespace std;
class Counter {
 protected:
  int value;

 public:
  Counter(int val) : value(val) {}
  virtual void increment() { ++value; }
};
class Cycle_counter : public Counter {
 private:
  int max_value, min_value;

 public:
  int carry;
  Cycle_counter(int val, int max = 60, int min = 0)
      : Counter(val), max_value(max), min_value(min) {
    carry = 0;
  }
  void increment() override {
    ++value;
    if (value == max_value) {
      value = min_value;
      ++carry;
    }
  }
  int get() { return value; }
};
class CClock {
 private:
  Cycle_counter hour, minute, second;

 public:
  CClock(int h, int m, int s) : hour(h, 24), minute(m), second(s) {}
  void time(int s) {
    while (s--) {
      second.increment();
    }
    while (second.carry--) {
      minute.increment();
    }
    while (minute.carry--) {
      hour.increment();
    }
  }
  void print() {
    cout << hour.get() << ":" << minute.get() << ":" << second.get() << endl;
  }
};
int main() {
  int t;
  cin >> t;
  while (t--) {
    int h, m, s, passed_second;
    cin >> h >> m >> s >> passed_second;
    CClock c(h, m, s);
    c.time(passed_second);
    c.print();
  }

  return 0;
}