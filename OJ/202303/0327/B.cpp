#include <bits/stdc++.h>
using namespace std;
class Tree {
 public:
  Tree();  // 构造函数
  Tree(int age);
  void grow(int years);  // 对数龄ages加上years
  void age();            // 显示数龄ages的值
 private:
  int ages;  // 树龄
};
Tree::Tree() : ages(1) {}
Tree::Tree(int age) : ages(age) {}
void Tree::grow(int years) { ages += years; }
void Tree::age() { cout << ages << endl; }
int main() {
  int a, b, c;
  cin >> a >> b >> c;
  Tree t1;
  t1.grow(a);
  t1.age();
  Tree t2(b);
  t2.grow(c);
  t2.age();
  return 0;
}