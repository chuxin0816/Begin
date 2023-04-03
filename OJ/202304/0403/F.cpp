// 头文件和类声明
#include <iostream>
using namespace std;

class MyDate {
 private:
  int year;
  int month;
  int day;

 public:
  MyDate();  // 无参构造，默认日期2022-4-1，输出相关构造信息
  MyDate(int ty, int tm, int td);  // 有参构造，根据参数初始化，输出相关构造信息
  ~MyDate();
  bool Before(MyDate &rd);
  void print() { cout << year << "-" << month << "-" << day; }
};
// 下面填写类实现和主函数
/********** Write your code here! **********/
MyDate::MyDate() : year(2022), month(4), day(1) {
  cout << "Date 2022-4-1 default constructed\n";
}
MyDate::MyDate(int ty, int tm, int td) : year(ty), month(tm), day(td) {
  cout << "Date ";
  print();
  cout << " constructed\n";
}
MyDate::~MyDate() {
  cout << "Date ";
  print();
  cout << " destructed\n";
}
bool MyDate::Before(MyDate &rd) {
  if (year < 2022)
    return true;
  else if (year == 2022) {
    if (month < 4)
      return true;
    else
      return false;
  } else
    return false;
}
int main() {
  int t;
  cin >> t;
  MyDate rd;
  while (t--) {
    int year, month, day;
    cin >> year >> month >> day;
    MyDate date(year, month, day);
    if (date.Before(rd)) {
      date.print();
      cout << " before ";
      rd.print();
    } else {
      rd.print();
      cout << " before ";
      date.print();
    }
    cout << endl;
  }
  return 0;
}

/*******************************************/
// main end