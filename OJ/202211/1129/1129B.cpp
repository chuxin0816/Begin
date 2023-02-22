#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, array1[6][6], array2[6][6], array3[6][6], sum, j, k, m;
  string a;
  cin >> n;
  for (j = 0; j < n; j++) {
    for (k = 0; k < n; k++) cin >> array1[j][k];
  }
  while (1) {
    cin >> a;
    if (a == "TRANSLATE") {
      for (j = 0; j < n; j++) {
        for (k = 0; k < n; k++) array2[j][k] = array1[k][j];
      }
      for (j = 0; j < n; j++) {
        for (k = 0; k < n; k++) {
          array1[j][k] = array2[j][k];
        }
      }
      for (j = 0; j < n; j++) {
        for (k = 0; k < n - 1; k++) {
          cout << array1[j][k] << " ";
        }
        cout << array1[j][k] << endl;
      }
    } else if (a == "ADD") {
      for (j = 0; j < n; j++) {
        for (k = 0; k < n; k++) {
          cin >> array2[j][k];
          array1[j][k] += array2[j][k];
        }
      }
      for (j = 0; j < n; j++) {
        for (k = 0; k < n - 1; k++) {
          cout << array1[j][k] << " ";
        }
        cout << array1[j][k] << endl;
      }
    } else if (a == "MULTIPLY") {
      for (j = 0; j < n; j++) {
        for (k = 0; k < n; k++) cin >> array2[j][k];
      }
      memset(array3, 0, sizeof(array3));
      for (j = 0; j < n; j++) {
        for (k = 0; k < n; k++) {
          for (m = 0; m < n; m++) {
            array3[j][k] += array1[j][m] * array2[m][k];
          }
        }
      }
      for (j = 0; j < n; j++) {
        for (k = 0; k < n; k++) array1[j][k] = array3[j][k];
      }
      for (j = 0; j < n; j++) {
        for (k = 0; k < n - 1; k++) {
          cout << array1[j][k] << " ";
        }
        cout << array1[j][k] << endl;
      }
    } else if (a == "SUM") {
      sum = 0;
      for (j = 0; j < n; j++) sum += array1[j][j] + array1[j][n - 1 - j];
      cout << sum << endl;
    } else if (a == "OVER")
      break;
  }
  return 0;
}