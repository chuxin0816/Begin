#include <bits/stdc++.h>

#include <memory>
using namespace std;
class Matrix {
 public:
  int a[1010][1010];
  int n, m;
  Matrix(int n = 0, int m = 0) : n(n), m(m) { memset(a, 0, sizeof(a)); }
  void operator+(const Matrix &x) {
    cout << "Add:\n";
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cout << a[i][j] + x.a[i][j] << ' ';
      }
      puts("");
    }
  }
  void operator-(const Matrix &x) {
    cout << "Minus:\n";
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cout << a[i][j] - x.a[i][j] << ' ';
      }
      puts("");
    }
  }
};
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    Matrix a(n, m), b(n, m);
    for (int i = 0; i < n; i++)
      for (int j = 0; j < m; j++) cin >> a.a[i][j];
    for (int i = 0; i < n; i++)
      for (int j = 0; j < m; j++) cin >> b.a[i][j];
    a + b;
    a - b;
    puts("-----------------");
  }
  return 0;
}