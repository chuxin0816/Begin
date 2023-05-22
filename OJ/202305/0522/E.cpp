#include <bits/stdc++.h>
using namespace std;
class BaseAccount {
 protected:
  string name, account;
  double balance;

 public:
  BaseAccount(string name, string account, double balance)
      : name(name), account(account), balance(balance) {}
  void deposit(double money) { balance += money; }
  virtual void withdraw(double money) {
    if (balance < money)
      cout << "insufficient\n";
    else
      balance -= money;
  }
  virtual void display() {
    cout << name << ' ' << account << " Balance:" << balance << endl;
  }
  virtual ~BaseAccount() {}
};
class BasePlus : public BaseAccount {
 protected:
  double limit, limit_sum;

 public:
  BasePlus(string name, string account, double balance)
      : BaseAccount(name, account, balance), limit(5000), limit_sum(0) {}
  void withdraw(double money) override {
    if (money > balance + limit - limit_sum)
      cout << "insufficient\n";
    else if (money > balance) {
      limit_sum += money - balance;
      balance = 0;
    } else
      balance -= money;
  }
  void display() override {
    cout << name << ' ' << account << " Balance:" << balance
         << " limit:" << limit - limit_sum << endl;
  }
};
int main() {
  int n;
  cin >> n;
  while (n--) {
    string name, account;
    double balance;
    cin >> name >> account >> balance;
    BaseAccount *p;
    if (account.substr(0, 2) == "BA")
      p = new BaseAccount(name, account, balance);
    else
      p = new BasePlus(name, account, balance);
    double d1, w1, d2, w2;
    cin >> d1 >> w1 >> d2 >> w2;
    p->deposit(d1);
    p->withdraw(w1);
    p->deposit(d2);
    p->withdraw(w2);
    p->display();
    delete p;
  }
  return 0;
}