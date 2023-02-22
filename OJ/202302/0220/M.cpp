#include <bits/stdc++.h>
using namespace std;
int substr(char str1[], char str2[], int index) {
  int len = strlen(str1);
  if (index >= len || index < 0) return 0;
  for (int i = index; i < len; ++i) str2[i - index] = str1[i];
  str2[len - index] = '\0';
  return 1;
}
int main() {
  int n;
  cin >> n;
  while (n--) {
    cin.ignore();
    char str1[10010], str2[10010];
    int index;
    cin.getline(str1, 10010);
    cin >> index;
    if (substr(str1, str2, index))
      cout << str2 << endl;
    else
      cout << "IndexError\n";
  }
  return 0;
}