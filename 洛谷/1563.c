#include <stdio.h>
int main() {
  int n, m, array[100000], a, s, i, j;
  char ans[100000][11];
  scanf("%i %i", &n, &m);
  for (i = 0; i < n; i++) scanf("%i %s", &array[i], ans[i]);
  i = 0;
  for (j = 0; j < m; j++) {
    scanf("%i %i", &a, &s);
    if (array[i] == 0) {
      if (a == 0)
        i -= s;
      else
        i += s;
    } else {
      if (a == 0)
        i += s;
      else
        i -= s;
    }
    if (i < 0) i += n;
    if (i >= n) i -= n;
  }
  printf("%s", ans[i]);
}