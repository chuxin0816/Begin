#include <bits/stdc++.h>
using namespace std;
class Animal {
 public:
  string name;
  int age;
  Animal(string name, int age) : name(name), age(age) {}
  virtual void Speak() = 0;
  virtual ~Animal() {}
};
class Tiger : public Animal {
 public:
  Tiger(string name, int age) : Animal(name, age) {}
  void Speak() override { cout << "AOOO"; }
};
class Dog : public Animal {
 public:
  Dog(string name, int age) : Animal(name, age) {}
  void Speak() override { cout << "WangWang"; }
};
class Duck : public Animal {
 public:
  Duck(string name, int age) : Animal(name, age) {}
  void Speak() override { cout << "GAGA"; }
};
class Pig : public Animal {
 public:
  Pig(string name, int age) : Animal(name, age) {}
  void Speak() override { cout << "HENGHENG"; }
};
int main() {
  int n;
  cin >> n;
  while (n--) {
    string type, name;
    int age;
    cin >> type >> name >> age;
    Animal* animal;
    if (type == "Tiger") {
      animal = new Tiger(name, age);
    } else if (type == "Dog") {
      animal = new Dog(name, age);
    } else if (type == "Duck") {
      animal = new Duck(name, age);
    } else if (type == "Pig") {
      animal = new Pig(name, age);
    } else {
      cout << "There is no " << type << " in our Zoo.\n";
      continue;
    }
    cout << "Hello,I am " << animal->name << ',';
    animal->Speak();
    cout << ".\n";
    delete animal;
  }
  return 0;
}