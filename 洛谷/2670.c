#include <stdio.h>
int main() {
  int m, n, j, k, i;
  scanf("%i %i", &n, &m);
  char ans[101][101];
  for (j = 0; j < n; j++) {
    scanf("%s", ans[j]);
  }
  for (j = 0; j < n; j++) {
    for (k = 0; k < m; k++) {
      if (ans[j][k] == '*')
        printf("*");
      else {
        i = 0;
        if (ans[j - 1][k] == '*') i++;
        if (ans[j - 1][k - 1] == '*') i++;
        if (ans[j - 1][k + 1] == '*') i++;
        if (ans[j][k - 1] == '*') i++;
        if (ans[j][k + 1] == '*') i++;
        if (ans[j + 1][k - 1] == '*') i++;
        if (ans[j + 1][k] == '*') i++;
        if (ans[j + 1][k + 1] == '*') i++;
        printf("%i", i);
      }
    }
    printf("\n");
  }
  return 0;
}