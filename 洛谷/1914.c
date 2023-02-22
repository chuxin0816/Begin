#include <stdio.h>
int main() {
  int n, i;
  scanf("%i", &n);
  n %= 26;
  char mm[100];
  scanf("%s", mm);
  for (i = 0; mm[i] != '\0'; i++) {
    if (mm[i] + n > 'z') mm[i] = mm[i] - 26;
    mm[i] = mm[i] + n;
  }
  mm[i] = '\0';
  printf("%s", mm);
  return 0;
}