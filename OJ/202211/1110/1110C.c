#include <stdio.h>
int main() {
  int a = 1, b = 1, N, n = 1, i;
  scanf("%i", &N);
  for (i = 1; n <= N;) {
    a = 1, b = i;
    if (b == 1) {
      n++, i++;
      if (n > N) break;
    } else {
      n++;
      if (n > N)
        break;
      else {
        while (b != 1) {
          a += 1, b -= 1, n++;
          if (n > N) break;
        }
        i++;
      }
    }
  }
  printf("%i/%i", a, b);
  return 0;
}