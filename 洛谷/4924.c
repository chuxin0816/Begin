#include <stdio.h>
int array[500][500], array2[500][500];
void spin0(int x, int y, int r) {
  for (int j = x - r; j <= x + r; j++) {
    for (int k = y - r; k <= y + r; k++) array2[j][k] = array[j][k];
  }
  int x1 = x + r, y1 = y - r;
  for (int j = x - r; j <= x + r; j++) {
    for (int k = y - r; k <= y + r; k++) {
      array[j][k] = array2[x1][y1];
      x1--;
    }
    y1++, x1 = x + r;
  }
}
void spin1(int x, int y, int r) {
  for (int j = x - r; j <= x + r; j++) {
    for (int k = y - r; k <= y + r; k++) array2[j][k] = array[j][k];
  }
  int x1 = x - r, y1 = y + r;
  for (int j = x - r; j <= x + r; j++) {
    for (int k = y - r; k <= y + r; k++) {
      array[j][k] = array2[x1][y1];
      x1++;
    }
    x1 = x - r, y1--;
  }
}
int main() {
  int n, m, x, y, r, z, j, k, i = 1;
  scanf("%i %i", &n, &m);
  for (j = 1; j <= n; j++) {
    for (k = 1; k <= n; k++) array[j][k] = i++;
  }
  for (j = 1; j <= n; j++) {
    for (k = 1; k <= n; k++) array2[j][k] = array[j][k];
  }
  for (i = 0; i < m; i++) {
    scanf("%i %i %i %i", &x, &y, &r, &z);
    if (z == 0)
      spin0(x, y, r);
    else
      spin1(x, y, r);
  }
  for (j = 1; j <= n; j++) {
    for (k = 1; k <= n; k++) printf("%i ", array[j][k]);
    printf("\n");
  }
  return 0;
}