#include <stdio.h>
int main() {
  int t, a, b, j, k;
  scanf("%i", &t);
  for (int i = 0; i < t; i++) {
    scanf("%i %i", &a, &b);
    int array[a][b];
    for (j = 0; j < a; j++) {
      for (k = 0; k < b; k++) scanf("%i", &array[j][k]);
    }
    int array2[b][a];
    for (j = 0; j < b; j++) {
      for (k = 0; k < a; k++) array2[j][k] = array[k][j];
    }
    for (j = 0; j < b; j++) {
      for (k = 0; k < a - 1; k++) {
        printf("%i ", array2[j][k]);
      }
      printf("%i\n", array2[j][k]);
    }
  }
  return 0;
}