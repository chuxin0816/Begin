#include <iostream>
#include <string>
using namespace std;
int isNumber(char* a) {
  if (*a >= '0' && *a <= '9')
    return 1;
  else
    return 0;
}
int main() {
  int t;
  string a;
  cin >> t;
  while (t--) {
    cin >> a;
    int val = 0;
    bool isvalid = true;
    for (int i = 0; i < a.size(); ++i) {
      if (isNumber(&a[i]))
        val = val * 10 + (a[i] - '0');
      else {
        cout << "-1\n";
        isvalid = false;
        break;
      }
    }
    if (isvalid) cout << val << endl;
  }
}