#include <bits/stdc++.h>
using namespace std;
class Account {
 private:
  int id, phone, password, money;

 public:
  Account(int id, int phone, int password, int money)
      : id(id), phone(phone), password(password), money(money) {}
  Account() {}
  int getPhone() { return phone; }
  void withdraw(int money) {
    cout << "卡号" << id << "--余额";
    if (money > this->money) {
      cout << "不足\n";
      return;
    } else {
      this->money -= money;
      cout << this->money << endl;
    }
  }
  int getPassword() { return password; }
};
Account accounts[10010];
int main() {
  int n, k, id, phone, password, money;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> id >> phone >> password >> money;
    Account temp(id, phone, password, money);
    accounts[i] = temp;
  }
  cin >> k;
  while (k--) {
    cin >> phone >> password >> money;
    bool not_exist = 1;
    for (int i = 0; i < n; ++i)
      if (phone == accounts[i].getPhone()) {
        not_exist = 0;
        if (password != accounts[i].getPassword()) {
          cout << "密码错误\n";
          break;
        }
        accounts[i].withdraw(money);
      }
    if (not_exist) cout << "手机号不存在\n";
  }
  return 0;
}