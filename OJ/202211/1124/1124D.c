#include <stdio.h>
int main() {
  int t, n, m, j, k;
  scanf("%i", &t);
  for (int i = 0; i < t; i++) {
    scanf("%i %i", &n, &m);
    int array[n][m];
    for (j = 0; j < n; j++) {
      for (k = 0; k < m; k++) scanf("%i", &array[j][k]);
    }
    int array2[m][n];
    for (j = 0; j < m; j++) {
      for (k = 0; k < n; k++) array2[j][k] = array[k][m - j - 1];
    }
    for (j = 0; j < m; j++) {
      for (k = 0; k < n - 1; k++) {
        printf("%i ", array2[j][k]);
      }
      printf("%i\n", array2[j][k]);
    }
  }
}