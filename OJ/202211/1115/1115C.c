#include <stdio.h>
int main() {
  int a, b, gys, gbs;
  scanf("%i %i", &a, &b);
  for (int i = 1; i < a; i++) {
    if (a % i == 0 && b % i == 0) gys = i;
  }
  int i = b;
  while (1) {
    if (i % a == 0 && i % b == 0) {
      gbs = i;
      break;
    } else
      i++;
  }
  printf("%i %i", gys, gbs);
}