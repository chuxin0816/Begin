#include <stdio.h>
int main() {
  int t, n;
  scanf("%i", &t);
  for (int i = 0; i < t; i++) {
    scanf("%i", &n);
    int ans[n];
    for (int j = 0; j < n; j++) scanf("%i", &ans[j]);
    for (int k = 0; k < n - 1; k++) {
      for (int j = 0; j < n - 1 - k; j++) {
        if (ans[j] > ans[j + 1]) {
          int temp = ans[j];
          ans[j] = ans[j + 1];
          ans[j + 1] = temp;
        }
      }
      for (int m = 0; m < n-1; m++) printf("%i ", ans[m]);
      printf("%i\n",ans[n-1]);
    }
  }
  return 0;
}