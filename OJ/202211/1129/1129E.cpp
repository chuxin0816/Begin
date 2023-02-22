// 部份正确
#include <bits/stdc++.h>
using namespace std;
int main() {
  string ans(""), a;
  while (1) {
    cin >> a;
    if (a == "INSERT_STR") {
      int index;
      string tem;
      cin >> index >> tem;
      ans.insert(index - 1, tem);
      cout << ans << endl;
    } else if (a == "DELETE_CHAR") {
      char c;
      cin >> c;
      int l = ans.size();
      for (int i = 0; i < l; i++) {
        if (ans[i] == c) {
          ans.erase(i, 1);
        }
      }
      cout << ans << endl;
    } else if (a == "DELETE_RANGE") {
      int left, right;
      cin >> left >> right;
      if (left <= right) {
        ans.erase(left - 1, right - left + 1);
      }
      cout << ans << endl;
    } else if (a == "INSERT_REVERSE_STR") {
      string b = ans;
      reverse(b.begin(), b.end());
      ans += b;
      cout << ans << endl;
    } else if (a == "REVERSE_STR") {
      reverse(ans.begin(), ans.end());
      int l = ans.size();
      for (int i = 0; i < l; i++) {
        if (ans[i] == '\0') {
          for (int j = i; j < l - 1; j++) ans[j] = ans[j + 1];
          i--, l--;
          ans[l] = '\0';
        }
      }
      cout << ans << endl;
    } else if (a == "COUNT_VOWEL") {
      int l = ans.size();
      int sum = 0;
      for (int i = 0; i < l; i++) {
        if (ans[i] == 'a' || ans[i] == 'e' || ans[i] == 'i' || ans[i] == 'o' ||
            ans[i] == 'u' || ans[i] == 'A' || ans[i] == 'E' || ans[i] == 'I' ||
            ans[i] == 'O' || ans[i] == 'U')
          sum++;
      }
      cout << sum << endl;
    } else if (a == "OVER")
      break;
  }
  return 0;
}