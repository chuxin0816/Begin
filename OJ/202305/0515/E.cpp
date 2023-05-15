#include <bits/stdc++.h>
using namespace std;
class CPeople {
 public:
  CPeople() {}
  string id;
  string name;
};
class CInternetUser : virtual public CPeople {
 public:
  string password;
  void registerUser(string name, string id, string password) {
    this->name = name;
    this->id = id;
    this->password = password;
  }
  bool login(string id, string password) {
    if (this->id != id || this->password != password) {
      return false;
    }
    return true;
  }
};
class CBankCustomer : virtual public CPeople {
 public:
  CBankCustomer() { balance = 0; }
  double balance;
  void openAccount(string name, string id) {
    this->name = name;
    this->id = id;
    balance = 0;
  }
  virtual bool deposit(double money) {
    balance += money;
    return true;
  }
  virtual bool withdraw(double money) {
    if (balance < money) {
      return false;
    }
    balance -= money;
    return true;
  }
};
class CInternetBankCustomer : public CInternetUser, public CBankCustomer {
 public:
  double yes_balance, profit, w_profit, yes_w_profit, i_balance;
  bool deposit(double money) override {
    if (balance < money) {
      return false;
    }
    i_balance += money;
    balance -= money;
    return true;
  }
  bool withdraw(double money) override {
    if (i_balance < money) {
      return false;
    }
    i_balance -= money;
    balance += money;
    return true;
  }
  CInternetBankCustomer() {
    i_balance = 0;
    yes_balance = 0;
    profit = 0;
    w_profit = 0;
    yes_w_profit = 0;
  }

  void setInterest(double interest) { w_profit = interest / 10000; }
  void calculateProfit() {
    i_balance += yes_balance * yes_w_profit;
    yes_balance = i_balance;
    yes_w_profit = w_profit;
  }
  void print() {
    cout << "Name: " << name << " ID: " << id << endl;
    cout << "Bank balance: " << balance << endl;
    cout << "Internet bank balance: " << i_balance << endl;
  }
};
int main() {
  int t, no_of_days, i;
  string i_xm, i_id, i_mm, b_xm, b_id, ib_id, ib_mm;
  double money, interest;
  char op_code;  // 输入测试案例数t
  cin >> t;
  while (t--) {  // 输入互联网用户注册时的用户名,id,登陆密码
    cin >> i_xm >> i_id >> i_mm;  // 输入银行开户用户名,id
    cin >> b_xm >> b_id;  // 输入互联网用户登陆时的id,登陆密码
    cin >> ib_id >> ib_mm;
    CInternetBankCustomer ib_user;
    ib_user.registerUser(i_xm, i_id, i_mm);
    ib_user.openAccount(b_xm, b_id);
    if (!ib_user.login(
            ib_id,
            ib_mm))  // 互联网用户登陆,若id与密码不符;以及银行开户姓名和id与互联网开户姓名和id不同
    {
      cout << "Password or ID incorrect" << endl;
      continue;
    }  // 输入天数
    cin >> no_of_days;
    for (i = 0; i < no_of_days; i++) {  // 输入操作代码, 金额, 当日万元收益
      cin >> op_code >> money >> interest;
      switch (op_code) {
        case 'S':  // 从银行向互联网金融帐户存入
        case 's':
          if (!ib_user.deposit(money)) {
            cout << "Bank balance not enough" << endl;
            continue;
          }
          break;
        case 'T':  // 从互联网金融转入银行帐户
        case 't':
          if (!ib_user.withdraw(money)) {
            cout << "Internet bank balance not enough" << endl;
            continue;
          }
          break;
        case 'D':  // 直接向银行帐户存款
        case 'd':
          ib_user.CBankCustomer::deposit(money);
          break;
        case 'W':  // 直接从银行帐户取款
        case 'w':
          if (!ib_user.CBankCustomer::withdraw(money)) {
            cout << "Bank balance not enough" << endl;
            continue;
          }
          break;
        default:
          cout << "Illegal input" << endl;
          continue;
      }
      ib_user.setInterest(interest);
      ib_user.calculateProfit();  // 输出用户名,id//输出银行余额
                                  // //输出互联网金融账户余额
      ib_user.print();
      cout << endl;
    }
  }
  return 0;
}
