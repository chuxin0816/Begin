#include <bits/stdc++.h>
using namespace std;
class Account {
 public:
  friend void Update(Account& a);
  Account(string accno, string name, float balance)
      : _accno(accno), _accname(name), _balance(balance) {
    count++;
  }
  ~Account() {}
  void Deposit(float amount) { _balance += amount; }
  void Withdraw(float amount) {
    _balance -= amount;
    cout << _balance << endl;
  }
  float GetBalance() { return _balance; }
  void Show() {
    cout << _accno << ' ' << _accname << ' ' << _balance << ' ';
    Update(*this);
    cout << _balance << ' ';
  }
  static int GetCount() { return count; }
  static float GetInterestRate() { return InterestRate; }
  static void SetInterestRate(float rate) { InterestRate = rate; }

 private:
  static int count;
  static float InterestRate;
  string _accno, _accname;
  float _balance;
};
void Update(Account& a) { a._balance = a._balance * (1 + a.InterestRate); }
int Account::count = 0;
float Account::InterestRate = 0;
int main() {
  Account* accounts[10010];
  float rate;
  cin >> rate;
  Account::SetInterestRate(rate);
  int n, total_balance = 0;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    string accno, accname;
    float balance, dep, with;
    cin >> accno >> accname >> balance >> dep >> with;
    Account temp(accno, accname, balance);
    accounts[i] = &temp;
    accounts[i]->Deposit(dep);
    accounts[i]->Show();
    accounts[i]->Withdraw(with);
    total_balance += accounts[i]->GetBalance();
  }
  cout << total_balance << endl;
  return 0;
}