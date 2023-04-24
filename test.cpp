#include <bits/stdc++.h>
using namespace std;
class A{
  public:
  static int a;
};
int A::a = 1;
int main(){
  A tem;
  cout << tem.a << endl;
}