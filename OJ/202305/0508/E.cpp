#include <bits/stdc++.h>
using namespace std;
class Furniture {
 public:
  int weight;
};
class Bed : public Furniture {
 public:
  void Sleep() { cout << "Sleeping...\n"; }
};
class Sofa : public Furniture {
 public:
  void WatchTV() { cout << "Watching TV.\n"; }
};
class SleeperSofa : public Bed, public Sofa {
 public:
  void FoldOut() { cout << "Fold out the sofa.\n"; }
};
int main() {
  string name;
  while (cin >> name) {
    if (name == "Bed") {
      Bed b;
      b.Sleep();

    } else if (name == "Sofa") {
      Sofa s;
      s.WatchTV();

    } else if (name == "SleeperSofa") {
      SleeperSofa ss;
      ss.FoldOut();
    }
  }
  return 0;
}