#include <bits/stdc++.h>
using namespace std;
int substr(char str1[], char str2[], int index) {
  if (index > strlen(str1))
    return 0;
  else {
    size_t i;
    for (i = index; i < strlen(str1); i++) str2[i - index] = str1[i];
    str2[i-index] = '\0';
    return 1;
  }
}
int main() {
  char str1[1000];
  int n, index;
  cin >> n;
  while (n--) {
    // cin.ignore();
    getchar();
    cin.getline(str1, 1000);
    cin >> index;
    char str2[1000];
    if (substr(str1, str2, index) == 0)
      cout << "IndexError" << endl;
    else
      cout << str2 << endl;
  }
  return 0;
}