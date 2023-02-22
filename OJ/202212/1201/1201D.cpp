#include <bits/stdc++.h>
using namespace std;
long _fibo(long n) {
  int first = 0, second = 1, fibo;
  if (n == 0)
    fibo = first;
  else if (n == 1)
    fibo = second;
  else {
    for (int i = 2; i <= n; i++) {
      fibo = first + second;
      first = second;
      second = fibo;
    }
  }
  return fibo;
}
int main() {
  int n;
  cin >> n;
  cout << _fibo(n) << endl;
  return 0;
}