#include <stdio.h>
int main() {
  int t, l, k, sum = 0;
  scanf("%i", &t);
  for (int i = 0; i < t; i++) {
    scanf("%i %i", &l, &k);
    int ans[l];
    for (int j = 0; j < l; j++) scanf("%i", &ans[j]);
    for (int j = 0; j < l; j++) {
      if (ans[j] == k) {
        sum++;
        printf("%i ", j + 1);
        break;
      }
    }
      if (sum == 0) printf("-1\n");
  }
  return 0;
}