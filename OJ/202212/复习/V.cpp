#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    string ans;
    int array[18], num18;
    cin >> ans;
    ans.push_back('0');
    ans.insert(6, "19");
    for (int i = 0; i < 17; i++) {
      array[i] = ans[i] - '0';
    }
    num18 = (array[0] * 7 + array[1] * 9 + array[2] * 10 + array[3] * 5 +
             array[4] * 8 + array[5] * 4 + array[6] * 2 + array[7] * 1 +
             array[8] * 6 + array[9] * 3 + array[10] * 7 + array[11] * 9 +
             array[12] * 10 + array[13] * 5 + array[14] * 8 + array[15] * 4 +
             array[16] * 2) %
            11;
    if (num18 == 0)
      ans[17] = '1';
    else if (num18 == 1)
      ans[17] = '0';
    else if (num18 == 2)
      ans[17] = 'X';
    else if (num18 == 3)
      ans[17] = '9';
    else if (num18 == 4)
      ans[17] = '8';
    else if (num18 == 5)
      ans[17] = '7';
    else if (num18 == 6)
      ans[17] = '6';
    else if (num18 == 7)
      ans[17] = '5';
    else if (num18 == 8)
      ans[17] = '4';
    else if (num18 == 9)
      ans[17] = '3';
    else if (num18 == 10)
      ans[17] = '2';
    cout << ans << endl;
  }
  return 0;
}