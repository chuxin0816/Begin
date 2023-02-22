#include <bits/stdc++.h>
using namespace std;
int same_set(int a[], int b[], int lena, int lenb) {
  for (int i = 0; i < lena; i++) {
    for (int j = 0; j < lenb; j++)
      if (a[i] == b[j]) return 1;
  }
  return 0;
}
int main() {
  int lena, lenb;
  cin >> lena;
  int a[lena];
  for (int i = 0; i < lena; i++) cin >> a[i];
  cin >> lenb;
  int b[lenb];
  for (int i = 0; i < lenb; i++) cin >> lenb;
  if (same_set(a, b, lena, lenb) == 1)
    cout << "1\n";
  else
    cout << "0\n";
  return 0;
}