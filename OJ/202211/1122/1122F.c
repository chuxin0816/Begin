#include <stdio.h>
int main() {
  int min, t, n, temp, m;
  scanf("%i", &t);
  for (int i = 0; i < t; i++) {
    scanf("%i", &n);
    int ans[n];
    for (int j = 0; j < n; j++) scanf("%i", &ans[j]);
    for (int j = 0; j < n - 1; j++) {
      min = j;
      for (int k = j; k < n; k++) {
        if (ans[k] < ans[min]) min = k;
      }
      temp = ans[min];
      ans[min] = ans[j];
      ans[j] = temp;
      for (m = 0; m < n - 1; m++) printf("%i ", ans[m]);
      printf("%i\n", ans[m]);
    }
  }
  return 0;
}