#include <bits/stdc++.h>
using namespace std;
struct shijuan {
  int xuehao;
  char ans[4][1004];
};
int chaoxi(shijuan* a, shijuan* b) {
  for (int i = 1; i <= 3; ++i) {
    double cnt = 0;
    double len = min(strlen(a->ans[i]), strlen(b->ans[i]));
    for (int j = 0; j < len; ++j) {
      if (a->ans[i][j] == b->ans[i][j]) cnt++;
    }
    if (cnt/len >=   0.9) return i;
  }
  return 0;
}
shijuan students[10010];
int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; ++i)
    cin >> students[i].xuehao >> students[i].ans[1] >> students[i].ans[2] >>
        students[i].ans[3];
  for (int i = 0; i < n; ++i) {
    for (int j = i + 1; j < n; ++j) {
      if (chaoxi(&students[i], &students[j]))
        cout << students[i].xuehao << ' ' << students[j].xuehao << ' '
             << chaoxi(&students[i], &students[j]) << endl;
    }
  }
  return 0;
}