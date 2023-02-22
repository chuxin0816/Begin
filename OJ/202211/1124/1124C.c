#include <stdio.h>
int main() {
  int t, n, sum = 0, j, k;
  scanf("%i", &t);
  for (int i = 0; i < t; i++) {
    scanf("%i", &n);
    int array[n][n];
    sum = 0;
    for (j = 0; j < n; j++) {
      for (k = 0; k < n; k++) scanf("%i", &array[j][k]);
    }
    for (j = 0; j < n; j++) sum += array[j][j];
    printf("%i\n", sum);
  }
  return 0;
}