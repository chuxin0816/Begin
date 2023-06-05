#include <bits/stdc++.h>
using namespace std;
class str {
  char *p;

public:
  str();
  str(char *s) {
    p = new char[strlen(s) + 1];
    strcpy(p, s);
  }
  ~str() { delete[] p; }
  friend bool operator>(str &a, str &b) { return strcmp(a.p, b.p) > 0; }
  friend bool operator<(str &a, str &b) { return strcmp(a.p, b.p) < 0; }
  friend bool operator==(str &a, str &b) { return strcmp(a.p, b.p) == 0; }
  void show() { cout << p; }
};
int main() {
  char s[10010];
  fgets(s, 10010, stdin);
   s[strcspn(s, "\n")] = '\0';
  str a(s);
  fgets(s, 10010, stdin);
   s[strcspn(s, "\n")] = '\0';
  str b(s);
  fgets(s, 10010, stdin);
  s[strcspn(s, "\n")] = '\0';
  str c(s);
  if (a > b) {
    a.show();
    cout<<endl;
  } else {
    b.show();
    cout<<endl;
  }
  if (a < c) {
    a.show();
    cout<<endl;
  } else {
    c.show();
    cout<<endl;
  }
  if (b == c) {
    b.show();
  } else {
    c.show();
  }
  return 0;
}