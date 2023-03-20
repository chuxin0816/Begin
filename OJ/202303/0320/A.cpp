#include <bits/stdc++.h>
using namespace std;
class student {
 private:
  string name, xuehao, xueyuan, zuanye, xingbie, zhuzhi, dianhua;

 public:
  void get() {
    cin >> name >> xuehao >> xueyuan >> zuanye >> xingbie >> zhuzhi >> dianhua;
  }
  void print() {
    cout << name << ' ' << xuehao << ' ' << xueyuan << ' ' << zuanye << ' '
         << xingbie << ' ' << zhuzhi << ' ' << dianhua << endl;
  }
};
student stu[10010];
int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    stu[i].get();
    stu[i].print();
  }
  return 0;
}