#include <bits/stdc++.h>
using namespace std;
class body_statue {
 private:
  string name;
  double height, weight, yaowei;

 public:
  void set() { cin >> name >> height >> weight >> yaowei; }
  void print() {
    int BMI = weight / (height * height) + 0.5;
    double BFR = (yaowei * 0.74 - (weight * 0.082 + 34.89)) / weight;
    cout << name << "'s BMI: " << BMI << "--BFR: " << fixed << setprecision(2)
         << BFR << endl;
  }
};
body_statue body[10010];
int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    body[i].set();
    body[i].print();
  }
  return 0;
}