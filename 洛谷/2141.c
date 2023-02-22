#include <stdio.h>
int main() {
  int n, sum = 0, temp = 0;
  scanf("%i", &n);
  int ans[n];
  for (int i = 0; i < n; i++) scanf("%i", &ans[i]);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      for (int k = 0; k < n; k++) {
        if (ans[i] == ans[j] + ans[k] && j != k && ans[i] != temp) {
          temp = ans[i];
          sum++;
        }
      }
    }
  }
  printf("%i", sum);
  return 0;
}