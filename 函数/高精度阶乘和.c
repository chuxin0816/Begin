#include <stdio.h>
int main() {
  int n, m, a[102] = {0}, b[102] = {0}, i;
  scanf("%i", &n);
  a[0] = b[0] = 1;
  for (i = 2; i <= n; i++) {
    for (m = 0; m <= 100; m++) a[m] *= i;
    for (m = 0; m <= 100; m++) {
      if (a[m] >= 10) {
        a[m + 1] += a[m] / 10;
        a[m] %= 10;
      }
    }
    for (m = 0; m <= 100; m++) {
      b[m] += a[m];
      if (b[m] >= 10) {
        b[m + 1] += b[m] / 10;
        b[m] %= 10;
      }
    }
  }
  while (b[m] == 0 && m > 0) m--;
  for (; m >= 0; m--) printf("%i", b[m]);
}