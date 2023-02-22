#include <stdio.h>
#include <string.h>
int main() {
  int p1, p2, p3, n, a, b;
  char ans[100];
  scanf("%i %i %i", &p1, &p2, &p3);
  scanf("%s", ans);
  n = strlen(ans);
  for (int i = 0; i < n; i++) {
    if (ans[i] != '-')
      printf("%c", ans[i]);
    else if (ans[i] == '-' &&
             (i == 0 || i == n || ans[i - 1] == '-' || ans[i + 1] == '-'))
      printf("-");
    else {
      a = ans[i - 1], b = ans[i + 1];
      if (a >= b || (a <= '9' && b >= 'a'))
        printf("-");
      else if (b - a != 1) {
        if (p3 == 1) {
          for (int j = a + 1; j < b; j++) {
            for (int k = 0; k < p2; k++) {
              if (p1 == 1)
                printf("%c", j);
              else if (p1 == 2) {
                if (j >= '0' && j <= '9')
                  printf("%c", j);
                else
                  printf("%c", j - 32);
              } else
                printf("*");
            }
          }
        } else {
          for (int j = b - 1; j > a; j--) {
            for (int k = 0; k < p2; k++) {
              if (p1 == 1)
                printf("%c", j);
              else if (p1 == 2) {
                if (j >= '0' && j <= '9')
                  printf("%c", j);
                else
                  printf("%c", j - 32);
              } else
                printf("*");
            }
          }
        }
      }
    }
  }
  return 0;
}