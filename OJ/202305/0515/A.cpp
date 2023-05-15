#include <bits/stdc++.h>
using namespace std;
class CVehicle {
 public:
  CVehicle(int max_speed, int speed, int weight)
      : max_speed(max_speed), speed(speed), weight(weight) {}
  int max_speed, speed, weight;
  virtual void display() {
    cout << "Vehicle:\n"
         << "max_speed:" << max_speed << "\nspeed:" << speed
         << "\nweight:" << weight << "\n\n";
  }
};
class CBicycle : virtual public CVehicle {
 public:
  CBicycle(int max_speed, int speed, int weight, int height)
      : CVehicle(max_speed, speed, weight), height(height) {}
  int height;
  void display() override {
    cout << "Bicycle:\n"
         << "max_speed:" << max_speed << "\nspeed:" << speed
         << "\nweight:" << weight << "\nheight:" << height << "\n\n";
  }
};
class CMotocar : virtual public CVehicle {
 public:
  CMotocar(int max_speed, int speed, int weight, int seat_num)
      : CVehicle(max_speed, speed, weight), seat_num(seat_num) {}
  int seat_num;
  void display() override {
    cout << "Motocar:\n"
         << "max_speed:" << max_speed << "\nspeed:" << speed
         << "\nweight:" << weight << "\nseat_num:" << seat_num << "\n\n";
  }
};
class CMotocycle : public CBicycle, public CMotocar {
 public:
  CMotocycle(int max_speed, int speed, int weight, int height, int seat_num)
      : CVehicle(max_speed, speed, weight),
        CBicycle(max_speed, speed, weight, height),
        CMotocar(max_speed, speed, weight, seat_num) {}
  void display() override {
    cout << "Motocycle:\n"
         << "max_speed:" << max_speed << "\nspeed:" << speed
         << "\nweight:" << weight << "\nheight:" << height
         << "\nseat_num:" << seat_num << "\n";
  }
};
int main() {
  int max_speed, speed, weight, height, seat_num;
  cin >> max_speed >> speed >> weight >> height >> seat_num;
  CMotocycle c(max_speed, speed, weight, height, seat_num);
  c.CVehicle::display();
  c.CBicycle::display();
  c.CMotocar::display();
  c.display();
  return 0;
}