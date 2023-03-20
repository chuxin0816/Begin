#include <bits/stdc++.h>
using namespace std;
int pingfang(int i) { return i * i; }
float sqrtx(float i) { return sqrt(i); }
void daxie(char *str) {
  int len = strlen(str);
  for (int i = 0; i < len; ++i) {
    if (str[i] >= 'a' && str[i] <= 'z') str[i] = str[i] - 32;
  }
}
int main() {
  int t;
  cin >> t;
  char x;
  char str[10005];
  int (*I)(int) = pingfang;
  float (*F)(float) = sqrtx;
  void (*S)(char *) = daxie;
  while (t--) {
    cin >> x;
    switch (x) {
      case 'I':
        int a;
        cin >> a;
        cout << I(a) << endl;
        break;
      case 'F':
        float b;
        cin >> b;
        cout << F(b) << endl;
        break;
      case 'S':
        cin >> str;
        S(str);
        cout << str << endl;
        break;
      default:
        break;
    }
  }
  return 0;
}