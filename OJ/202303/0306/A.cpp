#include <iostream>
using namespace std;
void search(int *num, int n, int *nmax, int *nmaxindex) {
  nmax = nmaxindex = num;
  for (int i = 1; i < n; ++i) {
    if (*(num + i) > *nmax) {
      nmaxindex = nmax = num + i;
    }
  }
  cout << *nmax << ' ' << nmaxindex - num << endl;
}
void input(int *num, int n) {
  for (int i = 0; i < n; ++i) {
    cin >> num[i];
  }
}
int main() {
  int num[10000];
  int t, n, *nmax = nullptr, *nmaxindex = nullptr;
  cin >> t;
  while (t--) {
    cin >> n;
    input(num, n);
    search(num, n, nmax, nmaxindex);
  }
  return 0;
}