#include <stdio.h>
int main() {
  int t, x, y, n, day;
  scanf("%i", &t);
  for (int i = 0; i < t; i++) {
    scanf("%i%i%i", &x, &y, &n);
    day = x > y ? x : y;
    while (1) {
      if (day % (x + 1) == 0 && day % (y + 1) == 0) break;
      day++;
    }
    printf("%i", n / day * 36);
  }
}