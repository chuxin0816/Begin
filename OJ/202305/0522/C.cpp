#include <bits/stdc++.h>
using namespace std;
class Person {
 public:
  string name;
  int age;
  Person(string name, int age) : name(name), age(age) {}
  virtual void display() = 0;
};
class RStudent : public Person {
 public:
  double normalGrade, testGrade, totalGrade;
  RStudent(string name, int age, double normalGrade, double testGrade)
      : Person(name, age), normalGrade(normalGrade), testGrade(testGrade) {
    totalGrade = normalGrade * 0.4 + testGrade * 0.6;
  }
  void display() override {
    cout << name << ' ' << age << ' ';
    if (totalGrade >= 85)
      cout << "A\n";
    else if (totalGrade >= 75)
      cout << "B\n";
    else if (totalGrade >= 65)
      cout << "C\n";
    else if (totalGrade >= 60)
      cout << "D\n";
    else
      cout << "F\n";
  }
};
class SStudent : public Person {
 public:
  double testGrade, totalGrade;
  SStudent(string name, int age, double testGrade)
      : Person(name, age), testGrade(testGrade) {
    totalGrade = testGrade;
  }
  void display() override {
    cout << name << ' ' << age << ' ';
    if (totalGrade >= 85)
      cout << "A\n";
    else if (totalGrade >= 75)
      cout << "B\n";
    else if (totalGrade >= 65)
      cout << "C\n";
    else if (totalGrade >= 60)
      cout << "D\n";
    else
      cout << "F\n";
  }
};
int main() {
  int n;
  cin >> n;
  while (n--) {
    string type, name;
    int age;
    cin >> type;
    if (type == "R") {
      double normalGrade, testGrade;
      cin >> name >> age >> normalGrade >> testGrade;
      RStudent rStudent(name, age, normalGrade, testGrade);
      rStudent.display();
    } else if (type == "S") {
      double testGrade;
      cin >> name >> age >> testGrade;
      SStudent sStudent(name, age, testGrade);
      sStudent.display();
    }
  }
  return 0;
}