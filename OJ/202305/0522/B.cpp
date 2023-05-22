#include <bits/stdc++.h>
using namespace std;
class Vehicle {
 protected:
  string no;  // 编号

 public:
  Vehicle(string n) : no(n) {}
  virtual void display() = 0;  // 应收费用
  virtual ~Vehicle() {}
};
class Car : public Vehicle {
 public:
  int num, weight;
  Car(string n, int num, int weight) : Vehicle(n), num(num), weight(weight) {}
  void display() override { cout << no << ' ' << num * 8 + weight * 2 << endl; }
};
class Truck : public Vehicle {
 public:
  int weight;
  Truck(string n, int weight) : Vehicle(n), weight(weight) {}
  void display() override { cout << no << ' ' << weight * 5 << endl; }
};
class Bus : public Vehicle {
 public:
  int num;
  Bus(string n, int num) : Vehicle(n), num(num) {}
  void display() override { cout << no << ' ' << num * 3 << endl; }
};
int main() {
  int n;
  cin >> n;
  while (n--) {
    int type;
    Vehicle* pv;
    cin >> type;
    switch (type) {
      case 1: {
        string no;
        int num, weight;
        cin >> no >> num >> weight;
        pv = new Car(no, num, weight);
        break;
      }
      case 2: {
        string no;
        int weight;
        cin >> no >> weight;
        pv = new Truck(no, weight);
        break;
      }
      case 3: {
        string no;
        int num;
        cin >> no >> num;
        pv = new Bus(no, num);
        break;
      }
    }
    pv->display();
    delete pv;
  }
  return 0;
}