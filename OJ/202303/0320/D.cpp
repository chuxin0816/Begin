#include <bits/stdc++.h>
using namespace std;
class CAccount {
 private:
  long long account;
  string name;
  float balance;

 public:
  void set() { cin >> account >> name >> balance; }
  void deposit(int a) {
    balance += a;
    cout << "saving ok!\n";
  }
  void withdraw(int a) {
    if (balance < a)
      cout << "sorry! over limit!\n";
    else {
      balance -= a;
      cout << "withdraw ok!\n";
    }
  }
  void check() { cout << name << "'s balance is " << balance << endl; }
};
CAccount acc[2];
int main() {
  int a;
  for (int i = 0; i < 2; ++i) {
    acc[i].set();
    acc[i].check();
    cin >> a;
    acc[i].deposit(a);
    acc[i].check();
    cin >> a;
    acc[i].withdraw(a);
    acc[i].check();
  }
  return 0;
}