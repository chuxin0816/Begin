#include <bits/stdc++.h>
using namespace std;
void MaxLenWord(char s[]) {
  int max = 0, count = 0, i, j, key = 0;
  char temp[1000];
  for (i = 0; i <= strlen(s); i++) {
    if (s[i] != ' ' && s[i] != '\0')
      count++;
    else {
      if (count >= max) {
        max = count;
      }
      count = 0;
    }
  }
  for (i = 0; i <= strlen(s); i++) {
    if (s[i] != ' ' && s[i] != '\0')
      count++;
    else {
      if (count == max) {
        for (j = i - max; j < i; j++) temp[j - i + max] = s[j];
        temp[j - i + max] = '\0';
        if (key == 0) {
          cout << temp;
          key++;
        } else
          cout << " " << temp;
      }
      count = 0;
    }
  }
  cout << endl;
}
int main() {
  int t;
  cin >> t;
  char s[1000];
  while (t--) {
    cin.ignore();
    cin.getline(s, 1000);
    MaxLenWord(s);
  }
  return 0;
}