#include <bits/stdc++.h>
using namespace std;
class member_card {
 public:
  member_card(int m_id) : m_id(m_id) {}
  int m_id, m_score = 0;
};
class credit_card {
 public:
  credit_card(int c_id, string name, int max_money)
      : c_id(c_id), max_money(max_money), name(name) {}
  int c_id, max_money, c_score = 0;
  string name;
  float money = 0;
  virtual void spend(float m) {
    if (m + money > max_money) {
      return;
    }
    c_score += m;
    money += m;
  }
  void refund(float m) {
    c_score -= (int)m;
    money -= m;
  }
};
class union_card : public member_card, public credit_card {
 public:
  union_card(int m_id, int c_id, string name, int max_money)
      : member_card(m_id), credit_card(c_id, name, max_money) {}
  void spend(float m) override {
    if (m + money > max_money) {
      return;
    }
    m_score += (int)m;
    c_score += (int)m;
    money += m;
  }
  void exchange(float m) {
    c_score -= (int)m;
    m_score += (int)m / 2;
  }
};
int main() {
  int m_id, c_id, max_money, n;
  string name;
  cin >> m_id >> c_id >> name >> max_money >> n;
  union_card card(m_id, c_id, name, max_money);
  while (n--) {
    char op;
    float m;
    cin >> op >> m;
    if (op == 'o') {
      card.spend(m);
    } else if (op == 'c') {
      card.credit_card::spend(m);
    } else if (op == 'q') {
      card.refund(m);
    } else if (op == 't') {
      card.exchange(m);
    }
  }
  cout << card.m_id << ' ' << card.m_score << "\n"
       << card.c_id << ' ' << card.name << ' ' << card.money << ' '
       << card.c_score << endl;
  return 0;
}