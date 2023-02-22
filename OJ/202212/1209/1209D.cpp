#include <bits/stdc++.h>
using namespace std;
void nixushuchu(char ans[], int lenth) {
  char temp[10000];
  for (int i = 0; i < lenth; i++) {
    temp[i] = ans[lenth - 1 - i];
  }
  cout << temp << endl;
}
int main() {
  int n;
  cin >> n;
  char ans[10000];
  cin.ignore();
  cin.getline(ans,10000);
  nixushuchu(ans,n);
  return 0;
}