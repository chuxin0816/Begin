#include <math.h>
#include <stdio.h>
int main() {
  int n;
  float a, b, c, d, j, k;
  scanf("%i", &n);
  scanf("%f%f", &a, &b);
  j = b / a;
  for (int i = 0; i < n - 1; i++) {
    scanf("%f%f", &c, &d);
    k = d / c;
    if (j - k > 0.05)
      printf("worse\n");
    else if (k - j > 0.05)
      printf("better\n");
    else
      printf("same\n");
  }
  return 0;
}