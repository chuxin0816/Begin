#include <stdio.h>

int main() {
  int max1, max2, i, a, t;
  scanf("%d", &t);
  for (i = 0; i < t; i++) {
    scanf("%i", &a);
    if (i == 0)
      max2 = a;
    else if (i == 1) {
      if (a > max2) {
        max1 = a;
      } else if (a <= max2) {
        max1 = max2;
        max2 = a;
      }
    } else {
      if (a > max1) {
        max2 = max1;
        max1 = a;
      } else if (a > max2 && a <= max1)
        max2 = a;
    }
  }
  printf("%d %d\n", max1, max2);
  return 0;
}