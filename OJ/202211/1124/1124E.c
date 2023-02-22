#include <stdio.h>
int main() {
  int t;
  scanf("%i", &t);
  for (int i = 0; i < t; i++) {
    char ans[10000];
    scanf("%s", ans);
    for (int j = 0; ans[j] != '\0'; j++) {
      if (ans[j] >= 'a' && ans[j] <= 'z')
        ans[j] -= 32;
      else if (ans[j] >= 'A' && ans[j] <= 'Z')
        ans[j] += 32;
    }
    printf("%s\n", ans);
  }
  return 0;
}