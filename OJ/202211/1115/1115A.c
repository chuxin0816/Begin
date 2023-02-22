#include <stdio.h>
int main() {
  int a, n, sum = 0, a1 = 0;
  scanf("%i\n%i", &a, &n);
  for (int i = 0; i < n; i++) {
    a1 = a + a1 * 10;
    sum += a1;
  }
  printf("%i", sum);
  return 0;
}