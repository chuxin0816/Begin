#include <iostream>
#include <ostream>
using namespace std;

class RMB;
ostream &operator<<(ostream &, RMB &);
istream &operator>>(istream &, RMB &);

class RMB {
protected:
  int yuan, jiao, fen;

public:
  RMB(double a = 0.0);
  RMB(int, int, int);
  bool operator>(RMB &);
  friend ostream &operator<<(ostream &, RMB &); // 一行输出，无换行
  friend istream &operator>>(istream &, RMB &);
  friend RMB operator+(RMB &, RMB &);
};
// 完成以下类定义的填空
/********** Write your code here! **********/
RMB::RMB(double a) {
  a += 0.005;
  yuan = (int)a;
  jiao = (int)((a - yuan) * 10);
  fen = (int)((a - yuan - jiao * 0.1) * 100);
}
RMB::RMB(int yuan, int jiao, int fen) : yuan(yuan), jiao(jiao), fen(fen) {}
ostream &operator<<(ostream &os, RMB &r) {
  os << r.yuan << "yuan" << r.jiao << "jiao" << r.fen << "fen";
  return os;
}
bool RMB::operator>(RMB &r) {
  if (yuan > r.yuan)
    return true;
  else if (yuan < r.yuan)
    return false;
  else if (jiao > r.jiao)
    return true;
  else if (jiao < r.jiao)
    return false;
  else if (fen > r.fen)
    return true;
  else
    return false;
}
istream &operator>>(istream &is, RMB &r) {
  is >> r.yuan >> r.jiao >> r.fen;
  return is;
}
RMB operator+(RMB &r1, RMB &r2) {
  RMB r3;
  r3.yuan = r1.yuan + r2.yuan;
  r3.jiao = r1.jiao + r2.jiao;
  r3.fen = r1.fen + r2.fen;
  if (r3.fen >= 10) {
    r3.fen -= 10;
    r3.jiao++;
  }
  if (r3.jiao >= 10) {
    r3.jiao -= 10;
    r3.yuan++;
  }
  return r3;
}
/*******************************************/
// 主函数
int main() {
  int t;
  double val_yuan;
  cin >> t;
  while (t--) {
    cin >> val_yuan; // 输入一个浮点数，例如1.23
    RMB r1(val_yuan); // 例如上一行输入1.23，则生成对象r1是1元2角3分
    RMB r2;
    cin >> r2; // 输入一行三个整数参数，按元、角、分输入

    if (r1 > r2)
      cout << r1 << " > " << r2 << endl;
    else
      cout << r1 << " <= " << r2 << endl;
    RMB r3 = r1 + r2;
    cout << r1 << " + " << r2 << " = " << r3 << endl;
  }
  return 0;
}
