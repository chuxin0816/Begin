#include <stdio.h>
#include <string.h>
int main() {
  char s[5000];
  int a[5000] = {0}, c[5000] = {0}, i, l1, l2;
  long long b, yu = 0;
  scanf("%s\n%lli", s, &b);
  l1 = strlen(s);
  for (i = 0; i < l1; i++) a[i] = s[i] - '0';
  for (i = 0; i < l1; i++) {
    c[i] = (yu * 10 + a[i]) / b;
    yu = (yu * 10 + a[i]) % b;
  }
  l2 = 0;
  while (c[l2] == 0 && l2 < l1 - 1) l2++;
  for (i = l2; i < l1; i++) printf("%i", c[i]);
  return 0;
}