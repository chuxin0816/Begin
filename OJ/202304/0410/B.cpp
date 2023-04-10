#include <bits/stdc++.h>
using namespace std;
string ys = "10X98765432";
int mul[] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
class CDate {
 private:
  int year, month, day;

 public:
  CDate(){};
  CDate(int y, int m, int d) : year(y), month(m), day(d){};

  bool check() {
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
      switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
          if (day > 31) return false;
          break;
        case 2:
          if (day > 29) return false;
          break;
        default:
          if (day > 30) return false;
          break;
      }
      return true;
    } else {
      switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
          if (day > 31) return false;
          break;
        case 2:
          if (day > 28) return false;
          break;
        default:
          if (day > 30) return false;
          break;
      }
      return true;
    }
  };  // 检验日期是否合法

  int getYear() { return year; }
  int getMonth() { return month; }
  int getDay() { return day; }
  void print() { cout << year << "年" << month << "月" << day << "日 "; };
};

class CStudentID

{
 private:
  string p_id, p_name;  // 身份证号码，姓名

  CDate birthday;  // 出生日期

  int registered;  // 登记否

 public:
  CStudentID(string p_idval, string p_nameval, CDate &day)
      : p_id(p_idval), p_name(p_nameval), birthday(day) {
    bool hefa = 1;
    if (!birthday.check()) hefa = 0;
    if (((p_id[6] - '0') * 10 + p_id[7] - '0' + 1900) != birthday.getYear() ||
        ((p_id[8] - '0') * 10 + p_id[9] - '0') != birthday.getMonth() ||
        ((p_id[10] - '0') * 10 + p_id[11] - '0') != birthday.getDay())
      hefa = 0;
    int len = p_id.size();
    if (len != 15 && len != 18) hefa = 0;
    for (int i = 0; i < len - 1; ++i) {
      if (!isdigit(p_id[i])) hefa = 0;
    }
    cout << p_name << ' ';
    if (!hefa) {
      registered = 0;
      cout << "illegal id\n";
    } else {
      registered = 1;
      birthday.print();
      cout << p_id << endl;
    }

  }  // 构造函数，若:日期非法;日期与id日期不符;id有非法字符;id不是15位或18位;id是18位但检验码不对,则输出"illegal
     // id"并置registered=0。否则输出对象的属性并置registered=1.

  CStudentID(const CStudentID &r) {
    p_name = r.p_name, p_id = r.p_id;
    birthday = r.birthday;
    if (p_id.size() == 15) {
      int val = 0;
      p_id.insert(6, "19");
      for (int i = 0; i < 17; i++) {
        val += (p_id[i] - '0') * mul[i];
      }
      val %= 11;
      p_id.push_back(ys[val]);
      cout << p_name << ' ';
      birthday.print();
      cout << p_id << endl;
    }
  }  // 拷贝构造函数，若r.p_id为15位则升到18位(加年份的19和校验位)

  bool checked() { return registered; }

  ~CStudentID() {}
};
int main() {
  int t, y, m, d;
  string name, id;
  cin >> t;
  while (t--) {
    cin >> y >> m >> d >> name >> id;
    CDate date(y, m, d);
    CStudentID s(id, name, date);
    if (s.checked()) CStudentID s_copy(s);
  }
  return 0;
}