#include <bits/stdc++.h>
using namespace std;
void _reverse(char a[]) {
  int l = strlen(a);
  char b[l];
  for (int i = 0; i < l; i++) {
    b[i] = a[l - i - 1];
  }
  for (int i = 0; i < l; i++) {
    a[i] = b[i];
  }
}
int main() {
  char ans[100000];
  cin >> ans;
  _reverse(ans);
  cout << ans << endl;
  return 0;
}