#include <stdio.h>
int main() {
  int n, l, r, sum = 0;
  scanf("%i", &n);
  int ans[n];
  for (int i = 0; i < n; i++) scanf("%i", &ans[i]);
  scanf("%i %i", &l, &r);
  for (int i = 0; i < n; i++) {
    if (i + 1 >= l && i + 1 <= r) sum += ans[i];
  }
  printf("%i", sum);
}