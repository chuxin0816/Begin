#include <bits/stdc++.h>
using namespace std;
class Node2D {
 public:
  Node2D(string location) : location(location) {}
  string location;
};
class Body : virtual public Node2D {
 public:
  Body(string location, int maxHealth, int defense)
      : Node2D(location),
        maxHealth(maxHealth),
        health(maxHealth),
        defense(defense) {}
  int maxHealth, health, defense;
};
class Weapon : virtual public Node2D {
 public:
  Weapon(string location, string w_name, int damage)
      : Node2D(location), w_name(w_name), damage(damage) {}
  string w_name;
  int damage;
};
class Player : public Body, public Weapon {
 public:
  Player(string location, int maxHealth, int defense, string w_name, int damage,
         string name)
      : Node2D(location),
        Body(location, maxHealth, defense),
        Weapon(location, w_name, damage),
        name(name) {}
  string name;
  void attack(Player &p2) {
    cout << name << " deal " << damage - p2.defense << " damage to " << p2.name
         << '\n';
    p2.health -= damage - p2.defense;
    if (p2.health > 0)
      cout << p2.name << " still have " << p2.health << " health\n\n";
    else
      cout << name << " defeated " << p2.name << " by " << w_name << " in "
           << location << endl;
  }
};
int main() {
  string location, name1, name2, w_name1, w_name2;
  int MaxHealth1, MaxHealth2, defense1, defense2, damage1, damage2;
  cin >> location >> name1 >> MaxHealth1 >> defense1 >> w_name1 >> damage1 >>
      name2 >> MaxHealth2 >> defense2 >> w_name2 >> damage2;
  Player p1(location, MaxHealth1, defense1, w_name1, damage1, name1);
  Player p2(location, MaxHealth2, defense2, w_name2, damage2, name2);
  while (1) {
    p1.attack(p2);
    if (p2.health <= 0) break;
    p2.attack(p1);
    if (p1.health <= 0) break;
  }
  return 0;
}