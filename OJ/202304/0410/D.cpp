#include <bits/stdc++.h>
using namespace std;
class CBook {
 private:
  string index, name;
  int total, loanable;

 public:
  CBook() {}
  CBook(string index, string name, int total, int loanable)
      : index(index), name(name), total(total), loanable(loanable) {}
  string getName() { return name; }
  void print() {
    cout << index << ' ' << name << ' ' << total << ' ' << loanable << endl;
  }
  void load() {
    if (loanable) {
      loanable -= 1;
      cout << name << " 索取号: " << index << endl;
    } else {
      cout << name << " 该书已全部借出\n";
    }
  }
  int getLoad() { return loanable; }
};
CBook books[10010];
int main() {
  int n, m, Total = 0, Last = 0;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    string index, name;
    int total, loanable;
    cin >> index >> name >> total >> loanable;
    Total += total;
    CBook temp(index, name, total, loanable);
    books[i] = temp;
  }
  cin >> m;
  while (m--) {
    string name;
    cin >> name;
    for (int i = 0; i < n; ++i)
      if (name == books[i].getName()) books[i].load();
  }
  cout << endl;
  for (int i = 0; i < n; ++i) {
    books[i].print();
    Last += books[i].getLoad();
  }
  cout << "借出图书: " << Total - Last << "本  剩余馆藏图书: " << Last
       << "本\n";
  return 0;
}