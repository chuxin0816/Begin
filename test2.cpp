#include <bits/stdc++.h>
using namespace std;

int main() {
  int i, j;
  int m, n;
  cin >> m >> n;
  int cnt = m * n;

  char a[m][n];
  int starti = 0;
  int startj = n - 1;
  int endi = m - 1;
  int endj = 0;
  int it = 0;
  int jt = n - 1;
  int k = 0;
  while (cnt > 0) {
    while (jt > endj && cnt != 0) {
      if (k < 10) {
        a[it][jt] = 48 + k;
      } else if (k >= 10 && k < 36) {
        a[it][jt] = 97 + (k - 10);
      } else {
        a[it][jt] = 65 + (k - 36);
      }
      k++;
      jt--;
      cnt--;
    }
    starti++;
    while (it < endi && cnt != 0) {
      if (k < 10) {
        a[it][jt] = 48 + k;
      } else if (k >= 10 && k < 36) {
        a[it][jt] = 97 + (k - 10);
      } else {
        a[it][jt] = 65 + (k - 36);
      }
      k++;
      it++;
      cnt--;
    }
    endi--;
    while (jt < startj && cnt != 0) {
      if (k < 10) {
        a[it][jt] = 48 + k;
      } else if (k >= 10 && k < 36) {
        a[it][jt] = 97 + (k - 10);
      } else {
        a[it][jt] = 65 + (k - 36);
      }
      k++;
      cnt--;
      jt++;
    }
    endj++;
    while (it > starti && cnt != 0) {
      if (k < 10) {
        a[it][jt] = 48 + k;
      } else if (k >= 10 && k < 36) {
        a[it][jt] = 97 + (k - 10);
      } else {
        a[it][jt] = 65 + (k - 36);
      }
      k++;
      cnt--;
      it--;
    }
    startj--;
    if (cnt == 1) {
      if (k < 10) {
        a[it][jt] = 48 + k;
      } else if (k >= 10 && k < 36) {
        a[it][jt] = 97 + (k - 10);
      } else {
        a[it][jt] = 65 + (k - 36);
      }
      cnt--;
    }
  }
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      if (j == n - 1) {
        cout << a[i][j] << endl;
      } else {
        cout << a[i][j] << " ";
      }
    }
  }
}