#include <bits/stdc++.h>
using namespace std;
int day;
class dianpu {
 private:
  int type;
  string name;
  int danjia;
  bool statue;

 public:
  void set() { cin >> type >> name >> danjia >> statue; }
  void print() {
    switch (type) {
      case 1:
        cout << "BF";
        break;
      case 2:
        cout << "CD";
        break;
      case 3:
        cout << "VCD";
        break;
      case 4:
        cout << "DVD";
        break;
    }
    cout << '[' << name << ']';
    if (!statue)
      cout << "not rented\n";
    else
      cout << "rented\n";
  }
  void compute() {
    if (!statue)
      cout << "No rental\n";
    else {
      cout << "Rental: " << day * danjia << endl;
    }
  }
};
dianpu store[10010];
int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    store[i].set();
    cin >> day;
    store[i].print();
    if (day) store[i].compute();
  }
  return 0;
}