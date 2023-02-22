#include <stdio.h>
int main() {
  int t, n, flag = 0, max = 0;
  scanf("%i", &t);
  for (int i = 0; i < t; i++) {
    scanf("%i", &n);
    int ans[n];
    for (int j = 0; j < n; j++) scanf("%i", &ans[j]);
    for (int j = 0; j < n; j++) {
      if (ans[j] % 3 == 0) flag++;
    }
    if (flag == 0)
      printf("-1");
    else {
      for (int j = 0; j < n; j++) {
        if (ans[j] % 3 == 0) {
          printf("%i", ans[j]);
          max++;
          if (max != flag) printf(" ");
        }
      }
    }
    flag = 0, max = 0;
    printf("\n");
    for (int j = 0; j < n; j++) {
      if (ans[j] % 3 == 1) {
        flag++;
      }
    }
    if (flag == 0)
      printf("-1");
    else {
      for (int j = 0; j < n; j++) {
        if (ans[j] % 3 == 1) {
          printf("%i", ans[j]);
          max++;
          if (max != flag) printf(" ");
        }
      }
    }
    flag = 0, max = 0;
    printf("\n");
    for (int j = 0; j < n; j++) {
      if (ans[j] % 3 == 2) {
        flag++;
      }
    }
    if (flag == 0)
      printf("-1");
    else {
      for (int j = 0; j < n; j++) {
        if (ans[j] % 3 == 2) {
          printf("%i", ans[j]);
          max++;
          if (max != flag) printf(" ");
        }
      }
    }
    printf("\n");
  }
  return 0;
}