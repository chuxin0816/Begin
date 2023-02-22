#include <stdio.h>
int main() {
  int t, n, j, a, b;
  scanf("%i", &t);
  for (int i = 0; i < t; i++) {
    scanf("%i", &n);
    for (j = 0; j < (n - 1) / 2; j++) {
      for (a = 0; a < j; a++) printf(" ");
      for (b = 0; b < (n - 2 * j); b++) printf("*");
      printf("\n");
    }
    for (a = 0; a < j; a++) printf(" ");
    printf("*");
    printf("\n");
    for (j = 0; j < (n - 1) / 2; j++) {
      for (a = 0; a < (n - 1) / 2 - j - 1; a++) printf(" ");
      for (b = 0; b < 3+2*j; b++) printf("*");
      printf("\n");
    }
    printf("\n");
  }
}
