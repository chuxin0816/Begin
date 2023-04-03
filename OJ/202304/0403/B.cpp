#include <iostream>
#include <memory>
using namespace std;

class Date {
 private:
  int year, month, day;

 public:
  Date(int year, int month, int day) : year(year), month(month), day(day) {}

  void print() { cout << year << '.' << month << '.' << day << endl; }
};

class phone {
 private:
  char type;
  string number;
  int status;
  shared_ptr<Date> date;

 public:
  phone(char type, string number, int status, Date date)
      : type(type), number(number), status(status) {
    this->date = make_shared<Date>(date);
    cout << "Construct a new phone " << number << endl;
  }

  phone(const phone &a) {
    cout << "Construct a copy of phone " << a.number << endl;
    number = a.number + 'X';
    date = a.date;
    status = a.status;
    type = 'D';
  }

  void print() {
    cout << "类型=";
    switch (type) {
      case 'A':
        cout << "机构";
        break;
      case 'B':
        cout << "企业";
        break;
      case 'C':
        cout << "个人";
        break;
      case 'D':
        cout << "备份";
        break;
    }
    cout << "||号码=" << number << "||State=";
    switch (status) {
      case 1:
        cout << "在用\n";
        break;
      case 2:
        cout << "未用\n";
        break;
      case 3:
        cout << "停用 ||停机日期=";
        date->print();
        break;
    }
  }

  void stop(Date date) {
    cout << "Stop the phone " << number << endl;
    status = 3;
    this->date = make_shared<Date>(date);
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    char type;
    string number;
    int status, year, month, day;
    cin >> type >> number >> status >> year >> month >> day;
    Date date(year, month, day);
    phone huawei(type, number, status, date);
    huawei.print();
    phone apple(huawei);
    apple.print();
    huawei.stop(date);
    huawei.print();
    cout << "----\n";
  }
  return 0;
}
