#include <stdio.h>
#include <string.h>
int main() {
  int n, r, c;
  scanf("%i", &n);
  int ans[n][n];
  memset(ans, 0, sizeof(ans));
  ans[0][n / 2] = 1;
  for (int k = 2; k <= n * n; k++) {
    for (r = 0; r <= n - 1; r++) {
      for (c = 0; c <= n - 1; c++) {
        if (k - 1 == ans[r][c]) {
          if (r == 0 && c != n - 1)
            ans[n - 1][c + 1] = k;
          else if (r != 0 && c == n - 1)
            ans[r - 1][0] = k;
          else if (r == 0 && c == n - 1)
            ans[r + 1][c] = k;
          else {
            if (ans[r - 1][c + 1] == 0)
              ans[r - 1][c + 1] = k;
            else
              ans[r + 1][c] = k;
          }
        }
      }
    }
  }
  for (int a = 0; a <= n - 1; a++) {
    for (int b = 0; b <= n - 1; b++) {
      printf("%i ", ans[a][b]);
    }
    printf("\n");
  }
  return 0;
}