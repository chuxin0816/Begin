#include <stdio.h>
#include <string.h>
int main() {
  char s[1000];
  int a[1000] = {0}, b, i, l, jinwei = 0;
  scanf("%s %i", s, &b);
  l = strlen(s);
  for (i = 0; i < l; i++) a[i] = s[l - 1 - i] - '0';
  for (i = 0; i < l; i++) {
    a[i] = a[i] * b + jinwei;
    jinwei = a[i] / 10;
    a[i] %= 10;
  }
  if (jinwei != 0) {
    a[l] = jinwei;
    l++;
  }
  while (a[l - 1] >= 10) {
    a[l] = a[l - 1] / 10;
    a[l] %= 10;
    l++;
  }
  while (a[l - 1] == 0 && l > 1) l--;
  for (i = l - 1; i >= 0; i--) printf("%i", a[i]);
  return 0;
}