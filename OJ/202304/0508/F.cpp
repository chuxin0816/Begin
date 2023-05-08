#include <bits/stdc++.h>
using namespace std;
class Player {
 public:
  string name;
  int height, weight;
  Player(string name, int height, int weight)
      : name(name), height(height), weight(weight) {}
  virtual void display() {
    cout << "Player:\nname:" << name << "\nheight:" << height
         << "\nweight:" << weight << endl
         << endl;
  }
};
class MVP : virtual public Player {
 public:
  int year;
  MVP(string name, int height, int weight, int year)
      : Player(name, height, weight), year(year) {}
  void display() override {
    cout << "MVP:\nname:" << name << "\nheight:" << height
         << "\nweight:" << weight << "\nreward:win the MVP reward in " << year
         << endl
         << endl;
  }
};
class DPOY : virtual public Player {
 public:
  int year;
  DPOY(string name, int height, int weight, int year)
      : Player(name, height, weight), year(year) {}
  void display() override {
    cout << "DPOY:\nname:" << name << "\nheight:" << height
         << "\nweight:" << weight << "\nreward:win the DPOY reward in " << year
         << endl
         << endl;
  }
};
class HallOfFame : public MVP, public DPOY {
 public:
  HallOfFame(string name, int height, int weight, int year1, int year2)
      : Player(name, height, weight),
        MVP(name, height, weight, year1),
        DPOY(name, height, weight, year2) {}
  void display() override {
    cout << "Hall of fame:\nname:" << name << "\nheight:" << height
         << "\nweight:" << weight << "\nreward1:win the MVP reward in "
         << MVP::year << "\nreward2:win the DPOY reward in " << DPOY::year
         << endl;
  }
};
int main() {
  string name;
  int height, weight, y1, y2;
  cin >> name >> height >> weight >> y1 >> y2;
  HallOfFame h(name, height, weight, y1, y2);
  h.Player::display();
  h.MVP::display();
  h.DPOY::display();
  h.display();
  return 0;
}